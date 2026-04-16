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

    /// New constructs a new QTableWidgetSelectionRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTableWidgetSelectionRange `
    ///
    pub fn New(other: anytype) QTableWidgetSelectionRange {
        comptime _ = @TypeOf(other)._is_QTableWidgetSelectionRange;
        return .{ .ptr = qtc.QTableWidgetSelectionRange_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTableWidgetSelectionRange object and invalidates the source QTableWidgetSelectionRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTableWidgetSelectionRange `
    ///
    pub fn New2(other: anytype) QTableWidgetSelectionRange {
        comptime _ = @TypeOf(other)._is_QTableWidgetSelectionRange;
        return .{ .ptr = qtc.QTableWidgetSelectionRange_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTableWidgetSelectionRange object.
    ///
    pub fn New3() QTableWidgetSelectionRange {
        return .{ .ptr = qtc.QTableWidgetSelectionRange_new3() };
    }

    /// New4 constructs a new QTableWidgetSelectionRange object.
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
    pub fn New4(top: i32, left: i32, bottom: i32, right: i32) QTableWidgetSelectionRange {
        return .{ .ptr = qtc.QTableWidgetSelectionRange_new4(@bitCast(top), @bitCast(left), @bitCast(bottom), @bitCast(right)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    /// ` other: QTableWidgetSelectionRange `
    ///
    pub fn CopyAssign(self: QTableWidgetSelectionRange, other: QTableWidgetSelectionRange) void {
        qtc.QTableWidgetSelectionRange_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    /// ` other: QTableWidgetSelectionRange `
    ///
    pub fn MoveAssign(self: QTableWidgetSelectionRange, other: QTableWidgetSelectionRange) void {
        qtc.QTableWidgetSelectionRange_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#topRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn TopRow(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_TopRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#bottomRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn BottomRow(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_BottomRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#leftColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn LeftColumn(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_LeftColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rightColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn RightColumn(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_RightColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn RowCount(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_RowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn ColumnCount(self: QTableWidgetSelectionRange) i32 {
        return qtc.QTableWidgetSelectionRange_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#dtor.QTableWidgetSelectionRange)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTableWidgetSelectionRange `
    ///
    pub fn Delete(self: QTableWidgetSelectionRange) void {
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

    /// New constructs a new QTableWidgetItem object.
    ///
    pub fn New() QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidgetItem_new() };
    }

    /// New2 constructs a new QTableWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(text: []const u8) QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QTableWidgetItem_new2(text_str) };
    }

    /// New3 constructs a new QTableWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New3(icon: anytype, text: []const u8) QTableWidgetItem {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QTableWidgetItem_new3(@ptrCast(icon.ptr), text_str) };
    }

    /// New4 constructs a new QTableWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTableWidgetItem `
    ///
    pub fn New4(other: anytype) QTableWidgetItem {
        comptime _ = @TypeOf(other)._is_QTableWidgetItem;
        return .{ .ptr = qtc.QTableWidgetItem_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QTableWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New5(typeVal: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidgetItem_new5(@bitCast(typeVal)) };
    }

    /// New6 constructs a new QTableWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New6(text: []const u8, typeVal: i32) QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QTableWidgetItem_new6(text_str, @bitCast(typeVal)) };
    }

    /// New7 constructs a new QTableWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New7(icon: anytype, text: []const u8, typeVal: i32) QTableWidgetItem {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QTableWidgetItem_new7(@ptrCast(icon.ptr), text_str, @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn Clone(self: QTableWidgetItem) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidgetItem_Clone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QTableWidgetItem, callback: *const fn () callconv(.c) QTableWidgetItem) void {
        qtc.QTableWidgetItem_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn SuperClone(self: QTableWidgetItem) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidgetItem_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#tableWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn TableWidget(self: QTableWidgetItem) QTableWidget {
        return .{ .ptr = qtc.QTableWidgetItem_TableWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn Row(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_Row(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn Column(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_Column(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` selectVal: bool `
    ///
    pub fn SetSelected(self: QTableWidgetItem, selectVal: bool) void {
        qtc.QTableWidgetItem_SetSelected(@ptrCast(self.ptr), selectVal);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn IsSelected(self: QTableWidgetItem) bool {
        return qtc.QTableWidgetItem_IsSelected(@ptrCast(self.ptr));
    }

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
    pub fn Flags(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` flags: flag of qnamespace_enums.ItemFlag `
    ///
    pub fn SetFlags(self: QTableWidgetItem, flags: i32) void {
        qtc.QTableWidgetItem_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QTableWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTableWidgetItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QTableWidgetItem, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTableWidgetItem_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn Icon(self: QTableWidgetItem) QIcon {
        return .{ .ptr = qtc.QTableWidgetItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QTableWidgetItem, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QTableWidgetItem_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QTableWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTableWidgetItem_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QTableWidgetItem, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QTableWidgetItem_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QTableWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTableWidgetItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QTableWidgetItem, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QTableWidgetItem_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QTableWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTableWidgetItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidgetitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QTableWidgetItem, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QTableWidgetItem_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn Font(self: QTableWidgetItem) QFont {
        return .{ .ptr = qtc.QTableWidgetItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QTableWidgetItem, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTableWidgetItem_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#textAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn TextAlignment(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` alignment: i32 `
    ///
    pub fn SetTextAlignment(self: QTableWidgetItem, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` alignment: qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment2(self: QTableWidgetItem, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment2(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment3(self: QTableWidgetItem, alignment: i32) void {
        qtc.QTableWidgetItem_SetTextAlignment3(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn Background(self: QTableWidgetItem) QBrush {
        return .{ .ptr = qtc.QTableWidgetItem_Background(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTableWidgetItem, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTableWidgetItem_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn Foreground(self: QTableWidgetItem) QBrush {
        return .{ .ptr = qtc.QTableWidgetItem_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTableWidgetItem, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTableWidgetItem_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

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
    pub fn CheckState(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_CheckState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setCheckState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn SetCheckState(self: QTableWidgetItem, state: i32) void {
        qtc.QTableWidgetItem_SetCheckState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn SizeHint(self: QTableWidgetItem) QSize {
        return .{ .ptr = qtc.QTableWidgetItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` size: QSize `
    ///
    pub fn SetSizeHint(self: QTableWidgetItem, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QTableWidgetItem_SetSizeHint(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: QTableWidgetItem, role: i32) QVariant {
        return .{ .ptr = qtc.QTableWidgetItem_Data(@ptrCast(self.ptr), @bitCast(role)) };
    }

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
    pub fn OnData(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, i32) callconv(.c) QVariant) void {
        qtc.QTableWidgetItem_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

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
    pub fn SuperData(self: QTableWidgetItem, role: i32) QVariant {
        return .{ .ptr = qtc.QTableWidgetItem_SuperData(@ptrCast(self.ptr), @bitCast(role)) };
    }

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
    pub fn SetData(self: QTableWidgetItem, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTableWidgetItem_SetData(@ptrCast(self.ptr), @bitCast(role), @ptrCast(value.ptr));
    }

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
    pub fn OnSetData(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, i32, QVariant) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

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
    pub fn SuperSetData(self: QTableWidgetItem, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTableWidgetItem_SuperSetData(@ptrCast(self.ptr), @bitCast(role), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` other: QTableWidgetItem `
    ///
    pub fn OperatorLesser(self: QTableWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTableWidgetItem;
        return qtc.QTableWidgetItem_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn OnOperatorLesser(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, QTableWidgetItem) callconv(.c) bool) void {
        qtc.QTableWidgetItem_OnOperatorLesser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOperatorLesser` instead
    ///
    pub const QBaseOperatorLesser = SuperOperatorLesser;

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
    pub fn SuperOperatorLesser(self: QTableWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTableWidgetItem;
        return qtc.QTableWidgetItem_SuperOperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn Read(self: QTableWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QTableWidgetItem_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

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
    pub fn OnRead(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRead` instead
    ///
    pub const QBaseRead = SuperRead;

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
    pub fn SuperRead(self: QTableWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QTableWidgetItem_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn Write(self: QTableWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QTableWidgetItem_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

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
    pub fn OnWrite(self: QTableWidgetItem, callback: *const fn (QTableWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QTableWidgetItem_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWrite` instead
    ///
    pub const QBaseWrite = SuperWrite;

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
    pub fn SuperWrite(self: QTableWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QTableWidgetItem_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    /// ` other: QTableWidgetItem `
    ///
    pub fn OperatorAssign(self: QTableWidgetItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTableWidgetItem;
        qtc.QTableWidgetItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn Type(self: QTableWidgetItem) i32 {
        return qtc.QTableWidgetItem_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidgetitem.html#dtor.QTableWidgetItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTableWidgetItem `
    ///
    pub fn Delete(self: QTableWidgetItem) void {
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

    /// New constructs a new QTableWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QTableWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QTableWidget_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QTableWidget object.
    ///
    pub fn New2() QTableWidget {
        return .{ .ptr = qtc.QTableWidget_new2() };
    }

    /// New3 constructs a new QTableWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    pub fn New3(rows: i32, columns: i32) QTableWidget {
        return .{ .ptr = qtc.QTableWidget_new3(@bitCast(rows), @bitCast(columns)) };
    }

    /// New4 constructs a new QTableWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(rows: i32, columns: i32, parent: anytype) QTableWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QTableWidget_new4(@bitCast(rows), @bitCast(columns), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn MetaObject(self: QTableWidget) QMetaObject {
        return .{ .ptr = qtc.QTableWidget_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QTableWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTableWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperMetaObject(self: QTableWidget) QMetaObject {
        return .{ .ptr = qtc.QTableWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTableWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTableWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTableWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTableWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTableWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QTableWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTableWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTableWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QTableWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTableWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` rows: i32 `
    ///
    pub fn SetRowCount(self: QTableWidget, rows: i32) void {
        qtc.QTableWidget_SetRowCount(@ptrCast(self.ptr), @bitCast(rows));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn RowCount(self: QTableWidget) i32 {
        return qtc.QTableWidget_RowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` columns: i32 `
    ///
    pub fn SetColumnCount(self: QTableWidget, columns: i32) void {
        qtc.QTableWidget_SetColumnCount(@ptrCast(self.ptr), @bitCast(columns));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ColumnCount(self: QTableWidget) i32 {
        return qtc.QTableWidget_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn Row(self: QTableWidget, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        return qtc.QTableWidget_Row(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn Column(self: QTableWidget, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        return qtc.QTableWidget_Column(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn Item(self: QTableWidget, row: i32, column: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_Item(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn SetItem(self: QTableWidget, row: i32, column: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetItem(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#takeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn TakeItem(self: QTableWidget, row: i32, column: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_TakeItem(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: QMimeData `
    ///
    pub fn Items(self: QTableWidget, allocator: std.mem.Allocator, data: anytype) []QTableWidgetItem {
        comptime _ = @TypeOf(data)._is_QMimeData;
        const _arr: qtc.libqt_list = qtc.QTableWidget_Items(@ptrCast(self.ptr), @ptrCast(data.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTableWidgetItem, _arr.len) catch @panic("qtablewidget.Items: Memory allocation failed");
        const _data: [*]QtC.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#indexFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn IndexFromItem(self: QTableWidget, item: anytype) QModelIndex {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        return .{ .ptr = qtc.QTableWidget_IndexFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemFromIndex(self: QTableWidget, index: anytype) QTableWidgetItem {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_ItemFromIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#verticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn VerticalHeaderItem(self: QTableWidget, row: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_VerticalHeaderItem(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn SetVerticalHeaderItem(self: QTableWidget, row: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetVerticalHeaderItem(@ptrCast(self.ptr), @bitCast(row), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#takeVerticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn TakeVerticalHeaderItem(self: QTableWidget, row: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_TakeVerticalHeaderItem(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#horizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn HorizontalHeaderItem(self: QTableWidget, column: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_HorizontalHeaderItem(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn SetHorizontalHeaderItem(self: QTableWidget, column: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetHorizontalHeaderItem(@ptrCast(self.ptr), @bitCast(column), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#takeHorizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn TakeHorizontalHeaderItem(self: QTableWidget, column: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_TakeHorizontalHeaderItem(@ptrCast(self.ptr), @bitCast(column)) };
    }

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
    pub fn SetVerticalHeaderLabels(self: QTableWidget, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("qtablewidget.SetVerticalHeaderLabels: Memory allocation failed");
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
        qtc.QTableWidget_SetVerticalHeaderLabels(@ptrCast(self.ptr), labels_list);
    }

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
    pub fn SetHorizontalHeaderLabels(self: QTableWidget, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("qtablewidget.SetHorizontalHeaderLabels: Memory allocation failed");
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
        qtc.QTableWidget_SetHorizontalHeaderLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn CurrentRow(self: QTableWidget) i32 {
        return qtc.QTableWidget_CurrentRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn CurrentColumn(self: QTableWidget) i32 {
        return qtc.QTableWidget_CurrentColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn CurrentItem(self: QTableWidget) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_CurrentItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn SetCurrentItem(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetCurrentItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetCurrentItem2(self: QTableWidget, item: anytype, command: i32) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetCurrentItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SetCurrentCell(self: QTableWidget, row: i32, column: i32) void {
        qtc.QTableWidget_SetCurrentCell(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetCurrentCell2(self: QTableWidget, row: i32, column: i32, command: i32) void {
        qtc.QTableWidget_SetCurrentCell2(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn SortItems(self: QTableWidget, column: i32) void {
        qtc.QTableWidget_SortItems(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetSortingEnabled(self: QTableWidget, enable: bool) void {
        qtc.QTableWidget_SetSortingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#isSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsSortingEnabled(self: QTableWidget) bool {
        return qtc.QTableWidget_IsSortingEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#editItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn EditItem(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_EditItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn OpenPersistentEditor(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_OpenPersistentEditor(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn ClosePersistentEditor(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_ClosePersistentEditor(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn IsPersistentEditorOpen(self: QTableWidget, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        return qtc.QTableWidget_IsPersistentEditorOpen(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellWidget(self: QTableWidget, row: i32, column: i32) QWidget {
        return .{ .ptr = qtc.QTableWidget_CellWidget(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setCellWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCellWidget(self: QTableWidget, row: i32, column: i32, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QTableWidget_SetCellWidget(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#removeCellWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveCellWidget(self: QTableWidget, row: i32, column: i32) void {
        qtc.QTableWidget_RemoveCellWidget(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setRangeSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` range: QTableWidgetSelectionRange `
    ///
    /// ` selectVal: bool `
    ///
    pub fn SetRangeSelected(self: QTableWidget, range: anytype, selectVal: bool) void {
        comptime _ = @TypeOf(range)._is_QTableWidgetSelectionRange;
        qtc.QTableWidget_SetRangeSelected(@ptrCast(self.ptr), @ptrCast(range.ptr), selectVal);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#selectedRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedRanges(self: QTableWidget, allocator: std.mem.Allocator) []QTableWidgetSelectionRange {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SelectedRanges(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTableWidgetSelectionRange, _arr.len) catch @panic("qtablewidget.SelectedRanges: Memory allocation failed");
        const _data: [*]QtC.QTableWidgetSelectionRange = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedItems(self: QTableWidget, allocator: std.mem.Allocator) []QTableWidgetItem {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SelectedItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTableWidgetItem, _arr.len) catch @panic("qtablewidget.SelectedItems: Memory allocation failed");
        const _data: [*]QtC.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn FindItems(self: QTableWidget, allocator: std.mem.Allocator, text: []const u8, flags: i32) []QTableWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTableWidget_FindItems(@ptrCast(self.ptr), text_str, @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTableWidgetItem, _arr.len) catch @panic("qtablewidget.FindItems: Memory allocation failed");
        const _data: [*]QtC.QTableWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#visualRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` logicalRow: i32 `
    ///
    pub fn VisualRow(self: QTableWidget, logicalRow: i32) i32 {
        return qtc.QTableWidget_VisualRow(@ptrCast(self.ptr), @bitCast(logicalRow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#visualColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` logicalColumn: i32 `
    ///
    pub fn VisualColumn(self: QTableWidget, logicalColumn: i32) i32 {
        return qtc.QTableWidget_VisualColumn(@ptrCast(self.ptr), @bitCast(logicalColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn ItemAt(self: QTableWidget, p: anytype) QTableWidgetItem {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_ItemAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ItemAt2(self: QTableWidget, x: i32, y: i32) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_ItemAt2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#visualItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn VisualItemRect(self: QTableWidget, item: anytype) QRect {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        return .{ .ptr = qtc.QTableWidget_VisualItemRect(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ItemPrototype(self: QTableWidget) QTableWidgetItem {
        return .{ .ptr = qtc.QTableWidget_ItemPrototype(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#setItemPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn SetItemPrototype(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_SetItemPrototype(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn ScrollToItem(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_ScrollToItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow(self: QTableWidget, row: i32) void {
        qtc.QTableWidget_InsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn(self: QTableWidget, column: i32) void {
        qtc.QTableWidget_InsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: QTableWidget, row: i32) void {
        qtc.QTableWidget_RemoveRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveColumn(self: QTableWidget, column: i32) void {
        qtc.QTableWidget_RemoveColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Clear(self: QTableWidget) void {
        qtc.QTableWidget_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#clearContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ClearContents(self: QTableWidget) void {
        qtc.QTableWidget_ClearContents(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn ItemPressed(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemPressed(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn OnItemPressed(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn ItemClicked(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemClicked(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn OnItemClicked(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn ItemDoubleClicked(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemDoubleClicked(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn OnItemDoubleClicked(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn ItemActivated(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemActivated(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn OnItemActivated(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn ItemEntered(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemEntered(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn OnItemEntered(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    pub fn ItemChanged(self: QTableWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_ItemChanged(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, item: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn OnItemChanged(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CurrentItemChanged(self: QTableWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QTableWidgetItem;
        comptime _ = @TypeOf(previous)._is_QTableWidgetItem;
        qtc.QTableWidget_CurrentItemChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, current: QTableWidgetItem, previous: QTableWidgetItem) callconv(.c) void `
    ///
    pub fn OnCurrentItemChanged(self: QTableWidget, callback: *const fn (QTableWidget, QTableWidgetItem, QTableWidgetItem) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CurrentItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ItemSelectionChanged(self: QTableWidget) void {
        qtc.QTableWidget_ItemSelectionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget) callconv(.c) void `
    ///
    pub fn OnItemSelectionChanged(self: QTableWidget, callback: *const fn (QTableWidget) callconv(.c) void) void {
        qtc.QTableWidget_Connect_ItemSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellPressed(self: QTableWidget, row: i32, column: i32) void {
        qtc.QTableWidget_CellPressed(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn OnCellPressed(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellClicked(self: QTableWidget, row: i32, column: i32) void {
        qtc.QTableWidget_CellClicked(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn OnCellClicked(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellDoubleClicked(self: QTableWidget, row: i32, column: i32) void {
        qtc.QTableWidget_CellDoubleClicked(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn OnCellDoubleClicked(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellActivated(self: QTableWidget, row: i32, column: i32) void {
        qtc.QTableWidget_CellActivated(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn OnCellActivated(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellEntered(self: QTableWidget, row: i32, column: i32) void {
        qtc.QTableWidget_CellEntered(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn OnCellEntered(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellChanged(self: QTableWidget, row: i32, column: i32) void {
        qtc.QTableWidget_CellChanged(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn OnCellChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CellChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` currentRow: i32 `
    ///
    /// ` currentColumn: i32 `
    ///
    /// ` previousRow: i32 `
    ///
    /// ` previousColumn: i32 `
    ///
    pub fn CurrentCellChanged(self: QTableWidget, currentRow: i32, currentColumn: i32, previousRow: i32, previousColumn: i32) void {
        qtc.QTableWidget_CurrentCellChanged(@ptrCast(self.ptr), @bitCast(currentRow), @bitCast(currentColumn), @bitCast(previousRow), @bitCast(previousColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, currentRow: i32, currentColumn: i32, previousRow: i32, previousColumn: i32) callconv(.c) void `
    ///
    pub fn OnCurrentCellChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_Connect_CurrentCellChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QTableWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QTableWidget_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

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
    pub fn OnEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) bool) void {
        qtc.QTableWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    pub fn SuperEvent(self: QTableWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QTableWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: QTableWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTableWidget_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtablewidget.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtablewidget.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn OnMimeTypes(self: QTableWidget, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QTableWidget_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimeTypes` instead
    ///
    pub const QBaseMimeTypes = SuperMimeTypes;

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
    pub fn SuperMimeTypes(self: QTableWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtablewidget.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtablewidget.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` items: []QTableWidgetItem `
    ///
    pub fn MimeData(self: QTableWidget, items: []QTableWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return .{ .ptr = qtc.QTableWidget_MimeData(@ptrCast(self.ptr), items_list) };
    }

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
    pub fn OnMimeData(self: QTableWidget, callback: *const fn (QTableWidget, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QTableWidget_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimeData` instead
    ///
    pub const QBaseMimeData = SuperMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` items: []QTableWidgetItem `
    ///
    pub fn SuperMimeData(self: QTableWidget, items: []QTableWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return .{ .ptr = qtc.QTableWidget_SuperMimeData(@ptrCast(self.ptr), items_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn DropMimeData(self: QTableWidget, row: i32, column: i32, data: anytype, action: i32) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        return qtc.QTableWidget_DropMimeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(data.ptr), @bitCast(action));
    }

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
    pub fn OnDropMimeData(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, QMimeData, i32) callconv(.c) bool) void {
        qtc.QTableWidget_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropMimeData` instead
    ///
    pub const QBaseDropMimeData = SuperDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SuperDropMimeData(self: QTableWidget, row: i32, column: i32, data: anytype, action: i32) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        return qtc.QTableWidget_SuperDropMimeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(data.ptr), @bitCast(action));
    }

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
    pub fn SupportedDropActions(self: QTableWidget) i32 {
        return qtc.QTableWidget_SupportedDropActions(@ptrCast(self.ptr));
    }

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
    pub fn OnSupportedDropActions(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedDropActions` instead
    ///
    pub const QBaseSupportedDropActions = SuperSupportedDropActions;

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
    pub fn SuperSupportedDropActions(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QTableWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDropEvent(self: QTableWidget, callback: *const fn (QTableWidget, QDropEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QTableWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SortItems2(self: QTableWidget, column: i32, order: i32) void {
        qtc.QTableWidget_SortItems2(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` item: QTableWidgetItem `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn ScrollToItem2(self: QTableWidget, item: anytype, hint: i32) void {
        comptime _ = @TypeOf(item)._is_QTableWidgetItem;
        qtc.QTableWidget_ScrollToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(hint));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QTableWidget, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QTableView_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

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
    pub fn OnSetModel(self: QTableWidget, callback: *const fn (QTableWidget, QAbstractItemModel) callconv(.c) void) void {
        qtc.QTableView_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModel` instead
    ///
    pub const QBaseSetModel = SuperSetModel;

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
    /// ` model: QAbstractItemModel `
    ///
    pub fn SuperSetModel(self: QTableWidget, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QTableView_SuperSetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn HorizontalHeader(self: QTableWidget) QHeaderView {
        return .{ .ptr = qtc.QTableView_HorizontalHeader(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn VerticalHeader(self: QTableWidget) QHeaderView {
        return .{ .ptr = qtc.QTableView_VerticalHeader(@ptrCast(self.ptr)) };
    }

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
    pub fn SetHorizontalHeader(self: QTableWidget, header: anytype) void {
        comptime _ = @TypeOf(header)._is_QHeaderView;
        qtc.QTableView_SetHorizontalHeader(@ptrCast(self.ptr), @ptrCast(header.ptr));
    }

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
    pub fn SetVerticalHeader(self: QTableWidget, header: anytype) void {
        comptime _ = @TypeOf(header)._is_QHeaderView;
        qtc.QTableView_SetVerticalHeader(@ptrCast(self.ptr), @ptrCast(header.ptr));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn RowViewportPosition(self: QTableWidget, row: i32) i32 {
        return qtc.QTableView_RowViewportPosition(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` y: i32 `
    ///
    pub fn RowAt(self: QTableWidget, y: i32) i32 {
        return qtc.QTableView_RowAt(@ptrCast(self.ptr), @bitCast(y));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn SetRowHeight(self: QTableWidget, row: i32, height: i32) void {
        qtc.QTableView_SetRowHeight(@ptrCast(self.ptr), @bitCast(row), @bitCast(height));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn RowHeight(self: QTableWidget, row: i32) i32 {
        return qtc.QTableView_RowHeight(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnViewportPosition(self: QTableWidget, column: i32) i32 {
        return qtc.QTableView_ColumnViewportPosition(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` x: i32 `
    ///
    pub fn ColumnAt(self: QTableWidget, x: i32) i32 {
        return qtc.QTableView_ColumnAt(@ptrCast(self.ptr), @bitCast(x));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` width: i32 `
    ///
    pub fn SetColumnWidth(self: QTableWidget, column: i32, width: i32) void {
        qtc.QTableView_SetColumnWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnWidth(self: QTableWidget, column: i32) i32 {
        return qtc.QTableView_ColumnWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn IsRowHidden(self: QTableWidget, row: i32) bool {
        return qtc.QTableView_IsRowHidden(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` hide: bool `
    ///
    pub fn SetRowHidden(self: QTableWidget, row: i32, hide: bool) void {
        qtc.QTableView_SetRowHidden(@ptrCast(self.ptr), @bitCast(row), hide);
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn IsColumnHidden(self: QTableWidget, column: i32) bool {
        return qtc.QTableView_IsColumnHidden(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` hide: bool `
    ///
    pub fn SetColumnHidden(self: QTableWidget, column: i32, hide: bool) void {
        qtc.QTableView_SetColumnHidden(@ptrCast(self.ptr), @bitCast(column), hide);
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#showGrid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ShowGrid(self: QTableWidget) bool {
        return qtc.QTableView_ShowGrid(@ptrCast(self.ptr));
    }

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
    pub fn GridStyle(self: QTableWidget) i32 {
        return qtc.QTableView_GridStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` style: qnamespace_enums.PenStyle `
    ///
    pub fn SetGridStyle(self: QTableWidget, style: i32) void {
        qtc.QTableView_SetGridStyle(@ptrCast(self.ptr), @bitCast(style));
    }

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
    pub fn SetWordWrap(self: QTableWidget, on: bool) void {
        qtc.QTableView_SetWordWrap(@ptrCast(self.ptr), on);
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn WordWrap(self: QTableWidget) bool {
        return qtc.QTableView_WordWrap(@ptrCast(self.ptr));
    }

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
    pub fn SetCornerButtonEnabled(self: QTableWidget, enable: bool) void {
        qtc.QTableView_SetCornerButtonEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsCornerButtonEnabled(self: QTableWidget) bool {
        return qtc.QTableView_IsCornerButtonEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` rowSpan: i32 `
    ///
    /// ` columnSpan: i32 `
    ///
    pub fn SetSpan(self: QTableWidget, row: i32, column: i32, rowSpan: i32, columnSpan: i32) void {
        qtc.QTableView_SetSpan(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @bitCast(rowSpan), @bitCast(columnSpan));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn RowSpan(self: QTableWidget, row: i32, column: i32) i32 {
        return qtc.QTableView_RowSpan(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnSpan(self: QTableWidget, row: i32, column: i32) i32 {
        return qtc.QTableView_ColumnSpan(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ClearSpans(self: QTableWidget) void {
        qtc.QTableView_ClearSpans(@ptrCast(self.ptr));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn SelectRow(self: QTableWidget, row: i32) void {
        qtc.QTableView_SelectRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn SelectColumn(self: QTableWidget, column: i32) void {
        qtc.QTableView_SelectColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#hideRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn HideRow(self: QTableWidget, row: i32) void {
        qtc.QTableView_HideRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn HideColumn(self: QTableWidget, column: i32) void {
        qtc.QTableView_HideColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#showRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn ShowRow(self: QTableWidget, row: i32) void {
        qtc.QTableView_ShowRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#showColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ShowColumn(self: QTableWidget, column: i32) void {
        qtc.QTableView_ShowColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn ResizeRowToContents(self: QTableWidget, row: i32) void {
        qtc.QTableView_ResizeRowToContents(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ResizeRowsToContents(self: QTableWidget) void {
        qtc.QTableView_ResizeRowsToContents(@ptrCast(self.ptr));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ResizeColumnToContents(self: QTableWidget, column: i32) void {
        qtc.QTableView_ResizeColumnToContents(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ResizeColumnsToContents(self: QTableWidget) void {
        qtc.QTableView_ResizeColumnsToContents(@ptrCast(self.ptr));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SortByColumn(self: QTableWidget, column: i32, order: i32) void {
        qtc.QTableView_SortByColumn(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// Inherited from QTableView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` show: bool `
    ///
    pub fn SetShowGrid(self: QTableWidget, show: bool) void {
        qtc.QTableView_SetShowGrid(@ptrCast(self.ptr), show);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Model(self: QTableWidget) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractItemView_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn SelectionModel(self: QTableWidget) QItemSelectionModel {
        return .{ .ptr = qtc.QAbstractItemView_SelectionModel(@ptrCast(self.ptr)) };
    }

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
    pub fn SetItemDelegate(self: QTableWidget, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ItemDelegate(self: QTableWidget) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetSelectionMode(self: QTableWidget, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn SelectionMode(self: QTableWidget) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self.ptr));
    }

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
    pub fn SetSelectionBehavior(self: QTableWidget, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

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
    pub fn SelectionBehavior(self: QTableWidget) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn CurrentIndex(self: QTableWidget) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn RootIndex(self: QTableWidget) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_RootIndex(@ptrCast(self.ptr)) };
    }

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
    pub fn SetEditTriggers(self: QTableWidget, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self.ptr), @bitCast(triggers));
    }

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
    pub fn EditTriggers(self: QTableWidget) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self.ptr));
    }

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
    pub fn SetVerticalScrollMode(self: QTableWidget, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn VerticalScrollMode(self: QTableWidget) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ResetVerticalScrollMode(self: QTableWidget) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self.ptr));
    }

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
    pub fn SetHorizontalScrollMode(self: QTableWidget, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn HorizontalScrollMode(self: QTableWidget) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ResetHorizontalScrollMode(self: QTableWidget) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self.ptr));
    }

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
    pub fn SetAutoScroll(self: QTableWidget, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn HasAutoScroll(self: QTableWidget) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self.ptr));
    }

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
    pub fn SetAutoScrollMargin(self: QTableWidget, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn AutoScrollMargin(self: QTableWidget) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self.ptr));
    }

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
    pub fn SetTabKeyNavigation(self: QTableWidget, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn TabKeyNavigation(self: QTableWidget) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self.ptr));
    }

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
    pub fn SetDropIndicatorShown(self: QTableWidget, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ShowDropIndicator(self: QTableWidget) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self.ptr));
    }

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
    pub fn SetDragEnabled(self: QTableWidget, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn DragEnabled(self: QTableWidget) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetDragDropOverwriteMode(self: QTableWidget, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn DragDropOverwriteMode(self: QTableWidget) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self.ptr));
    }

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
    pub fn SetDragDropMode(self: QTableWidget, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self.ptr), @bitCast(behavior));
    }

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
    pub fn DragDropMode(self: QTableWidget) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self.ptr));
    }

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
    pub fn SetDefaultDropAction(self: QTableWidget, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self.ptr), @bitCast(dropAction));
    }

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
    pub fn DefaultDropAction(self: QTableWidget) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self.ptr));
    }

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
    pub fn SetAlternatingRowColors(self: QTableWidget, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn AlternatingRowColors(self: QTableWidget) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` size: QSize `
    ///
    pub fn SetIconSize(self: QTableWidget, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IconSize(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QAbstractItemView_IconSize(@ptrCast(self.ptr)) };
    }

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
    pub fn SetTextElideMode(self: QTableWidget, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn TextElideMode(self: QTableWidget) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self.ptr));
    }

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
    pub fn SizeHintForIndex(self: QTableWidget, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

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
    pub fn SetIndexWidget(self: QTableWidget, index: anytype, widget: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexWidget(self: QTableWidget, index: anytype) QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_IndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForRow(self: QTableWidget, row: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn ItemDelegateForRow(self: QTableWidget, row: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForColumn(self: QTableWidget, column: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemDelegateForColumn(self: QTableWidget, column: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column)) };
    }

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
    pub fn ItemDelegate2(self: QTableWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

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
    pub fn Edit(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Edit(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ClearSelection(self: QTableWidget) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self.ptr));
    }

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
    pub fn SetCurrentIndex(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ScrollToTop(self: QTableWidget) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ScrollToBottom(self: QTableWidget) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self.ptr));
    }

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
    pub fn Update(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Update(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

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
    pub fn Pressed(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Pressed(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

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
    pub fn OnPressed(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clicked(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Clicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

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
    pub fn OnClicked(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DoubleClicked(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

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
    pub fn OnDoubleClicked(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Activated(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Activated(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

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
    pub fn OnActivated(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Entered(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Entered(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

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
    pub fn OnEntered(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ViewportEntered(self: QTableWidget) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self.ptr));
    }

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
    pub fn OnViewportEntered(self: QTableWidget, callback: *const fn (QTableWidget) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` size: QSize `
    ///
    pub fn IconSizeChanged(self: QTableWidget, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

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
    pub fn OnIconSizeChanged(self: QTableWidget, callback: *const fn (QTableWidget, QSize) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VerticalScrollBarPolicy(self: QTableWidget) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: QTableWidget, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn VerticalScrollBar(self: QTableWidget) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

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
    pub fn SetVerticalScrollBar(self: QTableWidget, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

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
    pub fn HorizontalScrollBarPolicy(self: QTableWidget) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: QTableWidget, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn HorizontalScrollBar(self: QTableWidget) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

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
    pub fn SetHorizontalScrollBar(self: QTableWidget, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn CornerWidget(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCornerWidget(self: QTableWidget, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

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
    pub fn AddScrollBarWidget(self: QTableWidget, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

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
    pub fn ScrollBarWidgets(self: QTableWidget, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qtablewidget.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    pub fn Viewport(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

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
    pub fn SetViewport(self: QTableWidget, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn MaximumViewportSize(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

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
    pub fn SizeAdjustPolicy(self: QTableWidget) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

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
    pub fn SetSizeAdjustPolicy(self: QTableWidget, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn FrameStyle(self: QTableWidget) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: QTableWidget, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn FrameWidth(self: QTableWidget) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

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
    pub fn FrameShape(self: QTableWidget) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: QTableWidget, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

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
    pub fn FrameShadow(self: QTableWidget) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: QTableWidget, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn LineWidth(self: QTableWidget) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QTableWidget, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn MidLineWidth(self: QTableWidget) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QTableWidget, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn FrameRect(self: QTableWidget) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: QTableWidget, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn WinId(self: QTableWidget) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn CreateWinId(self: QTableWidget) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn InternalWinId(self: QTableWidget) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn EffectiveWinId(self: QTableWidget) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Style(self: QTableWidget) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QTableWidget, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsTopLevel(self: QTableWidget) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsWindow(self: QTableWidget) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsModal(self: QTableWidget) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

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
    pub fn WindowModality(self: QTableWidget) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QTableWidget, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsEnabled(self: QTableWidget) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn IsEnabledTo(self: QTableWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SetEnabled(self: QTableWidget, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

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
    pub fn SetDisabled(self: QTableWidget, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

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
    pub fn SetWindowModified(self: QTableWidget, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn FrameGeometry(self: QTableWidget) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Geometry(self: QTableWidget) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn NormalGeometry(self: QTableWidget) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn X(self: QTableWidget) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Y(self: QTableWidget) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Pos(self: QTableWidget) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn FrameSize(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Size(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Width(self: QTableWidget) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Height(self: QTableWidget) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Rect(self: QTableWidget) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ChildrenRect(self: QTableWidget) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ChildrenRegion(self: QTableWidget) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn MinimumSize(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn MaximumSize(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn MinimumWidth(self: QTableWidget) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn MinimumHeight(self: QTableWidget) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn MaximumWidth(self: QTableWidget) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn MaximumHeight(self: QTableWidget) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QTableWidget, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

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
    pub fn SetMinimumSize2(self: QTableWidget, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QTableWidget, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

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
    pub fn SetMaximumSize2(self: QTableWidget, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

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
    pub fn SetMinimumWidth(self: QTableWidget, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

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
    pub fn SetMinimumHeight(self: QTableWidget, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

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
    pub fn SetMaximumWidth(self: QTableWidget, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

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
    pub fn SetMaximumHeight(self: QTableWidget, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn SizeIncrement(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QTableWidget, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

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
    pub fn SetSizeIncrement2(self: QTableWidget, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn BaseSize(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QTableWidget, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

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
    pub fn SetBaseSize2(self: QTableWidget, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

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
    pub fn SetFixedSize(self: QTableWidget, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

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
    pub fn SetFixedSize2(self: QTableWidget, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

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
    pub fn SetFixedWidth(self: QTableWidget, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

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
    pub fn SetFixedHeight(self: QTableWidget, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

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
    pub fn MapToGlobal(self: QTableWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToGlobal2(self: QTableWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromGlobal(self: QTableWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromGlobal2(self: QTableWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToParent(self: QTableWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToParent2(self: QTableWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromParent(self: QTableWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromParent2(self: QTableWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapTo(self: QTableWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QTableWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QTableWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QTableWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTableWidget `
    ///
    pub fn Window(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn NativeParentWidget(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn TopLevelWidget(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Palette(self: QTableWidget) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QTableWidget, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QTableWidget, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

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
    pub fn BackgroundRole(self: QTableWidget) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QTableWidget, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

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
    pub fn ForegroundRole(self: QTableWidget) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Font(self: QTableWidget) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QTableWidget, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn FontMetrics(self: QTableWidget) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn FontInfo(self: QTableWidget) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Cursor(self: QTableWidget) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QTableWidget, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn UnsetCursor(self: QTableWidget) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

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
    pub fn SetMouseTracking(self: QTableWidget, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn HasMouseTracking(self: QTableWidget) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn UnderMouse(self: QTableWidget) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

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
    pub fn SetTabletTracking(self: QTableWidget, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn HasTabletTracking(self: QTableWidget) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QTableWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QTableWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Mask(self: QTableWidget) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ClearMask(self: QTableWidget) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

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
    pub fn Render(self: QTableWidget, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

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
    pub fn Render2(self: QTableWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Grab(self: QTableWidget) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn GraphicsEffect(self: QTableWidget) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

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
    pub fn SetGraphicsEffect(self: QTableWidget, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

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
    pub fn GrabGesture(self: QTableWidget, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn UngrabGesture(self: QTableWidget, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QTableWidget, windowTitle: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QTableWidget, styleSheet: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn WindowTitle(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QTableWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn WindowIcon(self: QTableWidget) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QTableWidget, windowIconText: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QTableWidget, windowRole: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowFilePath(self: QTableWidget, filePath: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowOpacity(self: QTableWidget, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn WindowOpacity(self: QTableWidget) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsWindowModified(self: QTableWidget) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QTableWidget, toolTip: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetToolTipDuration(self: QTableWidget, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ToolTipDuration(self: QTableWidget) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QTableWidget, statusTip: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QTableWidget, whatsThis: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn AccessibleName(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetAccessibleName(self: QTableWidget, name: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetAccessibleDescription(self: QTableWidget, description: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTableWidget, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

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
    pub fn LayoutDirection(self: QTableWidget) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn UnsetLayoutDirection(self: QTableWidget) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QTableWidget, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Locale(self: QTableWidget) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn UnsetLocale(self: QTableWidget) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsRightToLeft(self: QTableWidget) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsLeftToRight(self: QTableWidget) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn SetFocus(self: QTableWidget) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsActiveWindow(self: QTableWidget) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ActivateWindow(self: QTableWidget) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ClearFocus(self: QTableWidget) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

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
    pub fn SetFocus2(self: QTableWidget, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

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
    pub fn FocusPolicy(self: QTableWidget) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

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
    pub fn SetFocusPolicy(self: QTableWidget, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn HasFocus(self: QTableWidget) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QTableWidget, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn FocusProxy(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

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
    pub fn ContextMenuPolicy(self: QTableWidget) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

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
    pub fn SetContextMenuPolicy(self: QTableWidget, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn GrabMouse(self: QTableWidget) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

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
    pub fn GrabMouse2(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ReleaseMouse(self: QTableWidget) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn GrabKeyboard(self: QTableWidget) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ReleaseKeyboard(self: QTableWidget) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

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
    pub fn GrabShortcut(self: QTableWidget, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

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
    pub fn ReleaseShortcut(self: QTableWidget, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn SetShortcutEnabled(self: QTableWidget, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn SetShortcutAutoRepeat(self: QTableWidget, id: i32) void {
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
    /// ` self: QTableWidget `
    ///
    pub fn UpdatesEnabled(self: QTableWidget) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetUpdatesEnabled(self: QTableWidget, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn GraphicsProxyWidget(self: QTableWidget) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Repaint(self: QTableWidget) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QTableWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

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
    pub fn Update3(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Update4(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QTableWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

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
    pub fn Repaint3(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Repaint4(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SetHidden(self: QTableWidget, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Show(self: QTableWidget) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Hide(self: QTableWidget) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ShowMinimized(self: QTableWidget) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ShowMaximized(self: QTableWidget) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ShowFullScreen(self: QTableWidget) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ShowNormal(self: QTableWidget) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Close(self: QTableWidget) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Raise(self: QTableWidget) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Lower(self: QTableWidget) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

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
    pub fn StackUnder(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QTableWidget, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

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
    pub fn Move2(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Resize(self: QTableWidget, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

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
    pub fn Resize2(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QTableWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QTableWidget, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

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
    pub fn SaveGeometry(self: QTableWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtablewidget.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QTableWidget, geometry: []u8) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn AdjustSize(self: QTableWidget) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsVisible(self: QTableWidget) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

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
    pub fn IsVisibleTo(self: QTableWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsHidden(self: QTableWidget) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsMinimized(self: QTableWidget) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsMaximized(self: QTableWidget) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsFullScreen(self: QTableWidget) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

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
    pub fn WindowState(self: QTableWidget) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QTableWidget, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QTableWidget, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn SizePolicy(self: QTableWidget) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QTableWidget, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

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
    pub fn SetSizePolicy2(self: QTableWidget, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn VisibleRegion(self: QTableWidget) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

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
    pub fn SetContentsMargins(self: QTableWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

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
    pub fn SetContentsMargins2(self: QTableWidget, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ContentsMargins(self: QTableWidget) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ContentsRect(self: QTableWidget) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Layout(self: QTableWidget) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QTableWidget, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn UpdateGeometry(self: QTableWidget) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QTableWidget, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QTableWidget, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

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
    pub fn Scroll(self: QTableWidget, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

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
    pub fn Scroll2(self: QTableWidget, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn FocusWidget(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn NextInFocusChain(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn PreviousInFocusChain(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn AcceptDrops(self: QTableWidget) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

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
    pub fn SetAcceptDrops(self: QTableWidget, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

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
    pub fn AddAction(self: QTableWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QTableWidget, actions: []QAction) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QTableWidget, before: anytype, actions: []QAction) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QTableWidget, before: anytype, action: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QTableWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

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
    pub fn Actions(self: QTableWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qtablewidget.Actions: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QTableWidget, text: []const u8) QAction {
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
    /// ` self: QTableWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QTableWidget, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QTableWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QTableWidget, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTableWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QTableWidget, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTableWidget `
    ///
    pub fn ParentWidget(self: QTableWidget) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn SetWindowFlags(self: QTableWidget, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn WindowFlags(self: QTableWidget) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

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
    pub fn SetWindowFlag(self: QTableWidget, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OverrideWindowFlags(self: QTableWidget, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn WindowType(self: QTableWidget) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QTableWidget, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

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
    pub fn ChildAt2(self: QTableWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

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
    pub fn ChildAt3(self: QTableWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

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
    pub fn SetAttribute(self: QTableWidget, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn TestAttribute(self: QTableWidget, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn EnsurePolished(self: QTableWidget) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

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
    pub fn IsAncestorOf(self: QTableWidget, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn AutoFillBackground(self: QTableWidget) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

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
    pub fn SetAutoFillBackground(self: QTableWidget, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn BackingStore(self: QTableWidget) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn WindowHandle(self: QTableWidget) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Screen(self: QTableWidget) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QTableWidget, screen: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QTableWidget, title: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QTableWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

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
    pub fn OnWindowIconChanged(self: QTableWidget, callback: *const fn (QTableWidget, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WindowIconTextChanged(self: QTableWidget, iconText: []const u8) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` callback: *const fn (self: QTableWidget, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QTableWidget, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn OnCustomContextMenuRequested(self: QTableWidget, callback: *const fn (QTableWidget, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InputMethodHints(self: QTableWidget) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

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
    pub fn SetInputMethodHints(self: QTableWidget, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

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
    pub fn Render22(self: QTableWidget, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QTableWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn Render4(self: QTableWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QTableWidget, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QTableWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn Render42(self: QTableWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QTableWidget, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

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
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QTableWidget, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

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
    pub fn GrabShortcut2(self: QTableWidget, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

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
    pub fn SetShortcutEnabled2(self: QTableWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

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
    pub fn SetShortcutAutoRepeat2(self: QTableWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

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
    pub fn SetWindowFlag2(self: QTableWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

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
    pub fn SetAttribute2(self: QTableWidget, param1: i32, on: bool) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTableWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtablewidget.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QTableWidget, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsWidgetType(self: QTableWidget) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsWindowType(self: QTableWidget) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn IsQuickItemType(self: QTableWidget) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn SignalsBlocked(self: QTableWidget) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QTableWidget, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Thread(self: QTableWidget) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTableWidget, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QTableWidget, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QTableWidget, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QTableWidget, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QTableWidget, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QTableWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtablewidget.Children: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTableWidget, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QTableWidget, obj: anytype) void {
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
    /// ` self: QTableWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTableWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTableWidget `
    ///
    pub fn Disconnect3(self: QTableWidget) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QTableWidget, receiver: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    pub fn DumpObjectTree(self: QTableWidget) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn DumpObjectInfo(self: QTableWidget) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QTableWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTableWidget, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QTableWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtablewidget.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtablewidget.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTableWidget `
    ///
    pub fn BindingStorage(self: QTableWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn BindingStorage2(self: QTableWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Destroyed(self: QTableWidget) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QTableWidget, callback: *const fn (QTableWidget) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Parent(self: QTableWidget) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QTableWidget, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn DeleteLater(self: QTableWidget) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QTableWidget, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QTableWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: QTableWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTableWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTableWidget, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QTableWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTableWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTableWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QTableWidget, callback: *const fn (QTableWidget, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn PaintingActive(self: QTableWidget) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn WidthMM(self: QTableWidget) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn HeightMM(self: QTableWidget) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn LogicalDpiX(self: QTableWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn LogicalDpiY(self: QTableWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn PhysicalDpiX(self: QTableWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn PhysicalDpiY(self: QTableWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn DevicePixelRatio(self: QTableWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn DevicePixelRatioF(self: QTableWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn ColorCount(self: QTableWidget) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Depth(self: QTableWidget) i32 {
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
    pub fn SetRootIndex(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTableWidget_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetRootIndex` instead
    ///
    pub const QBaseSetRootIndex = SuperSetRootIndex;

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
    pub fn SuperSetRootIndex(self: QTableWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTableWidget_SuperSetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

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
    pub fn OnSetRootIndex(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) void) void {
        qtc.QTableWidget_OnSetRootIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SetSelectionModel(self: QTableWidget, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.QTableWidget_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetSelectionModel` instead
    ///
    pub const QBaseSetSelectionModel = SuperSetSelectionModel;

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
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SuperSetSelectionModel(self: QTableWidget, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.QTableWidget_SuperSetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

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
    pub fn OnSetSelectionModel(self: QTableWidget, callback: *const fn (QTableWidget, QItemSelectionModel) callconv(.c) void) void {
        qtc.QTableWidget_OnSetSelectionModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DoItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_DoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoItemsLayout` instead
    ///
    pub const QBaseDoItemsLayout = SuperDoItemsLayout;

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
    pub fn SuperDoItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_SuperDoItemsLayout(@ptrCast(self.ptr));
    }

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
    pub fn OnDoItemsLayout(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnDoItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VisualRect(self: QTableWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_VisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperVisualRect` instead
    ///
    pub const QBaseVisualRect = SuperVisualRect;

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
    pub fn SuperVisualRect(self: QTableWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_SuperVisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

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
    pub fn OnVisualRect(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) QRect) void {
        qtc.QTableWidget_OnVisualRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ScrollTo(self: QTableWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTableWidget_ScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `SuperScrollTo` instead
    ///
    pub const QBaseScrollTo = SuperScrollTo;

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
    pub fn SuperScrollTo(self: QTableWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTableWidget_SuperScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

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
    pub fn OnScrollTo(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnScrollTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IndexAt(self: QTableWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_IndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperIndexAt` instead
    ///
    pub const QBaseIndexAt = SuperIndexAt;

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
    pub fn SuperIndexAt(self: QTableWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_SuperIndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

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
    pub fn OnIndexAt(self: QTableWidget, callback: *const fn (QTableWidget, QPoint) callconv(.c) QModelIndex) void {
        qtc.QTableWidget_OnIndexAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ScrollContentsBy(self: QTableWidget, dx: i32, dy: i32) void {
        qtc.QTableWidget_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

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
    pub fn SuperScrollContentsBy(self: QTableWidget, dx: i32, dy: i32) void {
        qtc.QTableWidget_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

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
    pub fn OnScrollContentsBy(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InitViewItemOption(self: QTableWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QTableWidget_InitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitViewItemOption` instead
    ///
    pub const QBaseInitViewItemOption = SuperInitViewItemOption;

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
    pub fn SuperInitViewItemOption(self: QTableWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QTableWidget_SuperInitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

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
    pub fn OnInitViewItemOption(self: QTableWidget, callback: *const fn (QTableWidget, QStyleOptionViewItem) callconv(.c) void) void {
        qtc.QTableWidget_OnInitViewItemOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn PaintEvent(self: QTableWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QTableWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

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
    pub fn SuperPaintEvent(self: QTableWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QTableWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

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
    pub fn OnPaintEvent(self: QTableWidget, callback: *const fn (QTableWidget, QPaintEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTableWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTableWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QTableWidget, callback: *const fn (QTableWidget, QTimerEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HorizontalOffset(self: QTableWidget) i32 {
        return qtc.QTableWidget_HorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHorizontalOffset` instead
    ///
    pub const QBaseHorizontalOffset = SuperHorizontalOffset;

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
    pub fn SuperHorizontalOffset(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperHorizontalOffset(@ptrCast(self.ptr));
    }

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
    pub fn OnHorizontalOffset(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnHorizontalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VerticalOffset(self: QTableWidget) i32 {
        return qtc.QTableWidget_VerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperVerticalOffset` instead
    ///
    pub const QBaseVerticalOffset = SuperVerticalOffset;

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
    pub fn SuperVerticalOffset(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperVerticalOffset(@ptrCast(self.ptr));
    }

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
    pub fn OnVerticalOffset(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnVerticalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MoveCursor(self: QTableWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QTableWidget_MoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `SuperMoveCursor` instead
    ///
    pub const QBaseMoveCursor = SuperMoveCursor;

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
    pub fn SuperMoveCursor(self: QTableWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QTableWidget_SuperMoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

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
    pub fn OnMoveCursor(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QTableWidget_OnMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetSelection(self: QTableWidget, rect: anytype, command: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QTableWidget_SetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `SuperSetSelection` instead
    ///
    pub const QBaseSetSelection = SuperSetSelection;

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
    /// ` rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSetSelection(self: QTableWidget, rect: anytype, command: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QTableWidget_SuperSetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(command));
    }

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
    pub fn OnSetSelection(self: QTableWidget, callback: *const fn (QTableWidget, QRect, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VisualRegionForSelection(self: QTableWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QTableWidget_VisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperVisualRegionForSelection` instead
    ///
    pub const QBaseVisualRegionForSelection = SuperVisualRegionForSelection;

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
    pub fn SuperVisualRegionForSelection(self: QTableWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QTableWidget_SuperVisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

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
    pub fn OnVisualRegionForSelection(self: QTableWidget, callback: *const fn (QTableWidget, QItemSelection) callconv(.c) QRegion) void {
        qtc.QTableWidget_OnVisualRegionForSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SelectedIndexes(self: QTableWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qtablewidget.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperSelectedIndexes` instead
    ///
    pub const QBaseSelectedIndexes = SuperSelectedIndexes;

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
    pub fn SuperSelectedIndexes(self: QTableWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTableWidget_SuperSelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qtablewidget.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnSelectedIndexes(self: QTableWidget, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QTableWidget_OnSelectedIndexes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateGeometries(self: QTableWidget) void {
        qtc.QTableWidget_UpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometries` instead
    ///
    pub const QBaseUpdateGeometries = SuperUpdateGeometries;

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
    pub fn SuperUpdateGeometries(self: QTableWidget) void {
        qtc.QTableWidget_SuperUpdateGeometries(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateGeometries(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ViewportSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperViewportSizeHint` instead
    ///
    pub const QBaseViewportSizeHint = SuperViewportSizeHint;

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
    pub fn SuperViewportSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnViewportSizeHint(self: QTableWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTableWidget_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` row: i32 `
    ///
    pub fn SizeHintForRow(self: QTableWidget, row: i32) i32 {
        return qtc.QTableWidget_SizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `SuperSizeHintForRow` instead
    ///
    pub const QBaseSizeHintForRow = SuperSizeHintForRow;

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
    /// ` row: i32 `
    ///
    pub fn SuperSizeHintForRow(self: QTableWidget, row: i32) i32 {
        return qtc.QTableWidget_SuperSizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

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
    pub fn OnSizeHintForRow(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnSizeHintForRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` column: i32 `
    ///
    pub fn SizeHintForColumn(self: QTableWidget, column: i32) i32 {
        return qtc.QTableWidget_SizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `SuperSizeHintForColumn` instead
    ///
    pub const QBaseSizeHintForColumn = SuperSizeHintForColumn;

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
    /// ` column: i32 `
    ///
    pub fn SuperSizeHintForColumn(self: QTableWidget, column: i32) i32 {
        return qtc.QTableWidget_SuperSizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

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
    pub fn OnSizeHintForColumn(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnSizeHintForColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VerticalScrollbarAction(self: QTableWidget, action: i32) void {
        qtc.QTableWidget_VerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `SuperVerticalScrollbarAction` instead
    ///
    pub const QBaseVerticalScrollbarAction = SuperVerticalScrollbarAction;

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
    pub fn SuperVerticalScrollbarAction(self: QTableWidget, action: i32) void {
        qtc.QTableWidget_SuperVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

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
    pub fn OnVerticalScrollbarAction(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HorizontalScrollbarAction(self: QTableWidget, action: i32) void {
        qtc.QTableWidget_HorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `SuperHorizontalScrollbarAction` instead
    ///
    pub const QBaseHorizontalScrollbarAction = SuperHorizontalScrollbarAction;

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
    pub fn SuperHorizontalScrollbarAction(self: QTableWidget, action: i32) void {
        qtc.QTableWidget_SuperHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

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
    pub fn OnHorizontalScrollbarAction(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsIndexHidden(self: QTableWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTableWidget_IsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsIndexHidden` instead
    ///
    pub const QBaseIsIndexHidden = SuperIsIndexHidden;

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
    pub fn SuperIsIndexHidden(self: QTableWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTableWidget_SuperIsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

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
    pub fn OnIsIndexHidden(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) bool) void {
        qtc.QTableWidget_OnIsIndexHidden(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SelectionChanged(self: QTableWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QTableWidget_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectionChanged` instead
    ///
    pub const QBaseSelectionChanged = SuperSelectionChanged;

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
    pub fn SuperSelectionChanged(self: QTableWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QTableWidget_SuperSelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

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
    pub fn OnSelectionChanged(self: QTableWidget, callback: *const fn (QTableWidget, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QTableWidget_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CurrentChanged(self: QTableWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QTableWidget_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `SuperCurrentChanged` instead
    ///
    pub const QBaseCurrentChanged = SuperCurrentChanged;

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
    pub fn SuperCurrentChanged(self: QTableWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QTableWidget_SuperCurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

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
    pub fn OnCurrentChanged(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QTableWidget_OnCurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn KeyboardSearch(self: QTableWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTableWidget_KeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// ### DEPRECATED: Use `SuperKeyboardSearch` instead
    ///
    pub const QBaseKeyboardSearch = SuperKeyboardSearch;

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
    pub fn SuperKeyboardSearch(self: QTableWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTableWidget_SuperKeyboardSearch(@ptrCast(self.ptr), search_str);
    }

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
    pub fn OnKeyboardSearch(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTableWidget_OnKeyboardSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ItemDelegateForIndex(self: QTableWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_ItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperItemDelegateForIndex(self: QTableWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTableWidget_SuperItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

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
    pub fn OnItemDelegateForIndex(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex) callconv(.c) QAbstractItemDelegate) void {
        qtc.QTableWidget_OnItemDelegateForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InputMethodQuery(self: QTableWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QTableWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QTableWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QTableWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QTableWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

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
    pub fn OnInputMethodQuery(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) QVariant) void {
        qtc.QTableWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Reset(self: QTableWidget) void {
        qtc.QTableWidget_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

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
    pub fn SuperReset(self: QTableWidget) void {
        qtc.QTableWidget_SuperReset(@ptrCast(self.ptr));
    }

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
    pub fn OnReset(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SelectAll(self: QTableWidget) void {
        qtc.QTableWidget_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectAll` instead
    ///
    pub const QBaseSelectAll = SuperSelectAll;

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
    pub fn SuperSelectAll(self: QTableWidget) void {
        qtc.QTableWidget_SuperSelectAll(@ptrCast(self.ptr));
    }

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
    pub fn OnSelectAll(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DataChanged(self: QTableWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTableWidget_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `SuperDataChanged` instead
    ///
    pub const QBaseDataChanged = SuperDataChanged;

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
    pub fn SuperDataChanged(self: QTableWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTableWidget_SuperDataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

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
    pub fn OnDataChanged(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QTableWidget_OnDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsInserted(self: QTableWidget, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTableWidget_RowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `SuperRowsInserted` instead
    ///
    pub const QBaseRowsInserted = SuperRowsInserted;

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
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsInserted(self: QTableWidget, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTableWidget_SuperRowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

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
    pub fn OnRowsInserted(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsAboutToBeRemoved(self: QTableWidget, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTableWidget_RowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `SuperRowsAboutToBeRemoved` instead
    ///
    pub const QBaseRowsAboutToBeRemoved = SuperRowsAboutToBeRemoved;

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
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsAboutToBeRemoved(self: QTableWidget, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTableWidget_SuperRowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

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
    pub fn OnRowsAboutToBeRemoved(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateEditorData(self: QTableWidget) void {
        qtc.QTableWidget_UpdateEditorData(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperUpdateEditorData(self: QTableWidget) void {
        qtc.QTableWidget_SuperUpdateEditorData(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateEditorData(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateEditorGeometries(self: QTableWidget) void {
        qtc.QTableWidget_UpdateEditorGeometries(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperUpdateEditorGeometries(self: QTableWidget) void {
        qtc.QTableWidget_SuperUpdateEditorGeometries(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateEditorGeometries(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateEditorGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VerticalScrollbarValueChanged(self: QTableWidget, value: i32) void {
        qtc.QTableWidget_VerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `SuperVerticalScrollbarValueChanged` instead
    ///
    pub const QBaseVerticalScrollbarValueChanged = SuperVerticalScrollbarValueChanged;

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
    pub fn SuperVerticalScrollbarValueChanged(self: QTableWidget, value: i32) void {
        qtc.QTableWidget_SuperVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

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
    pub fn OnVerticalScrollbarValueChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HorizontalScrollbarValueChanged(self: QTableWidget, value: i32) void {
        qtc.QTableWidget_HorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: QTableWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperHorizontalScrollbarValueChanged(self: QTableWidget, value: i32) void {
        qtc.QTableWidget_SuperHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

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
    pub fn OnHorizontalScrollbarValueChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CloseEditor(self: QTableWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTableWidget_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
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
    /// ` self: QTableWidget `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn SuperCloseEditor(self: QTableWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTableWidget_SuperCloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

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
    pub fn OnCloseEditor(self: QTableWidget, callback: *const fn (QTableWidget, QWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnCloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CommitData(self: QTableWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTableWidget_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` editor: QWidget `
    ///
    pub fn SuperCommitData(self: QTableWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTableWidget_SuperCommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

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
    pub fn OnCommitData(self: QTableWidget, callback: *const fn (QTableWidget, QWidget) callconv(.c) void) void {
        qtc.QTableWidget_OnCommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn EditorDestroyed(self: QTableWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QTableWidget_EditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` editor: QObject `
    ///
    pub fn SuperEditorDestroyed(self: QTableWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QTableWidget_SuperEditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

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
    pub fn OnEditorDestroyed(self: QTableWidget, callback: *const fn (QTableWidget, QObject) callconv(.c) void) void {
        qtc.QTableWidget_OnEditorDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Edit2(self: QTableWidget, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTableWidget_Edit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEdit2(self: QTableWidget, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTableWidget_SuperEdit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
    }

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
    pub fn OnEdit2(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, i32, QEvent) callconv(.c) bool) void {
        qtc.QTableWidget_OnEdit2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SelectionCommand(self: QTableWidget, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTableWidget_SelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelectionCommand(self: QTableWidget, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTableWidget_SuperSelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnSelectionCommand(self: QTableWidget, callback: *const fn (QTableWidget, QModelIndex, QEvent) callconv(.c) i32) void {
        qtc.QTableWidget_OnSelectionCommand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn StartDrag(self: QTableWidget, supportedActions: i32) void {
        qtc.QTableWidget_StartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
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
    /// ` self: QTableWidget `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperStartDrag(self: QTableWidget, supportedActions: i32) void {
        qtc.QTableWidget_SuperStartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

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
    pub fn OnStartDrag(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnStartDrag(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusNextPrevChild(self: QTableWidget, next: bool) bool {
        return qtc.QTableWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QTableWidget `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QTableWidget, next: bool) bool {
        return qtc.QTableWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

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
    pub fn OnFocusNextPrevChild(self: QTableWidget, callback: *const fn (QTableWidget, bool) callconv(.c) bool) void {
        qtc.QTableWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn ViewportEvent(self: QTableWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTableWidget_ViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperViewportEvent` instead
    ///
    pub const QBaseViewportEvent = SuperViewportEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperViewportEvent(self: QTableWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTableWidget_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnViewportEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) bool) void {
        qtc.QTableWidget_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTableWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

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
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTableWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMousePressEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTableWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

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
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTableWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMouseMoveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTableWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

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
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTableWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMouseReleaseEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTableWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

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
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTableWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMouseDoubleClickEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QTableWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QTableWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDragEnterEvent(self: QTableWidget, callback: *const fn (QTableWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QTableWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

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
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QTableWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDragMoveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QTableWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QTableWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDragLeaveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTableWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTableWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnFocusInEvent(self: QTableWidget, callback: *const fn (QTableWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTableWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTableWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnFocusOutEvent(self: QTableWidget, callback: *const fn (QTableWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTableWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

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
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTableWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnKeyPressEvent(self: QTableWidget, callback: *const fn (QTableWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QTableWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QTableWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnResizeEvent(self: QTableWidget, callback: *const fn (QTableWidget, QResizeEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QTableWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QTableWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnInputMethodEvent(self: QTableWidget, callback: *const fn (QTableWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTableWidget, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTableWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTableWidget, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTableWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QTableWidget, callback: *const fn (QTableWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTableWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinimumSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperMinimumSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinimumSizeHint(self: QTableWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTableWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperSizeHint(self: QTableWidget) QSize {
        return .{ .ptr = qtc.QTableWidget_SuperSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSizeHint(self: QTableWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTableWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: QTableWidget, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QTableWidget_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: QTableWidget, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QTableWidget_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

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
    pub fn OnSetupViewport(self: QTableWidget, callback: *const fn (QTableWidget, QWidget) callconv(.c) void) void {
        qtc.QTableWidget_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WheelEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QTableWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QTableWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnWheelEvent(self: QTableWidget, callback: *const fn (QTableWidget, QWheelEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ContextMenuEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QTableWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QTableWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnContextMenuEvent(self: QTableWidget, callback: *const fn (QTableWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChangeEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QTableWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

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
    pub fn SuperChangeEvent(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QTableWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnChangeEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InitStyleOption(self: QTableWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QTableWidget_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: QTableWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QTableWidget_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

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
    pub fn OnInitStyleOption(self: QTableWidget, callback: *const fn (QTableWidget, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QTableWidget_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DevType(self: QTableWidget) i32 {
        return qtc.QTableWidget_DevType(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperDevType(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperDevType(@ptrCast(self.ptr));
    }

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
    pub fn OnDevType(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetVisible(self: QTableWidget, visible: bool) void {
        qtc.QTableWidget_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QTableWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QTableWidget, visible: bool) void {
        qtc.QTableWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnSetVisible(self: QTableWidget, callback: *const fn (QTableWidget, bool) callconv(.c) void) void {
        qtc.QTableWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HeightForWidth(self: QTableWidget, param1: i32) i32 {
        return qtc.QTableWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QTableWidget, param1: i32) i32 {
        return qtc.QTableWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnHeightForWidth(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HasHeightForWidth(self: QTableWidget) bool {
        return qtc.QTableWidget_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperHasHeightForWidth(self: QTableWidget) bool {
        return qtc.QTableWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

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
    pub fn OnHasHeightForWidth(self: QTableWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTableWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn PaintEngine(self: QTableWidget) QPaintEngine {
        return .{ .ptr = qtc.QTableWidget_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperPaintEngine(self: QTableWidget) QPaintEngine {
        return .{ .ptr = qtc.QTableWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

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
    pub fn OnPaintEngine(self: QTableWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QTableWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTableWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTableWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnKeyReleaseEvent(self: QTableWidget, callback: *const fn (QTableWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QTableWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QTableWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEnterEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEnterEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTableWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTableWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnLeaveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QTableWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QTableWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMoveEvent(self: QTableWidget, callback: *const fn (QTableWidget, QMoveEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QTableWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QTableWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCloseEvent(self: QTableWidget, callback: *const fn (QTableWidget, QCloseEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QTableWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QTableWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTabletEvent(self: QTableWidget, callback: *const fn (QTableWidget, QTabletEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QTableWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QTableWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnActionEvent(self: QTableWidget, callback: *const fn (QTableWidget, QActionEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QTableWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QTableWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnShowEvent(self: QTableWidget, callback: *const fn (QTableWidget, QShowEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QTableWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QTableWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnHideEvent(self: QTableWidget, callback: *const fn (QTableWidget, QHideEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn NativeEvent(self: QTableWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTableWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QTableWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QTableWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTableWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

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
    pub fn OnNativeEvent(self: QTableWidget, callback: *const fn (QTableWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QTableWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Metric(self: QTableWidget, param1: i32) i32 {
        return qtc.QTableWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QTableWidget, param1: i32) i32 {
        return qtc.QTableWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnMetric(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) i32) void {
        qtc.QTableWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InitPainter(self: QTableWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTableWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QTableWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTableWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnInitPainter(self: QTableWidget, callback: *const fn (QTableWidget, QPainter) callconv(.c) void) void {
        qtc.QTableWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Redirected(self: QTableWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QTableWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTableWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

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
    pub fn OnRedirected(self: QTableWidget, callback: *const fn (QTableWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QTableWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SharedPainter(self: QTableWidget) QPainter {
        return .{ .ptr = qtc.QTableWidget_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperSharedPainter(self: QTableWidget) QPainter {
        return .{ .ptr = qtc.QTableWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSharedPainter(self: QTableWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QTableWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTableWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTableWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QTableWidget, callback: *const fn (QTableWidget, QChildEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTableWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTableWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTableWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QTableWidget, callback: *const fn (QTableWidget, QEvent) callconv(.c) void) void {
        qtc.QTableWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QTableWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTableWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTableWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTableWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QTableWidget, callback: *const fn (QTableWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTableWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QTableWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTableWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTableWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTableWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QTableWidget, callback: *const fn (QTableWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTableWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` row: i32 `
    ///
    /// ` oldIndex: i32 `
    ///
    /// ` newIndex: i32 `
    ///
    pub fn RowMoved(self: QTableWidget, row: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_RowMoved(@ptrCast(self.ptr), @bitCast(row), @bitCast(oldIndex), @bitCast(newIndex));
    }

    /// ### DEPRECATED: Use `SuperRowMoved` instead
    ///
    pub const QBaseRowMoved = SuperRowMoved;

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
    /// ` row: i32 `
    ///
    /// ` oldIndex: i32 `
    ///
    /// ` newIndex: i32 `
    ///
    pub fn SuperRowMoved(self: QTableWidget, row: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_SuperRowMoved(@ptrCast(self.ptr), @bitCast(row), @bitCast(oldIndex), @bitCast(newIndex));
    }

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
    pub fn OnRowMoved(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` column: i32 `
    ///
    /// ` oldIndex: i32 `
    ///
    /// ` newIndex: i32 `
    ///
    pub fn ColumnMoved(self: QTableWidget, column: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_ColumnMoved(@ptrCast(self.ptr), @bitCast(column), @bitCast(oldIndex), @bitCast(newIndex));
    }

    /// ### DEPRECATED: Use `SuperColumnMoved` instead
    ///
    pub const QBaseColumnMoved = SuperColumnMoved;

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
    /// ` column: i32 `
    ///
    /// ` oldIndex: i32 `
    ///
    /// ` newIndex: i32 `
    ///
    pub fn SuperColumnMoved(self: QTableWidget, column: i32, oldIndex: i32, newIndex: i32) void {
        qtc.QTableWidget_SuperColumnMoved(@ptrCast(self.ptr), @bitCast(column), @bitCast(oldIndex), @bitCast(newIndex));
    }

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
    pub fn OnColumnMoved(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnColumnMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` row: i32 `
    ///
    /// ` oldHeight: i32 `
    ///
    /// ` newHeight: i32 `
    ///
    pub fn RowResized(self: QTableWidget, row: i32, oldHeight: i32, newHeight: i32) void {
        qtc.QTableWidget_RowResized(@ptrCast(self.ptr), @bitCast(row), @bitCast(oldHeight), @bitCast(newHeight));
    }

    /// ### DEPRECATED: Use `SuperRowResized` instead
    ///
    pub const QBaseRowResized = SuperRowResized;

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
    /// ` row: i32 `
    ///
    /// ` oldHeight: i32 `
    ///
    /// ` newHeight: i32 `
    ///
    pub fn SuperRowResized(self: QTableWidget, row: i32, oldHeight: i32, newHeight: i32) void {
        qtc.QTableWidget_SuperRowResized(@ptrCast(self.ptr), @bitCast(row), @bitCast(oldHeight), @bitCast(newHeight));
    }

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
    pub fn OnRowResized(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowResized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` column: i32 `
    ///
    /// ` oldWidth: i32 `
    ///
    /// ` newWidth: i32 `
    ///
    pub fn ColumnResized(self: QTableWidget, column: i32, oldWidth: i32, newWidth: i32) void {
        qtc.QTableWidget_ColumnResized(@ptrCast(self.ptr), @bitCast(column), @bitCast(oldWidth), @bitCast(newWidth));
    }

    /// ### DEPRECATED: Use `SuperColumnResized` instead
    ///
    pub const QBaseColumnResized = SuperColumnResized;

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
    /// ` column: i32 `
    ///
    /// ` oldWidth: i32 `
    ///
    /// ` newWidth: i32 `
    ///
    pub fn SuperColumnResized(self: QTableWidget, column: i32, oldWidth: i32, newWidth: i32) void {
        qtc.QTableWidget_SuperColumnResized(@ptrCast(self.ptr), @bitCast(column), @bitCast(oldWidth), @bitCast(newWidth));
    }

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
    pub fn OnColumnResized(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnColumnResized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn RowCountChanged(self: QTableWidget, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_RowCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `SuperRowCountChanged` instead
    ///
    pub const QBaseRowCountChanged = SuperRowCountChanged;

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
    pub fn SuperRowCountChanged(self: QTableWidget, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_SuperRowCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

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
    pub fn OnRowCountChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnRowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ColumnCountChanged(self: QTableWidget, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `SuperColumnCountChanged` instead
    ///
    pub const QBaseColumnCountChanged = SuperColumnCountChanged;

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
    pub fn SuperColumnCountChanged(self: QTableWidget, oldCount: i32, newCount: i32) void {
        qtc.QTableWidget_SuperColumnCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

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
    pub fn OnColumnCountChanged(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnColumnCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn State(self: QTableWidget) i32 {
        return qtc.QTableWidget_State(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn SuperState(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperState(@ptrCast(self.ptr));
    }

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
    pub fn OnState(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SetState(self: QTableWidget, state: i32) void {
        qtc.QTableWidget_SetState(@ptrCast(self.ptr), @bitCast(state));
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
    /// ` self: QTableWidget `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SuperSetState(self: QTableWidget, state: i32) void {
        qtc.QTableWidget_SuperSetState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn OnSetState(self: QTableWidget, callback: *const fn (QTableWidget, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnSetState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ScheduleDelayedItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_ScheduleDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperScheduleDelayedItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_SuperScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

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
    pub fn OnScheduleDelayedItemsLayout(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnScheduleDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ExecuteDelayedItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_ExecuteDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperExecuteDelayedItemsLayout(self: QTableWidget) void {
        qtc.QTableWidget_SuperExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

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
    pub fn OnExecuteDelayedItemsLayout(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnExecuteDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetDirtyRegion(self: QTableWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTableWidget_SetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` region: QRegion `
    ///
    pub fn SuperSetDirtyRegion(self: QTableWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTableWidget_SuperSetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

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
    pub fn OnSetDirtyRegion(self: QTableWidget, callback: *const fn (QTableWidget, QRegion) callconv(.c) void) void {
        qtc.QTableWidget_OnSetDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ScrollDirtyRegion(self: QTableWidget, dx: i32, dy: i32) void {
        qtc.QTableWidget_ScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
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
    /// ` self: QTableWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollDirtyRegion(self: QTableWidget, dx: i32, dy: i32) void {
        qtc.QTableWidget_SuperScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

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
    pub fn OnScrollDirtyRegion(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DirtyRegionOffset(self: QTableWidget) QPoint {
        return .{ .ptr = qtc.QTableWidget_DirtyRegionOffset(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperDirtyRegionOffset(self: QTableWidget) QPoint {
        return .{ .ptr = qtc.QTableWidget_SuperDirtyRegionOffset(@ptrCast(self.ptr)) };
    }

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
    pub fn OnDirtyRegionOffset(self: QTableWidget, callback: *const fn () callconv(.c) QPoint) void {
        qtc.QTableWidget_OnDirtyRegionOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn StartAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_StartAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperStartAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_SuperStartAutoScroll(@ptrCast(self.ptr));
    }

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
    pub fn OnStartAutoScroll(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnStartAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn StopAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_StopAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperStopAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_SuperStopAutoScroll(@ptrCast(self.ptr));
    }

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
    pub fn OnStopAutoScroll(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnStopAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DoAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_DoAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperDoAutoScroll(self: QTableWidget) void {
        qtc.QTableWidget_SuperDoAutoScroll(@ptrCast(self.ptr));
    }

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
    pub fn OnDoAutoScroll(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnDoAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DropIndicatorPosition(self: QTableWidget) i32 {
        return qtc.QTableWidget_DropIndicatorPosition(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn SuperDropIndicatorPosition(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperDropIndicatorPosition(@ptrCast(self.ptr));
    }

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
    pub fn OnDropIndicatorPosition(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnDropIndicatorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetViewportMargins(self: QTableWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTableWidget_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    pub fn SuperSetViewportMargins(self: QTableWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTableWidget_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

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
    pub fn OnSetViewportMargins(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QTableWidget_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ViewportMargins(self: QTableWidget) QMargins {
        return .{ .ptr = qtc.QTableWidget_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperViewportMargins(self: QTableWidget) QMargins {
        return .{ .ptr = qtc.QTableWidget_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

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
    pub fn OnViewportMargins(self: QTableWidget, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QTableWidget_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DrawFrame(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QTableWidget_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: QTableWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QTableWidget_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDrawFrame(self: QTableWidget, callback: *const fn (QTableWidget, QPainter) callconv(.c) void) void {
        qtc.QTableWidget_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateMicroFocus(self: QTableWidget) void {
        qtc.QTableWidget_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperUpdateMicroFocus(self: QTableWidget) void {
        qtc.QTableWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateMicroFocus(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Create(self: QTableWidget) void {
        qtc.QTableWidget_Create(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperCreate(self: QTableWidget) void {
        qtc.QTableWidget_SuperCreate(@ptrCast(self.ptr));
    }

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
    pub fn OnCreate(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Destroy(self: QTableWidget) void {
        qtc.QTableWidget_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperDestroy(self: QTableWidget) void {
        qtc.QTableWidget_SuperDestroy(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroy(self: QTableWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTableWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusNextChild(self: QTableWidget) bool {
        return qtc.QTableWidget_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperFocusNextChild(self: QTableWidget) bool {
        return qtc.QTableWidget_SuperFocusNextChild(@ptrCast(self.ptr));
    }

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
    pub fn OnFocusNextChild(self: QTableWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTableWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusPreviousChild(self: QTableWidget) bool {
        return qtc.QTableWidget_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperFocusPreviousChild(self: QTableWidget) bool {
        return qtc.QTableWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

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
    pub fn OnFocusPreviousChild(self: QTableWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTableWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QTableWidget) QObject {
        return .{ .ptr = qtc.QTableWidget_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperSender(self: QTableWidget) QObject {
        return .{ .ptr = qtc.QTableWidget_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QTableWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTableWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QTableWidget) i32 {
        return qtc.QTableWidget_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTableWidget `
    ///
    pub fn SuperSenderSignalIndex(self: QTableWidget) i32 {
        return qtc.QTableWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QTableWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTableWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QTableWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTableWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTableWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTableWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTableWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QTableWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTableWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTableWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTableWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTableWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QTableWidget, callback: *const fn (QTableWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.QTableWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn GetDecodedMetricF(self: QTableWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTableWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QTableWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QTableWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTableWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

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
    pub fn OnGetDecodedMetricF(self: QTableWidget, callback: *const fn (QTableWidget, i32, i32) callconv(.c) f64) void {
        qtc.QTableWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QTableWidget, callback: *const fn (QTableWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#dtor.QTableWidget)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTableWidget `
    ///
    pub fn Delete(self: QTableWidget) void {
        qtc.QTableWidget_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtablewidget.html#public-types)
pub const enums = struct {
    pub const ItemType = enum(i32) {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };
};
