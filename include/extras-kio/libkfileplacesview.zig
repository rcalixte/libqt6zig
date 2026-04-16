const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemDelegate = @import("libqt6").QAbstractItemDelegate;
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
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
const QItemSelection = @import("libqt6").QItemSelection;
const QItemSelectionModel = @import("libqt6").QItemSelectionModel;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMenu = @import("libqt6").QMenu;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
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
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractitemdelegate_enums = @import("../libqabstractitemdelegate.zig").enums;
const qabstractitemview_enums = @import("../libqabstractitemview.zig").enums;
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qitemselectionmodel_enums = @import("../libqitemselectionmodel.zig").enums;
const qlistview_enums = @import("../libqlistview.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfileplacesview.html)
pub const KFilePlacesView = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFilePlacesView,

    pub const _is_KFilePlacesView = {};
    pub const _is_QListView = {};
    pub const _is_QAbstractItemView = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KFilePlacesView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KFilePlacesView {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KFilePlacesView_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KFilePlacesView object.
    ///
    pub fn New2() KFilePlacesView {
        return .{ .ptr = qtc.KFilePlacesView_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MetaObject(self: KFilePlacesView) QMetaObject {
        return .{ .ptr = qtc.KFilePlacesView_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KFilePlacesView, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KFilePlacesView_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperMetaObject(self: KFilePlacesView) QMetaObject {
        return .{ .ptr = qtc.KFilePlacesView_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KFilePlacesView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFilePlacesView_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KFilePlacesView, callback: *const fn (KFilePlacesView, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KFilePlacesView_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KFilePlacesView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFilePlacesView_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KFilePlacesView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFilePlacesView_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KFilePlacesView_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KFilePlacesView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFilePlacesView_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#allPlacesShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn AllPlacesShown(self: KFilePlacesView) bool {
        return qtc.KFilePlacesView_AllPlacesShown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#setDropOnPlaceEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetDropOnPlaceEnabled(self: KFilePlacesView, enabled: bool) void {
        qtc.KFilePlacesView_SetDropOnPlaceEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#isDropOnPlaceEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsDropOnPlaceEnabled(self: KFilePlacesView) bool {
        return qtc.KFilePlacesView_IsDropOnPlaceEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#setDragAutoActivationDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` delay: i32 `
    ///
    pub fn SetDragAutoActivationDelay(self: KFilePlacesView, delay: i32) void {
        qtc.KFilePlacesView_SetDragAutoActivationDelay(@ptrCast(self.ptr), @bitCast(delay));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragAutoActivationDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DragAutoActivationDelay(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_DragAutoActivationDelay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#setAutoResizeItemsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoResizeItemsEnabled(self: KFilePlacesView, enabled: bool) void {
        qtc.KFilePlacesView_SetAutoResizeItemsEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#isAutoResizeItemsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsAutoResizeItemsEnabled(self: KFilePlacesView) bool {
        return qtc.KFilePlacesView_IsAutoResizeItemsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#setTeardownFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` teardownFunc: *const fn (funcparam1: QModelIndex) callconv(.c) void `
    ///
    pub fn SetTeardownFunction(self: KFilePlacesView, teardownFunc: *const fn (QModelIndex) callconv(.c) void) void {
        qtc.KFilePlacesView_SetTeardownFunction(@ptrCast(self.ptr), @bitCast(@intFromPtr(teardownFunc)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SizeHint(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.KFilePlacesView_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KFilePlacesView, callback: *const fn () callconv(.c) QSize) void {
        qtc.KFilePlacesView_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperSizeHint(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.KFilePlacesView_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: KFilePlacesView, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KFilePlacesView_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#setShowAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` showAll: bool `
    ///
    pub fn SetShowAll(self: KFilePlacesView, showAll: bool) void {
        qtc.KFilePlacesView_SetShowAll(@ptrCast(self.ptr), showAll);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: KFilePlacesView, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.KFilePlacesView_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnSetModel(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QAbstractItemModel) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModel` instead
    ///
    pub const QBaseSetModel = SuperSetModel;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SuperSetModel(self: KFilePlacesView, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.KFilePlacesView_SuperSetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KFilePlacesView_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QKeyEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KFilePlacesView_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KFilePlacesView_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QContextMenuEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KFilePlacesView_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KFilePlacesView_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QResizeEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KFilePlacesView_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#showEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KFilePlacesView_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QShowEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KFilePlacesView_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#hideEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KFilePlacesView_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#hideEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QHideEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#hideEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KFilePlacesView_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KFilePlacesView_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QDragEnterEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KFilePlacesView_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KFilePlacesView_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KFilePlacesView_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KFilePlacesView_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QDragMoveEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KFilePlacesView_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KFilePlacesView_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QDropEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KFilePlacesView_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KFilePlacesView_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QPaintEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KFilePlacesView_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#startDrag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn StartDrag(self: KFilePlacesView, supportedActions: i32) void {
        qtc.KFilePlacesView_StartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#startDrag)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void `
    ///
    pub fn OnStartDrag(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnStartDrag(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStartDrag` instead
    ///
    pub const QBaseStartDrag = SuperStartDrag;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#startDrag)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperStartDrag(self: KFilePlacesView, supportedActions: i32) void {
        qtc.KFilePlacesView_SuperStartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KFilePlacesView_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QMouseEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KFilePlacesView_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#rowsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsInserted(self: KFilePlacesView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KFilePlacesView_RowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#rowsInserted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnRowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRowsInserted` instead
    ///
    pub const QBaseRowsInserted = SuperRowsInserted;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#rowsInserted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsInserted(self: KFilePlacesView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KFilePlacesView_SuperRowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged(self: KFilePlacesView, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.KFilePlacesView_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dataChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.KFilePlacesView_OnDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDataChanged` instead
    ///
    pub const QBaseDataChanged = SuperDataChanged;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dataChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn SuperDataChanged(self: KFilePlacesView, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.KFilePlacesView_SuperDataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#placeActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` url: QUrl `
    ///
    pub fn PlaceActivated(self: KFilePlacesView, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KFilePlacesView_PlaceActivated(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#placeActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, url: QUrl) callconv(.c) void `
    ///
    pub fn OnPlaceActivated(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QUrl) callconv(.c) void) void {
        qtc.KFilePlacesView_Connect_PlaceActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#tabRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` url: QUrl `
    ///
    pub fn TabRequested(self: KFilePlacesView, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KFilePlacesView_TabRequested(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#tabRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, url: QUrl) callconv(.c) void `
    ///
    pub fn OnTabRequested(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QUrl) callconv(.c) void) void {
        qtc.KFilePlacesView_Connect_TabRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#activeTabRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` url: QUrl `
    ///
    pub fn ActiveTabRequested(self: KFilePlacesView, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KFilePlacesView_ActiveTabRequested(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#activeTabRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, url: QUrl) callconv(.c) void `
    ///
    pub fn OnActiveTabRequested(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QUrl) callconv(.c) void) void {
        qtc.KFilePlacesView_Connect_ActiveTabRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#newWindowRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` url: QUrl `
    ///
    pub fn NewWindowRequested(self: KFilePlacesView, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KFilePlacesView_NewWindowRequested(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#newWindowRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, url: QUrl) callconv(.c) void `
    ///
    pub fn OnNewWindowRequested(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QUrl) callconv(.c) void) void {
        qtc.KFilePlacesView_Connect_NewWindowRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuAboutToShow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` menu: QMenu `
    ///
    pub fn ContextMenuAboutToShow(self: KFilePlacesView, index: anytype, menu: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KFilePlacesView_ContextMenuAboutToShow(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(menu.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuAboutToShow)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex, menu: QMenu) callconv(.c) void `
    ///
    pub fn OnContextMenuAboutToShow(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex, QMenu) callconv(.c) void) void {
        qtc.KFilePlacesView_Connect_ContextMenuAboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#allPlacesShownChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allPlacesShown: bool `
    ///
    pub fn AllPlacesShownChanged(self: KFilePlacesView, allPlacesShown: bool) void {
        qtc.KFilePlacesView_AllPlacesShownChanged(@ptrCast(self.ptr), allPlacesShown);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#allPlacesShownChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, allPlacesShown: bool) callconv(.c) void `
    ///
    pub fn OnAllPlacesShownChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, bool) callconv(.c) void) void {
        qtc.KFilePlacesView_Connect_AllPlacesShownChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` url: QUrl `
    ///
    pub fn UrlChanged(self: KFilePlacesView, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KFilePlacesView_UrlChanged(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#urlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, url: QUrl) callconv(.c) void `
    ///
    pub fn OnUrlChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QUrl) callconv(.c) void) void {
        qtc.KFilePlacesView_Connect_UrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#urlsDropped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` dest: QUrl `
    ///
    /// ` event: QDropEvent `
    ///
    /// ` parent: QWidget `
    ///
    pub fn UrlsDropped(self: KFilePlacesView, dest: anytype, event: anytype, parent: anytype) void {
        comptime _ = @TypeOf(dest)._is_QUrl;
        comptime _ = @TypeOf(event)._is_QDropEvent;
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KFilePlacesView_UrlsDropped(@ptrCast(self.ptr), @ptrCast(dest.ptr), @ptrCast(event.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#urlsDropped)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, dest: QUrl, event: QDropEvent, parent: QWidget) callconv(.c) void `
    ///
    pub fn OnUrlsDropped(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QUrl, QDropEvent, QWidget) callconv(.c) void) void {
        qtc.KFilePlacesView_Connect_UrlsDropped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setMovement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` movement: qlistview_enums.Movement `
    ///
    pub fn SetMovement(self: KFilePlacesView, movement: i32) void {
        qtc.QListView_SetMovement(@ptrCast(self.ptr), @bitCast(movement));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#movement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.Movement `
    ///
    pub fn Movement(self: KFilePlacesView) i32 {
        return qtc.QListView_Movement(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setFlow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` flow: qlistview_enums.Flow `
    ///
    pub fn SetFlow(self: KFilePlacesView, flow: i32) void {
        qtc.QListView_SetFlow(@ptrCast(self.ptr), @bitCast(flow));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#flow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.Flow `
    ///
    pub fn Flow(self: KFilePlacesView) i32 {
        return qtc.QListView_Flow(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetWrapping(self: KFilePlacesView, enable: bool) void {
        qtc.QListView_SetWrapping(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsWrapping(self: KFilePlacesView) bool {
        return qtc.QListView_IsWrapping(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` mode: qlistview_enums.ResizeMode `
    ///
    pub fn SetResizeMode(self: KFilePlacesView, mode: i32) void {
        qtc.QListView_SetResizeMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.ResizeMode `
    ///
    pub fn ResizeMode(self: KFilePlacesView) i32 {
        return qtc.QListView_ResizeMode(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` mode: qlistview_enums.LayoutMode `
    ///
    pub fn SetLayoutMode(self: KFilePlacesView, mode: i32) void {
        qtc.QListView_SetLayoutMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.LayoutMode `
    ///
    pub fn LayoutMode(self: KFilePlacesView) i32 {
        return qtc.QListView_LayoutMode(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` space: i32 `
    ///
    pub fn SetSpacing(self: KFilePlacesView, space: i32) void {
        qtc.QListView_SetSpacing(@ptrCast(self.ptr), @bitCast(space));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Spacing(self: KFilePlacesView) i32 {
        return qtc.QListView_Spacing(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` batchSize: i32 `
    ///
    pub fn SetBatchSize(self: KFilePlacesView, batchSize: i32) void {
        qtc.QListView_SetBatchSize(@ptrCast(self.ptr), @bitCast(batchSize));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#batchSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn BatchSize(self: KFilePlacesView) i32 {
        return qtc.QListView_BatchSize(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` size: QSize `
    ///
    pub fn SetGridSize(self: KFilePlacesView, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QListView_SetGridSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#gridSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn GridSize(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.QListView_GridSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` mode: qlistview_enums.ViewMode `
    ///
    pub fn SetViewMode(self: KFilePlacesView, mode: i32) void {
        qtc.QListView_SetViewMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.ViewMode `
    ///
    pub fn ViewMode(self: KFilePlacesView) i32 {
        return qtc.QListView_ViewMode(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ClearPropertyFlags(self: KFilePlacesView) void {
        qtc.QListView_ClearPropertyFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` row: i32 `
    ///
    pub fn IsRowHidden(self: KFilePlacesView, row: i32) bool {
        return qtc.QListView_IsRowHidden(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` row: i32 `
    ///
    /// ` hide: bool `
    ///
    pub fn SetRowHidden(self: KFilePlacesView, row: i32, hide: bool) void {
        qtc.QListView_SetRowHidden(@ptrCast(self.ptr), @bitCast(row), hide);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` column: i32 `
    ///
    pub fn SetModelColumn(self: KFilePlacesView, column: i32) void {
        qtc.QListView_SetModelColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ModelColumn(self: KFilePlacesView) i32 {
        return qtc.QListView_ModelColumn(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUniformItemSizes(self: KFilePlacesView, enable: bool) void {
        qtc.QListView_SetUniformItemSizes(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UniformItemSizes(self: KFilePlacesView) bool {
        return qtc.QListView_UniformItemSizes(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` on: bool `
    ///
    pub fn SetWordWrap(self: KFilePlacesView, on: bool) void {
        qtc.QListView_SetWordWrap(@ptrCast(self.ptr), on);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn WordWrap(self: KFilePlacesView) bool {
        return qtc.QListView_WordWrap(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` show: bool `
    ///
    pub fn SetSelectionRectVisible(self: KFilePlacesView, show: bool) void {
        qtc.QListView_SetSelectionRectVisible(@ptrCast(self.ptr), show);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsSelectionRectVisible(self: KFilePlacesView) bool {
        return qtc.QListView_IsSelectionRectVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetItemAlignment(self: KFilePlacesView, alignment: i32) void {
        qtc.QListView_SetItemAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ItemAlignment(self: KFilePlacesView) i32 {
        return qtc.QListView_ItemAlignment(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn IndexesMoved(self: KFilePlacesView, indexes: []QModelIndex) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QListView_IndexesMoved(@ptrCast(self.ptr), indexes_list);
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn OnIndexesMoved(self: KFilePlacesView, callback: *const fn (KFilePlacesView, qtc.libqt_list) callconv(.c) void) void {
        qtc.QListView_Connect_IndexesMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Model(self: KFilePlacesView) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractItemView_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SelectionModel(self: KFilePlacesView) QItemSelectionModel {
        return .{ .ptr = qtc.QAbstractItemView_SelectionModel(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegate(self: KFilePlacesView, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ItemDelegate(self: KFilePlacesView) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` mode: qabstractitemview_enums.SelectionMode `
    ///
    pub fn SetSelectionMode(self: KFilePlacesView, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionMode `
    ///
    pub fn SelectionMode(self: KFilePlacesView) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` behavior: qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SetSelectionBehavior(self: KFilePlacesView, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SelectionBehavior(self: KFilePlacesView) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn CurrentIndex(self: KFilePlacesView) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn RootIndex(self: KFilePlacesView) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_RootIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` triggers: flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn SetEditTriggers(self: KFilePlacesView, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self.ptr), @bitCast(triggers));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn EditTriggers(self: KFilePlacesView) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetVerticalScrollMode(self: KFilePlacesView, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn VerticalScrollMode(self: KFilePlacesView) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ResetVerticalScrollMode(self: KFilePlacesView) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetHorizontalScrollMode(self: KFilePlacesView, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn HorizontalScrollMode(self: KFilePlacesView) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ResetHorizontalScrollMode(self: KFilePlacesView) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoScroll(self: KFilePlacesView, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn HasAutoScroll(self: KFilePlacesView) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` margin: i32 `
    ///
    pub fn SetAutoScrollMargin(self: KFilePlacesView, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn AutoScrollMargin(self: KFilePlacesView) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabKeyNavigation(self: KFilePlacesView, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn TabKeyNavigation(self: KFilePlacesView) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDropIndicatorShown(self: KFilePlacesView, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ShowDropIndicator(self: KFilePlacesView) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDragEnabled(self: KFilePlacesView, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DragEnabled(self: KFilePlacesView) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetDragDropOverwriteMode(self: KFilePlacesView, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DragDropOverwriteMode(self: KFilePlacesView) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` behavior: qabstractitemview_enums.DragDropMode `
    ///
    pub fn SetDragDropMode(self: KFilePlacesView, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DragDropMode `
    ///
    pub fn DragDropMode(self: KFilePlacesView) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` dropAction: qnamespace_enums.DropAction `
    ///
    pub fn SetDefaultDropAction(self: KFilePlacesView, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self.ptr), @bitCast(dropAction));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DefaultDropAction(self: KFilePlacesView) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAlternatingRowColors(self: KFilePlacesView, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn AlternatingRowColors(self: KFilePlacesView) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` size: QSize `
    ///
    pub fn SetIconSize(self: KFilePlacesView, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IconSize(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.QAbstractItemView_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    pub fn SetTextElideMode(self: KFilePlacesView, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn TextElideMode(self: KFilePlacesView) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SizeHintForIndex(self: KFilePlacesView, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn OpenPersistentEditor(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_OpenPersistentEditor(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ClosePersistentEditor(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_ClosePersistentEditor(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsPersistentEditorOpen(self: KFilePlacesView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemView_IsPersistentEditorOpen(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetIndexWidget(self: KFilePlacesView, index: anytype, widget: anytype) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexWidget(self: KFilePlacesView, index: anytype) QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_IndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` row: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForRow(self: KFilePlacesView, row: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` row: i32 `
    ///
    pub fn ItemDelegateForRow(self: KFilePlacesView, row: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` column: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForColumn(self: KFilePlacesView, column: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemDelegateForColumn(self: KFilePlacesView, column: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemDelegate2(self: KFilePlacesView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Edit(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Edit(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ClearSelection(self: KFilePlacesView) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetCurrentIndex(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ScrollToTop(self: KFilePlacesView) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ScrollToBottom(self: KFilePlacesView) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Update(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Update(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Pressed(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Pressed(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnPressed(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Clicked(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Clicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnClicked(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DoubleClicked(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Activated(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Activated(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnActivated(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Entered(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Entered(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnEntered(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ViewportEntered(self: KFilePlacesView) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView) callconv(.c) void `
    ///
    pub fn OnViewportEntered(self: KFilePlacesView, callback: *const fn (KFilePlacesView) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` size: QSize `
    ///
    pub fn IconSizeChanged(self: KFilePlacesView, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, size: QSize) callconv(.c) void `
    ///
    pub fn OnIconSizeChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QSize) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: KFilePlacesView) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: KFilePlacesView, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn VerticalScrollBar(self: KFilePlacesView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: KFilePlacesView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: KFilePlacesView) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: KFilePlacesView, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn HorizontalScrollBar(self: KFilePlacesView) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: KFilePlacesView, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn CornerWidget(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: KFilePlacesView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: KFilePlacesView, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: KFilePlacesView, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kfileplacesview.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: KFilePlacesView `
    ///
    pub fn Viewport(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: KFilePlacesView, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MaximumViewportSize(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: KFilePlacesView) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: KFilePlacesView, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FrameStyle(self: KFilePlacesView) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: KFilePlacesView, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FrameWidth(self: KFilePlacesView) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: KFilePlacesView) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: KFilePlacesView, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: KFilePlacesView) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: KFilePlacesView, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn LineWidth(self: KFilePlacesView) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: KFilePlacesView, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MidLineWidth(self: KFilePlacesView) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: KFilePlacesView, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FrameRect(self: KFilePlacesView) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: KFilePlacesView, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn WinId(self: KFilePlacesView) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn CreateWinId(self: KFilePlacesView) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn InternalWinId(self: KFilePlacesView) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn EffectiveWinId(self: KFilePlacesView) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Style(self: KFilePlacesView) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KFilePlacesView, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsTopLevel(self: KFilePlacesView) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsWindow(self: KFilePlacesView) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsModal(self: KFilePlacesView) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KFilePlacesView) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KFilePlacesView, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsEnabled(self: KFilePlacesView) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KFilePlacesView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KFilePlacesView, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KFilePlacesView, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KFilePlacesView, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FrameGeometry(self: KFilePlacesView) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Geometry(self: KFilePlacesView) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn NormalGeometry(self: KFilePlacesView) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn X(self: KFilePlacesView) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Y(self: KFilePlacesView) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Pos(self: KFilePlacesView) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FrameSize(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Size(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Width(self: KFilePlacesView) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Height(self: KFilePlacesView) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Rect(self: KFilePlacesView) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ChildrenRect(self: KFilePlacesView) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ChildrenRegion(self: KFilePlacesView) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MinimumSize(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MaximumSize(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MinimumWidth(self: KFilePlacesView) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MinimumHeight(self: KFilePlacesView) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MaximumWidth(self: KFilePlacesView) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MaximumHeight(self: KFilePlacesView) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KFilePlacesView, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KFilePlacesView, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KFilePlacesView, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KFilePlacesView, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KFilePlacesView, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KFilePlacesView, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KFilePlacesView, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KFilePlacesView, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SizeIncrement(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KFilePlacesView, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KFilePlacesView, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn BaseSize(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KFilePlacesView, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KFilePlacesView, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KFilePlacesView, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KFilePlacesView, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KFilePlacesView, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KFilePlacesView, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KFilePlacesView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KFilePlacesView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KFilePlacesView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KFilePlacesView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KFilePlacesView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KFilePlacesView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KFilePlacesView, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KFilePlacesView, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KFilePlacesView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KFilePlacesView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KFilePlacesView, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KFilePlacesView, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KFilePlacesView `
    ///
    pub fn Window(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn NativeParentWidget(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn TopLevelWidget(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Palette(self: KFilePlacesView) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KFilePlacesView, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KFilePlacesView, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KFilePlacesView) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KFilePlacesView, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KFilePlacesView) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Font(self: KFilePlacesView) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KFilePlacesView, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FontMetrics(self: KFilePlacesView) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FontInfo(self: KFilePlacesView) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Cursor(self: KFilePlacesView) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KFilePlacesView, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UnsetCursor(self: KFilePlacesView) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KFilePlacesView, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn HasMouseTracking(self: KFilePlacesView) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UnderMouse(self: KFilePlacesView) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KFilePlacesView, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn HasTabletTracking(self: KFilePlacesView) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KFilePlacesView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KFilePlacesView, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Mask(self: KFilePlacesView) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ClearMask(self: KFilePlacesView) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KFilePlacesView, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KFilePlacesView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Grab(self: KFilePlacesView) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn GraphicsEffect(self: KFilePlacesView) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KFilePlacesView, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KFilePlacesView, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KFilePlacesView, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KFilePlacesView, windowTitle: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KFilePlacesView, styleSheet: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KFilePlacesView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn WindowIcon(self: KFilePlacesView) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KFilePlacesView, windowIconText: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KFilePlacesView, windowRole: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KFilePlacesView, filePath: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KFilePlacesView, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn WindowOpacity(self: KFilePlacesView) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsWindowModified(self: KFilePlacesView) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KFilePlacesView, toolTip: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KFilePlacesView, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ToolTipDuration(self: KFilePlacesView) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KFilePlacesView, statusTip: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KFilePlacesView, whatsThis: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KFilePlacesView, name: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KFilePlacesView, description: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KFilePlacesView, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KFilePlacesView) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UnsetLayoutDirection(self: KFilePlacesView) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KFilePlacesView, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Locale(self: KFilePlacesView) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UnsetLocale(self: KFilePlacesView) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsRightToLeft(self: KFilePlacesView) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsLeftToRight(self: KFilePlacesView) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SetFocus(self: KFilePlacesView) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsActiveWindow(self: KFilePlacesView) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ActivateWindow(self: KFilePlacesView) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ClearFocus(self: KFilePlacesView) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KFilePlacesView, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KFilePlacesView) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KFilePlacesView, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn HasFocus(self: KFilePlacesView) bool {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KFilePlacesView, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FocusProxy(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KFilePlacesView) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KFilePlacesView, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn GrabMouse(self: KFilePlacesView) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ReleaseMouse(self: KFilePlacesView) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn GrabKeyboard(self: KFilePlacesView) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ReleaseKeyboard(self: KFilePlacesView) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KFilePlacesView, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KFilePlacesView, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KFilePlacesView, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KFilePlacesView, id: i32) void {
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
    /// ` self: KFilePlacesView `
    ///
    pub fn UpdatesEnabled(self: KFilePlacesView) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KFilePlacesView, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn GraphicsProxyWidget(self: KFilePlacesView) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Repaint(self: KFilePlacesView) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KFilePlacesView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KFilePlacesView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KFilePlacesView, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Show(self: KFilePlacesView) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Hide(self: KFilePlacesView) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ShowMinimized(self: KFilePlacesView) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ShowMaximized(self: KFilePlacesView) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ShowFullScreen(self: KFilePlacesView) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ShowNormal(self: KFilePlacesView) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Close(self: KFilePlacesView) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Raise(self: KFilePlacesView) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Lower(self: KFilePlacesView) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KFilePlacesView, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KFilePlacesView, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KFilePlacesView, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KFilePlacesView, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KFilePlacesView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kfileplacesview.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KFilePlacesView, geometry: []u8) bool {
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
    /// ` self: KFilePlacesView `
    ///
    pub fn AdjustSize(self: KFilePlacesView) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsVisible(self: KFilePlacesView) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KFilePlacesView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsHidden(self: KFilePlacesView) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsMinimized(self: KFilePlacesView) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsMaximized(self: KFilePlacesView) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsFullScreen(self: KFilePlacesView) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KFilePlacesView) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KFilePlacesView, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KFilePlacesView, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SizePolicy(self: KFilePlacesView) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KFilePlacesView, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KFilePlacesView, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn VisibleRegion(self: KFilePlacesView) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KFilePlacesView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KFilePlacesView, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ContentsMargins(self: KFilePlacesView) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ContentsRect(self: KFilePlacesView) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Layout(self: KFilePlacesView) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KFilePlacesView, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UpdateGeometry(self: KFilePlacesView) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KFilePlacesView, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KFilePlacesView, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KFilePlacesView, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KFilePlacesView, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FocusWidget(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn NextInFocusChain(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn PreviousInFocusChain(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn AcceptDrops(self: KFilePlacesView) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KFilePlacesView, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KFilePlacesView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KFilePlacesView, actions: []QAction) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KFilePlacesView, before: anytype, actions: []QAction) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KFilePlacesView, before: anytype, action: anytype) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KFilePlacesView, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KFilePlacesView, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kfileplacesview.Actions: Memory allocation failed");
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
    /// ` self: KFilePlacesView `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KFilePlacesView, text: []const u8) QAction {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KFilePlacesView, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KFilePlacesView, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KFilePlacesView, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KFilePlacesView `
    ///
    pub fn ParentWidget(self: KFilePlacesView) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KFilePlacesView, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KFilePlacesView) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KFilePlacesView, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KFilePlacesView, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KFilePlacesView) i32 {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KFilePlacesView, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KFilePlacesView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KFilePlacesView, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KFilePlacesView, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KFilePlacesView, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn EnsurePolished(self: KFilePlacesView) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KFilePlacesView, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn AutoFillBackground(self: KFilePlacesView) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KFilePlacesView, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn BackingStore(self: KFilePlacesView) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn WindowHandle(self: KFilePlacesView) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Screen(self: KFilePlacesView) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KFilePlacesView, screen: anytype) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KFilePlacesView, title: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KFilePlacesView, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KFilePlacesView, iconText: []const u8) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KFilePlacesView, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KFilePlacesView) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KFilePlacesView, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KFilePlacesView, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KFilePlacesView, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KFilePlacesView, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KFilePlacesView, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KFilePlacesView, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KFilePlacesView, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KFilePlacesView, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KFilePlacesView, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KFilePlacesView, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KFilePlacesView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KFilePlacesView, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KFilePlacesView, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KFilePlacesView, param1: i32, on: bool) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KFilePlacesView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesview.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KFilePlacesView, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsWidgetType(self: KFilePlacesView) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsWindowType(self: KFilePlacesView) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn IsQuickItemType(self: KFilePlacesView) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SignalsBlocked(self: KFilePlacesView) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KFilePlacesView, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Thread(self: KFilePlacesView) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KFilePlacesView, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KFilePlacesView, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KFilePlacesView, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KFilePlacesView, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KFilePlacesView, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KFilePlacesView, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kfileplacesview.Children: Memory allocation failed");
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
    /// ` self: KFilePlacesView `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KFilePlacesView, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KFilePlacesView, obj: anytype) void {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KFilePlacesView, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KFilePlacesView `
    ///
    pub fn Disconnect3(self: KFilePlacesView) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KFilePlacesView, receiver: anytype) bool {
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
    /// ` self: KFilePlacesView `
    ///
    pub fn DumpObjectTree(self: KFilePlacesView) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DumpObjectInfo(self: KFilePlacesView) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KFilePlacesView, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KFilePlacesView, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KFilePlacesView, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kfileplacesview.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfileplacesview.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KFilePlacesView `
    ///
    pub fn BindingStorage(self: KFilePlacesView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn BindingStorage2(self: KFilePlacesView) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Destroyed(self: KFilePlacesView) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KFilePlacesView, callback: *const fn (KFilePlacesView) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Parent(self: KFilePlacesView) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KFilePlacesView, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DeleteLater(self: KFilePlacesView) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KFilePlacesView, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KFilePlacesView, time: i64, timerType: i32) i32 {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KFilePlacesView, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KFilePlacesView, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KFilePlacesView, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KFilePlacesView, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KFilePlacesView, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn PaintingActive(self: KFilePlacesView) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn WidthMM(self: KFilePlacesView) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn HeightMM(self: KFilePlacesView) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn LogicalDpiX(self: KFilePlacesView) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn LogicalDpiY(self: KFilePlacesView) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn PhysicalDpiX(self: KFilePlacesView) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn PhysicalDpiY(self: KFilePlacesView) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DevicePixelRatio(self: KFilePlacesView) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DevicePixelRatioF(self: KFilePlacesView) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ColorCount(self: KFilePlacesView) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Depth(self: KFilePlacesView) i32 {
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

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn VisualRect(self: KFilePlacesView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KFilePlacesView_VisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperVisualRect` instead
    ///
    pub const QBaseVisualRect = SuperVisualRect;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperVisualRect(self: KFilePlacesView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KFilePlacesView_SuperVisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) QRect `
    ///
    pub fn OnVisualRect(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) QRect) void {
        qtc.KFilePlacesView_OnVisualRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn ScrollTo(self: KFilePlacesView, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KFilePlacesView_ScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `SuperScrollTo` instead
    ///
    pub const QBaseScrollTo = SuperScrollTo;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn SuperScrollTo(self: KFilePlacesView, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KFilePlacesView_SuperScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void `
    ///
    pub fn OnScrollTo(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnScrollTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` p: QPoint `
    ///
    pub fn IndexAt(self: KFilePlacesView, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.KFilePlacesView_IndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperIndexAt` instead
    ///
    pub const QBaseIndexAt = SuperIndexAt;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` p: QPoint `
    ///
    pub fn SuperIndexAt(self: KFilePlacesView, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.KFilePlacesView_SuperIndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, p: QPoint) callconv(.c) QModelIndex `
    ///
    pub fn OnIndexAt(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QPoint) callconv(.c) QModelIndex) void {
        qtc.KFilePlacesView_OnIndexAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DoItemsLayout(self: KFilePlacesView) void {
        qtc.KFilePlacesView_DoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoItemsLayout` instead
    ///
    pub const QBaseDoItemsLayout = SuperDoItemsLayout;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperDoItemsLayout(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperDoItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoItemsLayout(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnDoItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Reset(self: KFilePlacesView) void {
        qtc.KFilePlacesView_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperReset(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetRootIndex(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KFilePlacesView_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetRootIndex` instead
    ///
    pub const QBaseSetRootIndex = SuperSetRootIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetRootIndex(self: KFilePlacesView, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KFilePlacesView_SuperSetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetRootIndex(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetRootIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: KFilePlacesView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.KFilePlacesView_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: KFilePlacesView, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.KFilePlacesView_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QEvent) callconv(.c) bool) void {
        qtc.KFilePlacesView_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: KFilePlacesView, dx: i32, dy: i32) void {
        qtc.KFilePlacesView_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: KFilePlacesView, dx: i32, dy: i32) void {
        qtc.KFilePlacesView_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsAboutToBeRemoved(self: KFilePlacesView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KFilePlacesView_RowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `SuperRowsAboutToBeRemoved` instead
    ///
    pub const QBaseRowsAboutToBeRemoved = SuperRowsAboutToBeRemoved;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsAboutToBeRemoved(self: KFilePlacesView, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KFilePlacesView_SuperRowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnRowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KFilePlacesView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KFilePlacesView_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KFilePlacesView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KFilePlacesView_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QMouseEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KFilePlacesView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KFilePlacesView_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KFilePlacesView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KFilePlacesView_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QMouseEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn WheelEvent(self: KFilePlacesView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.KFilePlacesView_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KFilePlacesView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.KFilePlacesView_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QWheelEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn TimerEvent(self: KFilePlacesView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.KFilePlacesView_TimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KFilePlacesView, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.KFilePlacesView_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, e: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QTimerEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn InitViewItemOption(self: KFilePlacesView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.KFilePlacesView_InitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitViewItemOption` instead
    ///
    pub const QBaseInitViewItemOption = SuperInitViewItemOption;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn SuperInitViewItemOption(self: KFilePlacesView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.KFilePlacesView_SuperInitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, option: QStyleOptionViewItem) callconv(.c) void `
    ///
    pub fn OnInitViewItemOption(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QStyleOptionViewItem) callconv(.c) void) void {
        qtc.KFilePlacesView_OnInitViewItemOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn HorizontalOffset(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_HorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHorizontalOffset` instead
    ///
    pub const QBaseHorizontalOffset = SuperHorizontalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperHorizontalOffset(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_SuperHorizontalOffset(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnHorizontalOffset(self: KFilePlacesView, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilePlacesView_OnHorizontalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn VerticalOffset(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_VerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperVerticalOffset` instead
    ///
    pub const QBaseVerticalOffset = SuperVerticalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperVerticalOffset(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_SuperVerticalOffset(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnVerticalOffset(self: KFilePlacesView, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilePlacesView_OnVerticalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn MoveCursor(self: KFilePlacesView, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.KFilePlacesView_MoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `SuperMoveCursor` instead
    ///
    pub const QBaseMoveCursor = SuperMoveCursor;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SuperMoveCursor(self: KFilePlacesView, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.KFilePlacesView_SuperMoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QModelIndex `
    ///
    pub fn OnMoveCursor(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32, i32) callconv(.c) QModelIndex) void {
        qtc.KFilePlacesView_OnMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetSelection(self: KFilePlacesView, rect: anytype, command: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KFilePlacesView_SetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `SuperSetSelection` instead
    ///
    pub const QBaseSetSelection = SuperSetSelection;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSetSelection(self: KFilePlacesView, rect: anytype, command: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KFilePlacesView_SuperSetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(command));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, rect: QRect, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSetSelection(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QRect, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn VisualRegionForSelection(self: KFilePlacesView, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.KFilePlacesView_VisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperVisualRegionForSelection` instead
    ///
    pub const QBaseVisualRegionForSelection = SuperVisualRegionForSelection;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn SuperVisualRegionForSelection(self: KFilePlacesView, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.KFilePlacesView_SuperVisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, selection: QItemSelection) callconv(.c) QRegion `
    ///
    pub fn OnVisualRegionForSelection(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QItemSelection) callconv(.c) QRegion) void {
        qtc.KFilePlacesView_OnVisualRegionForSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedIndexes(self: KFilePlacesView, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KFilePlacesView_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kfileplacesview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperSelectedIndexes` instead
    ///
    pub const QBaseSelectedIndexes = SuperSelectedIndexes;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSelectedIndexes(self: KFilePlacesView, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KFilePlacesView_SuperSelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kfileplacesview.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnSelectedIndexes(self: KFilePlacesView, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KFilePlacesView_OnSelectedIndexes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UpdateGeometries(self: KFilePlacesView) void {
        qtc.KFilePlacesView_UpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometries` instead
    ///
    pub const QBaseUpdateGeometries = SuperUpdateGeometries;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperUpdateGeometries(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperUpdateGeometries(@ptrCast(self.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometries(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnUpdateGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsIndexHidden(self: KFilePlacesView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KFilePlacesView_IsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsIndexHidden` instead
    ///
    pub const QBaseIsIndexHidden = SuperIsIndexHidden;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperIsIndexHidden(self: KFilePlacesView, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KFilePlacesView_SuperIsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnIsIndexHidden(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) bool) void {
        qtc.KFilePlacesView_OnIsIndexHidden(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SelectionChanged(self: KFilePlacesView, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.KFilePlacesView_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectionChanged` instead
    ///
    pub const QBaseSelectionChanged = SuperSelectionChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SuperSelectionChanged(self: KFilePlacesView, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.KFilePlacesView_SuperSelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, selected: QItemSelection, deselected: QItemSelection) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn CurrentChanged(self: KFilePlacesView, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.KFilePlacesView_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `SuperCurrentChanged` instead
    ///
    pub const QBaseCurrentChanged = SuperCurrentChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn SuperCurrentChanged(self: KFilePlacesView, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.KFilePlacesView_SuperCurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.KFilePlacesView_OnCurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ViewportSizeHint(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.KFilePlacesView_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperViewportSizeHint` instead
    ///
    pub const QBaseViewportSizeHint = SuperViewportSizeHint;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperViewportSizeHint(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.KFilePlacesView_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnViewportSizeHint(self: KFilePlacesView, callback: *const fn () callconv(.c) QSize) void {
        qtc.KFilePlacesView_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SetSelectionModel(self: KFilePlacesView, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.KFilePlacesView_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetSelectionModel` instead
    ///
    pub const QBaseSetSelectionModel = SuperSetSelectionModel;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SuperSetSelectionModel(self: KFilePlacesView, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.KFilePlacesView_SuperSetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, selectionModel: QItemSelectionModel) callconv(.c) void `
    ///
    pub fn OnSetSelectionModel(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QItemSelectionModel) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetSelectionModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` search: []const u8 `
    ///
    pub fn KeyboardSearch(self: KFilePlacesView, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.KFilePlacesView_KeyboardSearch(@ptrCast(self.ptr), search_str);
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
    /// ` self: KFilePlacesView `
    ///
    /// ` search: []const u8 `
    ///
    pub fn SuperKeyboardSearch(self: KFilePlacesView, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.KFilePlacesView_SuperKeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, search: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnKeyboardSearch(self: KFilePlacesView, callback: *const fn (KFilePlacesView, [*:0]const u8) callconv(.c) void) void {
        qtc.KFilePlacesView_OnKeyboardSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` row: i32 `
    ///
    pub fn SizeHintForRow(self: KFilePlacesView, row: i32) i32 {
        return qtc.KFilePlacesView_SizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperSizeHintForRow(self: KFilePlacesView, row: i32) i32 {
        return qtc.KFilePlacesView_SuperSizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, row: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForRow(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) i32) void {
        qtc.KFilePlacesView_OnSizeHintForRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` column: i32 `
    ///
    pub fn SizeHintForColumn(self: KFilePlacesView, column: i32) i32 {
        return qtc.KFilePlacesView_SizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `SuperSizeHintForColumn` instead
    ///
    pub const QBaseSizeHintForColumn = SuperSizeHintForColumn;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperSizeHintForColumn(self: KFilePlacesView, column: i32) i32 {
        return qtc.KFilePlacesView_SuperSizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, column: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForColumn(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) i32) void {
        qtc.KFilePlacesView_OnSizeHintForColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemDelegateForIndex(self: KFilePlacesView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KFilePlacesView_ItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
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
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperItemDelegateForIndex(self: KFilePlacesView, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KFilePlacesView_SuperItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) QAbstractItemDelegate `
    ///
    pub fn OnItemDelegateForIndex(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) QAbstractItemDelegate) void {
        qtc.KFilePlacesView_OnItemDelegateForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KFilePlacesView, query: i32) QVariant {
        return .{ .ptr = qtc.KFilePlacesView_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: KFilePlacesView `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KFilePlacesView, query: i32) QVariant {
        return .{ .ptr = qtc.KFilePlacesView_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) QVariant) void {
        qtc.KFilePlacesView_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SelectAll(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SelectAll(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperSelectAll(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperSelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSelectAll(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UpdateEditorData(self: KFilePlacesView) void {
        qtc.KFilePlacesView_UpdateEditorData(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperUpdateEditorData(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperUpdateEditorData(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorData(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnUpdateEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UpdateEditorGeometries(self: KFilePlacesView) void {
        qtc.KFilePlacesView_UpdateEditorGeometries(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperUpdateEditorGeometries(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperUpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometries(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnUpdateEditorGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` action: i32 `
    ///
    pub fn VerticalScrollbarAction(self: KFilePlacesView, action: i32) void {
        qtc.KFilePlacesView_VerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperVerticalScrollbarAction(self: KFilePlacesView, action: i32) void {
        qtc.KFilePlacesView_SuperVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, action: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarAction(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` action: i32 `
    ///
    pub fn HorizontalScrollbarAction(self: KFilePlacesView, action: i32) void {
        qtc.KFilePlacesView_HorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `SuperHorizontalScrollbarAction` instead
    ///
    pub const QBaseHorizontalScrollbarAction = SuperHorizontalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperHorizontalScrollbarAction(self: KFilePlacesView, action: i32) void {
        qtc.KFilePlacesView_SuperHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, action: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarAction(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` value: i32 `
    ///
    pub fn VerticalScrollbarValueChanged(self: KFilePlacesView, value: i32) void {
        qtc.KFilePlacesView_VerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperVerticalScrollbarValueChanged(self: KFilePlacesView, value: i32) void {
        qtc.KFilePlacesView_SuperVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, value: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarValueChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` value: i32 `
    ///
    pub fn HorizontalScrollbarValueChanged(self: KFilePlacesView, value: i32) void {
        qtc.KFilePlacesView_HorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperHorizontalScrollbarValueChanged(self: KFilePlacesView, value: i32) void {
        qtc.KFilePlacesView_SuperHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, value: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarValueChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn CloseEditor(self: KFilePlacesView, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.KFilePlacesView_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn SuperCloseEditor(self: KFilePlacesView, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.KFilePlacesView_SuperCloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn OnCloseEditor(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QWidget, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnCloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CommitData(self: KFilePlacesView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.KFilePlacesView_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` editor: QWidget `
    ///
    pub fn SuperCommitData(self: KFilePlacesView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.KFilePlacesView_SuperCommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCommitData(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QWidget) callconv(.c) void) void {
        qtc.KFilePlacesView_OnCommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` editor: QObject `
    ///
    pub fn EditorDestroyed(self: KFilePlacesView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.KFilePlacesView_EditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` editor: QObject `
    ///
    pub fn SuperEditorDestroyed(self: KFilePlacesView, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.KFilePlacesView_SuperEditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, editor: QObject) callconv(.c) void `
    ///
    pub fn OnEditorDestroyed(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QObject) callconv(.c) void) void {
        qtc.KFilePlacesView_OnEditorDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QEvent `
    ///
    pub fn Edit2(self: KFilePlacesView, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFilePlacesView_Edit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEdit2(self: KFilePlacesView, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFilePlacesView_SuperEdit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEdit2(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex, i32, QEvent) callconv(.c) bool) void {
        qtc.KFilePlacesView_OnEdit2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SelectionCommand(self: KFilePlacesView, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFilePlacesView_SelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelectionCommand(self: KFilePlacesView, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFilePlacesView_SuperSelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex, event: QEvent) callconv(.c) i32 `
    ///
    pub fn OnSelectionCommand(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex, QEvent) callconv(.c) i32) void {
        qtc.KFilePlacesView_OnSelectionCommand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KFilePlacesView, next: bool) bool {
        return qtc.KFilePlacesView_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KFilePlacesView `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KFilePlacesView, next: bool) bool {
        return qtc.KFilePlacesView_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KFilePlacesView, callback: *const fn (KFilePlacesView, bool) callconv(.c) bool) void {
        qtc.KFilePlacesView_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QEvent `
    ///
    pub fn ViewportEvent(self: KFilePlacesView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFilePlacesView_ViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperViewportEvent(self: KFilePlacesView, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFilePlacesView_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QEvent) callconv(.c) bool) void {
        qtc.KFilePlacesView_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KFilePlacesView_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KFilePlacesView_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QMouseEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KFilePlacesView_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KFilePlacesView_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QFocusEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KFilePlacesView_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KFilePlacesView_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QFocusEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.KFilePlacesView_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.KFilePlacesView_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QInputMethodEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KFilePlacesView, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFilePlacesView_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KFilePlacesView, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFilePlacesView_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QObject, QEvent) callconv(.c) bool) void {
        qtc.KFilePlacesView_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn MinimumSizeHint(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.KFilePlacesView_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperMinimumSizeHint(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.KFilePlacesView_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KFilePlacesView, callback: *const fn () callconv(.c) QSize) void {
        qtc.KFilePlacesView_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: KFilePlacesView, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.KFilePlacesView_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: KFilePlacesView, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.KFilePlacesView_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, viewport: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QWidget) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KFilePlacesView_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KFilePlacesView_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: KFilePlacesView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KFilePlacesView_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: KFilePlacesView, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KFilePlacesView_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QStyleOptionFrame) callconv(.c) void) void {
        qtc.KFilePlacesView_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DevType(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_DevType(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperDevType(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KFilePlacesView, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilePlacesView_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KFilePlacesView, visible: bool) void {
        qtc.KFilePlacesView_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KFilePlacesView `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KFilePlacesView, visible: bool) void {
        qtc.KFilePlacesView_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KFilePlacesView, callback: *const fn (KFilePlacesView, bool) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KFilePlacesView, param1: i32) i32 {
        return qtc.KFilePlacesView_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KFilePlacesView, param1: i32) i32 {
        return qtc.KFilePlacesView_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) i32) void {
        qtc.KFilePlacesView_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn HasHeightForWidth(self: KFilePlacesView) bool {
        return qtc.KFilePlacesView_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperHasHeightForWidth(self: KFilePlacesView) bool {
        return qtc.KFilePlacesView_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KFilePlacesView, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilePlacesView_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn PaintEngine(self: KFilePlacesView) QPaintEngine {
        return .{ .ptr = qtc.KFilePlacesView_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperPaintEngine(self: KFilePlacesView) QPaintEngine {
        return .{ .ptr = qtc.KFilePlacesView_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KFilePlacesView, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KFilePlacesView_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KFilePlacesView_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KFilePlacesView_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QKeyEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KFilePlacesView_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KFilePlacesView_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QEnterEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFilePlacesView_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFilePlacesView_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KFilePlacesView_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KFilePlacesView_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QMoveEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KFilePlacesView_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KFilePlacesView_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QCloseEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KFilePlacesView_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KFilePlacesView_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QTabletEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KFilePlacesView_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KFilePlacesView_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QActionEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KFilePlacesView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KFilePlacesView_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KFilePlacesView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KFilePlacesView_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KFilePlacesView_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KFilePlacesView, param1: i32) i32 {
        return qtc.KFilePlacesView_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KFilePlacesView, param1: i32) i32 {
        return qtc.KFilePlacesView_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) i32) void {
        qtc.KFilePlacesView_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KFilePlacesView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KFilePlacesView_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KFilePlacesView, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KFilePlacesView_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QPainter) callconv(.c) void) void {
        qtc.KFilePlacesView_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KFilePlacesView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KFilePlacesView_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KFilePlacesView `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KFilePlacesView, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KFilePlacesView_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KFilePlacesView_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SharedPainter(self: KFilePlacesView) QPainter {
        return .{ .ptr = qtc.KFilePlacesView_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperSharedPainter(self: KFilePlacesView) QPainter {
        return .{ .ptr = qtc.KFilePlacesView_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KFilePlacesView, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KFilePlacesView_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KFilePlacesView_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KFilePlacesView_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QChildEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFilePlacesView_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KFilePlacesView, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFilePlacesView_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QEvent) callconv(.c) void) void {
        qtc.KFilePlacesView_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KFilePlacesView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFilePlacesView_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KFilePlacesView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFilePlacesView_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QMetaMethod) callconv(.c) void) void {
        qtc.KFilePlacesView_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KFilePlacesView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFilePlacesView_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KFilePlacesView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFilePlacesView_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QMetaMethod) callconv(.c) void) void {
        qtc.KFilePlacesView_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn ResizeContents(self: KFilePlacesView, width: i32, height: i32) void {
        qtc.KFilePlacesView_ResizeContents(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `SuperResizeContents` instead
    ///
    pub const QBaseResizeContents = SuperResizeContents;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn SuperResizeContents(self: KFilePlacesView, width: i32, height: i32) void {
        qtc.KFilePlacesView_SuperResizeContents(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, width: i32, height: i32) callconv(.c) void `
    ///
    pub fn OnResizeContents(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnResizeContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ContentsSize(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.KFilePlacesView_ContentsSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperContentsSize` instead
    ///
    pub const QBaseContentsSize = SuperContentsSize;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperContentsSize(self: KFilePlacesView) QSize {
        return .{ .ptr = qtc.KFilePlacesView_SuperContentsSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnContentsSize(self: KFilePlacesView, callback: *const fn () callconv(.c) QSize) void {
        qtc.KFilePlacesView_OnContentsSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn RectForIndex(self: KFilePlacesView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KFilePlacesView_RectForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRectForIndex` instead
    ///
    pub const QBaseRectForIndex = SuperRectForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperRectForIndex(self: KFilePlacesView, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KFilePlacesView_SuperRectForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, index: QModelIndex) callconv(.c) QRect `
    ///
    pub fn OnRectForIndex(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QModelIndex) callconv(.c) QRect) void {
        qtc.KFilePlacesView_OnRectForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` position: QPoint `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetPositionForIndex(self: KFilePlacesView, position: anytype, index: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KFilePlacesView_SetPositionForIndex(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetPositionForIndex` instead
    ///
    pub const QBaseSetPositionForIndex = SuperSetPositionForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` position: QPoint `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetPositionForIndex(self: KFilePlacesView, position: anytype, index: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KFilePlacesView_SuperSetPositionForIndex(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, position: QPoint, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetPositionForIndex(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QPoint, QModelIndex) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetPositionForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn State(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_State(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn SuperState(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_SuperState(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnState(self: KFilePlacesView, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilePlacesView_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SetState(self: KFilePlacesView, state: i32) void {
        qtc.KFilePlacesView_SetState(@ptrCast(self.ptr), @bitCast(state));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SuperSetState(self: KFilePlacesView, state: i32) void {
        qtc.KFilePlacesView_SuperSetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, state: qabstractitemview_enums.State) callconv(.c) void `
    ///
    pub fn OnSetState(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ScheduleDelayedItemsLayout(self: KFilePlacesView) void {
        qtc.KFilePlacesView_ScheduleDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperScheduleDelayedItemsLayout(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnScheduleDelayedItemsLayout(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnScheduleDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ExecuteDelayedItemsLayout(self: KFilePlacesView) void {
        qtc.KFilePlacesView_ExecuteDelayedItemsLayout(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperExecuteDelayedItemsLayout(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnExecuteDelayedItemsLayout(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnExecuteDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` region: QRegion `
    ///
    pub fn SetDirtyRegion(self: KFilePlacesView, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.KFilePlacesView_SetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` region: QRegion `
    ///
    pub fn SuperSetDirtyRegion(self: KFilePlacesView, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.KFilePlacesView_SuperSetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, region: QRegion) callconv(.c) void `
    ///
    pub fn OnSetDirtyRegion(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QRegion) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollDirtyRegion(self: KFilePlacesView, dx: i32, dy: i32) void {
        qtc.KFilePlacesView_ScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollDirtyRegion(self: KFilePlacesView, dx: i32, dy: i32) void {
        qtc.KFilePlacesView_SuperScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollDirtyRegion(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DirtyRegionOffset(self: KFilePlacesView) QPoint {
        return .{ .ptr = qtc.KFilePlacesView_DirtyRegionOffset(@ptrCast(self.ptr)) };
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperDirtyRegionOffset(self: KFilePlacesView) QPoint {
        return .{ .ptr = qtc.KFilePlacesView_SuperDirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) QPoint `
    ///
    pub fn OnDirtyRegionOffset(self: KFilePlacesView, callback: *const fn () callconv(.c) QPoint) void {
        qtc.KFilePlacesView_OnDirtyRegionOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn StartAutoScroll(self: KFilePlacesView) void {
        qtc.KFilePlacesView_StartAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperStartAutoScroll(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperStartAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartAutoScroll(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnStartAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn StopAutoScroll(self: KFilePlacesView) void {
        qtc.KFilePlacesView_StopAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperStopAutoScroll(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperStopAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopAutoScroll(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnStopAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn DoAutoScroll(self: KFilePlacesView) void {
        qtc.KFilePlacesView_DoAutoScroll(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperDoAutoScroll(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperDoAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoAutoScroll(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnDoAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn DropIndicatorPosition(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_DropIndicatorPosition(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn SuperDropIndicatorPosition(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_SuperDropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDropIndicatorPosition(self: KFilePlacesView, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilePlacesView_OnDropIndicatorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: KFilePlacesView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KFilePlacesView_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: KFilePlacesView, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KFilePlacesView_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesView_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn ViewportMargins(self: KFilePlacesView) QMargins {
        return .{ .ptr = qtc.KFilePlacesView_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperViewportMargins(self: KFilePlacesView) QMargins {
        return .{ .ptr = qtc.KFilePlacesView_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    pub fn OnViewportMargins(self: KFilePlacesView, callback: *const fn () callconv(.c) QMargins) void {
        qtc.KFilePlacesView_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.KFilePlacesView_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: KFilePlacesView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.KFilePlacesView_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QPainter) callconv(.c) void) void {
        qtc.KFilePlacesView_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn UpdateMicroFocus(self: KFilePlacesView) void {
        qtc.KFilePlacesView_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperUpdateMicroFocus(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Create(self: KFilePlacesView) void {
        qtc.KFilePlacesView_Create(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperCreate(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Destroy(self: KFilePlacesView) void {
        qtc.KFilePlacesView_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperDestroy(self: KFilePlacesView) void {
        qtc.KFilePlacesView_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KFilePlacesView, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesView_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FocusNextChild(self: KFilePlacesView) bool {
        return qtc.KFilePlacesView_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperFocusNextChild(self: KFilePlacesView) bool {
        return qtc.KFilePlacesView_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KFilePlacesView, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilePlacesView_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn FocusPreviousChild(self: KFilePlacesView) bool {
        return qtc.KFilePlacesView_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperFocusPreviousChild(self: KFilePlacesView) bool {
        return qtc.KFilePlacesView_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KFilePlacesView, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilePlacesView_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Sender(self: KFilePlacesView) QObject {
        return .{ .ptr = qtc.KFilePlacesView_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperSender(self: KFilePlacesView) QObject {
        return .{ .ptr = qtc.KFilePlacesView_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KFilePlacesView, callback: *const fn () callconv(.c) QObject) void {
        qtc.KFilePlacesView_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn SenderSignalIndex(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    pub fn SuperSenderSignalIndex(self: KFilePlacesView) i32 {
        return qtc.KFilePlacesView_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KFilePlacesView, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilePlacesView_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KFilePlacesView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFilePlacesView_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KFilePlacesView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFilePlacesView_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KFilePlacesView, callback: *const fn (KFilePlacesView, [*:0]const u8) callconv(.c) i32) void {
        qtc.KFilePlacesView_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KFilePlacesView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFilePlacesView_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KFilePlacesView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFilePlacesView_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KFilePlacesView, callback: *const fn (KFilePlacesView, QMetaMethod) callconv(.c) bool) void {
        qtc.KFilePlacesView_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KFilePlacesView, metricA: i32, metricB: i32) f64 {
        return qtc.KFilePlacesView_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KFilePlacesView `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KFilePlacesView, metricA: i32, metricB: i32) f64 {
        return qtc.KFilePlacesView_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView`
    ///
    /// ` callback: *const fn (self: KFilePlacesView, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KFilePlacesView, callback: *const fn (KFilePlacesView, i32, i32) callconv(.c) f64) void {
        qtc.KFilePlacesView_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilePlacesView `
    ///
    /// ` callback: *const fn (self: KFilePlacesView, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KFilePlacesView, callback: *const fn (KFilePlacesView, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesview.html#dtor.KFilePlacesView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFilePlacesView `
    ///
    pub fn Delete(self: KFilePlacesView) void {
        qtc.KFilePlacesView_Delete(@ptrCast(self.ptr));
    }
};
