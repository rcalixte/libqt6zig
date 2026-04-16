const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCompletion = @import("libqt6").KCompletion;
const KCompletionBase = @import("libqt6").KCompletionBase;
const KCompletionBox = @import("libqt6").KCompletionBox;
const KFileFilter = @import("libqt6").KFileFilter;
const QAbstractItemDelegate = @import("libqt6").QAbstractItemDelegate;
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QAbstractItemView = @import("libqt6").QAbstractItemView;
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
const QLineEdit = @import("libqt6").QLineEdit;
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
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionComboBox = @import("libqt6").QStyleOptionComboBox;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QValidator = @import("libqt6").QValidator;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const kcompletion_enums = @import("../extras-kcompletion/libkcompletion.zig").enums;
const kcompletionbase_enums = @import("../extras-kcompletion/libkcompletionbase.zig").enums;
const qcombobox_enums = @import("../libqcombobox.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");
const ArrayMap_i32_SliceQKeySequence = std.array_hash_map.Auto(i32, []QKeySequence);

/// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html)
pub const KFileFilterCombo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileFilterCombo,

    pub const _is_KFileFilterCombo = {};
    pub const _is_KComboBox = {};
    pub const _is_QComboBox = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};
    pub const _is_KCompletionBase = {};

    /// New constructs a new KFileFilterCombo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KFileFilterCombo {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KFileFilterCombo_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KFileFilterCombo object.
    ///
    pub fn New2() KFileFilterCombo {
        return .{ .ptr = qtc.KFileFilterCombo_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MetaObject(self: KFileFilterCombo) QMetaObject {
        return .{ .ptr = qtc.KFileFilterCombo_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KFileFilterCombo, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KFileFilterCombo_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperMetaObject(self: KFileFilterCombo) QMetaObject {
        return .{ .ptr = qtc.KFileFilterCombo_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KFileFilterCombo, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFileFilterCombo_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KFileFilterCombo_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KFileFilterCombo, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFileFilterCombo_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KFileFilterCombo, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFileFilterCombo_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KFileFilterCombo_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KFileFilterCombo, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFileFilterCombo_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#setFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` filters: []KFileFilter `
    ///
    pub fn SetFilters(self: KFileFilterCombo, filters: []KFileFilter) void {
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = @ptrCast(filters.ptr),
        };
        qtc.KFileFilterCombo_SetFilters(@ptrCast(self.ptr), filters_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#currentFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn CurrentFilter(self: KFileFilterCombo) KFileFilter {
        return .{ .ptr = qtc.KFileFilterCombo_CurrentFilter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#filters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Filters(self: KFileFilterCombo, allocator: std.mem.Allocator) []KFileFilter {
        const _arr: qtc.libqt_list = qtc.KFileFilterCombo_Filters(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KFileFilter, _arr.len) catch @panic("kfilefiltercombo.Filters: Memory allocation failed");
        const _data: [*]QtC.KFileFilter = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#setDefaultFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` filter: KFileFilter `
    ///
    pub fn SetDefaultFilter(self: KFileFilterCombo, filter: anytype) void {
        comptime _ = @TypeOf(filter)._is_KFileFilter;
        qtc.KFileFilterCombo_SetDefaultFilter(@ptrCast(self.ptr), @ptrCast(filter.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#defaultFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn DefaultFilter(self: KFileFilterCombo) KFileFilter {
        return .{ .ptr = qtc.KFileFilterCombo_DefaultFilter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#setCurrentFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` filter: KFileFilter `
    ///
    pub fn SetCurrentFilter(self: KFileFilterCombo, filter: anytype) void {
        comptime _ = @TypeOf(filter)._is_KFileFilter;
        qtc.KFileFilterCombo_SetCurrentFilter(@ptrCast(self.ptr), @ptrCast(filter.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#showsAllTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ShowsAllTypes(self: KFileFilterCombo) bool {
        return qtc.KFileFilterCombo_ShowsAllTypes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: KFileFilterCombo, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.KFileFilterCombo_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QObject, QEvent) callconv(.c) bool) void {
        qtc.KFileFilterCombo_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: KFileFilterCombo, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.KFileFilterCombo_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#filterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn FilterChanged(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_FilterChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#filterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo) callconv(.c) void `
    ///
    pub fn OnFilterChanged(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo) callconv(.c) void) void {
        qtc.KFileFilterCombo_Connect_FilterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#setFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` filters: []KFileFilter `
    ///
    /// ` defaultFilter: KFileFilter `
    ///
    pub fn SetFilters2(self: KFileFilterCombo, filters: []KFileFilter, defaultFilter: anytype) void {
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = @ptrCast(filters.ptr),
        };
        comptime _ = @TypeOf(defaultFilter)._is_KFileFilter;
        qtc.KFileFilterCombo_SetFilters2(@ptrCast(self.ptr), filters_list, @ptrCast(defaultFilter.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setEditUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetEditUrl(self: KFileFilterCombo, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KComboBox_SetEditUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#addUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` url: QUrl `
    ///
    pub fn AddUrl(self: KFileFilterCombo, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KComboBox_AddUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#addUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` icon: QIcon `
    ///
    /// ` url: QUrl `
    ///
    pub fn AddUrl2(self: KFileFilterCombo, icon: anytype, url: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KComboBox_AddUrl2(@ptrCast(self.ptr), @ptrCast(icon.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#insertUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` url: QUrl `
    ///
    pub fn InsertUrl(self: KFileFilterCombo, index: i32, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KComboBox_InsertUrl(@ptrCast(self.ptr), @bitCast(index), @ptrCast(url.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#insertUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` url: QUrl `
    ///
    pub fn InsertUrl2(self: KFileFilterCombo, index: i32, icon: anytype, url: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KComboBox_InsertUrl2(@ptrCast(self.ptr), @bitCast(index), @ptrCast(icon.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#changeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` url: QUrl `
    ///
    pub fn ChangeUrl(self: KFileFilterCombo, index: i32, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KComboBox_ChangeUrl(@ptrCast(self.ptr), @bitCast(index), @ptrCast(url.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#changeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` url: QUrl `
    ///
    pub fn ChangeUrl2(self: KFileFilterCombo, index: i32, icon: anytype, url: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KComboBox_ChangeUrl2(@ptrCast(self.ptr), @bitCast(index), @ptrCast(icon.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn CursorPosition(self: KFileFilterCombo) i32 {
        return qtc.KComboBox_CursorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#autoCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn AutoCompletion(self: KFileFilterCombo) bool {
        return qtc.KComboBox_AutoCompletion(@ptrCast(self.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#urlDropsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn UrlDropsEnabled(self: KFileFilterCombo) bool {
        return qtc.KComboBox_UrlDropsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Contains(self: KFileFilterCombo, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KComboBox_Contains(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setTrapReturnKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` trap: bool `
    ///
    pub fn SetTrapReturnKey(self: KFileFilterCombo, trap: bool) void {
        qtc.KComboBox_SetTrapReturnKey(@ptrCast(self.ptr), trap);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#trapReturnKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn TrapReturnKey(self: KFileFilterCombo) bool {
        return qtc.KComboBox_TrapReturnKey(@ptrCast(self.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#completionBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn CompletionBox(self: KFileFilterCombo) KCompletionBox {
        return .{ .ptr = qtc.KComboBox_CompletionBox(@ptrCast(self.ptr)) };
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` editable: bool `
    ///
    pub fn SetEditable(self: KFileFilterCombo, editable: bool) void {
        qtc.KComboBox_SetEditable(@ptrCast(self.ptr), editable);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#contextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ContextMenu(self: KFileFilterCombo) QMenu {
        return .{ .ptr = qtc.KComboBox_ContextMenu(@ptrCast(self.ptr)) };
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#returnPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ReturnPressed(self: KFileFilterCombo, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KComboBox_ReturnPressed(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#returnPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnReturnPressed(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.KComboBox_Connect_ReturnPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#completion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Completion(self: KFileFilterCombo, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KComboBox_Completion(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#completion)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCompletion(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.KComboBox_Connect_Completion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#substringCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SubstringCompletion(self: KFileFilterCombo, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KComboBox_SubstringCompletion(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#substringCompletion)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSubstringCompletion(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.KComboBox_Connect_SubstringCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#textRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: kcompletionbase_enums.KeyBindingType `
    ///
    pub fn TextRotation(self: KFileFilterCombo, param1: i32) void {
        qtc.KComboBox_TextRotation(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#textRotation)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: kcompletionbase_enums.KeyBindingType) callconv(.c) void `
    ///
    pub fn OnTextRotation(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32) callconv(.c) void) void {
        qtc.KComboBox_Connect_TextRotation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#completionModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: kcompletion_enums.CompletionMode `
    ///
    pub fn CompletionModeChanged(self: KFileFilterCombo, param1: i32) void {
        qtc.KComboBox_CompletionModeChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#completionModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: kcompletion_enums.CompletionMode) callconv(.c) void `
    ///
    pub fn OnCompletionModeChanged(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32) callconv(.c) void) void {
        qtc.KComboBox_Connect_CompletionModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#aboutToShowContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` contextMenu: QMenu `
    ///
    pub fn AboutToShowContextMenu(self: KFileFilterCombo, contextMenu: anytype) void {
        comptime _ = @TypeOf(contextMenu)._is_QMenu;
        qtc.KComboBox_AboutToShowContextMenu(@ptrCast(self.ptr), @ptrCast(contextMenu.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#aboutToShowContextMenu)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, contextMenu: QMenu) callconv(.c) void `
    ///
    pub fn OnAboutToShowContextMenu(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QMenu) callconv(.c) void) void {
        qtc.KComboBox_Connect_AboutToShowContextMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#rotateText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` typeVal: kcompletionbase_enums.KeyBindingType `
    ///
    pub fn RotateText(self: KFileFilterCombo, typeVal: i32) void {
        qtc.KComboBox_RotateText(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` item: []const u8 `
    ///
    pub fn SetCurrentItem(self: KFileFilterCombo, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KComboBox_SetCurrentItem(@ptrCast(self.ptr), item_str);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#completionBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` create: bool `
    ///
    pub fn CompletionBox1(self: KFileFilterCombo, create: bool) KCompletionBox {
        return .{ .ptr = qtc.KComboBox_CompletionBox1(@ptrCast(self.ptr), create) };
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` item: []const u8 `
    ///
    /// ` insert: bool `
    ///
    pub fn SetCurrentItem2(self: KFileFilterCombo, item: []const u8, insert: bool) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KComboBox_SetCurrentItem2(@ptrCast(self.ptr), item_str, insert);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` item: []const u8 `
    ///
    /// ` insert: bool `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentItem3(self: KFileFilterCombo, item: []const u8, insert: bool, index: i32) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KComboBox_SetCurrentItem3(@ptrCast(self.ptr), item_str, insert, @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MaxVisibleItems(self: KFileFilterCombo) i32 {
        return qtc.QComboBox_MaxVisibleItems(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` maxItems: i32 `
    ///
    pub fn SetMaxVisibleItems(self: KFileFilterCombo, maxItems: i32) void {
        qtc.QComboBox_SetMaxVisibleItems(@ptrCast(self.ptr), @bitCast(maxItems));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Count(self: KFileFilterCombo) i32 {
        return qtc.QComboBox_Count(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` max: i32 `
    ///
    pub fn SetMaxCount(self: KFileFilterCombo, max: i32) void {
        qtc.QComboBox_SetMaxCount(@ptrCast(self.ptr), @bitCast(max));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MaxCount(self: KFileFilterCombo) i32 {
        return qtc.QComboBox_MaxCount(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn DuplicatesEnabled(self: KFileFilterCombo) bool {
        return qtc.QComboBox_DuplicatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDuplicatesEnabled(self: KFileFilterCombo, enable: bool) void {
        qtc.QComboBox_SetDuplicatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: KFileFilterCombo, frame: bool) void {
        qtc.QComboBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn HasFrame(self: KFileFilterCombo) bool {
        return qtc.QComboBox_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    pub fn FindText(self: KFileFilterCombo, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QComboBox_FindText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` data: QVariant `
    ///
    pub fn FindData(self: KFileFilterCombo, data: anytype) i32 {
        comptime _ = @TypeOf(data)._is_QVariant;
        return qtc.QComboBox_FindData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` qcombobox_enums.InsertPolicy `
    ///
    pub fn InsertPolicy(self: KFileFilterCombo) i32 {
        return qtc.QComboBox_InsertPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` policy: qcombobox_enums.InsertPolicy `
    ///
    pub fn SetInsertPolicy(self: KFileFilterCombo, policy: i32) void {
        qtc.QComboBox_SetInsertPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` qcombobox_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: KFileFilterCombo) i32 {
        return qtc.QComboBox_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` policy: qcombobox_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: KFileFilterCombo, policy: i32) void {
        qtc.QComboBox_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MinimumContentsLength(self: KFileFilterCombo) i32 {
        return qtc.QComboBox_MinimumContentsLength(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` characters: i32 `
    ///
    pub fn SetMinimumContentsLength(self: KFileFilterCombo, characters: i32) void {
        qtc.QComboBox_SetMinimumContentsLength(@ptrCast(self.ptr), @bitCast(characters));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IconSize(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.QComboBox_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` size: QSize `
    ///
    pub fn SetIconSize(self: KFileFilterCombo, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QComboBox_SetIconSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` placeholderText: []const u8 `
    ///
    pub fn SetPlaceholderText(self: KFileFilterCombo, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QComboBox_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceholderText(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QComboBox_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsEditable(self: KFileFilterCombo) bool {
        return qtc.QComboBox_IsEditable(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn LineEdit(self: KFileFilterCombo) QLineEdit {
        return .{ .ptr = qtc.QComboBox_LineEdit(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` v: QValidator `
    ///
    pub fn SetValidator(self: KFileFilterCombo, v: anytype) void {
        comptime _ = @TypeOf(v)._is_QValidator;
        qtc.QComboBox_SetValidator(@ptrCast(self.ptr), @ptrCast(v.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Validator(self: KFileFilterCombo) QValidator {
        return .{ .ptr = qtc.QComboBox_Validator(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` c: QCompleter `
    ///
    pub fn SetCompleter(self: KFileFilterCombo, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QCompleter;
        qtc.QComboBox_SetCompleter(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Completer(self: KFileFilterCombo) QCompleter {
        return .{ .ptr = qtc.QComboBox_Completer(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ItemDelegate(self: KFileFilterCombo) QAbstractItemDelegate {
        return .{ .ptr = qtc.QComboBox_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegate(self: KFileFilterCombo, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QComboBox_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Model(self: KFileFilterCombo) QAbstractItemModel {
        return .{ .ptr = qtc.QComboBox_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn RootModelIndex(self: KFileFilterCombo) QModelIndex {
        return .{ .ptr = qtc.QComboBox_RootModelIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetRootModelIndex(self: KFileFilterCombo, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QComboBox_SetRootModelIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ModelColumn(self: KFileFilterCombo) i32 {
        return qtc.QComboBox_ModelColumn(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` visibleColumn: i32 `
    ///
    pub fn SetModelColumn(self: KFileFilterCombo, visibleColumn: i32) void {
        qtc.QComboBox_SetModelColumn(@ptrCast(self.ptr), @bitCast(visibleColumn));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn CurrentIndex(self: KFileFilterCombo) i32 {
        return qtc.QComboBox_CurrentIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentText(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QComboBox_CurrentText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.CurrentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn CurrentData(self: KFileFilterCombo) QVariant {
        return .{ .ptr = qtc.QComboBox_CurrentData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemText(self: KFileFilterCombo, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QComboBox_ItemText(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.ItemText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemIcon(self: KFileFilterCombo, index: i32) QIcon {
        return .{ .ptr = qtc.QComboBox_ItemIcon(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemData(self: KFileFilterCombo, index: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_ItemData(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddItem(self: KFileFilterCombo, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_AddItem(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddItem2(self: KFileFilterCombo, icon: anytype, text: []const u8) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_AddItem2(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` texts: []const []const u8 `
    ///
    pub fn AddItems(self: KFileFilterCombo, allocator: std.mem.Allocator, texts: []const []const u8) void {
        const texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("kfilefiltercombo.AddItems: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |item, i|
            texts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.QComboBox_AddItems(@ptrCast(self.ptr), texts_list);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertItem(self: KFileFilterCombo, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_InsertItem(@ptrCast(self.ptr), @bitCast(index), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertItem2(self: KFileFilterCombo, index: i32, icon: anytype, text: []const u8) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_InsertItem2(@ptrCast(self.ptr), @bitCast(index), @ptrCast(icon.ptr), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    /// ` texts: []const []const u8 `
    ///
    pub fn InsertItems(self: KFileFilterCombo, allocator: std.mem.Allocator, index: i32, texts: []const []const u8) void {
        const texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("kfilefiltercombo.InsertItems: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |item, i|
            texts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.QComboBox_InsertItems(@ptrCast(self.ptr), @bitCast(index), texts_list);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    pub fn InsertSeparator(self: KFileFilterCombo, index: i32) void {
        qtc.QComboBox_InsertSeparator(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveItem(self: KFileFilterCombo, index: i32) void {
        qtc.QComboBox_RemoveItem(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetItemText(self: KFileFilterCombo, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_SetItemText(@ptrCast(self.ptr), @bitCast(index), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetItemIcon(self: KFileFilterCombo, index: i32, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QComboBox_SetItemIcon(@ptrCast(self.ptr), @bitCast(index), @ptrCast(icon.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetItemData(self: KFileFilterCombo, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QComboBox_SetItemData(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn View(self: KFileFilterCombo) QAbstractItemView {
        return .{ .ptr = qtc.QComboBox_View(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` itemView: QAbstractItemView `
    ///
    pub fn SetView(self: KFileFilterCombo, itemView: anytype) void {
        comptime _ = @TypeOf(itemView)._is_QAbstractItemView;
        qtc.QComboBox_SetView(@ptrCast(self.ptr), @ptrCast(itemView.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn InputMethodQuery2(self: KFileFilterCombo, query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QComboBox_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Clear(self: KFileFilterCombo) void {
        qtc.QComboBox_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ClearEditText(self: KFileFilterCombo) void {
        qtc.QComboBox_ClearEditText(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetEditText(self: KFileFilterCombo, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_SetEditText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentIndex(self: KFileFilterCombo, index: i32) void {
        qtc.QComboBox_SetCurrentIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetCurrentText(self: KFileFilterCombo, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_SetCurrentText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn EditTextChanged(self: KFileFilterCombo, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_EditTextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEditTextChanged(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_EditTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    pub fn Activated(self: KFileFilterCombo, index: i32) void {
        qtc.QComboBox_Activated(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, index: i32) callconv(.c) void `
    ///
    pub fn OnActivated(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextActivated(self: KFileFilterCombo, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_TextActivated(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextActivated(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    pub fn Highlighted(self: KFileFilterCombo, index: i32) void {
        qtc.QComboBox_Highlighted(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, index: i32) callconv(.c) void `
    ///
    pub fn OnHighlighted(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Highlighted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextHighlighted(self: KFileFilterCombo, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_TextHighlighted(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextHighlighted(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextHighlighted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    pub fn CurrentIndexChanged(self: KFileFilterCombo, index: i32) void {
        qtc.QComboBox_CurrentIndexChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, index: i32) callconv(.c) void `
    ///
    pub fn OnCurrentIndexChanged(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentIndexChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn CurrentTextChanged(self: KFileFilterCombo, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_CurrentTextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCurrentTextChanged(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn FindText2(self: KFileFilterCombo, text: []const u8, flags: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QComboBox_FindText2(@ptrCast(self.ptr), text_str, @bitCast(flags));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` data: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn FindData2(self: KFileFilterCombo, data: anytype, role: i32) i32 {
        comptime _ = @TypeOf(data)._is_QVariant;
        return qtc.QComboBox_FindData2(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(role));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` data: QVariant `
    ///
    /// ` role: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn FindData3(self: KFileFilterCombo, data: anytype, role: i32, flags: i32) i32 {
        comptime _ = @TypeOf(data)._is_QVariant;
        return qtc.QComboBox_FindData3(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(role), @bitCast(flags));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` role: i32 `
    ///
    pub fn CurrentData1(self: KFileFilterCombo, role: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_CurrentData1(@ptrCast(self.ptr), @bitCast(role)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` role: i32 `
    ///
    pub fn ItemData2(self: KFileFilterCombo, index: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_ItemData2(@ptrCast(self.ptr), @bitCast(index), @bitCast(role)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn AddItem22(self: KFileFilterCombo, text: []const u8, userData: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.QComboBox_AddItem22(@ptrCast(self.ptr), text_str, @ptrCast(userData.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn AddItem3(self: KFileFilterCombo, icon: anytype, text: []const u8, userData: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.QComboBox_AddItem3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(userData.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn InsertItem3(self: KFileFilterCombo, index: i32, text: []const u8, userData: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.QComboBox_InsertItem3(@ptrCast(self.ptr), @bitCast(index), text_str, @ptrCast(userData.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn InsertItem4(self: KFileFilterCombo, index: i32, icon: anytype, text: []const u8, userData: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.QComboBox_InsertItem4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(icon.ptr), text_str, @ptrCast(userData.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetItemData3(self: KFileFilterCombo, index: i32, value: anytype, role: i32) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QComboBox_SetItemData3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr), @bitCast(role));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn WinId(self: KFileFilterCombo) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn CreateWinId(self: KFileFilterCombo) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn InternalWinId(self: KFileFilterCombo) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn EffectiveWinId(self: KFileFilterCombo) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Style(self: KFileFilterCombo) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KFileFilterCombo, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsTopLevel(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsWindow(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsModal(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KFileFilterCombo) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KFileFilterCombo, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsEnabled(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KFileFilterCombo, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KFileFilterCombo, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KFileFilterCombo, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KFileFilterCombo, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn FrameGeometry(self: KFileFilterCombo) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Geometry(self: KFileFilterCombo) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn NormalGeometry(self: KFileFilterCombo) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn X(self: KFileFilterCombo) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Y(self: KFileFilterCombo) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Pos(self: KFileFilterCombo) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn FrameSize(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Size(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Width(self: KFileFilterCombo) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Height(self: KFileFilterCombo) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Rect(self: KFileFilterCombo) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ChildrenRect(self: KFileFilterCombo) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ChildrenRegion(self: KFileFilterCombo) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MinimumSize(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MaximumSize(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MinimumWidth(self: KFileFilterCombo) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MinimumHeight(self: KFileFilterCombo) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MaximumWidth(self: KFileFilterCombo) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MaximumHeight(self: KFileFilterCombo) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KFileFilterCombo, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KFileFilterCombo, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KFileFilterCombo, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KFileFilterCombo, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KFileFilterCombo, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KFileFilterCombo, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KFileFilterCombo, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KFileFilterCombo, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SizeIncrement(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KFileFilterCombo, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KFileFilterCombo, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn BaseSize(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KFileFilterCombo, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KFileFilterCombo, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KFileFilterCombo, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KFileFilterCombo, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KFileFilterCombo, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KFileFilterCombo, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KFileFilterCombo, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KFileFilterCombo, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KFileFilterCombo, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KFileFilterCombo, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KFileFilterCombo, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KFileFilterCombo, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KFileFilterCombo, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KFileFilterCombo, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KFileFilterCombo, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KFileFilterCombo, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KFileFilterCombo, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KFileFilterCombo, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn Window(self: KFileFilterCombo) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn NativeParentWidget(self: KFileFilterCombo) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn TopLevelWidget(self: KFileFilterCombo) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Palette(self: KFileFilterCombo) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KFileFilterCombo, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KFileFilterCombo, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KFileFilterCombo) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KFileFilterCombo, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KFileFilterCombo) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Font(self: KFileFilterCombo) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KFileFilterCombo, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn FontMetrics(self: KFileFilterCombo) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn FontInfo(self: KFileFilterCombo) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Cursor(self: KFileFilterCombo) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KFileFilterCombo, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn UnsetCursor(self: KFileFilterCombo) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KFileFilterCombo, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn HasMouseTracking(self: KFileFilterCombo) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn UnderMouse(self: KFileFilterCombo) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KFileFilterCombo, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn HasTabletTracking(self: KFileFilterCombo) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KFileFilterCombo, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KFileFilterCombo, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Mask(self: KFileFilterCombo) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ClearMask(self: KFileFilterCombo) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KFileFilterCombo, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KFileFilterCombo, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Grab(self: KFileFilterCombo) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn GraphicsEffect(self: KFileFilterCombo) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KFileFilterCombo, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KFileFilterCombo, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KFileFilterCombo, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KFileFilterCombo, windowTitle: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KFileFilterCombo, styleSheet: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KFileFilterCombo, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn WindowIcon(self: KFileFilterCombo) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KFileFilterCombo, windowIconText: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KFileFilterCombo, windowRole: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KFileFilterCombo, filePath: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KFileFilterCombo, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn WindowOpacity(self: KFileFilterCombo) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsWindowModified(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KFileFilterCombo, toolTip: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KFileFilterCombo, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ToolTipDuration(self: KFileFilterCombo) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KFileFilterCombo, statusTip: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KFileFilterCombo, whatsThis: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KFileFilterCombo, name: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KFileFilterCombo, description: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KFileFilterCombo, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KFileFilterCombo) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn UnsetLayoutDirection(self: KFileFilterCombo) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KFileFilterCombo, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Locale(self: KFileFilterCombo) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn UnsetLocale(self: KFileFilterCombo) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsRightToLeft(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsLeftToRight(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SetFocus(self: KFileFilterCombo) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsActiveWindow(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ActivateWindow(self: KFileFilterCombo) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ClearFocus(self: KFileFilterCombo) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KFileFilterCombo, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KFileFilterCombo) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KFileFilterCombo, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn HasFocus(self: KFileFilterCombo) bool {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KFileFilterCombo, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn FocusProxy(self: KFileFilterCombo) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KFileFilterCombo) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KFileFilterCombo, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn GrabMouse(self: KFileFilterCombo) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ReleaseMouse(self: KFileFilterCombo) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn GrabKeyboard(self: KFileFilterCombo) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ReleaseKeyboard(self: KFileFilterCombo) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KFileFilterCombo, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KFileFilterCombo, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KFileFilterCombo, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KFileFilterCombo, id: i32) void {
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn UpdatesEnabled(self: KFileFilterCombo) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KFileFilterCombo, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn GraphicsProxyWidget(self: KFileFilterCombo) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Update(self: KFileFilterCombo) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Repaint(self: KFileFilterCombo) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KFileFilterCombo, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KFileFilterCombo, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KFileFilterCombo, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Show(self: KFileFilterCombo) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Hide(self: KFileFilterCombo) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ShowMinimized(self: KFileFilterCombo) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ShowMaximized(self: KFileFilterCombo) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ShowFullScreen(self: KFileFilterCombo) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ShowNormal(self: KFileFilterCombo) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Close(self: KFileFilterCombo) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Raise(self: KFileFilterCombo) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Lower(self: KFileFilterCombo) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KFileFilterCombo, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KFileFilterCombo, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KFileFilterCombo, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KFileFilterCombo, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KFileFilterCombo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kfilefiltercombo.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KFileFilterCombo, geometry: []u8) bool {
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn AdjustSize(self: KFileFilterCombo) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsVisible(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KFileFilterCombo, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsHidden(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsMinimized(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsMaximized(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsFullScreen(self: KFileFilterCombo) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KFileFilterCombo) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KFileFilterCombo, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KFileFilterCombo, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SizePolicy(self: KFileFilterCombo) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KFileFilterCombo, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KFileFilterCombo, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn VisibleRegion(self: KFileFilterCombo) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KFileFilterCombo, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KFileFilterCombo, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ContentsMargins(self: KFileFilterCombo) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ContentsRect(self: KFileFilterCombo) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Layout(self: KFileFilterCombo) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KFileFilterCombo, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn UpdateGeometry(self: KFileFilterCombo) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KFileFilterCombo, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KFileFilterCombo, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KFileFilterCombo, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KFileFilterCombo, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn FocusWidget(self: KFileFilterCombo) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn NextInFocusChain(self: KFileFilterCombo) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn PreviousInFocusChain(self: KFileFilterCombo) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn AcceptDrops(self: KFileFilterCombo) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KFileFilterCombo, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KFileFilterCombo, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KFileFilterCombo, actions: []QAction) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KFileFilterCombo, before: anytype, actions: []QAction) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KFileFilterCombo, before: anytype, action: anytype) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KFileFilterCombo, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KFileFilterCombo, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kfilefiltercombo.Actions: Memory allocation failed");
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KFileFilterCombo, text: []const u8) QAction {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KFileFilterCombo, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KFileFilterCombo, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KFileFilterCombo, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn ParentWidget(self: KFileFilterCombo) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KFileFilterCombo, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KFileFilterCombo) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KFileFilterCombo, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KFileFilterCombo, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KFileFilterCombo) i32 {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KFileFilterCombo, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KFileFilterCombo, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KFileFilterCombo, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KFileFilterCombo, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KFileFilterCombo, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn EnsurePolished(self: KFileFilterCombo) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KFileFilterCombo, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn AutoFillBackground(self: KFileFilterCombo) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KFileFilterCombo, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn BackingStore(self: KFileFilterCombo) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn WindowHandle(self: KFileFilterCombo) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Screen(self: KFileFilterCombo) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KFileFilterCombo, screen: anytype) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KFileFilterCombo, title: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KFileFilterCombo, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KFileFilterCombo, iconText: []const u8) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KFileFilterCombo, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KFileFilterCombo) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KFileFilterCombo, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KFileFilterCombo, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KFileFilterCombo, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KFileFilterCombo, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KFileFilterCombo, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KFileFilterCombo, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KFileFilterCombo, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KFileFilterCombo, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KFileFilterCombo, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KFileFilterCombo, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KFileFilterCombo, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KFileFilterCombo, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KFileFilterCombo, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KFileFilterCombo, param1: i32, on: bool) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KFileFilterCombo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilefiltercombo.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KFileFilterCombo, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsWidgetType(self: KFileFilterCombo) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsWindowType(self: KFileFilterCombo) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsQuickItemType(self: KFileFilterCombo) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SignalsBlocked(self: KFileFilterCombo) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KFileFilterCombo, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Thread(self: KFileFilterCombo) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KFileFilterCombo, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KFileFilterCombo, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KFileFilterCombo, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KFileFilterCombo, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KFileFilterCombo, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KFileFilterCombo, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kfilefiltercombo.Children: Memory allocation failed");
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KFileFilterCombo, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KFileFilterCombo, obj: anytype) void {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KFileFilterCombo, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn Disconnect3(self: KFileFilterCombo) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KFileFilterCombo, receiver: anytype) bool {
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn DumpObjectTree(self: KFileFilterCombo) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn DumpObjectInfo(self: KFileFilterCombo) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KFileFilterCombo, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KFileFilterCombo, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KFileFilterCombo, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kfilefiltercombo.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfilefiltercombo.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn BindingStorage(self: KFileFilterCombo) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn BindingStorage2(self: KFileFilterCombo) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Destroyed(self: KFileFilterCombo) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Parent(self: KFileFilterCombo) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KFileFilterCombo, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn DeleteLater(self: KFileFilterCombo) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KFileFilterCombo, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KFileFilterCombo, time: i64, timerType: i32) i32 {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KFileFilterCombo, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KFileFilterCombo, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KFileFilterCombo, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KFileFilterCombo, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KFileFilterCombo, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn PaintingActive(self: KFileFilterCombo) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn WidthMM(self: KFileFilterCombo) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn HeightMM(self: KFileFilterCombo) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn LogicalDpiX(self: KFileFilterCombo) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn LogicalDpiY(self: KFileFilterCombo) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn PhysicalDpiX(self: KFileFilterCombo) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn PhysicalDpiY(self: KFileFilterCombo) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn DevicePixelRatio(self: KFileFilterCombo) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn DevicePixelRatioF(self: KFileFilterCombo) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ColorCount(self: KFileFilterCombo) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Depth(self: KFileFilterCombo) i32 {
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

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn CompletionObject(self: KFileFilterCombo) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompletionObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn IsCompletionObjectAutoDeleted(self: KFileFilterCombo) bool {
        return qtc.KCompletionBase_IsCompletionObjectAutoDeleted(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDeleteCompletionObject(self: KFileFilterCombo, autoDelete: bool) void {
        qtc.KCompletionBase_SetAutoDeleteCompletionObject(@ptrCast(self.ptr), autoDelete);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setEnableSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` enable: bool `
    ///
    pub fn SetEnableSignals(self: KFileFilterCombo, enable: bool) void {
        qtc.KCompletionBase_SetEnableSignals(@ptrCast(self.ptr), enable);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#handleSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn HandleSignals(self: KFileFilterCombo) bool {
        return qtc.KCompletionBase_HandleSignals(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#emitSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn EmitSignals(self: KFileFilterCombo) bool {
        return qtc.KCompletionBase_EmitSignals(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setEmitSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` emitRotationSignals: bool `
    ///
    pub fn SetEmitSignals(self: KFileFilterCombo, emitRotationSignals: bool) void {
        qtc.KCompletionBase_SetEmitSignals(@ptrCast(self.ptr), emitRotationSignals);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ## Returns:
    ///
    /// ` kcompletion_enums.CompletionMode `
    ///
    pub fn CompletionMode(self: KFileFilterCombo) i32 {
        return qtc.KCompletionBase_CompletionMode(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` item: kcompletionbase_enums.KeyBindingType `
    ///
    /// ` key: []QKeySequence `
    ///
    pub fn SetKeyBinding(self: KFileFilterCombo, item: i32, key: []QKeySequence) bool {
        const key_list = qtc.libqt_list{
            .len = key.len,
            .data = @ptrCast(key.ptr),
        };
        return qtc.KCompletionBase_SetKeyBinding(@ptrCast(self.ptr), @bitCast(item), key_list);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` item: kcompletionbase_enums.KeyBindingType `
    ///
    pub fn KeyBinding(self: KFileFilterCombo, allocator: std.mem.Allocator, item: i32) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KCompletionBase_KeyBinding(@ptrCast(self.ptr), @bitCast(item));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("kfilefiltercombo.KeyBinding: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn UseGlobalKeyBindings(self: KFileFilterCombo) void {
        qtc.KCompletionBase_UseGlobalKeyBindings(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#compObj)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn CompObj(self: KFileFilterCombo) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompObj(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` handleSignals: bool `
    ///
    pub fn CompletionObject1(self: KFileFilterCombo, handleSignals: bool) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompletionObject1(@ptrCast(self.ptr), handleSignals) };
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` autocomplete: bool `
    ///
    pub fn SetAutoCompletion(self: KFileFilterCombo, autocomplete: bool) void {
        qtc.KFileFilterCombo_SetAutoCompletion(@ptrCast(self.ptr), autocomplete);
    }

    /// ### DEPRECATED: Use `SuperSetAutoCompletion` instead
    ///
    pub const QBaseSetAutoCompletion = SuperSetAutoCompletion;

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` autocomplete: bool `
    ///
    pub fn SuperSetAutoCompletion(self: KFileFilterCombo, autocomplete: bool) void {
        qtc.KFileFilterCombo_SuperSetAutoCompletion(@ptrCast(self.ptr), autocomplete);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, autocomplete: bool) callconv(.c) void `
    ///
    pub fn OnSetAutoCompletion(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, bool) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetAutoCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` lineEdit: QLineEdit `
    ///
    pub fn SetLineEdit(self: KFileFilterCombo, lineEdit: anytype) void {
        comptime _ = @TypeOf(lineEdit)._is_QLineEdit;
        qtc.KFileFilterCombo_SetLineEdit(@ptrCast(self.ptr), @ptrCast(lineEdit.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetLineEdit` instead
    ///
    pub const QBaseSetLineEdit = SuperSetLineEdit;

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` lineEdit: QLineEdit `
    ///
    pub fn SuperSetLineEdit(self: KFileFilterCombo, lineEdit: anytype) void {
        comptime _ = @TypeOf(lineEdit)._is_QLineEdit;
        qtc.KFileFilterCombo_SuperSetLineEdit(@ptrCast(self.ptr), @ptrCast(lineEdit.ptr));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, lineEdit: QLineEdit) callconv(.c) void `
    ///
    pub fn OnSetLineEdit(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QLineEdit) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn MinimumSizeHint(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.KFileFilterCombo_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperMinimumSizeHint(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.KFileFilterCombo_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KFileFilterCombo, callback: *const fn () callconv(.c) QSize) void {
        qtc.KFileFilterCombo_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` completedText: []const u8 `
    ///
    pub fn SetCompletedText(self: KFileFilterCombo, completedText: []const u8) void {
        const completedText_str = qtc.libqt_string{
            .len = completedText.len,
            .data = completedText.ptr,
        };
        qtc.KFileFilterCombo_SetCompletedText(@ptrCast(self.ptr), completedText_str);
    }

    /// ### DEPRECATED: Use `SuperSetCompletedText` instead
    ///
    pub const QBaseSetCompletedText = SuperSetCompletedText;

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` completedText: []const u8 `
    ///
    pub fn SuperSetCompletedText(self: KFileFilterCombo, completedText: []const u8) void {
        const completedText_str = qtc.libqt_string{
            .len = completedText.len,
            .data = completedText.ptr,
        };
        qtc.KFileFilterCombo_SuperSetCompletedText(@ptrCast(self.ptr), completedText_str);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, completedText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetCompletedText(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetCompletedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` items: []const []const u8 `
    ///
    /// ` autoSuggest: bool `
    ///
    pub fn SetCompletedItems(self: KFileFilterCombo, allocator: std.mem.Allocator, items: []const []const u8, autoSuggest: bool) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kfilefiltercombo.SetCompletedItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |item, i|
            items_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KFileFilterCombo_SetCompletedItems(@ptrCast(self.ptr), items_list, autoSuggest);
    }

    /// ### DEPRECATED: Use `SuperSetCompletedItems` instead
    ///
    pub const QBaseSetCompletedItems = SuperSetCompletedItems;

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` items: []const []const u8 `
    ///
    /// ` autoSuggest: bool `
    ///
    pub fn SuperSetCompletedItems(self: KFileFilterCombo, allocator: std.mem.Allocator, items: []const []const u8, autoSuggest: bool) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kfilefiltercombo.SetCompletedItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |item, i|
            items_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KFileFilterCombo_SuperSetCompletedItems(@ptrCast(self.ptr), items_list, autoSuggest);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, items: ?[*:null]?[*:0]const u8, autoSuggest: bool) callconv(.c) void `
    ///
    pub fn OnSetCompletedItems(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, ?[*:null]?[*:0]const u8, bool) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetCompletedItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn MakeCompletion(self: KFileFilterCombo, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KFileFilterCombo_MakeCompletion(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `SuperMakeCompletion` instead
    ///
    pub const QBaseMakeCompletion = SuperMakeCompletion;

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SuperMakeCompletion(self: KFileFilterCombo, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KFileFilterCombo_SuperMakeCompletion(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from KComboBox
    ///
    /// ### [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnMakeCompletion(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnMakeCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: KFileFilterCombo, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.KFileFilterCombo_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetModel` instead
    ///
    pub const QBaseSetModel = SuperSetModel;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SuperSetModel(self: KFileFilterCombo, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.KFileFilterCombo_SuperSetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnSetModel(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QAbstractItemModel) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SizeHint(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.KFileFilterCombo_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperSizeHint(self: KFileFilterCombo) QSize {
        return .{ .ptr = qtc.KFileFilterCombo_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KFileFilterCombo, callback: *const fn () callconv(.c) QSize) void {
        qtc.KFileFilterCombo_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn ShowPopup(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_ShowPopup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowPopup` instead
    ///
    pub const QBaseShowPopup = SuperShowPopup;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperShowPopup(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_SuperShowPopup(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnShowPopup(self: KFileFilterCombo, callback: *const fn () callconv(.c) void) void {
        qtc.KFileFilterCombo_OnShowPopup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn HidePopup(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_HidePopup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHidePopup` instead
    ///
    pub const QBaseHidePopup = SuperHidePopup;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperHidePopup(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_SuperHidePopup(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnHidePopup(self: KFileFilterCombo, callback: *const fn () callconv(.c) void) void {
        qtc.KFileFilterCombo_OnHidePopup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KFileFilterCombo, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFileFilterCombo_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KFileFilterCombo, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFileFilterCombo_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QEvent) callconv(.c) bool) void {
        qtc.KFileFilterCombo_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KFileFilterCombo, param1: i32) QVariant {
        return .{ .ptr = qtc.KFileFilterCombo_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KFileFilterCombo, param1: i32) QVariant {
        return .{ .ptr = qtc.KFileFilterCombo_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32) callconv(.c) QVariant) void {
        qtc.KFileFilterCombo_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.KFileFilterCombo_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.KFileFilterCombo_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QFocusEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.KFileFilterCombo_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.KFileFilterCombo_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QFocusEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QEvent `
    ///
    pub fn ChangeEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.KFileFilterCombo_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperChangeEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.KFileFilterCombo_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.KFileFilterCombo_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.KFileFilterCombo_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QResizeEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn PaintEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.KFileFilterCombo_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.KFileFilterCombo_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QPaintEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QShowEvent `
    ///
    pub fn ShowEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QShowEvent;
        qtc.KFileFilterCombo_ShowEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QShowEvent;
        qtc.KFileFilterCombo_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QShowEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QHideEvent `
    ///
    pub fn HideEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QHideEvent;
        qtc.KFileFilterCombo_HideEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QHideEvent;
        qtc.KFileFilterCombo_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QHideEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KFileFilterCombo_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KFileFilterCombo_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QMouseEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KFileFilterCombo_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KFileFilterCombo_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QMouseEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.KFileFilterCombo_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.KFileFilterCombo_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QKeyEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.KFileFilterCombo_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.KFileFilterCombo_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QKeyEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn WheelEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.KFileFilterCombo_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.KFileFilterCombo_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QWheelEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.KFileFilterCombo_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KFileFilterCombo, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.KFileFilterCombo_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, e: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QContextMenuEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KFileFilterCombo_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KFileFilterCombo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KFileFilterCombo_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QInputMethodEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` option: QStyleOptionComboBox `
    ///
    pub fn InitStyleOption(self: KFileFilterCombo, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComboBox;
        qtc.KFileFilterCombo_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` option: QStyleOptionComboBox `
    ///
    pub fn SuperInitStyleOption(self: KFileFilterCombo, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComboBox;
        qtc.KFileFilterCombo_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, option: QStyleOptionComboBox) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QStyleOptionComboBox) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn DevType(self: KFileFilterCombo) i32 {
        return qtc.KFileFilterCombo_DevType(@ptrCast(self.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperDevType(self: KFileFilterCombo) i32 {
        return qtc.KFileFilterCombo_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KFileFilterCombo, callback: *const fn () callconv(.c) i32) void {
        qtc.KFileFilterCombo_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KFileFilterCombo, visible: bool) void {
        qtc.KFileFilterCombo_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KFileFilterCombo, visible: bool) void {
        qtc.KFileFilterCombo_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, bool) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KFileFilterCombo, param1: i32) i32 {
        return qtc.KFileFilterCombo_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KFileFilterCombo, param1: i32) i32 {
        return qtc.KFileFilterCombo_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32) callconv(.c) i32) void {
        qtc.KFileFilterCombo_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn HasHeightForWidth(self: KFileFilterCombo) bool {
        return qtc.KFileFilterCombo_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperHasHeightForWidth(self: KFileFilterCombo) bool {
        return qtc.KFileFilterCombo_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KFileFilterCombo, callback: *const fn () callconv(.c) bool) void {
        qtc.KFileFilterCombo_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn PaintEngine(self: KFileFilterCombo) QPaintEngine {
        return .{ .ptr = qtc.KFileFilterCombo_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperPaintEngine(self: KFileFilterCombo) QPaintEngine {
        return .{ .ptr = qtc.KFileFilterCombo_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KFileFilterCombo, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KFileFilterCombo_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KFileFilterCombo_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KFileFilterCombo_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QMouseEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KFileFilterCombo_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KFileFilterCombo_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QMouseEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KFileFilterCombo_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KFileFilterCombo_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QEnterEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFileFilterCombo_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFileFilterCombo_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KFileFilterCombo_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KFileFilterCombo_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QMoveEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KFileFilterCombo_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KFileFilterCombo_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QCloseEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KFileFilterCombo_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KFileFilterCombo_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QTabletEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KFileFilterCombo_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KFileFilterCombo_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QActionEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KFileFilterCombo_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KFileFilterCombo_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QDragEnterEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KFileFilterCombo_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KFileFilterCombo_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QDragMoveEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KFileFilterCombo_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KFileFilterCombo_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KFileFilterCombo_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KFileFilterCombo_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QDropEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KFileFilterCombo, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KFileFilterCombo_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KFileFilterCombo, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KFileFilterCombo_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KFileFilterCombo_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KFileFilterCombo, param1: i32) i32 {
        return qtc.KFileFilterCombo_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KFileFilterCombo, param1: i32) i32 {
        return qtc.KFileFilterCombo_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32) callconv(.c) i32) void {
        qtc.KFileFilterCombo_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KFileFilterCombo, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KFileFilterCombo_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KFileFilterCombo, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KFileFilterCombo_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QPainter) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KFileFilterCombo, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KFileFilterCombo_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KFileFilterCombo, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KFileFilterCombo_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KFileFilterCombo_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SharedPainter(self: KFileFilterCombo) QPainter {
        return .{ .ptr = qtc.KFileFilterCombo_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperSharedPainter(self: KFileFilterCombo) QPainter {
        return .{ .ptr = qtc.KFileFilterCombo_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KFileFilterCombo, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KFileFilterCombo_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KFileFilterCombo, next: bool) bool {
        return qtc.KFileFilterCombo_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KFileFilterCombo, next: bool) bool {
        return qtc.KFileFilterCombo_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, bool) callconv(.c) bool) void {
        qtc.KFileFilterCombo_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KFileFilterCombo_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KFileFilterCombo_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QTimerEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KFileFilterCombo_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KFileFilterCombo_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QChildEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFileFilterCombo_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KFileFilterCombo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFileFilterCombo_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QEvent) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KFileFilterCombo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFileFilterCombo_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KFileFilterCombo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFileFilterCombo_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QMetaMethod) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KFileFilterCombo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFileFilterCombo_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KFileFilterCombo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFileFilterCombo_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QMetaMethod) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` completionObject: KCompletion `
    ///
    /// ` handleSignals: bool `
    ///
    pub fn SetCompletionObject(self: KFileFilterCombo, completionObject: anytype, handleSignals: bool) void {
        comptime _ = @TypeOf(completionObject)._is_KCompletion;
        qtc.KFileFilterCombo_SetCompletionObject(@ptrCast(self.ptr), @ptrCast(completionObject.ptr), handleSignals);
    }

    /// ### DEPRECATED: Use `SuperSetCompletionObject` instead
    ///
    pub const QBaseSetCompletionObject = SuperSetCompletionObject;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` completionObject: KCompletion `
    ///
    /// ` handleSignals: bool `
    ///
    pub fn SuperSetCompletionObject(self: KFileFilterCombo, completionObject: anytype, handleSignals: bool) void {
        comptime _ = @TypeOf(completionObject)._is_KCompletion;
        qtc.KFileFilterCombo_SuperSetCompletionObject(@ptrCast(self.ptr), @ptrCast(completionObject.ptr), handleSignals);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, completionObject: KCompletion, handleSignals: bool) callconv(.c) void `
    ///
    pub fn OnSetCompletionObject(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, KCompletion, bool) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetCompletionObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` handle: bool `
    ///
    pub fn SetHandleSignals(self: KFileFilterCombo, handle: bool) void {
        qtc.KFileFilterCombo_SetHandleSignals(@ptrCast(self.ptr), handle);
    }

    /// ### DEPRECATED: Use `SuperSetHandleSignals` instead
    ///
    pub const QBaseSetHandleSignals = SuperSetHandleSignals;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` handle: bool `
    ///
    pub fn SuperSetHandleSignals(self: KFileFilterCombo, handle: bool) void {
        qtc.KFileFilterCombo_SuperSetHandleSignals(@ptrCast(self.ptr), handle);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, handle: bool) callconv(.c) void `
    ///
    pub fn OnSetHandleSignals(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, bool) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetHandleSignals(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SetCompletionMode(self: KFileFilterCombo, mode: i32) void {
        qtc.KFileFilterCombo_SetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperSetCompletionMode` instead
    ///
    pub const QBaseSetCompletionMode = SuperSetCompletionMode;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SuperSetCompletionMode(self: KFileFilterCombo, mode: i32) void {
        qtc.KFileFilterCombo_SuperSetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, mode: kcompletion_enums.CompletionMode) callconv(.c) void `
    ///
    pub fn OnSetCompletionMode(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetCompletionMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KFileFilterCombo, id: i32, data: ?*anyopaque) void {
        qtc.KFileFilterCombo_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KFileFilterCombo, id: i32, data: ?*anyopaque) void {
        qtc.KFileFilterCombo_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn UpdateMicroFocus(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperUpdateMicroFocus(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KFileFilterCombo, callback: *const fn () callconv(.c) void) void {
        qtc.KFileFilterCombo_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Create(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_Create(@ptrCast(self.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperCreate(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KFileFilterCombo, callback: *const fn () callconv(.c) void) void {
        qtc.KFileFilterCombo_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Destroy(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperDestroy(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KFileFilterCombo, callback: *const fn () callconv(.c) void) void {
        qtc.KFileFilterCombo_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn FocusNextChild(self: KFileFilterCombo) bool {
        return qtc.KFileFilterCombo_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperFocusNextChild(self: KFileFilterCombo) bool {
        return qtc.KFileFilterCombo_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KFileFilterCombo, callback: *const fn () callconv(.c) bool) void {
        qtc.KFileFilterCombo_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn FocusPreviousChild(self: KFileFilterCombo) bool {
        return qtc.KFileFilterCombo_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperFocusPreviousChild(self: KFileFilterCombo) bool {
        return qtc.KFileFilterCombo_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KFileFilterCombo, callback: *const fn () callconv(.c) bool) void {
        qtc.KFileFilterCombo_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Sender(self: KFileFilterCombo) QObject {
        return .{ .ptr = qtc.KFileFilterCombo_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperSender(self: KFileFilterCombo) QObject {
        return .{ .ptr = qtc.KFileFilterCombo_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KFileFilterCombo, callback: *const fn () callconv(.c) QObject) void {
        qtc.KFileFilterCombo_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SenderSignalIndex(self: KFileFilterCombo) i32 {
        return qtc.KFileFilterCombo_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperSenderSignalIndex(self: KFileFilterCombo) i32 {
        return qtc.KFileFilterCombo_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KFileFilterCombo, callback: *const fn () callconv(.c) i32) void {
        qtc.KFileFilterCombo_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KFileFilterCombo, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFileFilterCombo_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KFileFilterCombo, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFileFilterCombo_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) i32) void {
        qtc.KFileFilterCombo_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KFileFilterCombo, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFileFilterCombo_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KFileFilterCombo, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFileFilterCombo_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, QMetaMethod) callconv(.c) bool) void {
        qtc.KFileFilterCombo_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KFileFilterCombo, metricA: i32, metricB: i32) f64 {
        return qtc.KFileFilterCombo_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KFileFilterCombo `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KFileFilterCombo, metricA: i32, metricB: i32) f64 {
        return qtc.KFileFilterCombo_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, i32, i32) callconv(.c) f64) void {
        qtc.KFileFilterCombo_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn KeyBindingMap(self: KFileFilterCombo, allocator: std.mem.Allocator) ArrayMap_i32_SliceQKeySequence {
        const _map: qtc.libqt_map = qtc.KFileFilterCombo_KeyBindingMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQKeySequence = .empty;
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(QKeySequence, _value.len) catch @panic("kfilefiltercombo.KeyBindingMap: Memory allocation failed");
            const _value_data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |ii|
                _value_slice[ii] = .{ .ptr = _value_data[ii] };
            _ret.put(allocator, _key, _value_slice) catch @panic("kfilefiltercombo.KeyBindingMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperKeyBindingMap` instead
    ///
    pub const QBaseKeyBindingMap = SuperKeyBindingMap;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn SuperKeyBindingMap(self: KFileFilterCombo, allocator: std.mem.Allocator) ArrayMap_i32_SliceQKeySequence {
        const _map: qtc.libqt_map = qtc.KFileFilterCombo_SuperKeyBindingMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQKeySequence = .empty;
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(QKeySequence, _value.len) catch @panic("kfilefiltercombo.KeyBindingMap: Memory allocation failed");
            const _value_data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |ii|
                _value_slice[ii] = .{ .ptr = _value_data[ii] };
            _ret.put(allocator, _key, _value_slice) catch @panic("kfilefiltercombo.KeyBindingMap: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_SliceQKeySequence `
    ///
    pub fn OnKeyBindingMap(self: KFileFilterCombo, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.KFileFilterCombo_OnKeyBindingMap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyBindingMap: ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn SetKeyBindingMap(self: KFileFilterCombo, allocator: std.mem.Allocator, keyBindingMap: ArrayMap_i32_SliceQKeySequence) void {
        const keyBindingMap_count = keyBindingMap.count();
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap_count) catch @panic("kfilefiltercombo.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc(qtc.libqt_list, keyBindingMap_count) catch @panic("kfilefiltercombo.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = keyBindingMap.iterator();
        while (keyBindingMap_it.next()) |it_entry| : (i += 1) {
            const keyBindingMap_key = it_entry.key_ptr.*;
            keyBindingMap_keys[i] = @bitCast(keyBindingMap_key);
            const value = it_entry.value_ptr.*;
            keyBindingMap_values[i] = qtc.libqt_list{
                .len = value.len,
                .data = @ptrCast(value.ptr),
            };
        }
        const keyBindingMap_map = qtc.libqt_map{
            .len = keyBindingMap_count,
            .keys = @ptrCast(keyBindingMap_keys.ptr),
            .values = @ptrCast(keyBindingMap_values.ptr),
        };
        qtc.KFileFilterCombo_SetKeyBindingMap(@ptrCast(self.ptr), keyBindingMap_map);
    }

    /// ### DEPRECATED: Use `SuperSetKeyBindingMap` instead
    ///
    pub const QBaseSetKeyBindingMap = SuperSetKeyBindingMap;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyBindingMap: ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn SuperSetKeyBindingMap(self: KFileFilterCombo, allocator: std.mem.Allocator, keyBindingMap: ArrayMap_i32_SliceQKeySequence) void {
        const keyBindingMap_count = keyBindingMap.count();
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap_count) catch @panic("kfilefiltercombo.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc(qtc.libqt_list, keyBindingMap_count) catch @panic("kfilefiltercombo.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = keyBindingMap.iterator();
        while (keyBindingMap_it.next()) |it_entry| : (i += 1) {
            const keyBindingMap_key = it_entry.key_ptr.*;
            keyBindingMap_keys[i] = @bitCast(keyBindingMap_key);
            const value = it_entry.value_ptr.*;
            keyBindingMap_values[i] = qtc.libqt_list{
                .len = value.len,
                .data = @ptrCast(value.ptr),
            };
        }
        const keyBindingMap_map = qtc.libqt_map{
            .len = keyBindingMap_count,
            .keys = @ptrCast(keyBindingMap_keys.ptr),
            .values = @ptrCast(keyBindingMap_values.ptr),
        };
        qtc.KFileFilterCombo_SuperSetKeyBindingMap(@ptrCast(self.ptr), keyBindingMap_map);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, keyBindingMap: qtc.libqt_map (ArrayMap_i32_SliceQKeySequence)) callconv(.c) void `
    ///
    pub fn OnSetKeyBindingMap(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, qtc.libqt_map) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetKeyBindingMap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` delegate: KCompletionBase `
    ///
    pub fn SetDelegate(self: KFileFilterCombo, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KCompletionBase;
        qtc.KFileFilterCombo_SetDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetDelegate` instead
    ///
    pub const QBaseSetDelegate = SuperSetDelegate;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` delegate: KCompletionBase `
    ///
    pub fn SuperSetDelegate(self: KFileFilterCombo, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KCompletionBase;
        qtc.KFileFilterCombo_SuperSetDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, delegate: KCompletionBase) callconv(.c) void `
    ///
    pub fn OnSetDelegate(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, KCompletionBase) callconv(.c) void) void {
        qtc.KFileFilterCombo_OnSetDelegate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Delegate(self: KFileFilterCombo) KCompletionBase {
        return .{ .ptr = qtc.KFileFilterCombo_Delegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDelegate` instead
    ///
    pub const QBaseDelegate = SuperDelegate;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn SuperDelegate(self: KFileFilterCombo) KCompletionBase {
        return .{ .ptr = qtc.KFileFilterCombo_SuperDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo`
    ///
    /// ` callback: *const fn () callconv(.c) KCompletionBase `
    ///
    pub fn OnDelegate(self: KFileFilterCombo, callback: *const fn () callconv(.c) KCompletionBase) void {
        qtc.KFileFilterCombo_OnDelegate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KFileFilterCombo `
    ///
    /// ` callback: *const fn (self: KFileFilterCombo, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KFileFilterCombo, callback: *const fn (KFileFilterCombo, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfilefiltercombo.html#dtor.KFileFilterCombo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileFilterCombo `
    ///
    pub fn Delete(self: KFileFilterCombo) void {
        qtc.KFileFilterCombo_Delete(@ptrCast(self.ptr));
    }
};
