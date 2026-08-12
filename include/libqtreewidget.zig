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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    pub fn new() QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` strings: []const []const u8 `
    ///
    pub fn new2(allocator: std.mem.Allocator, strings: []const []const u8) QTreeWidgetItem {
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("QTreeWidgetItem.new2: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |str_item, i|
            strings_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new2(strings_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` treeview: QTreeWidget `
    ///
    pub fn new3(treeview: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        return .{ .ptr = qtc.QTreeWidgetItem_new3(@ptrCast(treeview.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` treeview: QTreeWidget `
    ///
    /// ` strings: []const []const u8 `
    ///
    pub fn new4(allocator: std.mem.Allocator, treeview: anytype, strings: []const []const u8) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("QTreeWidgetItem.new4: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |str_item, i|
            strings_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new4(@ptrCast(treeview.ptr), strings_list) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` treeview: QTreeWidget `
    ///
    /// ` after: QTreeWidgetItem `
    ///
    pub fn new5(treeview: anytype, after: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        comptime _ = @TypeOf(after)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new5(@ptrCast(treeview.ptr), @ptrCast(after.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QTreeWidgetItem `
    ///
    pub fn new6(_parent: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(_parent)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new6(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _parent: QTreeWidgetItem `
    ///
    /// ` strings: []const []const u8 `
    ///
    pub fn new7(allocator: std.mem.Allocator, _parent: anytype, strings: []const []const u8) QTreeWidgetItem {
        comptime _ = @TypeOf(_parent)._is_QTreeWidgetItem;
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("QTreeWidgetItem.new7: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |str_item, i|
            strings_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new7(@ptrCast(_parent.ptr), strings_list) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QTreeWidgetItem `
    ///
    /// ` after: QTreeWidgetItem `
    ///
    pub fn new8(_parent: anytype, after: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(_parent)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(after)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new8(@ptrCast(_parent.ptr), @ptrCast(after.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTreeWidgetItem `
    ///
    pub fn new9(other: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(other)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new9(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new10(typeVal: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_new10(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` strings: []const []const u8 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new11(allocator: std.mem.Allocator, strings: []const []const u8, typeVal: i32) QTreeWidgetItem {
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("QTreeWidgetItem.new11: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |str_item, i|
            strings_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new11(strings_list, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` treeview: QTreeWidget `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new12(treeview: anytype, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        return .{ .ptr = qtc.QTreeWidgetItem_new12(@ptrCast(treeview.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QTreeWidgetItem object in C++ memory
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
    pub fn new13(allocator: std.mem.Allocator, treeview: anytype, strings: []const []const u8, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("QTreeWidgetItem.new13: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |str_item, i|
            strings_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new13(@ptrCast(treeview.ptr), strings_list, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` treeview: QTreeWidget `
    ///
    /// ` after: QTreeWidgetItem `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new14(treeview: anytype, after: anytype, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        comptime _ = @TypeOf(after)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new14(@ptrCast(treeview.ptr), @ptrCast(after.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new15` instead
    ///
    pub const New15 = new15;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QTreeWidgetItem `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new15(_parent: anytype, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(_parent)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new15(@ptrCast(_parent.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new16` instead
    ///
    pub const New16 = new16;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _parent: QTreeWidgetItem `
    ///
    /// ` strings: []const []const u8 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new16(allocator: std.mem.Allocator, _parent: anytype, strings: []const []const u8, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(_parent)._is_QTreeWidgetItem;
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("QTreeWidgetItem.new16: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |str_item, i|
            strings_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new16(@ptrCast(_parent.ptr), strings_list, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new17` instead
    ///
    pub const New17 = new17;

    /// Allocate a new QTreeWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QTreeWidgetItem `
    ///
    /// ` after: QTreeWidgetItem `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new17(_parent: anytype, after: anytype, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(_parent)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(after)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new17(@ptrCast(_parent.ptr), @ptrCast(after.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn clone(self: QTreeWidgetItem) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QTreeWidgetItem, callback: *const fn () callconv(.c) QTreeWidgetItem) void {
        qtc.QTreeWidgetItem_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn superClone(self: QTreeWidgetItem) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `treeWidget` instead
    ///
    pub const TreeWidget = treeWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#treeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn treeWidget(self: QTreeWidgetItem) QTreeWidget {
        return .{ .ptr = qtc.QTreeWidgetItem_TreeWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelected` instead
    ///
    pub const SetSelected = setSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` select: bool `
    ///
    pub fn setSelected(self: QTreeWidgetItem, select: bool) void {
        qtc.QTreeWidgetItem_SetSelected(@ptrCast(self.ptr), select);
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn isSelected(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHidden` instead
    ///
    pub const SetHidden = setHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` hide: bool `
    ///
    pub fn setHidden(self: QTreeWidgetItem, hide: bool) void {
        qtc.QTreeWidgetItem_SetHidden(@ptrCast(self.ptr), hide);
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn isHidden(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setExpanded` instead
    ///
    pub const SetExpanded = setExpanded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` expand: bool `
    ///
    pub fn setExpanded(self: QTreeWidgetItem, expand: bool) void {
        qtc.QTreeWidgetItem_SetExpanded(@ptrCast(self.ptr), expand);
    }

    /// ### DEPRECATED: Use `isExpanded` instead
    ///
    pub const IsExpanded = isExpanded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn isExpanded(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsExpanded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstColumnSpanned` instead
    ///
    pub const SetFirstColumnSpanned = setFirstColumnSpanned;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFirstColumnSpanned)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` span: bool `
    ///
    pub fn setFirstColumnSpanned(self: QTreeWidgetItem, span: bool) void {
        qtc.QTreeWidgetItem_SetFirstColumnSpanned(@ptrCast(self.ptr), span);
    }

    /// ### DEPRECATED: Use `isFirstColumnSpanned` instead
    ///
    pub const IsFirstColumnSpanned = isFirstColumnSpanned;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isFirstColumnSpanned)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn isFirstColumnSpanned(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsFirstColumnSpanned(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QTreeWidgetItem, disabled: bool) void {
        qtc.QTreeWidgetItem_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// ### DEPRECATED: Use `isDisabled` instead
    ///
    pub const IsDisabled = isDisabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn isDisabled(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsDisabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChildIndicatorPolicy` instead
    ///
    pub const SetChildIndicatorPolicy = setChildIndicatorPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setChildIndicatorPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` policy: qtreewidget_enums.ChildIndicatorPolicy `
    ///
    pub fn setChildIndicatorPolicy(self: QTreeWidgetItem, policy: i32) void {
        qtc.QTreeWidgetItem_SetChildIndicatorPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `childIndicatorPolicy` instead
    ///
    pub const ChildIndicatorPolicy = childIndicatorPolicy;

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
    pub fn childIndicatorPolicy(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_ChildIndicatorPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` _flags: flag of qnamespace_enums.ItemFlag `
    ///
    pub fn setFlags(self: QTreeWidgetItem, _flags: i32) void {
        qtc.QTreeWidgetItem_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

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
    pub fn text(self: QTreeWidgetItem, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QTreeWidgetItem_Text(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidgetItem.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QTreeWidgetItem, column: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QTreeWidgetItem_SetText(@ptrCast(self.ptr), @bitCast(column), text_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn icon(self: QTreeWidgetItem, column: i32) QIcon {
        return .{ .ptr = qtc.QTreeWidgetItem_Icon(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QTreeWidgetItem, column: i32, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QTreeWidgetItem_SetIcon(@ptrCast(self.ptr), @bitCast(column), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

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
    pub fn statusTip(self: QTreeWidgetItem, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QTreeWidgetItem_StatusTip(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidgetItem.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QTreeWidgetItem, column: i32, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QTreeWidgetItem_SetStatusTip(@ptrCast(self.ptr), @bitCast(column), statusTip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

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
    pub fn toolTip(self: QTreeWidgetItem, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QTreeWidgetItem_ToolTip(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidgetItem.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QTreeWidgetItem, column: i32, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QTreeWidgetItem_SetToolTip(@ptrCast(self.ptr), @bitCast(column), toolTip_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

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
    pub fn whatsThis(self: QTreeWidgetItem, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QTreeWidgetItem_WhatsThis(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidgetItem.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QTreeWidgetItem, column: i32, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QTreeWidgetItem_SetWhatsThis(@ptrCast(self.ptr), @bitCast(column), whatsThis_str);
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn font(self: QTreeWidgetItem, column: i32) QFont {
        return .{ .ptr = qtc.QTreeWidgetItem_Font(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QTreeWidgetItem, column: i32, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTreeWidgetItem_SetFont(@ptrCast(self.ptr), @bitCast(column), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#textAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn textAlignment(self: QTreeWidgetItem, column: i32) i32 {
        return qtc.QTreeWidgetItem_TextAlignment(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setTextAlignment` instead
    ///
    pub const SetTextAlignment = setTextAlignment;

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
    pub fn setTextAlignment(self: QTreeWidgetItem, column: i32, alignment: i32) void {
        qtc.QTreeWidgetItem_SetTextAlignment(@ptrCast(self.ptr), @bitCast(column), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `setTextAlignment2` instead
    ///
    pub const SetTextAlignment2 = setTextAlignment2;

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
    pub fn setTextAlignment2(self: QTreeWidgetItem, column: i32, alignment: i32) void {
        qtc.QTreeWidgetItem_SetTextAlignment2(@ptrCast(self.ptr), @bitCast(column), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `setTextAlignment3` instead
    ///
    pub const SetTextAlignment3 = setTextAlignment3;

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
    pub fn setTextAlignment3(self: QTreeWidgetItem, column: i32, alignment: i32) void {
        qtc.QTreeWidgetItem_SetTextAlignment3(@ptrCast(self.ptr), @bitCast(column), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn background(self: QTreeWidgetItem, column: i32) QBrush {
        return .{ .ptr = qtc.QTreeWidgetItem_Background(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

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
    pub fn setBackground(self: QTreeWidgetItem, column: i32, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTreeWidgetItem_SetBackground(@ptrCast(self.ptr), @bitCast(column), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn foreground(self: QTreeWidgetItem, column: i32) QBrush {
        return .{ .ptr = qtc.QTreeWidgetItem_Foreground(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

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
    pub fn setForeground(self: QTreeWidgetItem, column: i32, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTreeWidgetItem_SetForeground(@ptrCast(self.ptr), @bitCast(column), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `checkState` instead
    ///
    pub const CheckState = checkState;

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
    pub fn checkState(self: QTreeWidgetItem, column: i32) i32 {
        return qtc.QTreeWidgetItem_CheckState(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setCheckState` instead
    ///
    pub const SetCheckState = setCheckState;

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
    pub fn setCheckState(self: QTreeWidgetItem, column: i32, state: i32) void {
        qtc.QTreeWidgetItem_SetCheckState(@ptrCast(self.ptr), @bitCast(column), @bitCast(state));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn sizeHint(self: QTreeWidgetItem, column: i32) QSize {
        return .{ .ptr = qtc.QTreeWidgetItem_SizeHint(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `setSizeHint` instead
    ///
    pub const SetSizeHint = setSizeHint;

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
    pub fn setSizeHint(self: QTreeWidgetItem, column: i32, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QTreeWidgetItem_SetSizeHint(@ptrCast(self.ptr), @bitCast(column), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

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
    pub fn data(self: QTreeWidgetItem, column: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QTreeWidgetItem_Data(@ptrCast(self.ptr), @bitCast(column), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, i32, i32) callconv(.c) QVariant) void {
        qtc.QTreeWidgetItem_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

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
    pub fn superData(self: QTreeWidgetItem, column: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QTreeWidgetItem_SuperData(@ptrCast(self.ptr), @bitCast(column), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

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
    pub fn setData(self: QTreeWidgetItem, column: i32, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTreeWidgetItem_SetData(@ptrCast(self.ptr), @bitCast(column), @bitCast(role), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

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
    pub fn onSetData(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, i32, i32, QVariant) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

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
    pub fn superSetData(self: QTreeWidgetItem, column: i32, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTreeWidgetItem_SuperSetData(@ptrCast(self.ptr), @bitCast(column), @bitCast(role), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` other: QTreeWidgetItem `
    ///
    pub fn operatorLesser(self: QTreeWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTreeWidgetItem;
        return qtc.QTreeWidgetItem_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onOperatorLesser` instead
    ///
    pub const OnOperatorLesser = onOperatorLesser;

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
    pub fn onOperatorLesser(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, QTreeWidgetItem) callconv(.c) bool) void {
        qtc.QTreeWidgetItem_OnOperatorLesser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOperatorLesser` instead
    ///
    pub const SuperOperatorLesser = superOperatorLesser;

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
    pub fn superOperatorLesser(self: QTreeWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTreeWidgetItem;
        return qtc.QTreeWidgetItem_SuperOperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn read(self: QTreeWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QTreeWidgetItem_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

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
    pub fn onRead(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

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
    pub fn superRead(self: QTreeWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QTreeWidgetItem_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn write(self: QTreeWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QTreeWidgetItem_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

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
    pub fn onWrite(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

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
    pub fn superWrite(self: QTreeWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QTreeWidgetItem_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` other: QTreeWidgetItem `
    ///
    pub fn operatorAssign(self: QTreeWidgetItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTreeWidgetItem;
        qtc.QTreeWidgetItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn parent(self: QTreeWidgetItem) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    pub fn child(self: QTreeWidgetItem, index: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn childCount(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn columnCount(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexOfChild` instead
    ///
    pub const IndexOfChild = indexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` _child: QTreeWidgetItem `
    ///
    pub fn indexOfChild(self: QTreeWidgetItem, _child: anytype) i32 {
        comptime _ = @TypeOf(_child)._is_QTreeWidgetItem;
        return qtc.QTreeWidgetItem_IndexOfChild(@ptrCast(self.ptr), @ptrCast(_child.ptr));
    }

    /// ### DEPRECATED: Use `addChild` instead
    ///
    pub const AddChild = addChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` _child: QTreeWidgetItem `
    ///
    pub fn addChild(self: QTreeWidgetItem, _child: anytype) void {
        comptime _ = @TypeOf(_child)._is_QTreeWidgetItem;
        qtc.QTreeWidgetItem_AddChild(@ptrCast(self.ptr), @ptrCast(_child.ptr));
    }

    /// ### DEPRECATED: Use `insertChild` instead
    ///
    pub const InsertChild = insertChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#insertChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    /// ` _child: QTreeWidgetItem `
    ///
    pub fn insertChild(self: QTreeWidgetItem, index: i32, _child: anytype) void {
        comptime _ = @TypeOf(_child)._is_QTreeWidgetItem;
        qtc.QTreeWidgetItem_InsertChild(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_child.ptr));
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` _child: QTreeWidgetItem `
    ///
    pub fn removeChild(self: QTreeWidgetItem, _child: anytype) void {
        comptime _ = @TypeOf(_child)._is_QTreeWidgetItem;
        qtc.QTreeWidgetItem_RemoveChild(@ptrCast(self.ptr), @ptrCast(_child.ptr));
    }

    /// ### DEPRECATED: Use `takeChild` instead
    ///
    pub const TakeChild = takeChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    pub fn takeChild(self: QTreeWidgetItem, index: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_TakeChild(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `addChildren` instead
    ///
    pub const AddChildren = addChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` children: []QTreeWidgetItem `
    ///
    pub fn addChildren(self: QTreeWidgetItem, children: []QTreeWidgetItem) void {
        const children_list = qtc.libqt_list{
            .len = children.len,
            .data = @ptrCast(children.ptr),
        };
        qtc.QTreeWidgetItem_AddChildren(@ptrCast(self.ptr), children_list);
    }

    /// ### DEPRECATED: Use `insertChildren` instead
    ///
    pub const InsertChildren = insertChildren;

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
    pub fn insertChildren(self: QTreeWidgetItem, index: i32, children: []QTreeWidgetItem) void {
        const children_list = qtc.libqt_list{
            .len = children.len,
            .data = @ptrCast(children.ptr),
        };
        qtc.QTreeWidgetItem_InsertChildren(@ptrCast(self.ptr), @bitCast(index), children_list);
    }

    /// ### DEPRECATED: Use `takeChildren` instead
    ///
    pub const TakeChildren = takeChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn takeChildren(self: QTreeWidgetItem, allocator: std.mem.Allocator) []QTreeWidgetItem {
        const _arr: qtc.libqt_list = qtc.QTreeWidgetItem_TakeChildren(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidgetItem, _arr.len) catch @panic("QTreeWidgetItem.takeChildren: Memory allocation failed");
        const _data_val: [*]QtC.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn type0(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortChildren` instead
    ///
    pub const SortChildren = sortChildren;

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
    pub fn sortChildren(self: QTreeWidgetItem, column: i32, order: i32) void {
        qtc.QTreeWidgetItem_SortChildren(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `emitDataChanged` instead
    ///
    pub const EmitDataChanged = emitDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn emitDataChanged(self: QTreeWidgetItem) void {
        qtc.QTreeWidgetItem_EmitDataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEmitDataChanged` instead
    ///
    pub const OnEmitDataChanged = onEmitDataChanged;

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
    pub fn onEmitDataChanged(self: QTreeWidgetItem, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnEmitDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEmitDataChanged` instead
    ///
    pub const SuperEmitDataChanged = superEmitDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn superEmitDataChanged(self: QTreeWidgetItem) void {
        qtc.QTreeWidgetItem_SuperEmitDataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#dtor.QTreeWidgetItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn delete(self: QTreeWidgetItem) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTreeWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QTreeWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QTreeWidget_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTreeWidget object in C++ memory
    ///
    pub fn new2() QTreeWidget {
        return .{ .ptr = qtc.QTreeWidget_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn metaObject(self: QTreeWidget) QMetaObject {
        return .{ .ptr = qtc.QTreeWidget_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QTreeWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTreeWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superMetaObject(self: QTreeWidget) QMetaObject {
        return .{ .ptr = qtc.QTreeWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTreeWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTreeWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTreeWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTreeWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTreeWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QTreeWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTreeWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTreeWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QTreeWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTreeWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn columnCount(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColumnCount` instead
    ///
    pub const SetColumnCount = setColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` columns: i32 `
    ///
    pub fn setColumnCount(self: QTreeWidget, columns: i32) void {
        qtc.QTreeWidget_SetColumnCount(@ptrCast(self.ptr), @bitCast(columns));
    }

    /// ### DEPRECATED: Use `invisibleRootItem` instead
    ///
    pub const InvisibleRootItem = invisibleRootItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#invisibleRootItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn invisibleRootItem(self: QTreeWidget) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_InvisibleRootItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelItem` instead
    ///
    pub const TopLevelItem = topLevelItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: i32 `
    ///
    pub fn topLevelItem(self: QTreeWidget, index: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_TopLevelItem(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `topLevelItemCount` instead
    ///
    pub const TopLevelItemCount = topLevelItemCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItemCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn topLevelItemCount(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_TopLevelItemCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertTopLevelItem` instead
    ///
    pub const InsertTopLevelItem = insertTopLevelItem;

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
    pub fn insertTopLevelItem(self: QTreeWidget, index: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_InsertTopLevelItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addTopLevelItem` instead
    ///
    pub const AddTopLevelItem = addTopLevelItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn addTopLevelItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_AddTopLevelItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `takeTopLevelItem` instead
    ///
    pub const TakeTopLevelItem = takeTopLevelItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#takeTopLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: i32 `
    ///
    pub fn takeTopLevelItem(self: QTreeWidget, index: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_TakeTopLevelItem(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `indexOfTopLevelItem` instead
    ///
    pub const IndexOfTopLevelItem = indexOfTopLevelItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#indexOfTopLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn indexOfTopLevelItem(self: QTreeWidget, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return qtc.QTreeWidget_IndexOfTopLevelItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `insertTopLevelItems` instead
    ///
    pub const InsertTopLevelItems = insertTopLevelItems;

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
    pub fn insertTopLevelItems(self: QTreeWidget, index: i32, items: []QTreeWidgetItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QTreeWidget_InsertTopLevelItems(@ptrCast(self.ptr), @bitCast(index), items_list);
    }

    /// ### DEPRECATED: Use `addTopLevelItems` instead
    ///
    pub const AddTopLevelItems = addTopLevelItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` items: []QTreeWidgetItem `
    ///
    pub fn addTopLevelItems(self: QTreeWidget, items: []QTreeWidgetItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QTreeWidget_AddTopLevelItems(@ptrCast(self.ptr), items_list);
    }

    /// ### DEPRECATED: Use `headerItem` instead
    ///
    pub const HeaderItem = headerItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#headerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn headerItem(self: QTreeWidget) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_HeaderItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeaderItem` instead
    ///
    pub const SetHeaderItem = setHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn setHeaderItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_SetHeaderItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setHeaderLabels` instead
    ///
    pub const SetHeaderLabels = setHeaderLabels;

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
    pub fn setHeaderLabels(self: QTreeWidget, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QTreeWidget.setHeaderLabels: Memory allocation failed");
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
        qtc.QTreeWidget_SetHeaderLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `setHeaderLabel` instead
    ///
    pub const SetHeaderLabel = setHeaderLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` label: []const u8 `
    ///
    pub fn setHeaderLabel(self: QTreeWidget, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QTreeWidget_SetHeaderLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `currentItem` instead
    ///
    pub const CurrentItem = currentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#currentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn currentItem(self: QTreeWidget) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_CurrentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentColumn` instead
    ///
    pub const CurrentColumn = currentColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#currentColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn currentColumn(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_CurrentColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentItem` instead
    ///
    pub const SetCurrentItem = setCurrentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn setCurrentItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_SetCurrentItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentItem2` instead
    ///
    pub const SetCurrentItem2 = setCurrentItem2;

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
    pub fn setCurrentItem2(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_SetCurrentItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setCurrentItem3` instead
    ///
    pub const SetCurrentItem3 = setCurrentItem3;

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
    pub fn setCurrentItem3(self: QTreeWidget, item: anytype, column: i32, command: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_SetCurrentItem3(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column), @bitCast(command));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn itemAt(self: QTreeWidget, p: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_ItemAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn itemAt2(self: QTreeWidget, _x: i32, _y: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_ItemAt2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `visualItemRect` instead
    ///
    pub const VisualItemRect = visualItemRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#visualItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn visualItemRect(self: QTreeWidget, item: anytype) QRect {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_VisualItemRect(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### DEPRECATED: Use `sortColumn` instead
    ///
    pub const SortColumn = sortColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#sortColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn sortColumn(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SortColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortItems` instead
    ///
    pub const SortItems = sortItems;

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
    pub fn sortItems(self: QTreeWidget, column: i32, order: i32) void {
        qtc.QTreeWidget_SortItems(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `editItem` instead
    ///
    pub const EditItem = editItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#editItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn editItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_EditItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `openPersistentEditor` instead
    ///
    pub const OpenPersistentEditor = openPersistentEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn openPersistentEditor(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_OpenPersistentEditor(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `closePersistentEditor` instead
    ///
    pub const ClosePersistentEditor = closePersistentEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn closePersistentEditor(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ClosePersistentEditor(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `isPersistentEditorOpen` instead
    ///
    pub const IsPersistentEditorOpen = isPersistentEditorOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn isPersistentEditorOpen(self: QTreeWidget, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return qtc.QTreeWidget_IsPersistentEditorOpen(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `itemWidget` instead
    ///
    pub const ItemWidget = itemWidget;

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
    pub fn itemWidget(self: QTreeWidget, item: anytype, column: i32) QWidget {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_ItemWidget(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `setItemWidget` instead
    ///
    pub const SetItemWidget = setItemWidget;

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
    pub fn setItemWidget(self: QTreeWidget, item: anytype, column: i32, widget: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QTreeWidget_SetItemWidget(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `removeItemWidget` instead
    ///
    pub const RemoveItemWidget = removeItemWidget;

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
    pub fn removeItemWidget(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_RemoveItemWidget(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `selectedItems` instead
    ///
    pub const SelectedItems = selectedItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedItems(self: QTreeWidget, allocator: std.mem.Allocator) []QTreeWidgetItem {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_SelectedItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidgetItem, _arr.len) catch @panic("QTreeWidget.selectedItems: Memory allocation failed");
        const _data_val: [*]QtC.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `findItems` instead
    ///
    pub const FindItems = findItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn findItems(self: QTreeWidget, allocator: std.mem.Allocator, _text: []const u8, _flags: i32) []QTreeWidgetItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTreeWidget_FindItems(@ptrCast(self.ptr), text_str, @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidgetItem, _arr.len) catch @panic("QTreeWidget.findItems: Memory allocation failed");
        const _data_val: [*]QtC.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `itemAbove` instead
    ///
    pub const ItemAbove = itemAbove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemAbove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn itemAbove(self: QTreeWidget, item: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_ItemAbove(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### DEPRECATED: Use `itemBelow` instead
    ///
    pub const ItemBelow = itemBelow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemBelow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn itemBelow(self: QTreeWidget, item: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_ItemBelow(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### DEPRECATED: Use `indexFromItem` instead
    ///
    pub const IndexFromItem = indexFromItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#indexFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn indexFromItem(self: QTreeWidget, item: anytype) QModelIndex {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_IndexFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### DEPRECATED: Use `itemFromIndex` instead
    ///
    pub const ItemFromIndex = itemFromIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn itemFromIndex(self: QTreeWidget, index: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_ItemFromIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectionModel` instead
    ///
    pub const SetSelectionModel = setSelectionModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _selectionModel: QItemSelectionModel `
    ///
    pub fn setSelectionModel(self: QTreeWidget, _selectionModel: anytype) void {
        comptime _ = @TypeOf(_selectionModel)._is_QItemSelectionModel;
        qtc.QTreeWidget_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(_selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `onSetSelectionModel` instead
    ///
    pub const OnSetSelectionModel = onSetSelectionModel;

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
    pub fn onSetSelectionModel(self: QTreeWidget, callback: *const fn (QTreeWidget, QItemSelectionModel) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetSelectionModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSelectionModel` instead
    ///
    pub const SuperSetSelectionModel = superSetSelectionModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _selectionModel: QItemSelectionModel `
    ///
    pub fn superSetSelectionModel(self: QTreeWidget, _selectionModel: anytype) void {
        comptime _ = @TypeOf(_selectionModel)._is_QItemSelectionModel;
        qtc.QTreeWidget_SuperSetSelectionModel(@ptrCast(self.ptr), @ptrCast(_selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `scrollToItem` instead
    ///
    pub const ScrollToItem = scrollToItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#scrollToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn scrollToItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ScrollToItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `expandItem` instead
    ///
    pub const ExpandItem = expandItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#expandItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn expandItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ExpandItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `collapseItem` instead
    ///
    pub const CollapseItem = collapseItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#collapseItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn collapseItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_CollapseItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn clear(self: QTreeWidget) void {
        qtc.QTreeWidget_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemPressed` instead
    ///
    pub const ItemPressed = itemPressed;

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
    pub fn itemPressed(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemPressed(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onItemPressed` instead
    ///
    pub const OnItemPressed = onItemPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn onItemPressed(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemClicked` instead
    ///
    pub const ItemClicked = itemClicked;

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
    pub fn itemClicked(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemClicked(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onItemClicked` instead
    ///
    pub const OnItemClicked = onItemClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn onItemClicked(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemDoubleClicked` instead
    ///
    pub const ItemDoubleClicked = itemDoubleClicked;

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
    pub fn itemDoubleClicked(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemDoubleClicked(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onItemDoubleClicked` instead
    ///
    pub const OnItemDoubleClicked = onItemDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn onItemDoubleClicked(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemActivated` instead
    ///
    pub const ItemActivated = itemActivated;

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
    pub fn itemActivated(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemActivated(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onItemActivated` instead
    ///
    pub const OnItemActivated = onItemActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn onItemActivated(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemEntered` instead
    ///
    pub const ItemEntered = itemEntered;

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
    pub fn itemEntered(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemEntered(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onItemEntered` instead
    ///
    pub const OnItemEntered = onItemEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn onItemEntered(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChanged` instead
    ///
    pub const ItemChanged = itemChanged;

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
    pub fn itemChanged(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemChanged(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onItemChanged` instead
    ///
    pub const OnItemChanged = onItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn onItemChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemExpanded` instead
    ///
    pub const ItemExpanded = itemExpanded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn itemExpanded(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemExpanded(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onItemExpanded` instead
    ///
    pub const OnItemExpanded = onItemExpanded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemExpanded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem) callconv(.c) void `
    ///
    pub fn onItemExpanded(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemExpanded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemCollapsed` instead
    ///
    pub const ItemCollapsed = itemCollapsed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemCollapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn itemCollapsed(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemCollapsed(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onItemCollapsed` instead
    ///
    pub const OnItemCollapsed = onItemCollapsed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemCollapsed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem) callconv(.c) void `
    ///
    pub fn onItemCollapsed(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemCollapsed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentItemChanged` instead
    ///
    pub const CurrentItemChanged = currentItemChanged;

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
    pub fn currentItemChanged(self: QTreeWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(previous)._is_QTreeWidgetItem;
        qtc.QTreeWidget_CurrentItemChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentItemChanged` instead
    ///
    pub const OnCurrentItemChanged = onCurrentItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#currentItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, current: QTreeWidgetItem, previous: QTreeWidgetItem) callconv(.c) void `
    ///
    pub fn onCurrentItemChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, QTreeWidgetItem) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_CurrentItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemSelectionChanged` instead
    ///
    pub const ItemSelectionChanged = itemSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemSelectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn itemSelectionChanged(self: QTreeWidget) void {
        qtc.QTreeWidget_ItemSelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onItemSelectionChanged` instead
    ///
    pub const OnItemSelectionChanged = onItemSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemSelectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget) callconv(.c) void `
    ///
    pub fn onItemSelectionChanged(self: QTreeWidget, callback: *const fn (QTreeWidget) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn event(self: QTreeWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QTreeWidget_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) bool) void {
        qtc.QTreeWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QTreeWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QTreeWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: QTreeWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTreeWidget.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTreeWidget.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onMimeTypes` instead
    ///
    pub const OnMimeTypes = onMimeTypes;

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
    pub fn onMimeTypes(self: QTreeWidget, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QTreeWidget_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeTypes` instead
    ///
    pub const SuperMimeTypes = superMimeTypes;

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
    pub fn superMimeTypes(self: QTreeWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTreeWidget.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTreeWidget.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` items: []QTreeWidgetItem `
    ///
    pub fn mimeData(self: QTreeWidget, items: []QTreeWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return .{ .ptr = qtc.QTreeWidget_MimeData(@ptrCast(self.ptr), items_list) };
    }

    /// ### DEPRECATED: Use `onMimeData` instead
    ///
    pub const OnMimeData = onMimeData;

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
    pub fn onMimeData(self: QTreeWidget, callback: *const fn (QTreeWidget, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QTreeWidget_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeData` instead
    ///
    pub const SuperMimeData = superMimeData;

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
    pub fn superMimeData(self: QTreeWidget, items: []QTreeWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return .{ .ptr = qtc.QTreeWidget_SuperMimeData(@ptrCast(self.ptr), items_list) };
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _parent: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn dropMimeData(self: QTreeWidget, _parent: anytype, index: i32, _data: anytype, action: i32) bool {
        comptime _ = @TypeOf(_parent)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(_data)._is_QMimeData;
        return qtc.QTreeWidget_DropMimeData(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(index), @ptrCast(_data.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

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
    pub fn onDropMimeData(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32, QMimeData, i32) callconv(.c) bool) void {
        qtc.QTreeWidget_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _parent: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn superDropMimeData(self: QTreeWidget, _parent: anytype, index: i32, _data: anytype, action: i32) bool {
        comptime _ = @TypeOf(_parent)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(_data)._is_QMimeData;
        return qtc.QTreeWidget_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(index), @ptrCast(_data.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `supportedDropActions` instead
    ///
    pub const SupportedDropActions = supportedDropActions;

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
    pub fn supportedDropActions(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDropActions` instead
    ///
    pub const OnSupportedDropActions = onSupportedDropActions;

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
    pub fn onSupportedDropActions(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedDropActions` instead
    ///
    pub const SuperSupportedDropActions = superSupportedDropActions;

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
    pub fn superSupportedDropActions(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QTreeWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

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
    pub fn onDropEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QDropEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QTreeWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `editItem2` instead
    ///
    pub const EditItem2 = editItem2;

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
    pub fn editItem2(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_EditItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `openPersistentEditor2` instead
    ///
    pub const OpenPersistentEditor2 = openPersistentEditor2;

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
    pub fn openPersistentEditor2(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_OpenPersistentEditor2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `closePersistentEditor2` instead
    ///
    pub const ClosePersistentEditor2 = closePersistentEditor2;

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
    pub fn closePersistentEditor2(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ClosePersistentEditor2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `isPersistentEditorOpen2` instead
    ///
    pub const IsPersistentEditorOpen2 = isPersistentEditorOpen2;

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
    pub fn isPersistentEditorOpen2(self: QTreeWidget, item: anytype, column: i32) bool {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return qtc.QTreeWidget_IsPersistentEditorOpen2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `findItems3` instead
    ///
    pub const FindItems3 = findItems3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` column: i32 `
    ///
    pub fn findItems3(self: QTreeWidget, allocator: std.mem.Allocator, _text: []const u8, _flags: i32, column: i32) []QTreeWidgetItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTreeWidget_FindItems3(@ptrCast(self.ptr), text_str, @bitCast(_flags), @bitCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidgetItem, _arr.len) catch @panic("QTreeWidget.findItems3: Memory allocation failed");
        const _data_val: [*]QtC.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `indexFromItem2` instead
    ///
    pub const IndexFromItem2 = indexFromItem2;

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
    pub fn indexFromItem2(self: QTreeWidget, item: anytype, column: i32) QModelIndex {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_IndexFromItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `scrollToItem2` instead
    ///
    pub const ScrollToItem2 = scrollToItem2;

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
    pub fn scrollToItem2(self: QTreeWidget, item: anytype, hint: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ScrollToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QTreeWidget, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QTreeView_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `onSetModel` instead
    ///
    pub const OnSetModel = onSetModel;

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
    pub fn onSetModel(self: QTreeWidget, callback: *const fn (QTreeWidget, QAbstractItemModel) callconv(.c) void) void {
        qtc.QTreeView_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModel` instead
    ///
    pub const SuperSetModel = superSetModel;

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
    /// ` _model: QAbstractItemModel `
    ///
    pub fn superSetModel(self: QTreeWidget, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QTreeView_SuperSetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `header` instead
    ///
    pub const Header = header;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#header)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn header(self: QTreeWidget) QHeaderView {
        return .{ .ptr = qtc.QTreeView_Header(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeader` instead
    ///
    pub const SetHeader = setHeader;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _header: QHeaderView `
    ///
    pub fn setHeader(self: QTreeWidget, _header: anytype) void {
        comptime _ = @TypeOf(_header)._is_QHeaderView;
        qtc.QTreeView_SetHeader(@ptrCast(self.ptr), @ptrCast(_header.ptr));
    }

    /// ### DEPRECATED: Use `autoExpandDelay` instead
    ///
    pub const AutoExpandDelay = autoExpandDelay;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#autoExpandDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn autoExpandDelay(self: QTreeWidget) i32 {
        return qtc.QTreeView_AutoExpandDelay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoExpandDelay` instead
    ///
    pub const SetAutoExpandDelay = setAutoExpandDelay;

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
    pub fn setAutoExpandDelay(self: QTreeWidget, delay: i32) void {
        qtc.QTreeView_SetAutoExpandDelay(@ptrCast(self.ptr), @bitCast(delay));
    }

    /// ### DEPRECATED: Use `indentation` instead
    ///
    pub const Indentation = indentation;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indentation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn indentation(self: QTreeWidget) i32 {
        return qtc.QTreeView_Indentation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIndentation` instead
    ///
    pub const SetIndentation = setIndentation;

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
    pub fn setIndentation(self: QTreeWidget, i: i32) void {
        qtc.QTreeView_SetIndentation(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `resetIndentation` instead
    ///
    pub const ResetIndentation = resetIndentation;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#resetIndentation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn resetIndentation(self: QTreeWidget) void {
        qtc.QTreeView_ResetIndentation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rootIsDecorated` instead
    ///
    pub const RootIsDecorated = rootIsDecorated;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rootIsDecorated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn rootIsDecorated(self: QTreeWidget) bool {
        return qtc.QTreeView_RootIsDecorated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRootIsDecorated` instead
    ///
    pub const SetRootIsDecorated = setRootIsDecorated;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRootIsDecorated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _show: bool `
    ///
    pub fn setRootIsDecorated(self: QTreeWidget, _show: bool) void {
        qtc.QTreeView_SetRootIsDecorated(@ptrCast(self.ptr), _show);
    }

    /// ### DEPRECATED: Use `uniformRowHeights` instead
    ///
    pub const UniformRowHeights = uniformRowHeights;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#uniformRowHeights)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn uniformRowHeights(self: QTreeWidget) bool {
        return qtc.QTreeView_UniformRowHeights(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUniformRowHeights` instead
    ///
    pub const SetUniformRowHeights = setUniformRowHeights;

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
    pub fn setUniformRowHeights(self: QTreeWidget, uniform: bool) void {
        qtc.QTreeView_SetUniformRowHeights(@ptrCast(self.ptr), uniform);
    }

    /// ### DEPRECATED: Use `itemsExpandable` instead
    ///
    pub const ItemsExpandable = itemsExpandable;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#itemsExpandable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn itemsExpandable(self: QTreeWidget) bool {
        return qtc.QTreeView_ItemsExpandable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setItemsExpandable` instead
    ///
    pub const SetItemsExpandable = setItemsExpandable;

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
    pub fn setItemsExpandable(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetItemsExpandable(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `expandsOnDoubleClick` instead
    ///
    pub const ExpandsOnDoubleClick = expandsOnDoubleClick;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandsOnDoubleClick)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn expandsOnDoubleClick(self: QTreeWidget) bool {
        return qtc.QTreeView_ExpandsOnDoubleClick(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setExpandsOnDoubleClick` instead
    ///
    pub const SetExpandsOnDoubleClick = setExpandsOnDoubleClick;

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
    pub fn setExpandsOnDoubleClick(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetExpandsOnDoubleClick(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `columnViewportPosition` instead
    ///
    pub const ColumnViewportPosition = columnViewportPosition;

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
    pub fn columnViewportPosition(self: QTreeWidget, column: i32) i32 {
        return qtc.QTreeView_ColumnViewportPosition(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `columnWidth` instead
    ///
    pub const ColumnWidth = columnWidth;

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
    pub fn columnWidth(self: QTreeWidget, column: i32) i32 {
        return qtc.QTreeView_ColumnWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setColumnWidth` instead
    ///
    pub const SetColumnWidth = setColumnWidth;

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
    /// ` _width: i32 `
    ///
    pub fn setColumnWidth(self: QTreeWidget, column: i32, _width: i32) void {
        qtc.QTreeView_SetColumnWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `columnAt` instead
    ///
    pub const ColumnAt = columnAt;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _x: i32 `
    ///
    pub fn columnAt(self: QTreeWidget, _x: i32) i32 {
        return qtc.QTreeView_ColumnAt(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `isColumnHidden` instead
    ///
    pub const IsColumnHidden = isColumnHidden;

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
    pub fn isColumnHidden(self: QTreeWidget, column: i32) bool {
        return qtc.QTreeView_IsColumnHidden(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setColumnHidden` instead
    ///
    pub const SetColumnHidden = setColumnHidden;

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
    /// ` _hide: bool `
    ///
    pub fn setColumnHidden(self: QTreeWidget, column: i32, _hide: bool) void {
        qtc.QTreeView_SetColumnHidden(@ptrCast(self.ptr), @bitCast(column), _hide);
    }

    /// ### DEPRECATED: Use `isHeaderHidden` instead
    ///
    pub const IsHeaderHidden = isHeaderHidden;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isHeaderHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn isHeaderHidden(self: QTreeWidget) bool {
        return qtc.QTreeView_IsHeaderHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeaderHidden` instead
    ///
    pub const SetHeaderHidden = setHeaderHidden;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setHeaderHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _hide: bool `
    ///
    pub fn setHeaderHidden(self: QTreeWidget, _hide: bool) void {
        qtc.QTreeView_SetHeaderHidden(@ptrCast(self.ptr), _hide);
    }

    /// ### DEPRECATED: Use `isRowHidden` instead
    ///
    pub const IsRowHidden = isRowHidden;

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
    /// ` _parent: QModelIndex `
    ///
    pub fn isRowHidden(self: QTreeWidget, row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QTreeView_IsRowHidden(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `setRowHidden` instead
    ///
    pub const SetRowHidden = setRowHidden;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` _hide: bool `
    ///
    pub fn setRowHidden(self: QTreeWidget, row: i32, _parent: anytype, _hide: bool) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTreeView_SetRowHidden(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr), _hide);
    }

    /// ### DEPRECATED: Use `isFirstColumnSpanned` instead
    ///
    pub const IsFirstColumnSpanned = isFirstColumnSpanned;

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
    /// ` _parent: QModelIndex `
    ///
    pub fn isFirstColumnSpanned(self: QTreeWidget, row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QTreeView_IsFirstColumnSpanned(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `setFirstColumnSpanned` instead
    ///
    pub const SetFirstColumnSpanned = setFirstColumnSpanned;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` span: bool `
    ///
    pub fn setFirstColumnSpanned(self: QTreeWidget, row: i32, _parent: anytype, span: bool) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTreeView_SetFirstColumnSpanned(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr), span);
    }

    /// ### DEPRECATED: Use `isExpanded` instead
    ///
    pub const IsExpanded = isExpanded;

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
    pub fn isExpanded(self: QTreeWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeView_IsExpanded(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `setExpanded` instead
    ///
    pub const SetExpanded = setExpanded;

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
    /// ` _expand: bool `
    ///
    pub fn setExpanded(self: QTreeWidget, index: anytype, _expand: bool) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_SetExpanded(@ptrCast(self.ptr), @ptrCast(index.ptr), _expand);
    }

    /// ### DEPRECATED: Use `setSortingEnabled` instead
    ///
    pub const SetSortingEnabled = setSortingEnabled;

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
    pub fn setSortingEnabled(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetSortingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isSortingEnabled` instead
    ///
    pub const IsSortingEnabled = isSortingEnabled;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn isSortingEnabled(self: QTreeWidget) bool {
        return qtc.QTreeView_IsSortingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnimated` instead
    ///
    pub const SetAnimated = setAnimated;

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
    pub fn setAnimated(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetAnimated(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isAnimated` instead
    ///
    pub const IsAnimated = isAnimated;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn isAnimated(self: QTreeWidget) bool {
        return qtc.QTreeView_IsAnimated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAllColumnsShowFocus` instead
    ///
    pub const SetAllColumnsShowFocus = setAllColumnsShowFocus;

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
    pub fn setAllColumnsShowFocus(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetAllColumnsShowFocus(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `allColumnsShowFocus` instead
    ///
    pub const AllColumnsShowFocus = allColumnsShowFocus;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#allColumnsShowFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn allColumnsShowFocus(self: QTreeWidget) bool {
        return qtc.QTreeView_AllColumnsShowFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWordWrap` instead
    ///
    pub const SetWordWrap = setWordWrap;

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
    pub fn setWordWrap(self: QTreeWidget, on: bool) void {
        qtc.QTreeView_SetWordWrap(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `wordWrap` instead
    ///
    pub const WordWrap = wordWrap;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#wordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn wordWrap(self: QTreeWidget) bool {
        return qtc.QTreeView_WordWrap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTreePosition` instead
    ///
    pub const SetTreePosition = setTreePosition;

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
    pub fn setTreePosition(self: QTreeWidget, logicalIndex: i32) void {
        qtc.QTreeView_SetTreePosition(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// ### DEPRECATED: Use `treePosition` instead
    ///
    pub const TreePosition = treePosition;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#treePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn treePosition(self: QTreeWidget) i32 {
        return qtc.QTreeView_TreePosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexAbove` instead
    ///
    pub const IndexAbove = indexAbove;

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
    pub fn indexAbove(self: QTreeWidget, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeView_IndexAbove(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `indexBelow` instead
    ///
    pub const IndexBelow = indexBelow;

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
    pub fn indexBelow(self: QTreeWidget, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeView_IndexBelow(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `expanded` instead
    ///
    pub const Expanded = expanded;

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
    pub fn expanded(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_Expanded(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onExpanded` instead
    ///
    pub const OnExpanded = onExpanded;

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
    pub fn onExpanded(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QTreeView_Connect_Expanded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `collapsed` instead
    ///
    pub const Collapsed = collapsed;

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
    pub fn collapsed(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_Collapsed(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onCollapsed` instead
    ///
    pub const OnCollapsed = onCollapsed;

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
    pub fn onCollapsed(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QTreeView_Connect_Collapsed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hideColumn` instead
    ///
    pub const HideColumn = hideColumn;

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
    pub fn hideColumn(self: QTreeWidget, column: i32) void {
        qtc.QTreeView_HideColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `showColumn` instead
    ///
    pub const ShowColumn = showColumn;

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
    pub fn showColumn(self: QTreeWidget, column: i32) void {
        qtc.QTreeView_ShowColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `expand` instead
    ///
    pub const Expand = expand;

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
    pub fn expand(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_Expand(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `collapse` instead
    ///
    pub const Collapse = collapse;

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
    pub fn collapse(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_Collapse(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `resizeColumnToContents` instead
    ///
    pub const ResizeColumnToContents = resizeColumnToContents;

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
    pub fn resizeColumnToContents(self: QTreeWidget, column: i32) void {
        qtc.QTreeView_ResizeColumnToContents(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `sortByColumn` instead
    ///
    pub const SortByColumn = sortByColumn;

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
    pub fn sortByColumn(self: QTreeWidget, column: i32, order: i32) void {
        qtc.QTreeView_SortByColumn(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `expandAll` instead
    ///
    pub const ExpandAll = expandAll;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn expandAll(self: QTreeWidget) void {
        qtc.QTreeView_ExpandAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `expandRecursively` instead
    ///
    pub const ExpandRecursively = expandRecursively;

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
    pub fn expandRecursively(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_ExpandRecursively(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `collapseAll` instead
    ///
    pub const CollapseAll = collapseAll;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#collapseAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn collapseAll(self: QTreeWidget) void {
        qtc.QTreeView_CollapseAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `expandToDepth` instead
    ///
    pub const ExpandToDepth = expandToDepth;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandToDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` _depth: i32 `
    ///
    pub fn expandToDepth(self: QTreeWidget, _depth: i32) void {
        qtc.QTreeView_ExpandToDepth(@ptrCast(self.ptr), @bitCast(_depth));
    }

    /// ### DEPRECATED: Use `expandRecursively2` instead
    ///
    pub const ExpandRecursively2 = expandRecursively2;

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
    /// ` _depth: i32 `
    ///
    pub fn expandRecursively2(self: QTreeWidget, index: anytype, _depth: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_ExpandRecursively2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(_depth));
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
    /// ` self: QTreeWidget `
    ///
    pub fn model(self: QTreeWidget) QAbstractItemModel {
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
    /// ` self: QTreeWidget `
    ///
    pub fn selectionModel(self: QTreeWidget) QItemSelectionModel {
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
    /// ` self: QTreeWidget `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegate(self: QTreeWidget, delegate: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn itemDelegate(self: QTreeWidget) QAbstractItemDelegate {
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
    /// ` self: QTreeWidget `
    ///
    /// ` mode: qabstractitemview_enums.SelectionMode `
    ///
    pub fn setSelectionMode(self: QTreeWidget, mode: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionMode `
    ///
    pub fn selectionMode(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` behavior: qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn setSelectionBehavior(self: QTreeWidget, behavior: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn selectionBehavior(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn currentIndex(self: QTreeWidget) QModelIndex {
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
    /// ` self: QTreeWidget `
    ///
    pub fn rootIndex(self: QTreeWidget) QModelIndex {
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
    /// ` self: QTreeWidget `
    ///
    /// ` triggers: flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn setEditTriggers(self: QTreeWidget, triggers: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn editTriggers(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn setVerticalScrollMode(self: QTreeWidget, mode: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn verticalScrollMode(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn resetVerticalScrollMode(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn setHorizontalScrollMode(self: QTreeWidget, mode: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn horizontalScrollMode(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn resetHorizontalScrollMode(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoScroll(self: QTreeWidget, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn hasAutoScroll(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` margin: i32 `
    ///
    pub fn setAutoScrollMargin(self: QTreeWidget, margin: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn autoScrollMargin(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabKeyNavigation(self: QTreeWidget, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn tabKeyNavigation(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setDropIndicatorShown(self: QTreeWidget, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn showDropIndicator(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setDragEnabled(self: QTreeWidget, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn dragEnabled(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` overwrite: bool `
    ///
    pub fn setDragDropOverwriteMode(self: QTreeWidget, overwrite: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn dragDropOverwriteMode(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` behavior: qabstractitemview_enums.DragDropMode `
    ///
    pub fn setDragDropMode(self: QTreeWidget, behavior: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DragDropMode `
    ///
    pub fn dragDropMode(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` dropAction: qnamespace_enums.DropAction `
    ///
    pub fn setDefaultDropAction(self: QTreeWidget, dropAction: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn defaultDropAction(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setAlternatingRowColors(self: QTreeWidget, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn alternatingRowColors(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _size: QSize `
    ///
    pub fn setIconSize(self: QTreeWidget, _size: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn iconSize(self: QTreeWidget) QSize {
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
    /// ` self: QTreeWidget `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    pub fn setTextElideMode(self: QTreeWidget, mode: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn textElideMode(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn sizeHintForIndex(self: QTreeWidget, index: anytype) QSize {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setIndexWidget(self: QTreeWidget, index: anytype, widget: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn indexWidget(self: QTreeWidget, index: anytype) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegateForRow(self: QTreeWidget, row: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row), @ptrCast(delegate.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn itemDelegateForRow(self: QTreeWidget, row: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row)) };
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
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegateForColumn(self: QTreeWidget, column: i32, delegate: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn itemDelegateForColumn(self: QTreeWidget, column: i32) QAbstractItemDelegate {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn itemDelegate2(self: QTreeWidget, index: anytype) QAbstractItemDelegate {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn edit(self: QTreeWidget, index: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn clearSelection(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn setCurrentIndex(self: QTreeWidget, index: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn scrollToTop(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn scrollToBottom(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn update(self: QTreeWidget, index: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn pressed(self: QTreeWidget, index: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onPressed(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn clicked(self: QTreeWidget, index: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onClicked(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn doubleClicked(self: QTreeWidget, index: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn activated(self: QTreeWidget, index: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onActivated(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn entered(self: QTreeWidget, index: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onEntered(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn viewportEntered(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget) callconv(.c) void `
    ///
    pub fn onViewportEntered(self: QTreeWidget, callback: *const fn (QTreeWidget) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _size: QSize `
    ///
    pub fn iconSizeChanged(self: QTreeWidget, _size: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, size: QSize) callconv(.c) void `
    ///
    pub fn onIconSizeChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QSize) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn verticalScrollBarPolicy(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setVerticalScrollBarPolicy(self: QTreeWidget, _verticalScrollBarPolicy: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn verticalScrollBar(self: QTreeWidget) QScrollBar {
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
    /// ` self: QTreeWidget `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setVerticalScrollBar(self: QTreeWidget, scrollbar: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn horizontalScrollBarPolicy(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setHorizontalScrollBarPolicy(self: QTreeWidget, _horizontalScrollBarPolicy: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn horizontalScrollBar(self: QTreeWidget) QScrollBar {
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
    /// ` self: QTreeWidget `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setHorizontalScrollBar(self: QTreeWidget, scrollbar: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn cornerWidget(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setCornerWidget(self: QTreeWidget, widget: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addScrollBarWidget(self: QTreeWidget, widget: anytype, alignment: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn scrollBarWidgets(self: QTreeWidget, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QTreeWidget.scrollBarWidgets: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    pub fn viewport(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setViewport(self: QTreeWidget, widget: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn maximumViewportSize(self: QTreeWidget) QSize {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn sizeAdjustPolicy(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn setSizeAdjustPolicy(self: QTreeWidget, policy: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn frameStyle(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _frameStyle: i32 `
    ///
    pub fn setFrameStyle(self: QTreeWidget, _frameStyle: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn frameWidth(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn frameShape(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: QTreeWidget, _frameShape: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn frameShadow(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _frameShadow: qframe_enums.Shadow `
    ///
    pub fn setFrameShadow(self: QTreeWidget, _frameShadow: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn lineWidth(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QTreeWidget, _lineWidth: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn midLineWidth(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QTreeWidget, _midLineWidth: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn frameRect(self: QTreeWidget) QRect {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _frameRect: QRect `
    ///
    pub fn setFrameRect(self: QTreeWidget, _frameRect: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn winId(self: QTreeWidget) usize {
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
    /// ` self: QTreeWidget `
    ///
    pub fn createWinId(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn internalWinId(self: QTreeWidget) usize {
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
    /// ` self: QTreeWidget `
    ///
    pub fn effectiveWinId(self: QTreeWidget) usize {
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
    /// ` self: QTreeWidget `
    ///
    pub fn style(self: QTreeWidget) QStyle {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QTreeWidget, _style: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isTopLevel(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isWindow(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isModal(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QTreeWidget, _windowModality: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isEnabled(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QTreeWidget, param1: anytype) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QTreeWidget, enabled: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QTreeWidget, disabled: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QTreeWidget, windowModified: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn frameGeometry(self: QTreeWidget) QRect {
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
    /// ` self: QTreeWidget `
    ///
    pub fn geometry(self: QTreeWidget) QRect {
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
    /// ` self: QTreeWidget `
    ///
    pub fn normalGeometry(self: QTreeWidget) QRect {
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
    /// ` self: QTreeWidget `
    ///
    pub fn x(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn y(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn pos(self: QTreeWidget) QPoint {
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
    /// ` self: QTreeWidget `
    ///
    pub fn frameSize(self: QTreeWidget) QSize {
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
    /// ` self: QTreeWidget `
    ///
    pub fn size(self: QTreeWidget) QSize {
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
    /// ` self: QTreeWidget `
    ///
    pub fn width(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn height(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn rect(self: QTreeWidget) QRect {
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
    /// ` self: QTreeWidget `
    ///
    pub fn childrenRect(self: QTreeWidget) QRect {
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
    /// ` self: QTreeWidget `
    ///
    pub fn childrenRegion(self: QTreeWidget) QRegion {
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
    /// ` self: QTreeWidget `
    ///
    pub fn minimumSize(self: QTreeWidget) QSize {
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
    /// ` self: QTreeWidget `
    ///
    pub fn maximumSize(self: QTreeWidget) QSize {
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
    /// ` self: QTreeWidget `
    ///
    pub fn minimumWidth(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn minimumHeight(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn maximumWidth(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn maximumHeight(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QTreeWidget, _minimumSize: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QTreeWidget, minw: i32, minh: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QTreeWidget, _maximumSize: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QTreeWidget, maxw: i32, maxh: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QTreeWidget, minw: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QTreeWidget, minh: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QTreeWidget, maxw: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QTreeWidget, maxh: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn sizeIncrement(self: QTreeWidget) QSize {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QTreeWidget, _sizeIncrement: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QTreeWidget, w: i32, h: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn baseSize(self: QTreeWidget) QSize {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QTreeWidget, _baseSize: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QTreeWidget, basew: i32, baseh: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QTreeWidget, fixedSize: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QTreeWidget, w: i32, h: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QTreeWidget, w: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QTreeWidget, h: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QTreeWidget, param1: anytype) QPointF {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QTreeWidget, param1: anytype) QPoint {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QTreeWidget, param1: anytype) QPointF {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QTreeWidget, param1: anytype) QPoint {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QTreeWidget, param1: anytype) QPointF {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QTreeWidget, param1: anytype) QPoint {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QTreeWidget, param1: anytype) QPointF {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QTreeWidget, param1: anytype) QPoint {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QTreeWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QTreeWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QTreeWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QTreeWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTreeWidget `
    ///
    pub fn window(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    pub fn nativeParentWidget(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    pub fn topLevelWidget(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    pub fn palette(self: QTreeWidget) QPalette {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QTreeWidget, _palette: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QTreeWidget, _backgroundRole: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QTreeWidget, _foregroundRole: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn font(self: QTreeWidget) QFont {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QTreeWidget, _font: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn fontMetrics(self: QTreeWidget) QFontMetrics {
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
    /// ` self: QTreeWidget `
    ///
    pub fn fontInfo(self: QTreeWidget) QFontInfo {
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
    /// ` self: QTreeWidget `
    ///
    pub fn cursor(self: QTreeWidget) QCursor {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QTreeWidget, _cursor: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn unsetCursor(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QTreeWidget, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn hasMouseTracking(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn underMouse(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QTreeWidget, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn hasTabletTracking(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QTreeWidget, _mask: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QTreeWidget, _mask: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn mask(self: QTreeWidget) QRegion {
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
    /// ` self: QTreeWidget `
    ///
    pub fn clearMask(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QTreeWidget, target: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QTreeWidget, painter: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn grab(self: QTreeWidget) QPixmap {
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
    /// ` self: QTreeWidget `
    ///
    pub fn graphicsEffect(self: QTreeWidget) QGraphicsEffect {
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
    /// ` self: QTreeWidget `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QTreeWidget, effect: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QTreeWidget, typeVal: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QTreeWidget, typeVal: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QTreeWidget, _windowTitle: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QTreeWidget, _styleSheet: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.styleSheet: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.windowTitle: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setWindowIcon(self: QTreeWidget, _icon: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn windowIcon(self: QTreeWidget) QIcon {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QTreeWidget, _windowIconText: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.windowIconText: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QTreeWidget, _windowRole: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.windowRole: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QTreeWidget, filePath: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.windowFilePath: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QTreeWidget, level: f64) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn windowOpacity(self: QTreeWidget) f64 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isWindowModified(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QTreeWidget, _toolTip: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.toolTip: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QTreeWidget, msec: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn toolTipDuration(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QTreeWidget, _statusTip: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.statusTip: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QTreeWidget, _whatsThis: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.whatsThis: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.accessibleName: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QTreeWidget, name: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.accessibleDescription: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QTreeWidget, description: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTreeWidget, direction: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn unsetLayoutDirection(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QTreeWidget, _locale: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn locale(self: QTreeWidget) QLocale {
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
    /// ` self: QTreeWidget `
    ///
    pub fn unsetLocale(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isRightToLeft(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isLeftToRight(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn setFocus(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isActiveWindow(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn activateWindow(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn clearFocus(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QTreeWidget, reason: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QTreeWidget, policy: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn hasFocus(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QTreeWidget, _focusProxy: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn focusProxy(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QTreeWidget, policy: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn grabMouse(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QTreeWidget, param1: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn releaseMouse(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn grabKeyboard(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn releaseKeyboard(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QTreeWidget, key: anytype) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QTreeWidget, id: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QTreeWidget, id: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QTreeWidget, id: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn updatesEnabled(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QTreeWidget, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn graphicsProxyWidget(self: QTreeWidget) QGraphicsProxyWidget {
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
    /// ` self: QTreeWidget `
    ///
    pub fn repaint(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QTreeWidget, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QTreeWidget, param1: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QTreeWidget, param1: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QTreeWidget, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QTreeWidget, param1: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QTreeWidget, param1: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QTreeWidget, hidden: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn show(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn hide(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn showMinimized(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn showMaximized(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn showFullScreen(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn showNormal(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn close(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn raise(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn lower(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QTreeWidget, param1: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QTreeWidget, _x: i32, _y: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QTreeWidget, param1: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QTreeWidget, w: i32, h: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QTreeWidget, param1: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QTreeWidget, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QTreeWidget, _geometry: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QTreeWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QTreeWidget.saveGeometry: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QTreeWidget, _geometry: []u8) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn adjustSize(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isVisible(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QTreeWidget, param1: anytype) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isHidden(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isMinimized(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isMaximized(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isFullScreen(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QTreeWidget, _state: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QTreeWidget, _state: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn sizePolicy(self: QTreeWidget) QSizePolicy {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QTreeWidget, _sizePolicy: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QTreeWidget, horizontal: i32, vertical: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn visibleRegion(self: QTreeWidget) QRegion {
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
    pub fn setContentsMargins(self: QTreeWidget, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QTreeWidget, margins: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn contentsMargins(self: QTreeWidget) QMargins {
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
    /// ` self: QTreeWidget `
    ///
    pub fn contentsRect(self: QTreeWidget) QRect {
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
    /// ` self: QTreeWidget `
    ///
    pub fn layout(self: QTreeWidget) QLayout {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QTreeWidget, _layout: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn updateGeometry(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QTreeWidget, _parent: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QTreeWidget, _parent: anytype, f: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QTreeWidget, dx: i32, dy: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QTreeWidget, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn focusWidget(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    pub fn nextInFocusChain(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    pub fn previousInFocusChain(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    pub fn acceptDrops(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QTreeWidget, on: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QTreeWidget, action: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QTreeWidget, _actions: []QAction) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QTreeWidget, before: anytype, _actions: []QAction) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QTreeWidget, before: anytype, action: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QTreeWidget, action: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QTreeWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QTreeWidget.actions: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction2(self: QTreeWidget, _text: []const u8) QAction {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction3(self: QTreeWidget, _icon: anytype, _text: []const u8) QAction {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QTreeWidget, _text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QTreeWidget, _icon: anytype, _text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTreeWidget `
    ///
    pub fn parentWidget(self: QTreeWidget) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QTreeWidget, typeVal: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QTreeWidget, param1: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QTreeWidget, typeVal: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QTreeWidget, _x: i32, _y: i32) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QTreeWidget, p: anytype) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QTreeWidget, p: anytype) QWidget {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QTreeWidget, param1: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QTreeWidget, param1: i32) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn ensurePolished(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _child: QWidget `
    ///
    pub fn isAncestorOf(self: QTreeWidget, _child: anytype) bool {
        comptime _ = @TypeOf(_child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(_child.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn autoFillBackground(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QTreeWidget, enabled: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn backingStore(self: QTreeWidget) QBackingStore {
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
    /// ` self: QTreeWidget `
    ///
    pub fn windowHandle(self: QTreeWidget) QWindow {
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
    /// ` self: QTreeWidget `
    ///
    pub fn screen(self: QTreeWidget) QScreen {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QTreeWidget, _screen: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QTreeWidget, title: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn windowIconChanged(self: QTreeWidget, _icon: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QIcon) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QTreeWidget, iconText: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QTreeWidget, _pos: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QTreeWidget, callback: *const fn (QTreeWidget, QPoint) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QTreeWidget, hints: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QTreeWidget, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QTreeWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render4(self: QTreeWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QTreeWidget, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QTreeWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render42(self: QTreeWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QTreeWidget, rectangle: anytype) QPixmap {
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
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` _flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QTreeWidget, typeVal: i32, _flags: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QTreeWidget, key: anytype, context: i32) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QTreeWidget, id: i32, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QTreeWidget, id: i32, enable: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QTreeWidget, param1: i32, on: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QTreeWidget, param1: i32, on: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTreeWidget.objectName: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTreeWidget, name: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isWidgetType(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isWindowType(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn isQuickItemType(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn signalsBlocked(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTreeWidget, b: bool) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn thread(self: QTreeWidget) QThread {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTreeWidget, _thread: anytype) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTreeWidget, interval: i32) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTreeWidget, time: i64) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTreeWidget, id: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTreeWidget, id: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTreeWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTreeWidget.children: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTreeWidget, filterObj: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTreeWidget, obj: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTreeWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTreeWidget `
    ///
    pub fn disconnect3(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTreeWidget, receiver: anytype) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn dumpObjectTree(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn dumpObjectInfo(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTreeWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTreeWidget, name: [:0]const u8) QVariant {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTreeWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTreeWidget.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTreeWidget.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    pub fn bindingStorage(self: QTreeWidget) QBindingStorage {
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
    /// ` self: QTreeWidget `
    ///
    pub fn bindingStorage2(self: QTreeWidget) QBindingStorage {
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
    /// ` self: QTreeWidget `
    ///
    pub fn destroyed(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTreeWidget, callback: *const fn (QTreeWidget) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn parent(self: QTreeWidget) QObject {
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
    /// ` self: QTreeWidget `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTreeWidget, classname: [:0]const u8) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn deleteLater(self: QTreeWidget) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTreeWidget, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTreeWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTreeWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTreeWidget, signal: [:0]const u8) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTreeWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTreeWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTreeWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTreeWidget, param1: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTreeWidget, callback: *const fn (QTreeWidget, QObject) callconv(.c) void) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn paintingActive(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn widthMM(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn heightMM(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn logicalDpiX(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn logicalDpiY(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn physicalDpiX(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn physicalDpiY(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn devicePixelRatio(self: QTreeWidget) f64 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn devicePixelRatioF(self: QTreeWidget) f64 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn colorCount(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    pub fn depth(self: QTreeWidget) i32 {
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

    /// ### DEPRECATED: Use `setRootIndex` instead
    ///
    pub const SetRootIndex = setRootIndex;

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
    pub fn setRootIndex(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superSetRootIndex` instead
    ///
    pub const SuperSetRootIndex = superSetRootIndex;

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
    pub fn superSetRootIndex(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SuperSetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onSetRootIndex` instead
    ///
    pub const OnSetRootIndex = onSetRootIndex;

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
    pub fn onSetRootIndex(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetRootIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyboardSearch` instead
    ///
    pub const KeyboardSearch = keyboardSearch;

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
    pub fn keyboardSearch(self: QTreeWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTreeWidget_KeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// ### DEPRECATED: Use `superKeyboardSearch` instead
    ///
    pub const SuperKeyboardSearch = superKeyboardSearch;

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
    pub fn superKeyboardSearch(self: QTreeWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTreeWidget_SuperKeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// ### DEPRECATED: Use `onKeyboardSearch` instead
    ///
    pub const OnKeyboardSearch = onKeyboardSearch;

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
    pub fn onKeyboardSearch(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTreeWidget_OnKeyboardSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visualRect` instead
    ///
    pub const VisualRect = visualRect;

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
    pub fn visualRect(self: QTreeWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_VisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `superVisualRect` instead
    ///
    pub const SuperVisualRect = superVisualRect;

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
    pub fn superVisualRect(self: QTreeWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_SuperVisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onVisualRect` instead
    ///
    pub const OnVisualRect = onVisualRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVisualRect(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) QRect) void {
        qtc.QTreeWidget_OnVisualRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollTo` instead
    ///
    pub const ScrollTo = scrollTo;

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
    pub fn scrollTo(self: QTreeWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_ScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `superScrollTo` instead
    ///
    pub const SuperScrollTo = superScrollTo;

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
    pub fn superScrollTo(self: QTreeWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SuperScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onScrollTo` instead
    ///
    pub const OnScrollTo = onScrollTo;

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
    pub fn onScrollTo(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnScrollTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexAt` instead
    ///
    pub const IndexAt = indexAt;

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
    pub fn indexAt(self: QTreeWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_IndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `superIndexAt` instead
    ///
    pub const SuperIndexAt = superIndexAt;

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
    pub fn superIndexAt(self: QTreeWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_SuperIndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndexAt` instead
    ///
    pub const OnIndexAt = onIndexAt;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndexAt(self: QTreeWidget, callback: *const fn (QTreeWidget, QPoint) callconv(.c) QModelIndex) void {
        qtc.QTreeWidget_OnIndexAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doItemsLayout` instead
    ///
    pub const DoItemsLayout = doItemsLayout;

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
    pub fn doItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_DoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoItemsLayout` instead
    ///
    pub const SuperDoItemsLayout = superDoItemsLayout;

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
    pub fn superDoItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperDoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoItemsLayout` instead
    ///
    pub const OnDoItemsLayout = onDoItemsLayout;

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
    pub fn onDoItemsLayout(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnDoItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

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
    pub fn reset(self: QTreeWidget) void {
        qtc.QTreeWidget_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

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
    pub fn superReset(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

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
    pub fn onReset(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

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
    pub fn dataChanged(self: QTreeWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTreeWidget_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `superDataChanged` instead
    ///
    pub const SuperDataChanged = superDataChanged;

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
    pub fn superDataChanged(self: QTreeWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTreeWidget_SuperDataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

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
    pub fn onDataChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QTreeWidget_OnDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

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
    pub fn selectAll(self: QTreeWidget) void {
        qtc.QTreeWidget_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSelectAll` instead
    ///
    pub const SuperSelectAll = superSelectAll;

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
    pub fn superSelectAll(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperSelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectAll` instead
    ///
    pub const OnSelectAll = onSelectAll;

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
    pub fn onSelectAll(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalScrollbarValueChanged` instead
    ///
    pub const VerticalScrollbarValueChanged = verticalScrollbarValueChanged;

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
    pub fn verticalScrollbarValueChanged(self: QTreeWidget, value: i32) void {
        qtc.QTreeWidget_VerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `superVerticalScrollbarValueChanged` instead
    ///
    pub const SuperVerticalScrollbarValueChanged = superVerticalScrollbarValueChanged;

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
    pub fn superVerticalScrollbarValueChanged(self: QTreeWidget, value: i32) void {
        qtc.QTreeWidget_SuperVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onVerticalScrollbarValueChanged` instead
    ///
    pub const OnVerticalScrollbarValueChanged = onVerticalScrollbarValueChanged;

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
    pub fn onVerticalScrollbarValueChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollContentsBy` instead
    ///
    pub const ScrollContentsBy = scrollContentsBy;

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
    pub fn scrollContentsBy(self: QTreeWidget, dx: i32, dy: i32) void {
        qtc.QTreeWidget_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `superScrollContentsBy` instead
    ///
    pub const SuperScrollContentsBy = superScrollContentsBy;

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
    pub fn superScrollContentsBy(self: QTreeWidget, dx: i32, dy: i32) void {
        qtc.QTreeWidget_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollContentsBy` instead
    ///
    pub const OnScrollContentsBy = onScrollContentsBy;

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
    pub fn onScrollContentsBy(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsInserted` instead
    ///
    pub const RowsInserted = rowsInserted;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn rowsInserted(self: QTreeWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTreeWidget_RowsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `superRowsInserted` instead
    ///
    pub const SuperRowsInserted = superRowsInserted;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn superRowsInserted(self: QTreeWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTreeWidget_SuperRowsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

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
    pub fn onRowsInserted(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnRowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsAboutToBeRemoved` instead
    ///
    pub const RowsAboutToBeRemoved = rowsAboutToBeRemoved;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn rowsAboutToBeRemoved(self: QTreeWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTreeWidget_RowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `superRowsAboutToBeRemoved` instead
    ///
    pub const SuperRowsAboutToBeRemoved = superRowsAboutToBeRemoved;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn superRowsAboutToBeRemoved(self: QTreeWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTreeWidget_SuperRowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeRemoved` instead
    ///
    pub const OnRowsAboutToBeRemoved = onRowsAboutToBeRemoved;

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
    pub fn onRowsAboutToBeRemoved(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnRowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveCursor` instead
    ///
    pub const MoveCursor = moveCursor;

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
    pub fn moveCursor(self: QTreeWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QTreeWidget_MoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `superMoveCursor` instead
    ///
    pub const SuperMoveCursor = superMoveCursor;

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
    pub fn superMoveCursor(self: QTreeWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QTreeWidget_SuperMoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `onMoveCursor` instead
    ///
    pub const OnMoveCursor = onMoveCursor;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMoveCursor(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QTreeWidget_OnMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalOffset` instead
    ///
    pub const HorizontalOffset = horizontalOffset;

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
    pub fn horizontalOffset(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_HorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHorizontalOffset` instead
    ///
    pub const SuperHorizontalOffset = superHorizontalOffset;

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
    pub fn superHorizontalOffset(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperHorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHorizontalOffset` instead
    ///
    pub const OnHorizontalOffset = onHorizontalOffset;

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
    pub fn onHorizontalOffset(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnHorizontalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalOffset` instead
    ///
    pub const VerticalOffset = verticalOffset;

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
    pub fn verticalOffset(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_VerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superVerticalOffset` instead
    ///
    pub const SuperVerticalOffset = superVerticalOffset;

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
    pub fn superVerticalOffset(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperVerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVerticalOffset` instead
    ///
    pub const OnVerticalOffset = onVerticalOffset;

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
    pub fn onVerticalOffset(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnVerticalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSelection` instead
    ///
    pub const SetSelection = setSelection;

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
    /// ` _rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn setSelection(self: QTreeWidget, _rect: anytype, command: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QTreeWidget_SetSelection(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `superSetSelection` instead
    ///
    pub const SuperSetSelection = superSetSelection;

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
    /// ` _rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn superSetSelection(self: QTreeWidget, _rect: anytype, command: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QTreeWidget_SuperSetSelection(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `onSetSelection` instead
    ///
    pub const OnSetSelection = onSetSelection;

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
    pub fn onSetSelection(self: QTreeWidget, callback: *const fn (QTreeWidget, QRect, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visualRegionForSelection` instead
    ///
    pub const VisualRegionForSelection = visualRegionForSelection;

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
    pub fn visualRegionForSelection(self: QTreeWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QTreeWidget_VisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `superVisualRegionForSelection` instead
    ///
    pub const SuperVisualRegionForSelection = superVisualRegionForSelection;

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
    pub fn superVisualRegionForSelection(self: QTreeWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QTreeWidget_SuperVisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `onVisualRegionForSelection` instead
    ///
    pub const OnVisualRegionForSelection = onVisualRegionForSelection;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVisualRegionForSelection(self: QTreeWidget, callback: *const fn (QTreeWidget, QItemSelection) callconv(.c) QRegion) void {
        qtc.QTreeWidget_OnVisualRegionForSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedIndexes` instead
    ///
    pub const SelectedIndexes = selectedIndexes;

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
    pub fn selectedIndexes(self: QTreeWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QTreeWidget.selectedIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superSelectedIndexes` instead
    ///
    pub const SuperSelectedIndexes = superSelectedIndexes;

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
    pub fn superSelectedIndexes(self: QTreeWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_SuperSelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QTreeWidget.selectedIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onSelectedIndexes` instead
    ///
    pub const OnSelectedIndexes = onSelectedIndexes;

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
    pub fn onSelectedIndexes(self: QTreeWidget, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QTreeWidget_OnSelectedIndexes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn changeEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTreeWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superChangeEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTreeWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

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
    pub fn onChangeEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTreeWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTreeWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QTimerEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

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
    /// ` _event: QPaintEvent `
    ///
    pub fn paintEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.QTreeWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

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
    /// ` _event: QPaintEvent `
    ///
    pub fn superPaintEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.QTreeWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

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
    pub fn onPaintEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QPaintEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawRow` instead
    ///
    pub const DrawRow = drawRow;

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
    pub fn drawRow(self: QTreeWidget, painter: anytype, options: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_DrawRow(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(options.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superDrawRow` instead
    ///
    pub const SuperDrawRow = superDrawRow;

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
    pub fn superDrawRow(self: QTreeWidget, painter: anytype, options: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SuperDrawRow(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(options.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onDrawRow` instead
    ///
    pub const OnDrawRow = onDrawRow;

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
    pub fn onDrawRow(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.QTreeWidget_OnDrawRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawBranches` instead
    ///
    pub const DrawBranches = drawBranches;

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
    /// ` _rect: QRect `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn drawBranches(self: QTreeWidget, painter: anytype, _rect: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(_rect)._is_QRect;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_DrawBranches(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(_rect.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superDrawBranches` instead
    ///
    pub const SuperDrawBranches = superDrawBranches;

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
    /// ` _rect: QRect `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superDrawBranches(self: QTreeWidget, painter: anytype, _rect: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(_rect)._is_QRect;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SuperDrawBranches(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(_rect.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onDrawBranches` instead
    ///
    pub const OnDrawBranches = onDrawBranches;

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
    pub fn onDrawBranches(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter, QRect, QModelIndex) callconv(.c) void) void {
        qtc.QTreeWidget_OnDrawBranches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTreeWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTreeWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTreeWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTreeWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTreeWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTreeWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTreeWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTreeWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTreeWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTreeWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

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
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QTreeWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

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
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QTreeWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

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
    pub fn onDragMoveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportEvent` instead
    ///
    pub const ViewportEvent = viewportEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn viewportEvent(self: QTreeWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTreeWidget_ViewportEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superViewportEvent` instead
    ///
    pub const SuperViewportEvent = superViewportEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superViewportEvent(self: QTreeWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTreeWidget_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onViewportEvent` instead
    ///
    pub const OnViewportEvent = onViewportEvent;

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
    pub fn onViewportEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) bool) void {
        qtc.QTreeWidget_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateGeometries` instead
    ///
    pub const UpdateGeometries = updateGeometries;

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
    pub fn updateGeometries(self: QTreeWidget) void {
        qtc.QTreeWidget_UpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateGeometries` instead
    ///
    pub const SuperUpdateGeometries = superUpdateGeometries;

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
    pub fn superUpdateGeometries(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperUpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGeometries` instead
    ///
    pub const OnUpdateGeometries = onUpdateGeometries;

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
    pub fn onUpdateGeometries(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnUpdateGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportSizeHint` instead
    ///
    pub const ViewportSizeHint = viewportSizeHint;

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
    pub fn viewportSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superViewportSizeHint` instead
    ///
    pub const SuperViewportSizeHint = superViewportSizeHint;

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
    pub fn superViewportSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onViewportSizeHint` instead
    ///
    pub const OnViewportSizeHint = onViewportSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportSizeHint(self: QTreeWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTreeWidget_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHintForColumn` instead
    ///
    pub const SizeHintForColumn = sizeHintForColumn;

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
    pub fn sizeHintForColumn(self: QTreeWidget, column: i32) i32 {
        return qtc.QTreeWidget_SizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `superSizeHintForColumn` instead
    ///
    pub const SuperSizeHintForColumn = superSizeHintForColumn;

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
    pub fn superSizeHintForColumn(self: QTreeWidget, column: i32) i32 {
        return qtc.QTreeWidget_SuperSizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onSizeHintForColumn` instead
    ///
    pub const OnSizeHintForColumn = onSizeHintForColumn;

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
    pub fn onSizeHintForColumn(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) i32) void {
        qtc.QTreeWidget_OnSizeHintForColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalScrollbarAction` instead
    ///
    pub const HorizontalScrollbarAction = horizontalScrollbarAction;

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
    pub fn horizontalScrollbarAction(self: QTreeWidget, action: i32) void {
        qtc.QTreeWidget_HorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `superHorizontalScrollbarAction` instead
    ///
    pub const SuperHorizontalScrollbarAction = superHorizontalScrollbarAction;

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
    pub fn superHorizontalScrollbarAction(self: QTreeWidget, action: i32) void {
        qtc.QTreeWidget_SuperHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onHorizontalScrollbarAction` instead
    ///
    pub const OnHorizontalScrollbarAction = onHorizontalScrollbarAction;

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
    pub fn onHorizontalScrollbarAction(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isIndexHidden` instead
    ///
    pub const IsIndexHidden = isIndexHidden;

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
    pub fn isIndexHidden(self: QTreeWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_IsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superIsIndexHidden` instead
    ///
    pub const SuperIsIndexHidden = superIsIndexHidden;

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
    pub fn superIsIndexHidden(self: QTreeWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_SuperIsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onIsIndexHidden` instead
    ///
    pub const OnIsIndexHidden = onIsIndexHidden;

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
    pub fn onIsIndexHidden(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) bool) void {
        qtc.QTreeWidget_OnIsIndexHidden(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

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
    pub fn selectionChanged(self: QTreeWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QTreeWidget_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `superSelectionChanged` instead
    ///
    pub const SuperSelectionChanged = superSelectionChanged;

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
    pub fn superSelectionChanged(self: QTreeWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QTreeWidget_SuperSelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

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
    pub fn onSelectionChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QTreeWidget_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentChanged` instead
    ///
    pub const CurrentChanged = currentChanged;

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
    pub fn currentChanged(self: QTreeWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QTreeWidget_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `superCurrentChanged` instead
    ///
    pub const SuperCurrentChanged = superCurrentChanged;

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
    pub fn superCurrentChanged(self: QTreeWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QTreeWidget_SuperCurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentChanged` instead
    ///
    pub const OnCurrentChanged = onCurrentChanged;

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
    pub fn onCurrentChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QTreeWidget_OnCurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn sizeHintForRow(self: QTreeWidget, row: i32) i32 {
        return qtc.QTreeWidget_SizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
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
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn superSizeHintForRow(self: QTreeWidget, row: i32) i32 {
        return qtc.QTreeWidget_SuperSizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, row: i32) callconv(.c) i32 `
    ///
    pub fn onSizeHintForRow(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) i32) void {
        qtc.QTreeWidget_OnSizeHintForRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn itemDelegateForIndex(self: QTreeWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_ItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superItemDelegateForIndex(self: QTreeWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_SuperItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) QAbstractItemDelegate `
    ///
    pub fn onItemDelegateForIndex(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) QAbstractItemDelegate) void {
        qtc.QTreeWidget_OnItemDelegateForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QTreeWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QTreeWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QTreeWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QTreeWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QTreeWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) QVariant) void {
        qtc.QTreeWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn updateEditorData(self: QTreeWidget) void {
        qtc.QTreeWidget_UpdateEditorData(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superUpdateEditorData(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperUpdateEditorData(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateEditorData(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnUpdateEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn updateEditorGeometries(self: QTreeWidget) void {
        qtc.QTreeWidget_UpdateEditorGeometries(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superUpdateEditorGeometries(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperUpdateEditorGeometries(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateEditorGeometries(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnUpdateEditorGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn verticalScrollbarAction(self: QTreeWidget, action: i32) void {
        qtc.QTreeWidget_VerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
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
    /// ` self: QTreeWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn superVerticalScrollbarAction(self: QTreeWidget, action: i32) void {
        qtc.QTreeWidget_SuperVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, action: i32) callconv(.c) void `
    ///
    pub fn onVerticalScrollbarAction(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn horizontalScrollbarValueChanged(self: QTreeWidget, value: i32) void {
        qtc.QTreeWidget_HorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: QTreeWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn superHorizontalScrollbarValueChanged(self: QTreeWidget, value: i32) void {
        qtc.QTreeWidget_SuperHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, value: i32) callconv(.c) void `
    ///
    pub fn onHorizontalScrollbarValueChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn closeEditor(self: QTreeWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTreeWidget_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
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
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn superCloseEditor(self: QTreeWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTreeWidget_SuperCloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn onCloseEditor(self: QTreeWidget, callback: *const fn (QTreeWidget, QWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnCloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QWidget `
    ///
    pub fn commitData(self: QTreeWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTreeWidget_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QWidget `
    ///
    pub fn superCommitData(self: QTreeWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTreeWidget_SuperCommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, editor: QWidget) callconv(.c) void `
    ///
    pub fn onCommitData(self: QTreeWidget, callback: *const fn (QTreeWidget, QWidget) callconv(.c) void) void {
        qtc.QTreeWidget_OnCommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QObject `
    ///
    pub fn editorDestroyed(self: QTreeWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QTreeWidget_EditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QObject `
    ///
    pub fn superEditorDestroyed(self: QTreeWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QTreeWidget_SuperEditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, editor: QObject) callconv(.c) void `
    ///
    pub fn onEditorDestroyed(self: QTreeWidget, callback: *const fn (QTreeWidget, QObject) callconv(.c) void) void {
        qtc.QTreeWidget_OnEditorDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn edit2(self: QTreeWidget, index: anytype, trigger: i32, _event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTreeWidget_Edit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEdit2(self: QTreeWidget, index: anytype, trigger: i32, _event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTreeWidget_SuperEdit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEdit2(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32, QEvent) callconv(.c) bool) void {
        qtc.QTreeWidget_OnEdit2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn selectionCommand(self: QTreeWidget, index: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTreeWidget_SelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn superSelectionCommand(self: QTreeWidget, index: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTreeWidget_SuperSelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex, event: QEvent) callconv(.c) i32 `
    ///
    pub fn onSelectionCommand(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, QEvent) callconv(.c) i32) void {
        qtc.QTreeWidget_OnSelectionCommand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startDrag` instead
    ///
    pub const StartDrag = startDrag;

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
    pub fn startDrag(self: QTreeWidget, supportedActions: i32) void {
        qtc.QTreeWidget_StartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### DEPRECATED: Use `superStartDrag` instead
    ///
    pub const SuperStartDrag = superStartDrag;

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
    pub fn superStartDrag(self: QTreeWidget, supportedActions: i32) void {
        qtc.QTreeWidget_SuperStartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### DEPRECATED: Use `onStartDrag` instead
    ///
    pub const OnStartDrag = onStartDrag;

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
    pub fn onStartDrag(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnStartDrag(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initViewItemOption` instead
    ///
    pub const InitViewItemOption = initViewItemOption;

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
    pub fn initViewItemOption(self: QTreeWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QTreeWidget_InitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `superInitViewItemOption` instead
    ///
    pub const SuperInitViewItemOption = superInitViewItemOption;

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
    pub fn superInitViewItemOption(self: QTreeWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QTreeWidget_SuperInitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitViewItemOption` instead
    ///
    pub const OnInitViewItemOption = onInitViewItemOption;

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
    pub fn onInitViewItemOption(self: QTreeWidget, callback: *const fn (QTreeWidget, QStyleOptionViewItem) callconv(.c) void) void {
        qtc.QTreeWidget_OnInitViewItemOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QTreeWidget, next: bool) bool {
        return qtc.QTreeWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QTreeWidget `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: QTreeWidget, next: bool) bool {
        return qtc.QTreeWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: QTreeWidget, callback: *const fn (QTreeWidget, bool) callconv(.c) bool) void {
        qtc.QTreeWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QTreeWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QTreeWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

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
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QTreeWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

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
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QTreeWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

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
    pub fn onDragLeaveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTreeWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTreeWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTreeWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTreeWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

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
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QTreeWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

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
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QTreeWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QResizeEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QTreeWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QTreeWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTreeWidget, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTreeWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTreeWidget, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTreeWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QTreeWidget, callback: *const fn (QTreeWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTreeWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn minimumSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn superMinimumSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QTreeWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTreeWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn sizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn superSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_SuperSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QTreeWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTreeWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn setupViewport(self: QTreeWidget, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QTreeWidget_SetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn superSetupViewport(self: QTreeWidget, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QTreeWidget_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, viewport: QWidget) callconv(.c) void `
    ///
    pub fn onSetupViewport(self: QTreeWidget, callback: *const fn (QTreeWidget, QWidget) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

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
    pub fn wheelEvent(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QTreeWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    pub fn superWheelEvent(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QTreeWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QWheelEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QTreeWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QTreeWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn initStyleOption(self: QTreeWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QTreeWidget_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn superInitStyleOption(self: QTreeWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QTreeWidget_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: QTreeWidget, callback: *const fn (QTreeWidget, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QTreeWidget_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn devType(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_DevType(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superDevType(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QTreeWidget, visible: bool) void {
        qtc.QTreeWidget_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QTreeWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: QTreeWidget, visible: bool) void {
        qtc.QTreeWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QTreeWidget, callback: *const fn (QTreeWidget, bool) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QTreeWidget, param1: i32) i32 {
        return qtc.QTreeWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QTreeWidget, param1: i32) i32 {
        return qtc.QTreeWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) i32) void {
        qtc.QTreeWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn hasHeightForWidth(self: QTreeWidget) bool {
        return qtc.QTreeWidget_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superHasHeightForWidth(self: QTreeWidget) bool {
        return qtc.QTreeWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QTreeWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTreeWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn paintEngine(self: QTreeWidget) QPaintEngine {
        return .{ .ptr = qtc.QTreeWidget_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn superPaintEngine(self: QTreeWidget) QPaintEngine {
        return .{ .ptr = qtc.QTreeWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QTreeWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QTreeWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTreeWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTreeWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QTreeWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QTreeWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEnterEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTreeWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTreeWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QTreeWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QTreeWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMoveEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QTreeWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QTreeWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QCloseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QTreeWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QTreeWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QTabletEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QTreeWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QTreeWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QActionEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QTreeWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QTreeWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QShowEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QTreeWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QTreeWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QHideEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QTreeWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTreeWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QTreeWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QTreeWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTreeWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QTreeWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QTreeWidget, param1: i32) i32 {
        return qtc.QTreeWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QTreeWidget, param1: i32) i32 {
        return qtc.QTreeWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) i32) void {
        qtc.QTreeWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QTreeWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTreeWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QTreeWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTreeWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter) callconv(.c) void) void {
        qtc.QTreeWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QTreeWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QTreeWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QTreeWidget, callback: *const fn (QTreeWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QTreeWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn sharedPainter(self: QTreeWidget) QPainter {
        return .{ .ptr = qtc.QTreeWidget_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn superSharedPainter(self: QTreeWidget) QPainter {
        return .{ .ptr = qtc.QTreeWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QTreeWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QTreeWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTreeWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTreeWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QChildEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTreeWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTreeWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTreeWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QTreeWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTreeWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QTreeWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTreeWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QTreeWidget, callback: *const fn (QTreeWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTreeWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QTreeWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTreeWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QTreeWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTreeWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QTreeWidget, callback: *const fn (QTreeWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTreeWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnResized` instead
    ///
    pub const ColumnResized = columnResized;

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
    pub fn columnResized(self: QTreeWidget, column: i32, oldSize: i32, newSize: i32) void {
        qtc.QTreeWidget_ColumnResized(@ptrCast(self.ptr), @bitCast(column), @bitCast(oldSize), @bitCast(newSize));
    }

    /// ### DEPRECATED: Use `superColumnResized` instead
    ///
    pub const SuperColumnResized = superColumnResized;

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
    pub fn superColumnResized(self: QTreeWidget, column: i32, oldSize: i32, newSize: i32) void {
        qtc.QTreeWidget_SuperColumnResized(@ptrCast(self.ptr), @bitCast(column), @bitCast(oldSize), @bitCast(newSize));
    }

    /// ### DEPRECATED: Use `onColumnResized` instead
    ///
    pub const OnColumnResized = onColumnResized;

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
    pub fn onColumnResized(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnColumnResized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCountChanged` instead
    ///
    pub const ColumnCountChanged = columnCountChanged;

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
    pub fn columnCountChanged(self: QTreeWidget, oldCount: i32, newCount: i32) void {
        qtc.QTreeWidget_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `superColumnCountChanged` instead
    ///
    pub const SuperColumnCountChanged = superColumnCountChanged;

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
    pub fn superColumnCountChanged(self: QTreeWidget, oldCount: i32, newCount: i32) void {
        qtc.QTreeWidget_SuperColumnCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `onColumnCountChanged` instead
    ///
    pub const OnColumnCountChanged = onColumnCountChanged;

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
    pub fn onColumnCountChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnColumnCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnMoved` instead
    ///
    pub const ColumnMoved = columnMoved;

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
    pub fn columnMoved(self: QTreeWidget) void {
        qtc.QTreeWidget_ColumnMoved(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superColumnMoved` instead
    ///
    pub const SuperColumnMoved = superColumnMoved;

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
    pub fn superColumnMoved(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperColumnMoved(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColumnMoved` instead
    ///
    pub const OnColumnMoved = onColumnMoved;

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
    pub fn onColumnMoved(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnColumnMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reexpand` instead
    ///
    pub const Reexpand = reexpand;

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
    pub fn reexpand(self: QTreeWidget) void {
        qtc.QTreeWidget_Reexpand(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReexpand` instead
    ///
    pub const SuperReexpand = superReexpand;

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
    pub fn superReexpand(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperReexpand(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReexpand` instead
    ///
    pub const OnReexpand = onReexpand;

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
    pub fn onReexpand(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnReexpand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsRemoved` instead
    ///
    pub const RowsRemoved = rowsRemoved;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn rowsRemoved(self: QTreeWidget, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTreeWidget_RowsRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superRowsRemoved` instead
    ///
    pub const SuperRowsRemoved = superRowsRemoved;

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
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superRowsRemoved(self: QTreeWidget, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTreeWidget_SuperRowsRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onRowsRemoved` instead
    ///
    pub const OnRowsRemoved = onRowsRemoved;

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
    pub fn onRowsRemoved(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnRowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawTree` instead
    ///
    pub const DrawTree = drawTree;

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
    pub fn drawTree(self: QTreeWidget, painter: anytype, region: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTreeWidget_DrawTree(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `superDrawTree` instead
    ///
    pub const SuperDrawTree = superDrawTree;

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
    pub fn superDrawTree(self: QTreeWidget, painter: anytype, region: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTreeWidget_SuperDrawTree(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `onDrawTree` instead
    ///
    pub const OnDrawTree = onDrawTree;

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
    pub fn onDrawTree(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter, QRegion) callconv(.c) void) void {
        qtc.QTreeWidget_OnDrawTree(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexRowSizeHint` instead
    ///
    pub const IndexRowSizeHint = indexRowSizeHint;

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
    pub fn indexRowSizeHint(self: QTreeWidget, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_IndexRowSizeHint(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superIndexRowSizeHint` instead
    ///
    pub const SuperIndexRowSizeHint = superIndexRowSizeHint;

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
    pub fn superIndexRowSizeHint(self: QTreeWidget, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_SuperIndexRowSizeHint(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onIndexRowSizeHint` instead
    ///
    pub const OnIndexRowSizeHint = onIndexRowSizeHint;

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
    pub fn onIndexRowSizeHint(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) i32) void {
        qtc.QTreeWidget_OnIndexRowSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowHeight` instead
    ///
    pub const RowHeight = rowHeight;

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
    pub fn rowHeight(self: QTreeWidget, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_RowHeight(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superRowHeight` instead
    ///
    pub const SuperRowHeight = superRowHeight;

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
    pub fn superRowHeight(self: QTreeWidget, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_SuperRowHeight(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onRowHeight` instead
    ///
    pub const OnRowHeight = onRowHeight;

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
    pub fn onRowHeight(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) i32) void {
        qtc.QTreeWidget_OnRowHeight(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn state(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_State(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn superState(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperState(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onState(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _state: qabstractitemview_enums.State `
    ///
    pub fn setState(self: QTreeWidget, _state: i32) void {
        qtc.QTreeWidget_SetState(@ptrCast(self.ptr), @bitCast(_state));
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
    /// ` self: QTreeWidget `
    ///
    /// ` _state: qabstractitemview_enums.State `
    ///
    pub fn superSetState(self: QTreeWidget, _state: i32) void {
        qtc.QTreeWidget_SuperSetState(@ptrCast(self.ptr), @bitCast(_state));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, state: qabstractitemview_enums.State) callconv(.c) void `
    ///
    pub fn onSetState(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn scheduleDelayedItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_ScheduleDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superScheduleDelayedItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperScheduleDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onScheduleDelayedItemsLayout(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnScheduleDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn executeDelayedItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_ExecuteDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superExecuteDelayedItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperExecuteDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onExecuteDelayedItemsLayout(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnExecuteDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` region: QRegion `
    ///
    pub fn setDirtyRegion(self: QTreeWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTreeWidget_SetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` region: QRegion `
    ///
    pub fn superSetDirtyRegion(self: QTreeWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTreeWidget_SuperSetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, region: QRegion) callconv(.c) void `
    ///
    pub fn onSetDirtyRegion(self: QTreeWidget, callback: *const fn (QTreeWidget, QRegion) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scrollDirtyRegion(self: QTreeWidget, dx: i32, dy: i32) void {
        qtc.QTreeWidget_ScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
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
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn superScrollDirtyRegion(self: QTreeWidget, dx: i32, dy: i32) void {
        qtc.QTreeWidget_SuperScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn onScrollDirtyRegion(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn dirtyRegionOffset(self: QTreeWidget) QPoint {
        return .{ .ptr = qtc.QTreeWidget_DirtyRegionOffset(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn superDirtyRegionOffset(self: QTreeWidget) QPoint {
        return .{ .ptr = qtc.QTreeWidget_SuperDirtyRegionOffset(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPoint `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDirtyRegionOffset(self: QTreeWidget, callback: *const fn () callconv(.c) QPoint) void {
        qtc.QTreeWidget_OnDirtyRegionOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn startAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_StartAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superStartAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperStartAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartAutoScroll(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnStartAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn stopAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_StopAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superStopAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperStopAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStopAutoScroll(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnStopAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn doAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_DoAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superDoAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperDoAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDoAutoScroll(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnDoAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn dropIndicatorPosition(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_DropIndicatorPosition(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn superDropIndicatorPosition(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperDropIndicatorPosition(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDropIndicatorPosition(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnDropIndicatorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    pub fn setViewportMargins(self: QTreeWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTreeWidget_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    pub fn superSetViewportMargins(self: QTreeWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTreeWidget_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn onSetViewportMargins(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn viewportMargins(self: QTreeWidget) QMargins {
        return .{ .ptr = qtc.QTreeWidget_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn superViewportMargins(self: QTreeWidget) QMargins {
        return .{ .ptr = qtc.QTreeWidget_SuperViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportMargins(self: QTreeWidget, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QTreeWidget_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPainter `
    ///
    pub fn drawFrame(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QTreeWidget_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPainter `
    ///
    pub fn superDrawFrame(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QTreeWidget_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: QPainter) callconv(.c) void `
    ///
    pub fn onDrawFrame(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter) callconv(.c) void) void {
        qtc.QTreeWidget_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn updateMicroFocus(self: QTreeWidget) void {
        qtc.QTreeWidget_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superUpdateMicroFocus(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn create(self: QTreeWidget) void {
        qtc.QTreeWidget_Create(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superCreate(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn destroy(self: QTreeWidget) void {
        qtc.QTreeWidget_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superDestroy(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn focusNextChild(self: QTreeWidget) bool {
        return qtc.QTreeWidget_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superFocusNextChild(self: QTreeWidget) bool {
        return qtc.QTreeWidget_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QTreeWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTreeWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn focusPreviousChild(self: QTreeWidget) bool {
        return qtc.QTreeWidget_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superFocusPreviousChild(self: QTreeWidget) bool {
        return qtc.QTreeWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QTreeWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTreeWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn sender(self: QTreeWidget) QObject {
        return .{ .ptr = qtc.QTreeWidget_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn superSender(self: QTreeWidget) QObject {
        return .{ .ptr = qtc.QTreeWidget_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QTreeWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTreeWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn senderSignalIndex(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn superSenderSignalIndex(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QTreeWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTreeWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QTreeWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTreeWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTreeWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QTreeWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTreeWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QTreeWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTreeWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QTreeWidget, callback: *const fn (QTreeWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.QTreeWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QTreeWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTreeWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QTreeWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QTreeWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTreeWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) f64) void {
        qtc.QTreeWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dtor.QTreeWidget)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn delete(self: QTreeWidget) void {
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
