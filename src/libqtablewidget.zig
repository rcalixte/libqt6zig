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
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html)
pub const QTableWidgetSelectionRange = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTableWidgetSelectionRange,

    pub const _is_QTableWidgetSelectionRange = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTableWidgetSelectionRange object in C++ memory
    ///
    pub fn new() QTableWidgetSelectionRange {
        return .{ .ptr = qtc.QTableWidgetSelectionRange_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTableWidgetSelectionRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTableWidgetSelectionRange `
    ///
    pub fn new2(other: anytype) QTableWidgetSelectionRange {
        comptime _ = @TypeOf(other)._is_QTableWidgetSelectionRange;
        return .{ .ptr = qtc.QTableWidgetSelectionRange_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTableWidgetSelectionRange object and invalidate the source QTableWidgetSelectionRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTableWidgetSelectionRange `
    ///
    pub fn new3(other: anytype) QTableWidgetSelectionRange {
        comptime _ = @TypeOf(other)._is_QTableWidgetSelectionRange;
        return .{ .ptr = qtc.QTableWidgetSelectionRange_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTableWidgetSelectionRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` top: i32 `
    ///
    /// ` left: i32 `
    ///
    /// ` bottom: i32 `
    ///
    /// ` right: i32 `
    ///
    pub fn new4(top: i32, left: i32, bottom: i32, right: i32) QTableWidgetSelectionRange {
        return .{ .ptr = qtc.QTableWidgetSelectionRange_new4(@bitCast(top), @bitCast(left), @bitCast(bottom), @bitCast(right)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    /// ` other: QTableWidgetSelectionRange `
    ///
    pub fn copyAssign(self: QTableWidgetSelectionRange, other: QTableWidgetSelectionRange) void {
        qtc.QTableWidgetSelectionRange_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    /// ` other: QTableWidgetSelectionRange `
    ///
    pub fn moveAssign(self: QTableWidgetSelectionRange, other: QTableWidgetSelectionRange) void {
        qtc.QTableWidgetSelectionRange_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `topRow` instead
    ///
    pub const TopRow = topRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#topRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn topRow(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_TopRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bottomRow` instead
    ///
    pub const BottomRow = bottomRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#bottomRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn bottomRow(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_BottomRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `leftColumn` instead
    ///
    pub const LeftColumn = leftColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#leftColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn leftColumn(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_LeftColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rightColumn` instead
    ///
    pub const RightColumn = rightColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rightColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn rightColumn(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_RightColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn rowCount(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn columnCount(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#dtor.QTableWidgetSelectionRange)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn delete(self: QTableWidgetSelectionRange) void {
        qtc.QTableWidgetSelectionRange_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html)
pub const QTableWidgetItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTableWidgetItem,

    pub const _is_QTableWidgetItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTableWidgetItem object in C++ memory
    ///
    pub fn new() QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidgetItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTableWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(_text: []const u8) QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QTableWidgetItem_new2(text_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTableWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new3(_icon: anytype, _text: []const u8) QTableWidgetItem {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QTableWidgetItem_new3(@ptrCast(_icon.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTableWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTableWidgetItem `
    ///
    pub fn new4(other: anytype) QTableWidgetItem {
        comptime _ = @TypeOf(other)._is_QTableWidgetItem;
        return .{ .ptr = qtc.QTableWidgetItem_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTableWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new5(typeVal: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidgetItem_new5(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTableWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new6(_text: []const u8, typeVal: i32) QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QTableWidgetItem_new6(text_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QTableWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new7(_icon: anytype, _text: []const u8, typeVal: i32) QTableWidgetItem {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QTableWidgetItem_new7(@ptrCast(_icon.ptr), text_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn clone(self: QTableWidgetItem) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidgetItem_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QTableWidgetItem `
    ///
    pub fn onClone(self: QTableWidgetItem, callback: *const fn () callconv(.c) QTableWidgetItem) void {
        qtc.QTableWidgetItem_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn superClone(self: QTableWidgetItem) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidgetItem_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tableWidget` instead
    ///
    pub const TableWidget = tableWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#tableWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn tableWidget(self: QTableWidgetItem) QTableWidget {
        return .{ .ptr = qtc.QTableWidgetItem_TableWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `row` instead
    ///
    pub const Row = row;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn row(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_Row(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn column(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_Column(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelected` instead
    ///
    pub const SetSelected = setSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` select: bool `
    ///
    pub fn setSelected(self: QTableWidgetItem, select: bool) void {
        qtc.QTableWidgetItem_SetSelected(@ptrCast(self.ptr), select);
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn isSelected(self: QTableWidgetItem) bool {
        return qtc.QTableWidgetItem_IsSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` _flags: flag of qnamespace_enums.ItemFlag `
    ///
    pub fn setFlags(self: QTableWidgetItem, _flags: i32) void {
        qtc.QTableWidgetItem_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QTableWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTableWidgetItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidgetItem.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QTableWidgetItem, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QTableWidgetItem_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn icon(self: QTableWidgetItem) QIcon {
        return .{ .ptr = qtc.QTableWidgetItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QTableWidgetItem, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QTableWidgetItem_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QTableWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTableWidgetItem_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidgetItem.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QTableWidgetItem, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QTableWidgetItem_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QTableWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTableWidgetItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidgetItem.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QTableWidgetItem, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QTableWidgetItem_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QTableWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTableWidgetItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidgetItem.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QTableWidgetItem, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QTableWidgetItem_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn font(self: QTableWidgetItem) QFont {
        return .{ .ptr = qtc.QTableWidgetItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QTableWidgetItem, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTableWidgetItem_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#textAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn textAlignment(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextAlignment` instead
    ///
    pub const SetTextAlignment = setTextAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` alignment: i32 `
    ///
    pub fn setTextAlignment(self: QTableWidgetItem, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `setTextAlignment2` instead
    ///
    pub const SetTextAlignment2 = setTextAlignment2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` alignment: qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment2(self: QTableWidgetItem, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment2(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `setTextAlignment3` instead
    ///
    pub const SetTextAlignment3 = setTextAlignment3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment3(self: QTableWidgetItem, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment3(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn background(self: QTableWidgetItem) QBrush {
        return .{ .ptr = qtc.QTableWidgetItem_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QTableWidgetItem, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTableWidgetItem_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn foreground(self: QTableWidgetItem) QBrush {
        return .{ .ptr = qtc.QTableWidgetItem_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QTableWidgetItem, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTableWidgetItem_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `checkState` instead
    ///
    pub const CheckState = checkState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#checkState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CheckState `
    ///
    pub fn checkState(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_CheckState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckState` instead
    ///
    pub const SetCheckState = setCheckState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setCheckState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn setCheckState(self: QTableWidgetItem, state: i32) void {
        qtc.QTableWidgetItem_SetCheckState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn sizeHint(self: QTableWidgetItem) QSize {
        return .{ .ptr = qtc.QTableWidgetItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizeHint` instead
    ///
    pub const SetSizeHint = setSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` size: QSize `
    ///
    pub fn setSizeHint(self: QTableWidgetItem, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QTableWidgetItem_SetSizeHint(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: QTableWidgetItem, role: i32) QVariant {
        return .{ .ptr = qtc.QTableWidgetItem_Data(@ptrCast(self.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` callback: *const fn (self: QTableWidgetItem, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, i32) callconv(.c) QVariant) void {
        qtc.QTableWidgetItem_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: QTableWidgetItem, role: i32) QVariant {
        return .{ .ptr = qtc.QTableWidgetItem_SuperData(@ptrCast(self.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setData(self: QTableWidgetItem, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTableWidgetItem_SetData(@ptrCast(self.ptr), @bitCast(role), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` callback: *const fn (self: QTableWidgetItem, role: i32, value: QVariant) callconv(.c) void `
    ///
    pub fn onSetData(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, i32, QVariant) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn superSetData(self: QTableWidgetItem, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTableWidgetItem_SuperSetData(@ptrCast(self.ptr), @bitCast(role), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` other: QTableWidgetItem `
    ///
    pub fn operatorLesser(self: QTableWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTableWidgetItem;
        return qtc.QTableWidgetItem_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onOperatorLesser` instead
    ///
    pub const OnOperatorLesser = onOperatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` callback: *const fn (self: QTableWidgetItem, other: QTableWidgetItem) callconv(.c) bool `
    ///
    pub fn onOperatorLesser(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, QTableWidgetItem) callconv(.c) bool) void {
        qtc.QTableWidgetItem_OnOperatorLesser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOperatorLesser` instead
    ///
    pub const SuperOperatorLesser = superOperatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` other: QTableWidgetItem `
    ///
    pub fn superOperatorLesser(self: QTableWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTableWidgetItem;
        return qtc.QTableWidgetItem_SuperOperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn read(self: QTableWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QTableWidgetItem_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` callback: *const fn (self: QTableWidgetItem, in: QDataStream) callconv(.c) void `
    ///
    pub fn onRead(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn superRead(self: QTableWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QTableWidgetItem_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn write(self: QTableWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QTableWidgetItem_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` callback: *const fn (self: QTableWidgetItem, out: QDataStream) callconv(.c) void `
    ///
    pub fn onWrite(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn superWrite(self: QTableWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QTableWidgetItem_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` other: QTableWidgetItem `
    ///
    pub fn operatorAssign(self: QTableWidgetItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTableWidgetItem;
        qtc.QTableWidgetItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn type0(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#dtor.QTableWidgetItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn delete(self: QTableWidgetItem) void {
        qtc.QTableWidgetItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html)
pub const QTableWidget = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTableWidget,

    pub const _is_QTableWidget = {};
    pub const _is_QTableView = {};
    pub const _is_QAbstractItemView = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTableWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QTableWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QTableWidget_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTableWidget object in C++ memory
    ///
    pub fn new2() QTableWidget {
        return .{ .ptr = qtc.QTableWidget_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTableWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    pub fn new3(rows: i32, columns: i32) QTableWidget {
        return .{ .ptr = qtc.QTableWidget_new3(@bitCast(rows), @bitCast(columns)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTableWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new4(rows: i32, columns: i32, _parent: anytype) QTableWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QTableWidget_new4(@bitCast(rows), @bitCast(columns), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn metaObject(self: QTableWidget) QMetaObject {
        return .{ .ptr = qtc.QTableWidget_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QTableWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTableWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn superMetaObject(self: QTableWidget) QMetaObject {
        return .{ .ptr = qtc.QTableWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTableWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTableWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTableWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTableWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTableWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QTableWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTableWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTableWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QTableWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTableWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRowCount` instead
    ///
    pub const SetRowCount = setRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` rows: i32 `
    ///
    pub fn setRowCount(self: QTableWidget, rows: i32) void {
        qtc.QTableWidget_SetRowCount(@ptrCast(self.ptr), @bitCast(rows));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn rowCount(self: QTableWidget) i32 {
        return qtc.QTableWidget_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColumnCount` instead
    ///
    pub const SetColumnCount = setColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` columns: i32 `
    ///
    pub fn setColumnCount(self: QTableWidget, columns: i32) void {
        qtc.QTableWidget_SetColumnCount(@ptrCast(self.ptr), @bitCast(columns));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn columnCount(self: QTableWidget) i32 {
        return qtc.QTableWidget_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `row` instead
    ///
    pub const Row = row;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn row(self: QTableWidget, _item: anytype) i32 {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        return qtc.QTableWidget_Row(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn column(self: QTableWidget, _item: anytype) i32 {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        return qtc.QTableWidget_Column(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn item(self: QTableWidget, _row: i32, _column: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_Item(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn setItem(self: QTableWidget, _row: i32, _column: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetItem(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `takeItem` instead
    ///
    pub const TakeItem = takeItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#takeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn takeItem(self: QTableWidget, _row: i32, _column: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_TakeItem(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _data: QMimeData `
    ///
    pub fn items(self: QTableWidget, allocator: std.mem.Allocator, _data: anytype) []QTableWidgetItem {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        const _arr: qtc.libqt_list = qtc.QTableWidget_Items(@ptrCast(self.ptr), @ptrCast(_data.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTableWidgetItem, _arr.len) catch @panic("QTableWidget.items: Memory allocation failed");
        const _data_val: [*]QtC.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `indexFromItem` instead
    ///
    pub const IndexFromItem = indexFromItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#indexFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn indexFromItem(self: QTableWidget, _item: anytype) QModelIndex {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        return .{ .ptr = qtc.QTableWidget_IndexFromItem(@ptrCast(self.ptr), @ptrCast(_item.ptr)) };
    }

    /// ### DEPRECATED: Use `itemFromIndex` instead
    ///
    pub const ItemFromIndex = itemFromIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn itemFromIndex(self: QTableWidget, index: anytype) QTableWidgetItem {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_ItemFromIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `verticalHeaderItem` instead
    ///
    pub const VerticalHeaderItem = verticalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#verticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn verticalHeaderItem(self: QTableWidget, _row: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_VerticalHeaderItem(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `setVerticalHeaderItem` instead
    ///
    pub const SetVerticalHeaderItem = setVerticalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn setVerticalHeaderItem(self: QTableWidget, _row: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetVerticalHeaderItem(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `takeVerticalHeaderItem` instead
    ///
    pub const TakeVerticalHeaderItem = takeVerticalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#takeVerticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn takeVerticalHeaderItem(self: QTableWidget, _row: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_TakeVerticalHeaderItem(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `horizontalHeaderItem` instead
    ///
    pub const HorizontalHeaderItem = horizontalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#horizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn horizontalHeaderItem(self: QTableWidget, _column: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_HorizontalHeaderItem(@ptrCast(self.ptr), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `setHorizontalHeaderItem` instead
    ///
    pub const SetHorizontalHeaderItem = setHorizontalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn setHorizontalHeaderItem(self: QTableWidget, _column: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetHorizontalHeaderItem(@ptrCast(self.ptr), @bitCast(_column), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `takeHorizontalHeaderItem` instead
    ///
    pub const TakeHorizontalHeaderItem = takeHorizontalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#takeHorizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn takeHorizontalHeaderItem(self: QTableWidget, _column: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_TakeHorizontalHeaderItem(@ptrCast(self.ptr), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `setVerticalHeaderLabels` instead
    ///
    pub const SetVerticalHeaderLabels = setVerticalHeaderLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setVerticalHeaderLabels(self: QTableWidget, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QTableWidget.setVerticalHeaderLabels: Memory allocation failed");
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
        qtc.QTableWidget_SetVerticalHeaderLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `setHorizontalHeaderLabels` instead
    ///
    pub const SetHorizontalHeaderLabels = setHorizontalHeaderLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setHorizontalHeaderLabels(self: QTableWidget, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QTableWidget.setHorizontalHeaderLabels: Memory allocation failed");
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
        qtc.QTableWidget_SetHorizontalHeaderLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `currentRow` instead
    ///
    pub const CurrentRow = currentRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn currentRow(self: QTableWidget) i32 {
        return qtc.QTableWidget_CurrentRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentColumn` instead
    ///
    pub const CurrentColumn = currentColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn currentColumn(self: QTableWidget) i32 {
        return qtc.QTableWidget_CurrentColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentItem` instead
    ///
    pub const CurrentItem = currentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn currentItem(self: QTableWidget) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_CurrentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCurrentItem` instead
    ///
    pub const SetCurrentItem = setCurrentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn setCurrentItem(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetCurrentItem(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentItem2` instead
    ///
    pub const SetCurrentItem2 = setCurrentItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn setCurrentItem2(self: QTableWidget, _item: anytype, command: i32) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetCurrentItem2(@ptrCast(self.ptr), @ptrCast(_item.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `setCurrentCell` instead
    ///
    pub const SetCurrentCell = setCurrentCell;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn setCurrentCell(self: QTableWidget, _row: i32, _column: i32) void {
        qtc.QTableWidget_SetCurrentCell(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `setCurrentCell2` instead
    ///
    pub const SetCurrentCell2 = setCurrentCell2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn setCurrentCell2(self: QTableWidget, _row: i32, _column: i32, command: i32) void {
        qtc.QTableWidget_SetCurrentCell2(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @bitCast(command));
    }

    /// ### DEPRECATED: Use `sortItems` instead
    ///
    pub const SortItems = sortItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn sortItems(self: QTableWidget, _column: i32) void {
        qtc.QTableWidget_SortItems(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `setSortingEnabled` instead
    ///
    pub const SetSortingEnabled = setSortingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setSortingEnabled(self: QTableWidget, enable: bool) void {
        qtc.QTableWidget_SetSortingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isSortingEnabled` instead
    ///
    pub const IsSortingEnabled = isSortingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#isSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn isSortingEnabled(self: QTableWidget) bool {
        return qtc.QTableWidget_IsSortingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `editItem` instead
    ///
    pub const EditItem = editItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#editItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn editItem(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_EditItem(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `openPersistentEditor` instead
    ///
    pub const OpenPersistentEditor = openPersistentEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn openPersistentEditor(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_OpenPersistentEditor(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `closePersistentEditor` instead
    ///
    pub const ClosePersistentEditor = closePersistentEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn closePersistentEditor(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_ClosePersistentEditor(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `isPersistentEditorOpen` instead
    ///
    pub const IsPersistentEditorOpen = isPersistentEditorOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn isPersistentEditorOpen(self: QTableWidget, _item: anytype) bool {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        return qtc.QTableWidget_IsPersistentEditorOpen(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `cellWidget` instead
    ///
    pub const CellWidget = cellWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn cellWidget(self: QTableWidget, _row: i32, _column: i32) QWidget {
        return .{ .ptr = qtc.QTableWidget_CellWidget(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `setCellWidget` instead
    ///
    pub const SetCellWidget = setCellWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCellWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setCellWidget(self: QTableWidget, _row: i32, _column: i32, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QTableWidget_SetCellWidget(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `removeCellWidget` instead
    ///
    pub const RemoveCellWidget = removeCellWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#removeCellWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn removeCellWidget(self: QTableWidget, _row: i32, _column: i32) void {
        qtc.QTableWidget_RemoveCellWidget(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `setRangeSelected` instead
    ///
    pub const SetRangeSelected = setRangeSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setRangeSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` range: QTableWidgetSelectionRange `
    ///
    /// ` select: bool `
    ///
    pub fn setRangeSelected(self: QTableWidget, range: anytype, select: bool) void {
        comptime _ = @TypeOf(range)._is_QTableWidgetSelectionRange;
        qtc.QTableWidget_SetRangeSelected(@ptrCast(self.ptr), @ptrCast(range.ptr), select);
    }

    /// ### DEPRECATED: Use `selectedRanges` instead
    ///
    pub const SelectedRanges = selectedRanges;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#selectedRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedRanges(self: QTableWidget, allocator: std.mem.Allocator) []QTableWidgetSelectionRange {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SelectedRanges(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTableWidgetSelectionRange, _arr.len) catch @panic("QTableWidget.selectedRanges: Memory allocation failed");
        const _data_val: [*]QtC.QTableWidgetSelectionRange = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedItems` instead
    ///
    pub const SelectedItems = selectedItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedItems(self: QTableWidget, allocator: std.mem.Allocator) []QTableWidgetItem {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SelectedItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTableWidgetItem, _arr.len) catch @panic("QTableWidget.selectedItems: Memory allocation failed");
        const _data_val: [*]QtC.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `findItems` instead
    ///
    pub const FindItems = findItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn findItems(self: QTableWidget, allocator: std.mem.Allocator, _text: []const u8, _flags: i32) []QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTableWidget_FindItems(@ptrCast(self.ptr), text_str, @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTableWidgetItem, _arr.len) catch @panic("QTableWidget.findItems: Memory allocation failed");
        const _data_val: [*]QtC.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `visualRow` instead
    ///
    pub const VisualRow = visualRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#visualRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` logicalRow: i32 `
    ///
    pub fn visualRow(self: QTableWidget, logicalRow: i32) i32 {
        return qtc.QTableWidget_VisualRow(@ptrCast(self.ptr), @bitCast(logicalRow));
    }

    /// ### DEPRECATED: Use `visualColumn` instead
    ///
    pub const VisualColumn = visualColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#visualColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` logicalColumn: i32 `
    ///
    pub fn visualColumn(self: QTableWidget, logicalColumn: i32) i32 {
        return qtc.QTableWidget_VisualColumn(@ptrCast(self.ptr), @bitCast(logicalColumn));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn itemAt(self: QTableWidget, p: anytype) QTableWidgetItem {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_ItemAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn itemAt2(self: QTableWidget, _x: i32, _y: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_ItemAt2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `visualItemRect` instead
    ///
    pub const VisualItemRect = visualItemRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#visualItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn visualItemRect(self: QTableWidget, _item: anytype) QRect {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        return .{ .ptr = qtc.QTableWidget_VisualItemRect(@ptrCast(self.ptr), @ptrCast(_item.ptr)) };
    }

    /// ### DEPRECATED: Use `itemPrototype` instead
    ///
    pub const ItemPrototype = itemPrototype;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn itemPrototype(self: QTableWidget) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_ItemPrototype(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemPrototype` instead
    ///
    pub const SetItemPrototype = setItemPrototype;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setItemPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn setItemPrototype(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetItemPrototype(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `scrollToItem` instead
    ///
    pub const ScrollToItem = scrollToItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn scrollToItem(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_ScrollToItem(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn insertRow(self: QTableWidget, _row: i32) void {
        qtc.QTableWidget_InsertRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `insertColumn` instead
    ///
    pub const InsertColumn = insertColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn insertColumn(self: QTableWidget, _column: i32) void {
        qtc.QTableWidget_InsertColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `removeRow` instead
    ///
    pub const RemoveRow = removeRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn removeRow(self: QTableWidget, _row: i32) void {
        qtc.QTableWidget_RemoveRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `removeColumn` instead
    ///
    pub const RemoveColumn = removeColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn removeColumn(self: QTableWidget, _column: i32) void {
        qtc.QTableWidget_RemoveColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn clear(self: QTableWidget) void {
        qtc.QTableWidget_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearContents` instead
    ///
    pub const ClearContents = clearContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#clearContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn clearContents(self: QTableWidget) void {
        qtc.QTableWidget_ClearContents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemPressed` instead
    ///
    pub const ItemPressed = itemPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn itemPressed(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemPressed(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemPressed` instead
    ///
    pub const OnItemPressed = onItemPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn onItemPressed(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemClicked` instead
    ///
    pub const ItemClicked = itemClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn itemClicked(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemClicked(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemClicked` instead
    ///
    pub const OnItemClicked = onItemClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn onItemClicked(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemDoubleClicked` instead
    ///
    pub const ItemDoubleClicked = itemDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn itemDoubleClicked(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemDoubleClicked(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemDoubleClicked` instead
    ///
    pub const OnItemDoubleClicked = onItemDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn onItemDoubleClicked(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemActivated` instead
    ///
    pub const ItemActivated = itemActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn itemActivated(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemActivated(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemActivated` instead
    ///
    pub const OnItemActivated = onItemActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn onItemActivated(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemEntered` instead
    ///
    pub const ItemEntered = itemEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn itemEntered(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemEntered(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemEntered` instead
    ///
    pub const OnItemEntered = onItemEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn onItemEntered(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChanged` instead
    ///
    pub const ItemChanged = itemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    pub fn itemChanged(self: QTableWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemChanged(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemChanged` instead
    ///
    pub const OnItemChanged = onItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn onItemChanged(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentItemChanged` instead
    ///
    pub const CurrentItemChanged = currentItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` current: QTableWidgetItem `
    ///
    /// ` previous: QTableWidgetItem `
    ///
    pub fn currentItemChanged(self: QTableWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QTableWidgetItem;
        comptime _ = @TypeOf(previous)._is_QTableWidgetItem;
        qtc.QTableWidget_CurrentItemChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentItemChanged` instead
    ///
    pub const OnCurrentItemChanged = onCurrentItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, current: QTableWidgetItem, previous: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn onCurrentItemChanged(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CurrentItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemSelectionChanged` instead
    ///
    pub const ItemSelectionChanged = itemSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn itemSelectionChanged(self: QTableWidget) void {
        qtc.QTableWidget_ItemSelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onItemSelectionChanged` instead
    ///
    pub const OnItemSelectionChanged = onItemSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget) callconv(.c) void `
    ///
    pub fn onItemSelectionChanged(self: QTableWidget, callback: *const fn (QTableWidget) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cellPressed` instead
    ///
    pub const CellPressed = cellPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn cellPressed(self: QTableWidget, _row: i32, _column: i32) void {
        qtc.QTableWidget_CellPressed(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `onCellPressed` instead
    ///
    pub const OnCellPressed = onCellPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn onCellPressed(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cellClicked` instead
    ///
    pub const CellClicked = cellClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn cellClicked(self: QTableWidget, _row: i32, _column: i32) void {
        qtc.QTableWidget_CellClicked(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `onCellClicked` instead
    ///
    pub const OnCellClicked = onCellClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn onCellClicked(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cellDoubleClicked` instead
    ///
    pub const CellDoubleClicked = cellDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn cellDoubleClicked(self: QTableWidget, _row: i32, _column: i32) void {
        qtc.QTableWidget_CellDoubleClicked(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `onCellDoubleClicked` instead
    ///
    pub const OnCellDoubleClicked = onCellDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn onCellDoubleClicked(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cellActivated` instead
    ///
    pub const CellActivated = cellActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn cellActivated(self: QTableWidget, _row: i32, _column: i32) void {
        qtc.QTableWidget_CellActivated(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `onCellActivated` instead
    ///
    pub const OnCellActivated = onCellActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn onCellActivated(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cellEntered` instead
    ///
    pub const CellEntered = cellEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn cellEntered(self: QTableWidget, _row: i32, _column: i32) void {
        qtc.QTableWidget_CellEntered(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `onCellEntered` instead
    ///
    pub const OnCellEntered = onCellEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn onCellEntered(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cellChanged` instead
    ///
    pub const CellChanged = cellChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn cellChanged(self: QTableWidget, _row: i32, _column: i32) void {
        qtc.QTableWidget_CellChanged(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `onCellChanged` instead
    ///
    pub const OnCellChanged = onCellChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn onCellChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentCellChanged` instead
    ///
    pub const CurrentCellChanged = currentCellChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _currentRow: i32 `
    ///
    /// ` _currentColumn: i32 `
    ///
    /// ` previousRow: i32 `
    ///
    /// ` previousColumn: i32 `
    ///
    pub fn currentCellChanged(self: QTableWidget, _currentRow: i32, _currentColumn: i32, previousRow: i32, previousColumn: i32) void {
        qtc.QTableWidget_CurrentCellChanged(@ptrCast(self.ptr), @bitCast(_currentRow), @bitCast(_currentColumn), @bitCast(previousRow), @bitCast(previousColumn));
    }

    /// ### DEPRECATED: Use `onCurrentCellChanged` instead
    ///
    pub const OnCurrentCellChanged = onCurrentCellChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, currentRow: i32, currentColumn: i32, previousRow: i32, previousColumn: i32) callconv(.c) void `
    ///
    pub fn onCurrentCellChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CurrentCellChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn event(self: QTableWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QTableWidget_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, e: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) bool) void {
        qtc.QTableWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn superEvent(self: QTableWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QTableWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: QTableWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTableWidget_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTableWidget.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTableWidget.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onMimeTypes` instead
    ///
    pub const OnMimeTypes = onMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onMimeTypes(self: QTableWidget, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QTableWidget_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeTypes` instead
    ///
    pub const SuperMimeTypes = superMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superMimeTypes(self: QTableWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTableWidget.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTableWidget.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _items: []QTableWidgetItem `
    ///
    pub fn mimeData(self: QTableWidget, _items: []QTableWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = _items.len,
            .data = @ptrCast(_items.ptr),
        };
        return .{ .ptr = qtc.QTableWidget_MimeData(@ptrCast(self.ptr), items_list) };
    }

    /// ### DEPRECATED: Use `onMimeData` instead
    ///
    pub const OnMimeData = onMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, items: qtc.libqt_list ([]QTableWidgetItem)) callconv(.c) QMimeData `
    ///
    pub fn onMimeData(self: QTableWidget, callback: *const fn (QTableWidget, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QTableWidget_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeData` instead
    ///
    pub const SuperMimeData = superMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _items: []QTableWidgetItem `
    ///
    pub fn superMimeData(self: QTableWidget, _items: []QTableWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = _items.len,
            .data = @ptrCast(_items.ptr),
        };
        return .{ .ptr = qtc.QTableWidget_SuperMimeData(@ptrCast(self.ptr), items_list) };
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn dropMimeData(self: QTableWidget, _row: i32, _column: i32, _data: anytype, action: i32) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        return qtc.QTableWidget_DropMimeData(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(_data.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32, data: QMimeData, action: qnamespace_enums.DropAction) callconv(.c) bool `
    ///
    pub fn onDropMimeData(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, QMimeData, i32) callconv(.c) bool) void {
        qtc.QTableWidget_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn superDropMimeData(self: QTableWidget, _row: i32, _column: i32, _data: anytype, action: i32) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        return qtc.QTableWidget_SuperDropMimeData(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(_data.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `supportedDropActions` instead
    ///
    pub const SupportedDropActions = supportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDropActions(self: QTableWidget) i32 {
        return qtc.QTableWidget_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDropActions` instead
    ///
    pub const OnSupportedDropActions = onSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDropActions(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedDropActions` instead
    ///
    pub const SuperSupportedDropActions = superSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDropActions(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QTableWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QTableWidget, callback: *const fn (QTableWidget, QDropEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QTableWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sortItems2` instead
    ///
    pub const SortItems2 = sortItems2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sortItems2(self: QTableWidget, _column: i32, order: i32) void {
        qtc.QTableWidget_SortItems2(@ptrCast(self.ptr), @bitCast(_column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `scrollToItem2` instead
    ///
    pub const ScrollToItem2 = scrollToItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _item: QTableWidgetItem `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn scrollToItem2(self: QTableWidget, _item: anytype, hint: i32) void {
        comptime _ = @TypeOf(_item)._is_QTableWidgetItem;
        qtc.QTableWidget_ScrollToItem2(@ptrCast(self.ptr), @ptrCast(_item.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QTableWidget, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QTableView_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `onSetModel` instead
    ///
    pub const OnSetModel = onSetModel;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onSetModel(self: QTableWidget, callback: *const fn (QTableWidget, QAbstractItemModel) callconv(.c) void) void {
        qtc.QTableView_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModel` instead
    ///
    pub const SuperSetModel = superSetModel;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn superSetModel(self: QTableWidget, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QTableView_SuperSetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `horizontalHeader` instead
    ///
    pub const HorizontalHeader = horizontalHeader;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn horizontalHeader(self: QTableWidget) QHeaderView {
        return .{ .ptr = qtc.QTableView_HorizontalHeader(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `verticalHeader` instead
    ///
    pub const VerticalHeader = verticalHeader;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn verticalHeader(self: QTableWidget) QHeaderView {
        return .{ .ptr = qtc.QTableView_VerticalHeader(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHorizontalHeader` instead
    ///
    pub const SetHorizontalHeader = setHorizontalHeader;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setHorizontalHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` header: QHeaderView `
    ///
    pub fn setHorizontalHeader(self: QTableWidget, header: anytype) void {
        comptime _ = @TypeOf(header)._is_QHeaderView;
        qtc.QTableView_SetHorizontalHeader(@ptrCast(self.ptr), @ptrCast(header.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalHeader` instead
    ///
    pub const SetVerticalHeader = setVerticalHeader;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setVerticalHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` header: QHeaderView `
    ///
    pub fn setVerticalHeader(self: QTableWidget, header: anytype) void {
        comptime _ = @TypeOf(header)._is_QHeaderView;
        qtc.QTableView_SetVerticalHeader(@ptrCast(self.ptr), @ptrCast(header.ptr));
    }

    /// ### DEPRECATED: Use `rowViewportPosition` instead
    ///
    pub const RowViewportPosition = rowViewportPosition;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn rowViewportPosition(self: QTableWidget, _row: i32) i32 {
        return qtc.QTableView_RowViewportPosition(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `rowAt` instead
    ///
    pub const RowAt = rowAt;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _y: i32 `
    ///
    pub fn rowAt(self: QTableWidget, _y: i32) i32 {
        return qtc.QTableView_RowAt(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `setRowHeight` instead
    ///
    pub const SetRowHeight = setRowHeight;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn setRowHeight(self: QTableWidget, _row: i32, _height: i32) void {
        qtc.QTableView_SetRowHeight(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `rowHeight` instead
    ///
    pub const RowHeight = rowHeight;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn rowHeight(self: QTableWidget, _row: i32) i32 {
        return qtc.QTableView_RowHeight(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `columnViewportPosition` instead
    ///
    pub const ColumnViewportPosition = columnViewportPosition;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn columnViewportPosition(self: QTableWidget, _column: i32) i32 {
        return qtc.QTableView_ColumnViewportPosition(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `columnAt` instead
    ///
    pub const ColumnAt = columnAt;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _x: i32 `
    ///
    pub fn columnAt(self: QTableWidget, _x: i32) i32 {
        return qtc.QTableView_ColumnAt(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setColumnWidth` instead
    ///
    pub const SetColumnWidth = setColumnWidth;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` _width: i32 `
    ///
    pub fn setColumnWidth(self: QTableWidget, _column: i32, _width: i32) void {
        qtc.QTableView_SetColumnWidth(@ptrCast(self.ptr), @bitCast(_column), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `columnWidth` instead
    ///
    pub const ColumnWidth = columnWidth;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn columnWidth(self: QTableWidget, _column: i32) i32 {
        return qtc.QTableView_ColumnWidth(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `isRowHidden` instead
    ///
    pub const IsRowHidden = isRowHidden;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn isRowHidden(self: QTableWidget, _row: i32) bool {
        return qtc.QTableView_IsRowHidden(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `setRowHidden` instead
    ///
    pub const SetRowHidden = setRowHidden;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _hide: bool `
    ///
    pub fn setRowHidden(self: QTableWidget, _row: i32, _hide: bool) void {
        qtc.QTableView_SetRowHidden(@ptrCast(self.ptr), @bitCast(_row), _hide);
    }

    /// ### DEPRECATED: Use `isColumnHidden` instead
    ///
    pub const IsColumnHidden = isColumnHidden;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn isColumnHidden(self: QTableWidget, _column: i32) bool {
        return qtc.QTableView_IsColumnHidden(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `setColumnHidden` instead
    ///
    pub const SetColumnHidden = setColumnHidden;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` _hide: bool `
    ///
    pub fn setColumnHidden(self: QTableWidget, _column: i32, _hide: bool) void {
        qtc.QTableView_SetColumnHidden(@ptrCast(self.ptr), @bitCast(_column), _hide);
    }

    /// ### DEPRECATED: Use `showGrid` instead
    ///
    pub const ShowGrid = showGrid;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#showGrid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn showGrid(self: QTableWidget) bool {
        return qtc.QTableView_ShowGrid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `gridStyle` instead
    ///
    pub const GridStyle = gridStyle;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#gridStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PenStyle `
    ///
    pub fn gridStyle(self: QTableWidget) i32 {
        return qtc.QTableView_GridStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridStyle` instead
    ///
    pub const SetGridStyle = setGridStyle;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _style: qnamespace_enums.PenStyle `
    ///
    pub fn setGridStyle(self: QTableWidget, _style: i32) void {
        qtc.QTableView_SetGridStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `setWordWrap` instead
    ///
    pub const SetWordWrap = setWordWrap;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setWordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` on: bool `
    ///
    pub fn setWordWrap(self: QTableWidget, on: bool) void {
        qtc.QTableView_SetWordWrap(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `wordWrap` instead
    ///
    pub const WordWrap = wordWrap;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn wordWrap(self: QTableWidget) bool {
        return qtc.QTableView_WordWrap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCornerButtonEnabled` instead
    ///
    pub const SetCornerButtonEnabled = setCornerButtonEnabled;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setCornerButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setCornerButtonEnabled(self: QTableWidget, enable: bool) void {
        qtc.QTableView_SetCornerButtonEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isCornerButtonEnabled` instead
    ///
    pub const IsCornerButtonEnabled = isCornerButtonEnabled;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn isCornerButtonEnabled(self: QTableWidget) bool {
        return qtc.QTableView_IsCornerButtonEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpan` instead
    ///
    pub const SetSpan = setSpan;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _rowSpan: i32 `
    ///
    /// ` _columnSpan: i32 `
    ///
    pub fn setSpan(self: QTableWidget, _row: i32, _column: i32, _rowSpan: i32, _columnSpan: i32) void {
        qtc.QTableView_SetSpan(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @bitCast(_rowSpan), @bitCast(_columnSpan));
    }

    /// ### DEPRECATED: Use `rowSpan` instead
    ///
    pub const RowSpan = rowSpan;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn rowSpan(self: QTableWidget, _row: i32, _column: i32) i32 {
        return qtc.QTableView_RowSpan(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `columnSpan` instead
    ///
    pub const ColumnSpan = columnSpan;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn columnSpan(self: QTableWidget, _row: i32, _column: i32) i32 {
        return qtc.QTableView_ColumnSpan(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `clearSpans` instead
    ///
    pub const ClearSpans = clearSpans;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn clearSpans(self: QTableWidget) void {
        qtc.QTableView_ClearSpans(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectRow` instead
    ///
    pub const SelectRow = selectRow;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn selectRow(self: QTableWidget, _row: i32) void {
        qtc.QTableView_SelectRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `selectColumn` instead
    ///
    pub const SelectColumn = selectColumn;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn selectColumn(self: QTableWidget, _column: i32) void {
        qtc.QTableView_SelectColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `hideRow` instead
    ///
    pub const HideRow = hideRow;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#hideRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn hideRow(self: QTableWidget, _row: i32) void {
        qtc.QTableView_HideRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `hideColumn` instead
    ///
    pub const HideColumn = hideColumn;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn hideColumn(self: QTableWidget, _column: i32) void {
        qtc.QTableView_HideColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `showRow` instead
    ///
    pub const ShowRow = showRow;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#showRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn showRow(self: QTableWidget, _row: i32) void {
        qtc.QTableView_ShowRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `showColumn` instead
    ///
    pub const ShowColumn = showColumn;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#showColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn showColumn(self: QTableWidget, _column: i32) void {
        qtc.QTableView_ShowColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `resizeRowToContents` instead
    ///
    pub const ResizeRowToContents = resizeRowToContents;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn resizeRowToContents(self: QTableWidget, _row: i32) void {
        qtc.QTableView_ResizeRowToContents(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `resizeRowsToContents` instead
    ///
    pub const ResizeRowsToContents = resizeRowsToContents;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn resizeRowsToContents(self: QTableWidget) void {
        qtc.QTableView_ResizeRowsToContents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resizeColumnToContents` instead
    ///
    pub const ResizeColumnToContents = resizeColumnToContents;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn resizeColumnToContents(self: QTableWidget, _column: i32) void {
        qtc.QTableView_ResizeColumnToContents(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `resizeColumnsToContents` instead
    ///
    pub const ResizeColumnsToContents = resizeColumnsToContents;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn resizeColumnsToContents(self: QTableWidget) void {
        qtc.QTableView_ResizeColumnsToContents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortByColumn` instead
    ///
    pub const SortByColumn = sortByColumn;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sortByColumn(self: QTableWidget, _column: i32, order: i32) void {
        qtc.QTableView_SortByColumn(@ptrCast(self.ptr), @bitCast(_column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `setShowGrid` instead
    ///
    pub const SetShowGrid = setShowGrid;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _show: bool `
    ///
    pub fn setShowGrid(self: QTableWidget, _show: bool) void {
        qtc.QTableView_SetShowGrid(@ptrCast(self.ptr), _show);
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
    /// ` self: QTableWidget `
    ///
    pub fn model(self: QTableWidget) QAbstractItemModel {
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
    /// ` self: QTableWidget `
    ///
    pub fn selectionModel(self: QTableWidget) QItemSelectionModel {
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
    /// ` self: QTableWidget `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegate(self: QTableWidget, delegate: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn itemDelegate(self: QTableWidget) QAbstractItemDelegate {
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
    /// ` self: QTableWidget `
    ///
    /// ` mode: qabstractitemview_enums.SelectionMode `
    ///
    pub fn setSelectionMode(self: QTableWidget, mode: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionMode `
    ///
    pub fn selectionMode(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` behavior: qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn setSelectionBehavior(self: QTableWidget, behavior: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn selectionBehavior(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn currentIndex(self: QTableWidget) QModelIndex {
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
    /// ` self: QTableWidget `
    ///
    pub fn rootIndex(self: QTableWidget) QModelIndex {
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
    /// ` self: QTableWidget `
    ///
    /// ` triggers: flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn setEditTriggers(self: QTableWidget, triggers: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn editTriggers(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn setVerticalScrollMode(self: QTableWidget, mode: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn verticalScrollMode(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn resetVerticalScrollMode(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn setHorizontalScrollMode(self: QTableWidget, mode: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn horizontalScrollMode(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn resetHorizontalScrollMode(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoScroll(self: QTableWidget, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn hasAutoScroll(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` margin: i32 `
    ///
    pub fn setAutoScrollMargin(self: QTableWidget, margin: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn autoScrollMargin(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabKeyNavigation(self: QTableWidget, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn tabKeyNavigation(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setDropIndicatorShown(self: QTableWidget, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn showDropIndicator(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setDragEnabled(self: QTableWidget, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn dragEnabled(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` overwrite: bool `
    ///
    pub fn setDragDropOverwriteMode(self: QTableWidget, overwrite: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn dragDropOverwriteMode(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` behavior: qabstractitemview_enums.DragDropMode `
    ///
    pub fn setDragDropMode(self: QTableWidget, behavior: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DragDropMode `
    ///
    pub fn dragDropMode(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` dropAction: qnamespace_enums.DropAction `
    ///
    pub fn setDefaultDropAction(self: QTableWidget, dropAction: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn defaultDropAction(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setAlternatingRowColors(self: QTableWidget, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn alternatingRowColors(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` _size: QSize `
    ///
    pub fn setIconSize(self: QTableWidget, _size: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn iconSize(self: QTableWidget) QSize {
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
    /// ` self: QTableWidget `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    pub fn setTextElideMode(self: QTableWidget, mode: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn textElideMode(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn sizeHintForIndex(self: QTableWidget, index: anytype) QSize {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setIndexWidget(self: QTableWidget, index: anytype, widget: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn indexWidget(self: QTableWidget, index: anytype) QWidget {
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
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegateForRow(self: QTableWidget, _row: i32, delegate: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn itemDelegateForRow(self: QTableWidget, _row: i32) QAbstractItemDelegate {
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
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegateForColumn(self: QTableWidget, _column: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(_column), @ptrCast(delegate.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn itemDelegateForColumn(self: QTableWidget, _column: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(_column)) };
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn itemDelegate2(self: QTableWidget, index: anytype) QAbstractItemDelegate {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn edit(self: QTableWidget, index: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn clearSelection(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn setCurrentIndex(self: QTableWidget, index: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn scrollToTop(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn scrollToBottom(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn update(self: QTableWidget, index: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn pressed(self: QTableWidget, index: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onPressed(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn clicked(self: QTableWidget, index: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onClicked(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn doubleClicked(self: QTableWidget, index: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn activated(self: QTableWidget, index: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onActivated(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn entered(self: QTableWidget, index: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onEntered(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn viewportEntered(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget) callconv(.c) void `
    ///
    pub fn onViewportEntered(self: QTableWidget, callback: *const fn (QTableWidget) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _size: QSize `
    ///
    pub fn iconSizeChanged(self: QTableWidget, _size: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, size: QSize) callconv(.c) void `
    ///
    pub fn onIconSizeChanged(self: QTableWidget, callback: *const fn (QTableWidget, QSize) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn verticalScrollBarPolicy(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setVerticalScrollBarPolicy(self: QTableWidget, _verticalScrollBarPolicy: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn verticalScrollBar(self: QTableWidget) QScrollBar {
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
    /// ` self: QTableWidget `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setVerticalScrollBar(self: QTableWidget, scrollbar: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn horizontalScrollBarPolicy(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setHorizontalScrollBarPolicy(self: QTableWidget, _horizontalScrollBarPolicy: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn horizontalScrollBar(self: QTableWidget) QScrollBar {
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
    /// ` self: QTableWidget `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setHorizontalScrollBar(self: QTableWidget, scrollbar: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn cornerWidget(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setCornerWidget(self: QTableWidget, widget: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addScrollBarWidget(self: QTableWidget, widget: anytype, alignment: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn scrollBarWidgets(self: QTableWidget, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QTableWidget.scrollBarWidgets: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    pub fn viewport(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setViewport(self: QTableWidget, widget: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn maximumViewportSize(self: QTableWidget) QSize {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn sizeAdjustPolicy(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn setSizeAdjustPolicy(self: QTableWidget, policy: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn frameStyle(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _frameStyle: i32 `
    ///
    pub fn setFrameStyle(self: QTableWidget, _frameStyle: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn frameWidth(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn frameShape(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: QTableWidget, _frameShape: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn frameShadow(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _frameShadow: qframe_enums.Shadow `
    ///
    pub fn setFrameShadow(self: QTableWidget, _frameShadow: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn lineWidth(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QTableWidget, _lineWidth: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn midLineWidth(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QTableWidget, _midLineWidth: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn frameRect(self: QTableWidget) QRect {
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
    /// ` self: QTableWidget `
    ///
    /// ` _frameRect: QRect `
    ///
    pub fn setFrameRect(self: QTableWidget, _frameRect: anytype) void {
        comptime _ = @TypeOf(_frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(_frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// Upcasts to a QPaintDevice object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn asQPaintDevice(self: QTableWidget) QPaintDevice {
        return .{ .ptr = qtc.QWidget_AsQPaintDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// Downcasts to a QTableWidget object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qpaintdevice: QPaintDevice `
    ///
    pub fn fromQPaintDevice(_qpaintdevice: anytype) QTableWidget {
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
    /// ` self: QTableWidget `
    ///
    pub fn winId(self: QTableWidget) usize {
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
    /// ` self: QTableWidget `
    ///
    pub fn createWinId(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn internalWinId(self: QTableWidget) usize {
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
    /// ` self: QTableWidget `
    ///
    pub fn effectiveWinId(self: QTableWidget) usize {
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
    /// ` self: QTableWidget `
    ///
    pub fn style(self: QTableWidget) QStyle {
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
    /// ` self: QTableWidget `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QTableWidget, _style: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn isTopLevel(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn isWindow(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn isModal(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QTableWidget, _windowModality: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn isEnabled(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QTableWidget, param1: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QTableWidget, enabled: bool) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QTableWidget, disabled: bool) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QTableWidget, windowModified: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn frameGeometry(self: QTableWidget) QRect {
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
    /// ` self: QTableWidget `
    ///
    pub fn geometry(self: QTableWidget) QRect {
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
    /// ` self: QTableWidget `
    ///
    pub fn normalGeometry(self: QTableWidget) QRect {
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
    /// ` self: QTableWidget `
    ///
    pub fn x(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn y(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn pos(self: QTableWidget) QPoint {
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
    /// ` self: QTableWidget `
    ///
    pub fn frameSize(self: QTableWidget) QSize {
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
    /// ` self: QTableWidget `
    ///
    pub fn size(self: QTableWidget) QSize {
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
    /// ` self: QTableWidget `
    ///
    pub fn width(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn height(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn rect(self: QTableWidget) QRect {
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
    /// ` self: QTableWidget `
    ///
    pub fn childrenRect(self: QTableWidget) QRect {
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
    /// ` self: QTableWidget `
    ///
    pub fn childrenRegion(self: QTableWidget) QRegion {
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
    /// ` self: QTableWidget `
    ///
    pub fn minimumSize(self: QTableWidget) QSize {
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
    /// ` self: QTableWidget `
    ///
    pub fn maximumSize(self: QTableWidget) QSize {
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
    /// ` self: QTableWidget `
    ///
    pub fn minimumWidth(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn minimumHeight(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn maximumWidth(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn maximumHeight(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QTableWidget, _minimumSize: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QTableWidget, minw: i32, minh: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QTableWidget, _maximumSize: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QTableWidget, maxw: i32, maxh: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QTableWidget, minw: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QTableWidget, minh: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QTableWidget, maxw: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QTableWidget, maxh: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn sizeIncrement(self: QTableWidget) QSize {
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
    /// ` self: QTableWidget `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QTableWidget, _sizeIncrement: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QTableWidget, w: i32, h: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn baseSize(self: QTableWidget) QSize {
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
    /// ` self: QTableWidget `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QTableWidget, _baseSize: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QTableWidget, basew: i32, baseh: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QTableWidget, fixedSize: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QTableWidget, w: i32, h: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QTableWidget, w: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QTableWidget, h: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QTableWidget, param1: anytype) QPointF {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QTableWidget, param1: anytype) QPoint {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QTableWidget, param1: anytype) QPointF {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QTableWidget, param1: anytype) QPoint {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QTableWidget, param1: anytype) QPointF {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QTableWidget, param1: anytype) QPoint {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QTableWidget, param1: anytype) QPointF {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QTableWidget, param1: anytype) QPoint {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QTableWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QTableWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QTableWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QTableWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTableWidget `
    ///
    pub fn window(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    pub fn nativeParentWidget(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    pub fn topLevelWidget(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    pub fn palette(self: QTableWidget) QPalette {
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
    /// ` self: QTableWidget `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QTableWidget, _palette: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QTableWidget, _backgroundRole: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QTableWidget, _foregroundRole: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn font(self: QTableWidget) QFont {
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
    /// ` self: QTableWidget `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QTableWidget, _font: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn fontMetrics(self: QTableWidget) QFontMetrics {
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
    /// ` self: QTableWidget `
    ///
    pub fn fontInfo(self: QTableWidget) QFontInfo {
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
    /// ` self: QTableWidget `
    ///
    pub fn cursor(self: QTableWidget) QCursor {
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
    /// ` self: QTableWidget `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QTableWidget, _cursor: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn unsetCursor(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QTableWidget, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn hasMouseTracking(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn underMouse(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QTableWidget, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn hasTabletTracking(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QTableWidget, _mask: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QTableWidget, _mask: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn mask(self: QTableWidget) QRegion {
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
    /// ` self: QTableWidget `
    ///
    pub fn clearMask(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QTableWidget, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target_.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QTableWidget, painter: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn grab(self: QTableWidget) QPixmap {
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
    /// ` self: QTableWidget `
    ///
    pub fn graphicsEffect(self: QTableWidget) QGraphicsEffect {
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
    /// ` self: QTableWidget `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QTableWidget, effect: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QTableWidget, typeVal: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QTableWidget, typeVal: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QTableWidget, _windowTitle: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QTableWidget, _styleSheet: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.styleSheet: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.windowTitle: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setWindowIcon(self: QTableWidget, _icon: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn windowIcon(self: QTableWidget) QIcon {
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
    /// ` self: QTableWidget `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QTableWidget, _windowIconText: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.windowIconText: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QTableWidget, _windowRole: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.windowRole: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QTableWidget, filePath: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.windowFilePath: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QTableWidget, level: f64) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn windowOpacity(self: QTableWidget) f64 {
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
    /// ` self: QTableWidget `
    ///
    pub fn isWindowModified(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QTableWidget, _toolTip: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.toolTip: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QTableWidget, msec: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn toolTipDuration(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QTableWidget, _statusTip: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.statusTip: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QTableWidget, _whatsThis: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.whatsThis: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.accessibleName: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QTableWidget, name: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.accessibleDescription: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QTableWidget, description: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTableWidget, direction: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn unsetLayoutDirection(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QTableWidget, _locale: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn locale(self: QTableWidget) QLocale {
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
    /// ` self: QTableWidget `
    ///
    pub fn unsetLocale(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn isRightToLeft(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn isLeftToRight(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn setFocus(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn isActiveWindow(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn activateWindow(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn clearFocus(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QTableWidget, reason: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QTableWidget, policy: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn hasFocus(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QTableWidget, _focusProxy: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn focusProxy(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QTableWidget, policy: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn grabMouse(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QTableWidget, param1: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn releaseMouse(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn grabKeyboard(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn releaseKeyboard(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QTableWidget, key: anytype) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QTableWidget, id: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QTableWidget, id: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QTableWidget, id: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn updatesEnabled(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QTableWidget, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn graphicsProxyWidget(self: QTableWidget) QGraphicsProxyWidget {
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
    /// ` self: QTableWidget `
    ///
    pub fn repaint(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QTableWidget, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QTableWidget, param1: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QTableWidget, param1: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QTableWidget, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QTableWidget, param1: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QTableWidget, param1: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QTableWidget, hidden: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn show(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn hide(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn showMinimized(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn showMaximized(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn showFullScreen(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn showNormal(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn close(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn raise(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn lower(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QTableWidget, param1: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QTableWidget, _x: i32, _y: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QTableWidget, param1: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QTableWidget, w: i32, h: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QTableWidget, param1: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QTableWidget, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QTableWidget, _geometry: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QTableWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QTableWidget.saveGeometry: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QTableWidget, _geometry: []u8) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn adjustSize(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn isVisible(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QTableWidget, param1: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn isHidden(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn isMinimized(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn isMaximized(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn isFullScreen(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QTableWidget, _state: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QTableWidget, _state: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn sizePolicy(self: QTableWidget) QSizePolicy {
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
    /// ` self: QTableWidget `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QTableWidget, _sizePolicy: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QTableWidget, horizontal: i32, vertical: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn visibleRegion(self: QTableWidget) QRegion {
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
    /// ` self: QTableWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: QTableWidget, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QTableWidget, margins: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn contentsMargins(self: QTableWidget) QMargins {
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
    /// ` self: QTableWidget `
    ///
    pub fn contentsRect(self: QTableWidget) QRect {
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
    /// ` self: QTableWidget `
    ///
    pub fn layout(self: QTableWidget) QLayout {
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
    /// ` self: QTableWidget `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QTableWidget, _layout: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn updateGeometry(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QTableWidget, _parent: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QTableWidget, _parent: anytype, f: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QTableWidget, dx: i32, dy: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QTableWidget, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn focusWidget(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    pub fn nextInFocusChain(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    pub fn previousInFocusChain(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    pub fn acceptDrops(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QTableWidget, on: bool) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QTableWidget, action: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QTableWidget, _actions: []QAction) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QTableWidget, before: anytype, _actions: []QAction) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QTableWidget, before: anytype, action: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QTableWidget, action: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QTableWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QTableWidget.actions: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction2(self: QTableWidget, _text: []const u8) QAction {
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
    /// ` self: QTableWidget `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction3(self: QTableWidget, _icon: anytype, _text: []const u8) QAction {
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
    /// ` self: QTableWidget `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QTableWidget, _text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTableWidget `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QTableWidget, _icon: anytype, _text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTableWidget `
    ///
    pub fn parentWidget(self: QTableWidget) QWidget {
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
    /// ` self: QTableWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QTableWidget, typeVal: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QTableWidget, param1: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QTableWidget, typeVal: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QTableWidget, _x: i32, _y: i32) QWidget {
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
    /// ` self: QTableWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QTableWidget, p: anytype) QWidget {
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
    /// ` self: QTableWidget `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QTableWidget, p: anytype) QWidget {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QTableWidget, param1: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QTableWidget, param1: i32) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn ensurePolished(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: QTableWidget, child: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn autoFillBackground(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QTableWidget, enabled: bool) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn backingStore(self: QTableWidget) QBackingStore {
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
    /// ` self: QTableWidget `
    ///
    pub fn windowHandle(self: QTableWidget) QWindow {
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
    /// ` self: QTableWidget `
    ///
    pub fn screen(self: QTableWidget) QScreen {
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
    /// ` self: QTableWidget `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QTableWidget, _screen: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QTableWidget, title: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn windowIconChanged(self: QTableWidget, _icon: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QTableWidget, callback: *const fn (QTableWidget, QIcon) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QTableWidget, iconText: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QTableWidget, _pos: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QTableWidget, callback: *const fn (QTableWidget, QPoint) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QTableWidget, hints: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QTableWidget, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target_.ptr), @ptrCast(targetOffset.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QTableWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target_.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: QTableWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target_.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
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
    /// ` self: QTableWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QTableWidget, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QTableWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: QTableWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QTableWidget, rectangle: anytype) QPixmap {
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
    /// ` self: QTableWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` _flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QTableWidget, typeVal: i32, _flags: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QTableWidget, key: anytype, context: i32) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QTableWidget, id: i32, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QTableWidget, id: i32, enable: bool) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QTableWidget, param1: i32, on: bool) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QTableWidget, param1: i32, on: bool) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTableWidget.objectName: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTableWidget, name: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn isWidgetType(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn isWindowType(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn isQuickItemType(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn signalsBlocked(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTableWidget, b: bool) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn thread(self: QTableWidget) QThread {
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
    /// ` self: QTableWidget `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTableWidget, _thread: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTableWidget, interval: i32) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTableWidget, time: i64) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTableWidget, id: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTableWidget, id: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTableWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTableWidget.children: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTableWidget, filterObj: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTableWidget, obj: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTableWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTableWidget `
    ///
    pub fn disconnect3(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTableWidget, receiver: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn dumpObjectTree(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn dumpObjectInfo(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTableWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTableWidget, name: [:0]const u8) QVariant {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTableWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTableWidget.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTableWidget.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    pub fn bindingStorage(self: QTableWidget) QBindingStorage {
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
    /// ` self: QTableWidget `
    ///
    pub fn bindingStorage2(self: QTableWidget) QBindingStorage {
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
    /// ` self: QTableWidget `
    ///
    pub fn destroyed(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTableWidget, callback: *const fn (QTableWidget) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn parent(self: QTableWidget) QObject {
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
    /// ` self: QTableWidget `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTableWidget, classname: [:0]const u8) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn deleteLater(self: QTableWidget) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTableWidget, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTableWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTableWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTableWidget, signal: [:0]const u8) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTableWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTableWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTableWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTableWidget, param1: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTableWidget, callback: *const fn (QTableWidget, QObject) callconv(.c) void) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn paintingActive(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn widthMM(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn heightMM(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn logicalDpiX(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn logicalDpiY(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn physicalDpiX(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn physicalDpiY(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn devicePixelRatio(self: QTableWidget) f64 {
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
    /// ` self: QTableWidget `
    ///
    pub fn devicePixelRatioF(self: QTableWidget) f64 {
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
    /// ` self: QTableWidget `
    ///
    pub fn colorCount(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    pub fn depth(self: QTableWidget) i32 {
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

    /// ### DEPRECATED: Use `setRootIndex` instead
    ///
    pub const SetRootIndex = setRootIndex;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn setRootIndex(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTableWidget_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superSetRootIndex` instead
    ///
    pub const SuperSetRootIndex = superSetRootIndex;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superSetRootIndex(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTableWidget_SuperSetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onSetRootIndex` instead
    ///
    pub const OnSetRootIndex = onSetRootIndex;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onSetRootIndex(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
        qtc.QTableWidget_OnSetRootIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSelectionModel` instead
    ///
    pub const SetSelectionModel = setSelectionModel;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _selectionModel: QItemSelectionModel `
    ///
    pub fn setSelectionModel(self: QTableWidget, _selectionModel: anytype) void {
        comptime _ = @TypeOf(_selectionModel)._is_QItemSelectionModel;
        qtc.QTableWidget_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(_selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `superSetSelectionModel` instead
    ///
    pub const SuperSetSelectionModel = superSetSelectionModel;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _selectionModel: QItemSelectionModel `
    ///
    pub fn superSetSelectionModel(self: QTableWidget, _selectionModel: anytype) void {
        comptime _ = @TypeOf(_selectionModel)._is_QItemSelectionModel;
        qtc.QTableWidget_SuperSetSelectionModel(@ptrCast(self.ptr), @ptrCast(_selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `onSetSelectionModel` instead
    ///
    pub const OnSetSelectionModel = onSetSelectionModel;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, selectionModel: QItemSelectionModel) callconv(.c) void `
    ///
    pub fn onSetSelectionModel(self: QTableWidget, callback: *const fn (QTableWidget, QItemSelectionModel) callconv(.c) void) void {
        qtc.QTableWidget_OnSetSelectionModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doItemsLayout` instead
    ///
    pub const DoItemsLayout = doItemsLayout;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn doItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_DoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoItemsLayout` instead
    ///
    pub const SuperDoItemsLayout = superDoItemsLayout;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn superDoItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_SuperDoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoItemsLayout` instead
    ///
    pub const OnDoItemsLayout = onDoItemsLayout;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDoItemsLayout(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnDoItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visualRect` instead
    ///
    pub const VisualRect = visualRect;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn visualRect(self: QTableWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_VisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `superVisualRect` instead
    ///
    pub const SuperVisualRect = superVisualRect;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superVisualRect(self: QTableWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_SuperVisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onVisualRect` instead
    ///
    pub const OnVisualRect = onVisualRect;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVisualRect(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) QRect) void {
        qtc.QTableWidget_OnVisualRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollTo` instead
    ///
    pub const ScrollTo = scrollTo;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn scrollTo(self: QTableWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTableWidget_ScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `superScrollTo` instead
    ///
    pub const SuperScrollTo = superScrollTo;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn superScrollTo(self: QTableWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTableWidget_SuperScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onScrollTo` instead
    ///
    pub const OnScrollTo = onScrollTo;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void `
    ///
    pub fn onScrollTo(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnScrollTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexAt` instead
    ///
    pub const IndexAt = indexAt;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#indexAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn indexAt(self: QTableWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_IndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `superIndexAt` instead
    ///
    pub const SuperIndexAt = superIndexAt;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#indexAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn superIndexAt(self: QTableWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_SuperIndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndexAt` instead
    ///
    pub const OnIndexAt = onIndexAt;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#indexAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, p: QPoint) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndexAt(self: QTableWidget, callback: *const fn (QTableWidget, QPoint) callconv(.c) QModelIndex) void {
        qtc.QTableWidget_OnIndexAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollContentsBy` instead
    ///
    pub const ScrollContentsBy = scrollContentsBy;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scrollContentsBy(self: QTableWidget, dx: i32, dy: i32) void {
        qtc.QTableWidget_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `superScrollContentsBy` instead
    ///
    pub const SuperScrollContentsBy = superScrollContentsBy;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn superScrollContentsBy(self: QTableWidget, dx: i32, dy: i32) void {
        qtc.QTableWidget_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollContentsBy` instead
    ///
    pub const OnScrollContentsBy = onScrollContentsBy;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn onScrollContentsBy(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initViewItemOption` instead
    ///
    pub const InitViewItemOption = initViewItemOption;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn initViewItemOption(self: QTableWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QTableWidget_InitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `superInitViewItemOption` instead
    ///
    pub const SuperInitViewItemOption = superInitViewItemOption;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn superInitViewItemOption(self: QTableWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QTableWidget_SuperInitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitViewItemOption` instead
    ///
    pub const OnInitViewItemOption = onInitViewItemOption;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, option: QStyleOptionViewItem) callconv(.c) void `
    ///
    pub fn onInitViewItemOption(self: QTableWidget, callback: *const fn (QTableWidget, QStyleOptionViewItem) callconv(.c) void) void {
        qtc.QTableWidget_OnInitViewItemOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn paintEvent(self: QTableWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QTableWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn superPaintEvent(self: QTableWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QTableWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: QTableWidget, callback: *const fn (QTableWidget, QPaintEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTableWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTableWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QTableWidget, callback: *const fn (QTableWidget, QTimerEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalOffset` instead
    ///
    pub const HorizontalOffset = horizontalOffset;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn horizontalOffset(self: QTableWidget) i32 {
        return qtc.QTableWidget_HorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHorizontalOffset` instead
    ///
    pub const SuperHorizontalOffset = superHorizontalOffset;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn superHorizontalOffset(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperHorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHorizontalOffset` instead
    ///
    pub const OnHorizontalOffset = onHorizontalOffset;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onHorizontalOffset(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnHorizontalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalOffset` instead
    ///
    pub const VerticalOffset = verticalOffset;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn verticalOffset(self: QTableWidget) i32 {
        return qtc.QTableWidget_VerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superVerticalOffset` instead
    ///
    pub const SuperVerticalOffset = superVerticalOffset;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn superVerticalOffset(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperVerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVerticalOffset` instead
    ///
    pub const OnVerticalOffset = onVerticalOffset;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onVerticalOffset(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnVerticalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveCursor` instead
    ///
    pub const MoveCursor = moveCursor;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn moveCursor(self: QTableWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QTableWidget_MoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `superMoveCursor` instead
    ///
    pub const SuperMoveCursor = superMoveCursor;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn superMoveCursor(self: QTableWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QTableWidget_SuperMoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `onMoveCursor` instead
    ///
    pub const OnMoveCursor = onMoveCursor;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMoveCursor(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QTableWidget_OnMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSelection` instead
    ///
    pub const SetSelection = setSelection;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn setSelection(self: QTableWidget, _rect: anytype, command: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QTableWidget_SetSelection(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `superSetSelection` instead
    ///
    pub const SuperSetSelection = superSetSelection;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn superSetSelection(self: QTableWidget, _rect: anytype, command: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QTableWidget_SuperSetSelection(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `onSetSelection` instead
    ///
    pub const OnSetSelection = onSetSelection;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, rect: QRect, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn onSetSelection(self: QTableWidget, callback: *const fn (QTableWidget, QRect, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visualRegionForSelection` instead
    ///
    pub const VisualRegionForSelection = visualRegionForSelection;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn visualRegionForSelection(self: QTableWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QTableWidget_VisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `superVisualRegionForSelection` instead
    ///
    pub const SuperVisualRegionForSelection = superVisualRegionForSelection;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn superVisualRegionForSelection(self: QTableWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QTableWidget_SuperVisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `onVisualRegionForSelection` instead
    ///
    pub const OnVisualRegionForSelection = onVisualRegionForSelection;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, selection: QItemSelection) callconv(.c) QRegion `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVisualRegionForSelection(self: QTableWidget, callback: *const fn (QTableWidget, QItemSelection) callconv(.c) QRegion) void {
        qtc.QTableWidget_OnVisualRegionForSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedIndexes` instead
    ///
    pub const SelectedIndexes = selectedIndexes;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedIndexes(self: QTableWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QTableWidget.selectedIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superSelectedIndexes` instead
    ///
    pub const SuperSelectedIndexes = superSelectedIndexes;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superSelectedIndexes(self: QTableWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SuperSelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QTableWidget.selectedIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onSelectedIndexes` instead
    ///
    pub const OnSelectedIndexes = onSelectedIndexes;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onSelectedIndexes(self: QTableWidget, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QTableWidget_OnSelectedIndexes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateGeometries` instead
    ///
    pub const UpdateGeometries = updateGeometries;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn updateGeometries(self: QTableWidget) void {
        qtc.QTableWidget_UpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateGeometries` instead
    ///
    pub const SuperUpdateGeometries = superUpdateGeometries;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn superUpdateGeometries(self: QTableWidget) void {
        qtc.QTableWidget_SuperUpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGeometries` instead
    ///
    pub const OnUpdateGeometries = onUpdateGeometries;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateGeometries(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportSizeHint` instead
    ///
    pub const ViewportSizeHint = viewportSizeHint;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn viewportSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superViewportSizeHint` instead
    ///
    pub const SuperViewportSizeHint = superViewportSizeHint;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn superViewportSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onViewportSizeHint` instead
    ///
    pub const OnViewportSizeHint = onViewportSizeHint;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportSizeHint(self: QTableWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTableWidget_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHintForRow` instead
    ///
    pub const SizeHintForRow = sizeHintForRow;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn sizeHintForRow(self: QTableWidget, _row: i32) i32 {
        return qtc.QTableWidget_SizeHintForRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `superSizeHintForRow` instead
    ///
    pub const SuperSizeHintForRow = superSizeHintForRow;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn superSizeHintForRow(self: QTableWidget, _row: i32) i32 {
        return qtc.QTableWidget_SuperSizeHintForRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `onSizeHintForRow` instead
    ///
    pub const OnSizeHintForRow = onSizeHintForRow;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32) callconv(.c) i32 `
    ///
    pub fn onSizeHintForRow(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnSizeHintForRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHintForColumn` instead
    ///
    pub const SizeHintForColumn = sizeHintForColumn;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn sizeHintForColumn(self: QTableWidget, _column: i32) i32 {
        return qtc.QTableWidget_SizeHintForColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `superSizeHintForColumn` instead
    ///
    pub const SuperSizeHintForColumn = superSizeHintForColumn;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    pub fn superSizeHintForColumn(self: QTableWidget, _column: i32) i32 {
        return qtc.QTableWidget_SuperSizeHintForColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `onSizeHintForColumn` instead
    ///
    pub const OnSizeHintForColumn = onSizeHintForColumn;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, column: i32) callconv(.c) i32 `
    ///
    pub fn onSizeHintForColumn(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnSizeHintForColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalScrollbarAction` instead
    ///
    pub const VerticalScrollbarAction = verticalScrollbarAction;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn verticalScrollbarAction(self: QTableWidget, action: i32) void {
        qtc.QTableWidget_VerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `superVerticalScrollbarAction` instead
    ///
    pub const SuperVerticalScrollbarAction = superVerticalScrollbarAction;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn superVerticalScrollbarAction(self: QTableWidget, action: i32) void {
        qtc.QTableWidget_SuperVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onVerticalScrollbarAction` instead
    ///
    pub const OnVerticalScrollbarAction = onVerticalScrollbarAction;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, action: i32) callconv(.c) void `
    ///
    pub fn onVerticalScrollbarAction(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalScrollbarAction` instead
    ///
    pub const HorizontalScrollbarAction = horizontalScrollbarAction;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn horizontalScrollbarAction(self: QTableWidget, action: i32) void {
        qtc.QTableWidget_HorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `superHorizontalScrollbarAction` instead
    ///
    pub const SuperHorizontalScrollbarAction = superHorizontalScrollbarAction;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn superHorizontalScrollbarAction(self: QTableWidget, action: i32) void {
        qtc.QTableWidget_SuperHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onHorizontalScrollbarAction` instead
    ///
    pub const OnHorizontalScrollbarAction = onHorizontalScrollbarAction;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, action: i32) callconv(.c) void `
    ///
    pub fn onHorizontalScrollbarAction(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isIndexHidden` instead
    ///
    pub const IsIndexHidden = isIndexHidden;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn isIndexHidden(self: QTableWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTableWidget_IsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superIsIndexHidden` instead
    ///
    pub const SuperIsIndexHidden = superIsIndexHidden;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superIsIndexHidden(self: QTableWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTableWidget_SuperIsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onIsIndexHidden` instead
    ///
    pub const OnIsIndexHidden = onIsIndexHidden;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn onIsIndexHidden(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) bool) void {
        qtc.QTableWidget_OnIsIndexHidden(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn selectionChanged(self: QTableWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QTableWidget_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `superSelectionChanged` instead
    ///
    pub const SuperSelectionChanged = superSelectionChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn superSelectionChanged(self: QTableWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QTableWidget_SuperSelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, selected: QItemSelection, deselected: QItemSelection) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: QTableWidget, callback: *const fn (QTableWidget, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QTableWidget_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentChanged` instead
    ///
    pub const CurrentChanged = currentChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn currentChanged(self: QTableWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QTableWidget_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `superCurrentChanged` instead
    ///
    pub const SuperCurrentChanged = superCurrentChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn superCurrentChanged(self: QTableWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QTableWidget_SuperCurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentChanged` instead
    ///
    pub const OnCurrentChanged = onCurrentChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn onCurrentChanged(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QTableWidget_OnCurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` search: []const u8 `
    ///
    pub fn keyboardSearch(self: QTableWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTableWidget_KeyboardSearch(@ptrCast(self.ptr), search_str);
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
    /// ` self: QTableWidget `
    ///
    /// ` search: []const u8 `
    ///
    pub fn superKeyboardSearch(self: QTableWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTableWidget_SuperKeyboardSearch(@ptrCast(self.ptr), search_str);
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, search: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onKeyboardSearch(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTableWidget_OnKeyboardSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn itemDelegateForIndex(self: QTableWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_ItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superItemDelegateForIndex(self: QTableWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_SuperItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex) callconv(.c) QAbstractItemDelegate `
    ///
    pub fn onItemDelegateForIndex(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) QAbstractItemDelegate) void {
        qtc.QTableWidget_OnItemDelegateForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QTableWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QTableWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QTableWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QTableWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QTableWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) QVariant) void {
        qtc.QTableWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn reset(self: QTableWidget) void {
        qtc.QTableWidget_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn superReset(self: QTableWidget) void {
        qtc.QTableWidget_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReset(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn selectAll(self: QTableWidget) void {
        qtc.QTableWidget_SelectAll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superSelectAll(self: QTableWidget) void {
        qtc.QTableWidget_SuperSelectAll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSelectAll(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn dataChanged(self: QTableWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTableWidget_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `superDataChanged` instead
    ///
    pub const SuperDataChanged = superDataChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn superDataChanged(self: QTableWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTableWidget_SuperDataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onDataChanged(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QTableWidget_OnDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsInserted` instead
    ///
    pub const RowsInserted = rowsInserted;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn rowsInserted(self: QTableWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTableWidget_RowsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `superRowsInserted` instead
    ///
    pub const SuperRowsInserted = superRowsInserted;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn superRowsInserted(self: QTableWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTableWidget_SuperRowsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsAboutToBeRemoved` instead
    ///
    pub const RowsAboutToBeRemoved = rowsAboutToBeRemoved;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn rowsAboutToBeRemoved(self: QTableWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTableWidget_RowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `superRowsAboutToBeRemoved` instead
    ///
    pub const SuperRowsAboutToBeRemoved = superRowsAboutToBeRemoved;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn superRowsAboutToBeRemoved(self: QTableWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QTableWidget_SuperRowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeRemoved` instead
    ///
    pub const OnRowsAboutToBeRemoved = onRowsAboutToBeRemoved;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeRemoved(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn updateEditorData(self: QTableWidget) void {
        qtc.QTableWidget_UpdateEditorData(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superUpdateEditorData(self: QTableWidget) void {
        qtc.QTableWidget_SuperUpdateEditorData(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateEditorData(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn updateEditorGeometries(self: QTableWidget) void {
        qtc.QTableWidget_UpdateEditorGeometries(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superUpdateEditorGeometries(self: QTableWidget) void {
        qtc.QTableWidget_SuperUpdateEditorGeometries(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateEditorGeometries(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateEditorGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn verticalScrollbarValueChanged(self: QTableWidget, value: i32) void {
        qtc.QTableWidget_VerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: QTableWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn superVerticalScrollbarValueChanged(self: QTableWidget, value: i32) void {
        qtc.QTableWidget_SuperVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, value: i32) callconv(.c) void `
    ///
    pub fn onVerticalScrollbarValueChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn horizontalScrollbarValueChanged(self: QTableWidget, value: i32) void {
        qtc.QTableWidget_HorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: QTableWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn superHorizontalScrollbarValueChanged(self: QTableWidget, value: i32) void {
        qtc.QTableWidget_SuperHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, value: i32) callconv(.c) void `
    ///
    pub fn onHorizontalScrollbarValueChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn closeEditor(self: QTableWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTableWidget_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
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
    /// ` self: QTableWidget `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn superCloseEditor(self: QTableWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTableWidget_SuperCloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn onCloseEditor(self: QTableWidget, callback: *const fn (QTableWidget, QWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnCloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` editor: QWidget `
    ///
    pub fn commitData(self: QTableWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTableWidget_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` editor: QWidget `
    ///
    pub fn superCommitData(self: QTableWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTableWidget_SuperCommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, editor: QWidget) callconv(.c) void `
    ///
    pub fn onCommitData(self: QTableWidget, callback: *const fn (QTableWidget, QWidget) callconv(.c) void) void {
        qtc.QTableWidget_OnCommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` editor: QObject `
    ///
    pub fn editorDestroyed(self: QTableWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QTableWidget_EditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` editor: QObject `
    ///
    pub fn superEditorDestroyed(self: QTableWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QTableWidget_SuperEditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, editor: QObject) callconv(.c) void `
    ///
    pub fn onEditorDestroyed(self: QTableWidget, callback: *const fn (QTableWidget, QObject) callconv(.c) void) void {
        qtc.QTableWidget_OnEditorDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn edit2(self: QTableWidget, index: anytype, trigger: i32, _event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTableWidget_Edit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEdit2(self: QTableWidget, index: anytype, trigger: i32, _event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTableWidget_SuperEdit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEdit2(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, i32, QEvent) callconv(.c) bool) void {
        qtc.QTableWidget_OnEdit2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn selectionCommand(self: QTableWidget, index: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTableWidget_SelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn superSelectionCommand(self: QTableWidget, index: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTableWidget_SuperSelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, index: QModelIndex, event: QEvent) callconv(.c) i32 `
    ///
    pub fn onSelectionCommand(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, QEvent) callconv(.c) i32) void {
        qtc.QTableWidget_OnSelectionCommand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn startDrag(self: QTableWidget, supportedActions: i32) void {
        qtc.QTableWidget_StartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
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
    /// ` self: QTableWidget `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn superStartDrag(self: QTableWidget, supportedActions: i32) void {
        qtc.QTableWidget_SuperStartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void `
    ///
    pub fn onStartDrag(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnStartDrag(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QTableWidget, next: bool) bool {
        return qtc.QTableWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QTableWidget `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: QTableWidget, next: bool) bool {
        return qtc.QTableWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: QTableWidget, callback: *const fn (QTableWidget, bool) callconv(.c) bool) void {
        qtc.QTableWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn viewportEvent(self: QTableWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTableWidget_ViewportEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superViewportEvent(self: QTableWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTableWidget_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QEvent) callconv(.c) bool `
    ///
    pub fn onViewportEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) bool) void {
        qtc.QTableWidget_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTableWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTableWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTableWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTableWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTableWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTableWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTableWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTableWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QTableWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QTableWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QTableWidget, callback: *const fn (QTableWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QTableWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QTableWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QTableWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QTableWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTableWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTableWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QTableWidget, callback: *const fn (QTableWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTableWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTableWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QTableWidget, callback: *const fn (QTableWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTableWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTableWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QTableWidget, callback: *const fn (QTableWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QTableWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QTableWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: QTableWidget, callback: *const fn (QTableWidget, QResizeEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QTableWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QTableWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QTableWidget, callback: *const fn (QTableWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTableWidget, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTableWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTableWidget, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTableWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QTableWidget, callback: *const fn (QTableWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTableWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn minimumSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn superMinimumSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QTableWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTableWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn sizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn superSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_SuperSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QTableWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTableWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn setupViewport(self: QTableWidget, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QTableWidget_SetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn superSetupViewport(self: QTableWidget, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QTableWidget_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, viewport: QWidget) callconv(.c) void `
    ///
    pub fn onSetupViewport(self: QTableWidget, callback: *const fn (QTableWidget, QWidget) callconv(.c) void) void {
        qtc.QTableWidget_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn wheelEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QTableWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QTableWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QTableWidget, callback: *const fn (QTableWidget, QWheelEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QTableWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QTableWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: QTableWidget, callback: *const fn (QTableWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn changeEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QTableWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superChangeEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QTableWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn initStyleOption(self: QTableWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QTableWidget_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn superInitStyleOption(self: QTableWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QTableWidget_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: QTableWidget, callback: *const fn (QTableWidget, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QTableWidget_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn devType(self: QTableWidget) i32 {
        return qtc.QTableWidget_DevType(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superDevType(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QTableWidget, visible: bool) void {
        qtc.QTableWidget_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QTableWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: QTableWidget, visible: bool) void {
        qtc.QTableWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QTableWidget, callback: *const fn (QTableWidget, bool) callconv(.c) void) void {
        qtc.QTableWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QTableWidget, param1: i32) i32 {
        return qtc.QTableWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QTableWidget, param1: i32) i32 {
        return qtc.QTableWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn hasHeightForWidth(self: QTableWidget) bool {
        return qtc.QTableWidget_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superHasHeightForWidth(self: QTableWidget) bool {
        return qtc.QTableWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QTableWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTableWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn paintEngine(self: QTableWidget) QPaintEngine {
        return .{ .ptr = qtc.QTableWidget_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn superPaintEngine(self: QTableWidget) QPaintEngine {
        return .{ .ptr = qtc.QTableWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QTableWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QTableWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTableWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTableWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QTableWidget, callback: *const fn (QTableWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QTableWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QTableWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEnterEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTableWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTableWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QTableWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QTableWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMoveEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QTableWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QTableWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QTableWidget, callback: *const fn (QTableWidget, QCloseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QTableWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QTableWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QTableWidget, callback: *const fn (QTableWidget, QTabletEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QTableWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QTableWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QTableWidget, callback: *const fn (QTableWidget, QActionEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QTableWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QTableWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QTableWidget, callback: *const fn (QTableWidget, QShowEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QTableWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QTableWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QTableWidget, callback: *const fn (QTableWidget, QHideEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QTableWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTableWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QTableWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QTableWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTableWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QTableWidget, callback: *const fn (QTableWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QTableWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QTableWidget, param1: i32) i32 {
        return qtc.QTableWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QTableWidget, param1: i32) i32 {
        return qtc.QTableWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QTableWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTableWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QTableWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTableWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QTableWidget, callback: *const fn (QTableWidget, QPainter) callconv(.c) void) void {
        qtc.QTableWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QTableWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QTableWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QTableWidget, callback: *const fn (QTableWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QTableWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn sharedPainter(self: QTableWidget) QPainter {
        return .{ .ptr = qtc.QTableWidget_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn superSharedPainter(self: QTableWidget) QPainter {
        return .{ .ptr = qtc.QTableWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QTableWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QTableWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTableWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTableWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QTableWidget, callback: *const fn (QTableWidget, QChildEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTableWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTableWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTableWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QTableWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTableWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QTableWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTableWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QTableWidget, callback: *const fn (QTableWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTableWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QTableWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTableWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QTableWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTableWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QTableWidget, callback: *const fn (QTableWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTableWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowMoved` instead
    ///
    pub const RowMoved = rowMoved;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` oldIndex: i32 `
    ///
    /// ` newIndex: i32 `
    ///
    pub fn rowMoved(self: QTableWidget, _row: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_RowMoved(@ptrCast(self.ptr), @bitCast(_row), @bitCast(oldIndex), @bitCast(newIndex));
    }

    /// ### DEPRECATED: Use `superRowMoved` instead
    ///
    pub const SuperRowMoved = superRowMoved;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` oldIndex: i32 `
    ///
    /// ` newIndex: i32 `
    ///
    pub fn superRowMoved(self: QTableWidget, _row: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_SuperRowMoved(@ptrCast(self.ptr), @bitCast(_row), @bitCast(oldIndex), @bitCast(newIndex));
    }

    /// ### DEPRECATED: Use `onRowMoved` instead
    ///
    pub const OnRowMoved = onRowMoved;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, oldIndex: i32, newIndex: i32) callconv(.c) void `
    ///
    pub fn onRowMoved(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnMoved` instead
    ///
    pub const ColumnMoved = columnMoved;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` oldIndex: i32 `
    ///
    /// ` newIndex: i32 `
    ///
    pub fn columnMoved(self: QTableWidget, _column: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_ColumnMoved(@ptrCast(self.ptr), @bitCast(_column), @bitCast(oldIndex), @bitCast(newIndex));
    }

    /// ### DEPRECATED: Use `superColumnMoved` instead
    ///
    pub const SuperColumnMoved = superColumnMoved;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` oldIndex: i32 `
    ///
    /// ` newIndex: i32 `
    ///
    pub fn superColumnMoved(self: QTableWidget, _column: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_SuperColumnMoved(@ptrCast(self.ptr), @bitCast(_column), @bitCast(oldIndex), @bitCast(newIndex));
    }

    /// ### DEPRECATED: Use `onColumnMoved` instead
    ///
    pub const OnColumnMoved = onColumnMoved;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, column: i32, oldIndex: i32, newIndex: i32) callconv(.c) void `
    ///
    pub fn onColumnMoved(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnColumnMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowResized` instead
    ///
    pub const RowResized = rowResized;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowResized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` oldHeight: i32 `
    ///
    /// ` newHeight: i32 `
    ///
    pub fn rowResized(self: QTableWidget, _row: i32, oldHeight: i32, newHeight: i32) void {
        qtc.QTableWidget_RowResized(@ptrCast(self.ptr), @bitCast(_row), @bitCast(oldHeight), @bitCast(newHeight));
    }

    /// ### DEPRECATED: Use `superRowResized` instead
    ///
    pub const SuperRowResized = superRowResized;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowResized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` oldHeight: i32 `
    ///
    /// ` newHeight: i32 `
    ///
    pub fn superRowResized(self: QTableWidget, _row: i32, oldHeight: i32, newHeight: i32) void {
        qtc.QTableWidget_SuperRowResized(@ptrCast(self.ptr), @bitCast(_row), @bitCast(oldHeight), @bitCast(newHeight));
    }

    /// ### DEPRECATED: Use `onRowResized` instead
    ///
    pub const OnRowResized = onRowResized;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowResized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, oldHeight: i32, newHeight: i32) callconv(.c) void `
    ///
    pub fn onRowResized(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowResized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnResized` instead
    ///
    pub const ColumnResized = columnResized;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnResized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` oldWidth: i32 `
    ///
    /// ` newWidth: i32 `
    ///
    pub fn columnResized(self: QTableWidget, _column: i32, oldWidth: i32, newWidth: i32) void {
        qtc.QTableWidget_ColumnResized(@ptrCast(self.ptr), @bitCast(_column), @bitCast(oldWidth), @bitCast(newWidth));
    }

    /// ### DEPRECATED: Use `superColumnResized` instead
    ///
    pub const SuperColumnResized = superColumnResized;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnResized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` _column: i32 `
    ///
    /// ` oldWidth: i32 `
    ///
    /// ` newWidth: i32 `
    ///
    pub fn superColumnResized(self: QTableWidget, _column: i32, oldWidth: i32, newWidth: i32) void {
        qtc.QTableWidget_SuperColumnResized(@ptrCast(self.ptr), @bitCast(_column), @bitCast(oldWidth), @bitCast(newWidth));
    }

    /// ### DEPRECATED: Use `onColumnResized` instead
    ///
    pub const OnColumnResized = onColumnResized;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnResized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, column: i32, oldWidth: i32, newWidth: i32) callconv(.c) void `
    ///
    pub fn onColumnResized(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnColumnResized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCountChanged` instead
    ///
    pub const RowCountChanged = rowCountChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` oldCount: i32 `
    ///
    /// ` newCount: i32 `
    ///
    pub fn rowCountChanged(self: QTableWidget, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_RowCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `superRowCountChanged` instead
    ///
    pub const SuperRowCountChanged = superRowCountChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` oldCount: i32 `
    ///
    /// ` newCount: i32 `
    ///
    pub fn superRowCountChanged(self: QTableWidget, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_SuperRowCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `onRowCountChanged` instead
    ///
    pub const OnRowCountChanged = onRowCountChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, oldCount: i32, newCount: i32) callconv(.c) void `
    ///
    pub fn onRowCountChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCountChanged` instead
    ///
    pub const ColumnCountChanged = columnCountChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` oldCount: i32 `
    ///
    /// ` newCount: i32 `
    ///
    pub fn columnCountChanged(self: QTableWidget, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `superColumnCountChanged` instead
    ///
    pub const SuperColumnCountChanged = superColumnCountChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` oldCount: i32 `
    ///
    /// ` newCount: i32 `
    ///
    pub fn superColumnCountChanged(self: QTableWidget, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_SuperColumnCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `onColumnCountChanged` instead
    ///
    pub const OnColumnCountChanged = onColumnCountChanged;

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, oldCount: i32, newCount: i32) callconv(.c) void `
    ///
    pub fn onColumnCountChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnColumnCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn state(self: QTableWidget) i32 {
        return qtc.QTableWidget_State(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn superState(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperState(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onState(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` _state: qabstractitemview_enums.State `
    ///
    pub fn setState(self: QTableWidget, _state: i32) void {
        qtc.QTableWidget_SetState(@ptrCast(self.ptr), @bitCast(_state));
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
    /// ` self: QTableWidget `
    ///
    /// ` _state: qabstractitemview_enums.State `
    ///
    pub fn superSetState(self: QTableWidget, _state: i32) void {
        qtc.QTableWidget_SuperSetState(@ptrCast(self.ptr), @bitCast(_state));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, state: qabstractitemview_enums.State) callconv(.c) void `
    ///
    pub fn onSetState(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnSetState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn scheduleDelayedItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_ScheduleDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superScheduleDelayedItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_SuperScheduleDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onScheduleDelayedItemsLayout(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnScheduleDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn executeDelayedItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_ExecuteDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superExecuteDelayedItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_SuperExecuteDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onExecuteDelayedItemsLayout(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnExecuteDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` region: QRegion `
    ///
    pub fn setDirtyRegion(self: QTableWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTableWidget_SetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` region: QRegion `
    ///
    pub fn superSetDirtyRegion(self: QTableWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTableWidget_SuperSetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, region: QRegion) callconv(.c) void `
    ///
    pub fn onSetDirtyRegion(self: QTableWidget, callback: *const fn (QTableWidget, QRegion) callconv(.c) void) void {
        qtc.QTableWidget_OnSetDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scrollDirtyRegion(self: QTableWidget, dx: i32, dy: i32) void {
        qtc.QTableWidget_ScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
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
    /// ` self: QTableWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn superScrollDirtyRegion(self: QTableWidget, dx: i32, dy: i32) void {
        qtc.QTableWidget_SuperScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn onScrollDirtyRegion(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn dirtyRegionOffset(self: QTableWidget) QPoint {
        return .{ .ptr = qtc.QTableWidget_DirtyRegionOffset(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn superDirtyRegionOffset(self: QTableWidget) QPoint {
        return .{ .ptr = qtc.QTableWidget_SuperDirtyRegionOffset(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPoint `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDirtyRegionOffset(self: QTableWidget, callback: *const fn () callconv(.c) QPoint) void {
        qtc.QTableWidget_OnDirtyRegionOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn startAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_StartAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superStartAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_SuperStartAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartAutoScroll(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnStartAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn stopAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_StopAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superStopAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_SuperStopAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStopAutoScroll(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnStopAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn doAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_DoAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superDoAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_SuperDoAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDoAutoScroll(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnDoAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn dropIndicatorPosition(self: QTableWidget) i32 {
        return qtc.QTableWidget_DropIndicatorPosition(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn superDropIndicatorPosition(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperDropIndicatorPosition(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDropIndicatorPosition(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnDropIndicatorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setViewportMargins(self: QTableWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTableWidget_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QTableWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn superSetViewportMargins(self: QTableWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTableWidget_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn onSetViewportMargins(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn viewportMargins(self: QTableWidget) QMargins {
        return .{ .ptr = qtc.QTableWidget_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn superViewportMargins(self: QTableWidget) QMargins {
        return .{ .ptr = qtc.QTableWidget_SuperViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportMargins(self: QTableWidget, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QTableWidget_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPainter `
    ///
    pub fn drawFrame(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QTableWidget_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPainter `
    ///
    pub fn superDrawFrame(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QTableWidget_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: QPainter) callconv(.c) void `
    ///
    pub fn onDrawFrame(self: QTableWidget, callback: *const fn (QTableWidget, QPainter) callconv(.c) void) void {
        qtc.QTableWidget_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn updateMicroFocus(self: QTableWidget) void {
        qtc.QTableWidget_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superUpdateMicroFocus(self: QTableWidget) void {
        qtc.QTableWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn create(self: QTableWidget) void {
        qtc.QTableWidget_Create(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superCreate(self: QTableWidget) void {
        qtc.QTableWidget_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn destroy(self: QTableWidget) void {
        qtc.QTableWidget_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superDestroy(self: QTableWidget) void {
        qtc.QTableWidget_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn focusNextChild(self: QTableWidget) bool {
        return qtc.QTableWidget_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superFocusNextChild(self: QTableWidget) bool {
        return qtc.QTableWidget_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QTableWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTableWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn focusPreviousChild(self: QTableWidget) bool {
        return qtc.QTableWidget_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superFocusPreviousChild(self: QTableWidget) bool {
        return qtc.QTableWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QTableWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTableWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn sender(self: QTableWidget) QObject {
        return .{ .ptr = qtc.QTableWidget_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn superSender(self: QTableWidget) QObject {
        return .{ .ptr = qtc.QTableWidget_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QTableWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTableWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn senderSignalIndex(self: QTableWidget) i32 {
        return qtc.QTableWidget_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn superSenderSignalIndex(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QTableWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTableWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QTableWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTableWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTableWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QTableWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTableWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QTableWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTableWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QTableWidget, callback: *const fn (QTableWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.QTableWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QTableWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTableWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QTableWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QTableWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTableWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QTableWidget`
    ///
    /// ` callback: *const fn (self: QTableWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) f64) void {
        qtc.QTableWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dtor.QTableWidget)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTableWidget `
    ///
    pub fn delete(self: QTableWidget) void {
        qtc.QTableWidget_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#public-types)
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };
};
