const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
const QValidator = @import("libqt6").QValidator;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qcombobox_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html)
pub const QComboBox = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QComboBox,

    pub const _is_QComboBox = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QComboBox object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QComboBox {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QComboBox_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QComboBox object in C++ memory
    ///
    pub fn new2() QComboBox {
        return .{ .ptr = qtc.QComboBox_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn metaObject(self: QComboBox) QMetaObject {
        return .{ .ptr = qtc.QComboBox_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QComboBox, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QComboBox_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn superMetaObject(self: QComboBox) QMetaObject {
        return .{ .ptr = qtc.QComboBox_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QComboBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QComboBox_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QComboBox, callback: *const fn (QComboBox, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QComboBox_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QComboBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QComboBox_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QComboBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QComboBox_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QComboBox, callback: *const fn (QComboBox, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QComboBox_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QComboBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QComboBox_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `maxVisibleItems` instead
    ///
    pub const MaxVisibleItems = maxVisibleItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn maxVisibleItems(self: QComboBox) i32 {
        return qtc.QComboBox_MaxVisibleItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxVisibleItems` instead
    ///
    pub const SetMaxVisibleItems = setMaxVisibleItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` maxItems: i32 `
    ///
    pub fn setMaxVisibleItems(self: QComboBox, maxItems: i32) void {
        qtc.QComboBox_SetMaxVisibleItems(@ptrCast(self.ptr), @bitCast(maxItems));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn count(self: QComboBox) i32 {
        return qtc.QComboBox_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxCount` instead
    ///
    pub const SetMaxCount = setMaxCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` max: i32 `
    ///
    pub fn setMaxCount(self: QComboBox, max: i32) void {
        qtc.QComboBox_SetMaxCount(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### DEPRECATED: Use `maxCount` instead
    ///
    pub const MaxCount = maxCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn maxCount(self: QComboBox) i32 {
        return qtc.QComboBox_MaxCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `duplicatesEnabled` instead
    ///
    pub const DuplicatesEnabled = duplicatesEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn duplicatesEnabled(self: QComboBox) bool {
        return qtc.QComboBox_DuplicatesEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDuplicatesEnabled` instead
    ///
    pub const SetDuplicatesEnabled = setDuplicatesEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` enable: bool `
    ///
    pub fn setDuplicatesEnabled(self: QComboBox, enable: bool) void {
        qtc.QComboBox_SetDuplicatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `setFrame` instead
    ///
    pub const SetFrame = setFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` frame: bool `
    ///
    pub fn setFrame(self: QComboBox, frame: bool) void {
        qtc.QComboBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// ### DEPRECATED: Use `hasFrame` instead
    ///
    pub const HasFrame = hasFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn hasFrame(self: QComboBox) bool {
        return qtc.QComboBox_HasFrame(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `findText` instead
    ///
    pub const FindText = findText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn findText(self: QComboBox, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QComboBox_FindText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `findData` instead
    ///
    pub const FindData = findData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` data: QVariant `
    ///
    pub fn findData(self: QComboBox, data: anytype) i32 {
        comptime _ = @TypeOf(data)._is_QVariant;
        return qtc.QComboBox_FindData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `insertPolicy` instead
    ///
    pub const InsertPolicy = insertPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qcombobox_enums.InsertPolicy `
    ///
    pub fn insertPolicy(self: QComboBox) i32 {
        return qtc.QComboBox_InsertPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInsertPolicy` instead
    ///
    pub const SetInsertPolicy = setInsertPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` policy: qcombobox_enums.InsertPolicy `
    ///
    pub fn setInsertPolicy(self: QComboBox, policy: i32) void {
        qtc.QComboBox_SetInsertPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `sizeAdjustPolicy` instead
    ///
    pub const SizeAdjustPolicy = sizeAdjustPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qcombobox_enums.SizeAdjustPolicy `
    ///
    pub fn sizeAdjustPolicy(self: QComboBox) i32 {
        return qtc.QComboBox_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizeAdjustPolicy` instead
    ///
    pub const SetSizeAdjustPolicy = setSizeAdjustPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` policy: qcombobox_enums.SizeAdjustPolicy `
    ///
    pub fn setSizeAdjustPolicy(self: QComboBox, policy: i32) void {
        qtc.QComboBox_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `minimumContentsLength` instead
    ///
    pub const MinimumContentsLength = minimumContentsLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn minimumContentsLength(self: QComboBox) i32 {
        return qtc.QComboBox_MinimumContentsLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumContentsLength` instead
    ///
    pub const SetMinimumContentsLength = setMinimumContentsLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` characters: i32 `
    ///
    pub fn setMinimumContentsLength(self: QComboBox, characters: i32) void {
        qtc.QComboBox_SetMinimumContentsLength(@ptrCast(self.ptr), @bitCast(characters));
    }

    /// ### DEPRECATED: Use `iconSize` instead
    ///
    pub const IconSize = iconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn iconSize(self: QComboBox) QSize {
        return .{ .ptr = qtc.QComboBox_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIconSize` instead
    ///
    pub const SetIconSize = setIconSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` _size: QSize `
    ///
    pub fn setIconSize(self: QComboBox, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QComboBox_SetIconSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setPlaceholderText` instead
    ///
    pub const SetPlaceholderText = setPlaceholderText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` _placeholderText: []const u8 `
    ///
    pub fn setPlaceholderText(self: QComboBox, _placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = _placeholderText.len,
            .data = _placeholderText.ptr,
        };
        qtc.QComboBox_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// ### DEPRECATED: Use `placeholderText` instead
    ///
    pub const PlaceholderText = placeholderText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn placeholderText(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QComboBox_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.placeholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isEditable` instead
    ///
    pub const IsEditable = isEditable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn isEditable(self: QComboBox) bool {
        return qtc.QComboBox_IsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEditable` instead
    ///
    pub const SetEditable = setEditable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` editable: bool `
    ///
    pub fn setEditable(self: QComboBox, editable: bool) void {
        qtc.QComboBox_SetEditable(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `setLineEdit` instead
    ///
    pub const SetLineEdit = setLineEdit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn setLineEdit(self: QComboBox, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QComboBox_SetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// ### DEPRECATED: Use `lineEdit` instead
    ///
    pub const LineEdit = lineEdit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn lineEdit(self: QComboBox) QLineEdit {
        return .{ .ptr = qtc.QComboBox_LineEdit(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setValidator` instead
    ///
    pub const SetValidator = setValidator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` v: QValidator `
    ///
    pub fn setValidator(self: QComboBox, v: anytype) void {
        comptime _ = @TypeOf(v)._is_QValidator;
        qtc.QComboBox_SetValidator(@ptrCast(self.ptr), @ptrCast(v.ptr));
    }

    /// ### DEPRECATED: Use `validator` instead
    ///
    pub const Validator = validator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn validator(self: QComboBox) QValidator {
        return .{ .ptr = qtc.QComboBox_Validator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCompleter` instead
    ///
    pub const SetCompleter = setCompleter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` c: QCompleter `
    ///
    pub fn setCompleter(self: QComboBox, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QCompleter;
        qtc.QComboBox_SetCompleter(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `completer` instead
    ///
    pub const Completer = completer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn completer(self: QComboBox) QCompleter {
        return .{ .ptr = qtc.QComboBox_Completer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `itemDelegate` instead
    ///
    pub const ItemDelegate = itemDelegate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn itemDelegate(self: QComboBox) QAbstractItemDelegate {
        return .{ .ptr = qtc.QComboBox_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemDelegate` instead
    ///
    pub const SetItemDelegate = setItemDelegate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegate(self: QComboBox, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QComboBox_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn model(self: QComboBox) QAbstractItemModel {
        return .{ .ptr = qtc.QComboBox_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QComboBox, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QComboBox_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `onSetModel` instead
    ///
    pub const OnSetModel = onSetModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onSetModel(self: QComboBox, callback: *const fn (QComboBox, QAbstractItemModel) callconv(.c) void) void {
        qtc.QComboBox_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModel` instead
    ///
    pub const SuperSetModel = superSetModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn superSetModel(self: QComboBox, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QComboBox_SuperSetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `rootModelIndex` instead
    ///
    pub const RootModelIndex = rootModelIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn rootModelIndex(self: QComboBox) QModelIndex {
        return .{ .ptr = qtc.QComboBox_RootModelIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRootModelIndex` instead
    ///
    pub const SetRootModelIndex = setRootModelIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn setRootModelIndex(self: QComboBox, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QComboBox_SetRootModelIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `modelColumn` instead
    ///
    pub const ModelColumn = modelColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn modelColumn(self: QComboBox) i32 {
        return qtc.QComboBox_ModelColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModelColumn` instead
    ///
    pub const SetModelColumn = setModelColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` visibleColumn: i32 `
    ///
    pub fn setModelColumn(self: QComboBox, visibleColumn: i32) void {
        qtc.QComboBox_SetModelColumn(@ptrCast(self.ptr), @bitCast(visibleColumn));
    }

    /// ### DEPRECATED: Use `currentIndex` instead
    ///
    pub const CurrentIndex = currentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn currentIndex(self: QComboBox) i32 {
        return qtc.QComboBox_CurrentIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentText` instead
    ///
    pub const CurrentText = currentText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentText(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QComboBox_CurrentText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.currentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentData` instead
    ///
    pub const CurrentData = currentData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn currentData(self: QComboBox) QVariant {
        return .{ .ptr = qtc.QComboBox_CurrentData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `itemText` instead
    ///
    pub const ItemText = itemText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn itemText(self: QComboBox, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QComboBox_ItemText(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.itemText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `itemIcon` instead
    ///
    pub const ItemIcon = itemIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    pub fn itemIcon(self: QComboBox, index: i32) QIcon {
        return .{ .ptr = qtc.QComboBox_ItemIcon(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `itemData` instead
    ///
    pub const ItemData = itemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    pub fn itemData(self: QComboBox, index: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_ItemData(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addItem(self: QComboBox, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_AddItem(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `addItem2` instead
    ///
    pub const AddItem2 = addItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addItem2(self: QComboBox, icon: anytype, text: []const u8) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_AddItem2(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str);
    }

    /// ### DEPRECATED: Use `addItems` instead
    ///
    pub const AddItems = addItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` texts: []const []const u8 `
    ///
    pub fn addItems(self: QComboBox, allocator: std.mem.Allocator, texts: []const []const u8) void {
        const texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("QComboBox.addItems: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |str_item, i|
            texts_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.QComboBox_AddItems(@ptrCast(self.ptr), texts_list);
    }

    /// ### DEPRECATED: Use `insertItem` instead
    ///
    pub const InsertItem = insertItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn insertItem(self: QComboBox, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_InsertItem(@ptrCast(self.ptr), @bitCast(index), text_str);
    }

    /// ### DEPRECATED: Use `insertItem2` instead
    ///
    pub const InsertItem2 = insertItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn insertItem2(self: QComboBox, index: i32, icon: anytype, text: []const u8) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_InsertItem2(@ptrCast(self.ptr), @bitCast(index), @ptrCast(icon.ptr), text_str);
    }

    /// ### DEPRECATED: Use `insertItems` instead
    ///
    pub const InsertItems = insertItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    /// ` texts: []const []const u8 `
    ///
    pub fn insertItems(self: QComboBox, allocator: std.mem.Allocator, index: i32, texts: []const []const u8) void {
        const texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("QComboBox.insertItems: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |str_item, i|
            texts_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.QComboBox_InsertItems(@ptrCast(self.ptr), @bitCast(index), texts_list);
    }

    /// ### DEPRECATED: Use `insertSeparator` instead
    ///
    pub const InsertSeparator = insertSeparator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    pub fn insertSeparator(self: QComboBox, index: i32) void {
        qtc.QComboBox_InsertSeparator(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    pub fn removeItem(self: QComboBox, index: i32) void {
        qtc.QComboBox_RemoveItem(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setItemText` instead
    ///
    pub const SetItemText = setItemText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setItemText(self: QComboBox, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_SetItemText(@ptrCast(self.ptr), @bitCast(index), text_str);
    }

    /// ### DEPRECATED: Use `setItemIcon` instead
    ///
    pub const SetItemIcon = setItemIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setItemIcon(self: QComboBox, index: i32, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QComboBox_SetItemIcon(@ptrCast(self.ptr), @bitCast(index), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `setItemData` instead
    ///
    pub const SetItemData = setItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setItemData(self: QComboBox, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QComboBox_SetItemData(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `view` instead
    ///
    pub const View = view;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn view(self: QComboBox) QAbstractItemView {
        return .{ .ptr = qtc.QComboBox_View(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setView` instead
    ///
    pub const SetView = setView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` itemView: QAbstractItemView `
    ///
    pub fn setView(self: QComboBox, itemView: anytype) void {
        comptime _ = @TypeOf(itemView)._is_QAbstractItemView;
        qtc.QComboBox_SetView(@ptrCast(self.ptr), @ptrCast(itemView.ptr));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn sizeHint(self: QComboBox) QSize {
        return .{ .ptr = qtc.QComboBox_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QComboBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.QComboBox_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn superSizeHint(self: QComboBox) QSize {
        return .{ .ptr = qtc.QComboBox_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn minimumSizeHint(self: QComboBox) QSize {
        return .{ .ptr = qtc.QComboBox_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSizeHint` instead
    ///
    pub const OnMinimumSizeHint = onMinimumSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QComboBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.QComboBox_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumSizeHint` instead
    ///
    pub const SuperMinimumSizeHint = superMinimumSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn superMinimumSizeHint(self: QComboBox) QSize {
        return .{ .ptr = qtc.QComboBox_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `showPopup` instead
    ///
    pub const ShowPopup = showPopup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn showPopup(self: QComboBox) void {
        qtc.QComboBox_ShowPopup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onShowPopup` instead
    ///
    pub const OnShowPopup = onShowPopup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onShowPopup(self: QComboBox, callback: *const fn () callconv(.c) void) void {
        qtc.QComboBox_OnShowPopup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShowPopup` instead
    ///
    pub const SuperShowPopup = superShowPopup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn superShowPopup(self: QComboBox) void {
        qtc.QComboBox_SuperShowPopup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hidePopup` instead
    ///
    pub const HidePopup = hidePopup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn hidePopup(self: QComboBox) void {
        qtc.QComboBox_HidePopup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHidePopup` instead
    ///
    pub const OnHidePopup = onHidePopup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onHidePopup(self: QComboBox, callback: *const fn () callconv(.c) void) void {
        qtc.QComboBox_OnHidePopup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHidePopup` instead
    ///
    pub const SuperHidePopup = superHidePopup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn superHidePopup(self: QComboBox) void {
        qtc.QComboBox_SuperHidePopup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QComboBox, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QComboBox_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QComboBox, callback: *const fn (QComboBox, QEvent) callconv(.c) bool) void {
        qtc.QComboBox_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QComboBox, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QComboBox_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QComboBox, param1: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QComboBox, callback: *const fn (QComboBox, i32) callconv(.c) QVariant) void {
        qtc.QComboBox_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QComboBox, param1: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `inputMethodQuery2` instead
    ///
    pub const InputMethodQuery2 = inputMethodQuery2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn inputMethodQuery2(self: QComboBox, query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QComboBox_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn clear(self: QComboBox) void {
        qtc.QComboBox_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearEditText` instead
    ///
    pub const ClearEditText = clearEditText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    pub fn clearEditText(self: QComboBox) void {
        qtc.QComboBox_ClearEditText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEditText` instead
    ///
    pub const SetEditText = setEditText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setEditText(self: QComboBox, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_SetEditText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setCurrentIndex` instead
    ///
    pub const SetCurrentIndex = setCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    pub fn setCurrentIndex(self: QComboBox, index: i32) void {
        qtc.QComboBox_SetCurrentIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setCurrentText` instead
    ///
    pub const SetCurrentText = setCurrentText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setCurrentText(self: QComboBox, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_SetCurrentText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `editTextChanged` instead
    ///
    pub const EditTextChanged = editTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn editTextChanged(self: QComboBox, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_EditTextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onEditTextChanged` instead
    ///
    pub const OnEditTextChanged = onEditTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onEditTextChanged(self: QComboBox, callback: *const fn (QComboBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_EditTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activated` instead
    ///
    pub const Activated = activated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    pub fn activated(self: QComboBox, index: i32) void {
        qtc.QComboBox_Activated(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onActivated` instead
    ///
    pub const OnActivated = onActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, index: i32) callconv(.c) void `
    ///
    pub fn onActivated(self: QComboBox, callback: *const fn (QComboBox, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textActivated` instead
    ///
    pub const TextActivated = textActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn textActivated(self: QComboBox, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_TextActivated(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onTextActivated` instead
    ///
    pub const OnTextActivated = onTextActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextActivated(self: QComboBox, callback: *const fn (QComboBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `highlighted` instead
    ///
    pub const Highlighted = highlighted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    pub fn highlighted(self: QComboBox, index: i32) void {
        qtc.QComboBox_Highlighted(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onHighlighted` instead
    ///
    pub const OnHighlighted = onHighlighted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, index: i32) callconv(.c) void `
    ///
    pub fn onHighlighted(self: QComboBox, callback: *const fn (QComboBox, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Highlighted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textHighlighted` instead
    ///
    pub const TextHighlighted = textHighlighted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn textHighlighted(self: QComboBox, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_TextHighlighted(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onTextHighlighted` instead
    ///
    pub const OnTextHighlighted = onTextHighlighted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextHighlighted(self: QComboBox, callback: *const fn (QComboBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextHighlighted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentIndexChanged` instead
    ///
    pub const CurrentIndexChanged = currentIndexChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    pub fn currentIndexChanged(self: QComboBox, index: i32) void {
        qtc.QComboBox_CurrentIndexChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onCurrentIndexChanged` instead
    ///
    pub const OnCurrentIndexChanged = onCurrentIndexChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, index: i32) callconv(.c) void `
    ///
    pub fn onCurrentIndexChanged(self: QComboBox, callback: *const fn (QComboBox, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentIndexChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentTextChanged` instead
    ///
    pub const CurrentTextChanged = currentTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn currentTextChanged(self: QComboBox, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_CurrentTextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onCurrentTextChanged` instead
    ///
    pub const OnCurrentTextChanged = onCurrentTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCurrentTextChanged(self: QComboBox, callback: *const fn (QComboBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn focusInEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QComboBox_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QComboBox, callback: *const fn (QComboBox, QFocusEvent) callconv(.c) void) void {
        qtc.QComboBox_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QComboBox_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QComboBox_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QComboBox, callback: *const fn (QComboBox, QFocusEvent) callconv(.c) void) void {
        qtc.QComboBox_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QComboBox_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QEvent `
    ///
    pub fn changeEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QComboBox_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: QComboBox, callback: *const fn (QComboBox, QEvent) callconv(.c) void) void {
        qtc.QComboBox_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QEvent `
    ///
    pub fn superChangeEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QComboBox_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn resizeEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QComboBox_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: QComboBox, callback: *const fn (QComboBox, QResizeEvent) callconv(.c) void) void {
        qtc.QComboBox_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn superResizeEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QComboBox_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn paintEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QComboBox_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: QComboBox, callback: *const fn (QComboBox, QPaintEvent) callconv(.c) void) void {
        qtc.QComboBox_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn superPaintEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QComboBox_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QShowEvent `
    ///
    pub fn showEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QShowEvent;
        qtc.QComboBox_ShowEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QComboBox, callback: *const fn (QComboBox, QShowEvent) callconv(.c) void) void {
        qtc.QComboBox_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QShowEvent `
    ///
    pub fn superShowEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QShowEvent;
        qtc.QComboBox_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QHideEvent `
    ///
    pub fn hideEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QHideEvent;
        qtc.QComboBox_HideEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QComboBox, callback: *const fn (QComboBox, QHideEvent) callconv(.c) void) void {
        qtc.QComboBox_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QHideEvent `
    ///
    pub fn superHideEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QHideEvent;
        qtc.QComboBox_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QComboBox_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QComboBox, callback: *const fn (QComboBox, QMouseEvent) callconv(.c) void) void {
        qtc.QComboBox_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QComboBox_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QComboBox_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QComboBox, callback: *const fn (QComboBox, QMouseEvent) callconv(.c) void) void {
        qtc.QComboBox_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QComboBox_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QComboBox_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QComboBox, callback: *const fn (QComboBox, QKeyEvent) callconv(.c) void) void {
        qtc.QComboBox_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QComboBox_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QComboBox_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QComboBox, callback: *const fn (QComboBox, QKeyEvent) callconv(.c) void) void {
        qtc.QComboBox_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QComboBox_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn wheelEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QComboBox_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QComboBox, callback: *const fn (QComboBox, QWheelEvent) callconv(.c) void) void {
        qtc.QComboBox_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QComboBox_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QComboBox_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, e: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: QComboBox, callback: *const fn (QComboBox, QContextMenuEvent) callconv(.c) void) void {
        qtc.QComboBox_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QComboBox, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QComboBox_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QComboBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QComboBox_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QComboBox, callback: *const fn (QComboBox, QInputMethodEvent) callconv(.c) void) void {
        qtc.QComboBox_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QComboBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QComboBox_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `initStyleOption` instead
    ///
    pub const InitStyleOption = initStyleOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` option: QStyleOptionComboBox `
    ///
    pub fn initStyleOption(self: QComboBox, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComboBox;
        qtc.QComboBox_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitStyleOption` instead
    ///
    pub const OnInitStyleOption = onInitStyleOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, option: QStyleOptionComboBox) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: QComboBox, callback: *const fn (QComboBox, QStyleOptionComboBox) callconv(.c) void) void {
        qtc.QComboBox_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitStyleOption` instead
    ///
    pub const SuperInitStyleOption = superInitStyleOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` option: QStyleOptionComboBox `
    ///
    pub fn superInitStyleOption(self: QComboBox, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComboBox;
        qtc.QComboBox_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `findText2` instead
    ///
    pub const FindText2 = findText2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn findText2(self: QComboBox, text: []const u8, flags: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QComboBox_FindText2(@ptrCast(self.ptr), text_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `findData2` instead
    ///
    pub const FindData2 = findData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` data: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn findData2(self: QComboBox, data: anytype, role: i32) i32 {
        comptime _ = @TypeOf(data)._is_QVariant;
        return qtc.QComboBox_FindData2(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `findData3` instead
    ///
    pub const FindData3 = findData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` data: QVariant `
    ///
    /// ` role: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn findData3(self: QComboBox, data: anytype, role: i32, flags: i32) i32 {
        comptime _ = @TypeOf(data)._is_QVariant;
        return qtc.QComboBox_FindData3(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(role), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `currentData1` instead
    ///
    pub const CurrentData1 = currentData1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` role: i32 `
    ///
    pub fn currentData1(self: QComboBox, role: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_CurrentData1(@ptrCast(self.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `itemData2` instead
    ///
    pub const ItemData2 = itemData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    /// ` role: i32 `
    ///
    pub fn itemData2(self: QComboBox, index: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_ItemData2(@ptrCast(self.ptr), @bitCast(index), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `addItem22` instead
    ///
    pub const AddItem22 = addItem22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn addItem22(self: QComboBox, text: []const u8, userData: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.QComboBox_AddItem22(@ptrCast(self.ptr), text_str, @ptrCast(userData.ptr));
    }

    /// ### DEPRECATED: Use `addItem3` instead
    ///
    pub const AddItem3 = addItem3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn addItem3(self: QComboBox, icon: anytype, text: []const u8, userData: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.QComboBox_AddItem3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(userData.ptr));
    }

    /// ### DEPRECATED: Use `insertItem3` instead
    ///
    pub const InsertItem3 = insertItem3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn insertItem3(self: QComboBox, index: i32, text: []const u8, userData: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.QComboBox_InsertItem3(@ptrCast(self.ptr), @bitCast(index), text_str, @ptrCast(userData.ptr));
    }

    /// ### DEPRECATED: Use `insertItem4` instead
    ///
    pub const InsertItem4 = insertItem4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn insertItem4(self: QComboBox, index: i32, icon: anytype, text: []const u8, userData: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.QComboBox_InsertItem4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(icon.ptr), text_str, @ptrCast(userData.ptr));
    }

    /// ### DEPRECATED: Use `setItemData3` instead
    ///
    pub const SetItemData3 = setItemData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setItemData3(self: QComboBox, index: i32, value: anytype, role: i32) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QComboBox_SetItemData3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr), @bitCast(role));
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
    /// ` self: QComboBox `
    ///
    pub fn winId(self: QComboBox) usize {
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
    /// ` self: QComboBox `
    ///
    pub fn createWinId(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn internalWinId(self: QComboBox) usize {
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
    /// ` self: QComboBox `
    ///
    pub fn effectiveWinId(self: QComboBox) usize {
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
    /// ` self: QComboBox `
    ///
    pub fn style(self: QComboBox) QStyle {
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
    /// ` self: QComboBox `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QComboBox, _style: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn isTopLevel(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn isWindow(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn isModal(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QComboBox, _windowModality: i32) void {
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
    /// ` self: QComboBox `
    ///
    pub fn isEnabled(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QComboBox, param1: anytype) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QComboBox, enabled: bool) void {
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
    /// ` self: QComboBox `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QComboBox, disabled: bool) void {
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
    /// ` self: QComboBox `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QComboBox, windowModified: bool) void {
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
    /// ` self: QComboBox `
    ///
    pub fn frameGeometry(self: QComboBox) QRect {
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
    /// ` self: QComboBox `
    ///
    pub fn geometry(self: QComboBox) QRect {
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
    /// ` self: QComboBox `
    ///
    pub fn normalGeometry(self: QComboBox) QRect {
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
    /// ` self: QComboBox `
    ///
    pub fn x(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn y(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn pos(self: QComboBox) QPoint {
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
    /// ` self: QComboBox `
    ///
    pub fn frameSize(self: QComboBox) QSize {
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
    /// ` self: QComboBox `
    ///
    pub fn size(self: QComboBox) QSize {
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
    /// ` self: QComboBox `
    ///
    pub fn width(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn height(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn rect(self: QComboBox) QRect {
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
    /// ` self: QComboBox `
    ///
    pub fn childrenRect(self: QComboBox) QRect {
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
    /// ` self: QComboBox `
    ///
    pub fn childrenRegion(self: QComboBox) QRegion {
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
    /// ` self: QComboBox `
    ///
    pub fn minimumSize(self: QComboBox) QSize {
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
    /// ` self: QComboBox `
    ///
    pub fn maximumSize(self: QComboBox) QSize {
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
    /// ` self: QComboBox `
    ///
    pub fn minimumWidth(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn minimumHeight(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn maximumWidth(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn maximumHeight(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QComboBox, _minimumSize: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QComboBox, minw: i32, minh: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QComboBox, _maximumSize: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QComboBox, maxw: i32, maxh: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QComboBox, minw: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QComboBox, minh: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QComboBox, maxw: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QComboBox, maxh: i32) void {
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
    /// ` self: QComboBox `
    ///
    pub fn sizeIncrement(self: QComboBox) QSize {
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
    /// ` self: QComboBox `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QComboBox, _sizeIncrement: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QComboBox, w: i32, h: i32) void {
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
    /// ` self: QComboBox `
    ///
    pub fn baseSize(self: QComboBox) QSize {
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
    /// ` self: QComboBox `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QComboBox, _baseSize: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QComboBox, basew: i32, baseh: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QComboBox, fixedSize: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QComboBox, w: i32, h: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QComboBox, w: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QComboBox, h: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QComboBox, param1: anytype) QPointF {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QComboBox, param1: anytype) QPoint {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QComboBox, param1: anytype) QPointF {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QComboBox, param1: anytype) QPoint {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QComboBox, param1: anytype) QPointF {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QComboBox, param1: anytype) QPoint {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QComboBox, param1: anytype) QPointF {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QComboBox, param1: anytype) QPoint {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QComboBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QComboBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QComboBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QComboBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QComboBox `
    ///
    pub fn window(self: QComboBox) QWidget {
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
    /// ` self: QComboBox `
    ///
    pub fn nativeParentWidget(self: QComboBox) QWidget {
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
    /// ` self: QComboBox `
    ///
    pub fn topLevelWidget(self: QComboBox) QWidget {
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
    /// ` self: QComboBox `
    ///
    pub fn palette(self: QComboBox) QPalette {
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
    /// ` self: QComboBox `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QComboBox, _palette: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QComboBox, _backgroundRole: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QComboBox, _foregroundRole: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn font(self: QComboBox) QFont {
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
    /// ` self: QComboBox `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QComboBox, _font: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn fontMetrics(self: QComboBox) QFontMetrics {
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
    /// ` self: QComboBox `
    ///
    pub fn fontInfo(self: QComboBox) QFontInfo {
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
    /// ` self: QComboBox `
    ///
    pub fn cursor(self: QComboBox) QCursor {
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
    /// ` self: QComboBox `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QComboBox, _cursor: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn unsetCursor(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QComboBox, enable: bool) void {
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
    /// ` self: QComboBox `
    ///
    pub fn hasMouseTracking(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn underMouse(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QComboBox, enable: bool) void {
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
    /// ` self: QComboBox `
    ///
    pub fn hasTabletTracking(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QComboBox, _mask: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QComboBox, _mask: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn mask(self: QComboBox) QRegion {
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
    /// ` self: QComboBox `
    ///
    pub fn clearMask(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QComboBox, target: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QComboBox, painter: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn grab(self: QComboBox) QPixmap {
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
    /// ` self: QComboBox `
    ///
    pub fn graphicsEffect(self: QComboBox) QGraphicsEffect {
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
    /// ` self: QComboBox `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QComboBox, effect: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QComboBox, typeVal: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QComboBox, typeVal: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QComboBox, _windowTitle: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QComboBox, _styleSheet: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.styleSheet: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.windowTitle: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: QComboBox, icon: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn windowIcon(self: QComboBox) QIcon {
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
    /// ` self: QComboBox `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QComboBox, _windowIconText: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.windowIconText: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QComboBox, _windowRole: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.windowRole: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QComboBox, filePath: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.windowFilePath: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QComboBox, level: f64) void {
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
    /// ` self: QComboBox `
    ///
    pub fn windowOpacity(self: QComboBox) f64 {
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
    /// ` self: QComboBox `
    ///
    pub fn isWindowModified(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QComboBox, _toolTip: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.toolTip: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QComboBox, msec: i32) void {
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
    /// ` self: QComboBox `
    ///
    pub fn toolTipDuration(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QComboBox, _statusTip: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.statusTip: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QComboBox, _whatsThis: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.whatsThis: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.accessibleName: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QComboBox, name: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.accessibleDescription: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QComboBox, description: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QComboBox, direction: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn unsetLayoutDirection(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QComboBox, _locale: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn locale(self: QComboBox) QLocale {
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
    /// ` self: QComboBox `
    ///
    pub fn unsetLocale(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn isRightToLeft(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn isLeftToRight(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn setFocus(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn isActiveWindow(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn activateWindow(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn clearFocus(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QComboBox, reason: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QComboBox, policy: i32) void {
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
    /// ` self: QComboBox `
    ///
    pub fn hasFocus(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QComboBox, _focusProxy: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn focusProxy(self: QComboBox) QWidget {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QComboBox, policy: i32) void {
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
    /// ` self: QComboBox `
    ///
    pub fn grabMouse(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QComboBox, param1: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn releaseMouse(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn grabKeyboard(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn releaseKeyboard(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QComboBox, key: anytype) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QComboBox, id: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QComboBox, id: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QComboBox, id: i32) void {
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
    /// ` self: QComboBox `
    ///
    pub fn updatesEnabled(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QComboBox, enable: bool) void {
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
    /// ` self: QComboBox `
    ///
    pub fn graphicsProxyWidget(self: QComboBox) QGraphicsProxyWidget {
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
    /// ` self: QComboBox `
    ///
    pub fn update(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn repaint(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QComboBox, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QComboBox, param1: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QComboBox, param1: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QComboBox, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QComboBox, param1: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QComboBox, param1: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QComboBox, hidden: bool) void {
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
    /// ` self: QComboBox `
    ///
    pub fn show(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn hide(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn showMinimized(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn showMaximized(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn showFullScreen(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn showNormal(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn close(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn raise(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn lower(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QComboBox, param1: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QComboBox, _x: i32, _y: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QComboBox, param1: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QComboBox, w: i32, h: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QComboBox, param1: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QComboBox, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QComboBox, _geometry: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QComboBox, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QComboBox.saveGeometry: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QComboBox, _geometry: []u8) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn adjustSize(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn isVisible(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QComboBox, param1: anytype) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn isHidden(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn isMinimized(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn isMaximized(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn isFullScreen(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QComboBox, state: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QComboBox, state: i32) void {
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
    /// ` self: QComboBox `
    ///
    pub fn sizePolicy(self: QComboBox) QSizePolicy {
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
    /// ` self: QComboBox `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QComboBox, _sizePolicy: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QComboBox, horizontal: i32, vertical: i32) void {
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
    /// ` self: QComboBox `
    ///
    pub fn visibleRegion(self: QComboBox) QRegion {
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
    /// ` self: QComboBox `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: QComboBox, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QComboBox, margins: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn contentsMargins(self: QComboBox) QMargins {
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
    /// ` self: QComboBox `
    ///
    pub fn contentsRect(self: QComboBox) QRect {
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
    /// ` self: QComboBox `
    ///
    pub fn layout(self: QComboBox) QLayout {
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
    /// ` self: QComboBox `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QComboBox, _layout: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn updateGeometry(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QComboBox, _parent: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QComboBox, _parent: anytype, f: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QComboBox, dx: i32, dy: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QComboBox, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: QComboBox `
    ///
    pub fn focusWidget(self: QComboBox) QWidget {
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
    /// ` self: QComboBox `
    ///
    pub fn nextInFocusChain(self: QComboBox) QWidget {
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
    /// ` self: QComboBox `
    ///
    pub fn previousInFocusChain(self: QComboBox) QWidget {
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
    /// ` self: QComboBox `
    ///
    pub fn acceptDrops(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QComboBox, on: bool) void {
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
    /// ` self: QComboBox `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QComboBox, action: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QComboBox, _actions: []QAction) void {
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
    /// ` self: QComboBox `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QComboBox, before: anytype, _actions: []QAction) void {
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
    /// ` self: QComboBox `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QComboBox, before: anytype, action: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QComboBox, action: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QComboBox, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QComboBox.actions: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: QComboBox, text: []const u8) QAction {
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
    /// ` self: QComboBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: QComboBox, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QComboBox `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QComboBox, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QComboBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QComboBox, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QComboBox `
    ///
    pub fn parentWidget(self: QComboBox) QWidget {
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
    /// ` self: QComboBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QComboBox, typeVal: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QComboBox, param1: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QComboBox, typeVal: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QComboBox, _x: i32, _y: i32) QWidget {
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
    /// ` self: QComboBox `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QComboBox, p: anytype) QWidget {
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
    /// ` self: QComboBox `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QComboBox, p: anytype) QWidget {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QComboBox, param1: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QComboBox, param1: i32) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn ensurePolished(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: QComboBox, child: anytype) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn autoFillBackground(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QComboBox, enabled: bool) void {
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
    /// ` self: QComboBox `
    ///
    pub fn backingStore(self: QComboBox) QBackingStore {
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
    /// ` self: QComboBox `
    ///
    pub fn windowHandle(self: QComboBox) QWindow {
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
    /// ` self: QComboBox `
    ///
    pub fn screen(self: QComboBox) QScreen {
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
    /// ` self: QComboBox `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QComboBox, _screen: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QComboBox, title: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QComboBox, callback: *const fn (QComboBox, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QComboBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: QComboBox, icon: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QComboBox, callback: *const fn (QComboBox, QIcon) callconv(.c) void) void {
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
    /// ` self: QComboBox `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QComboBox, iconText: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QComboBox, callback: *const fn (QComboBox, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QComboBox, _pos: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QComboBox, callback: *const fn (QComboBox, QPoint) callconv(.c) void) void {
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
    /// ` self: QComboBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QComboBox, hints: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QComboBox, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QComboBox, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: QComboBox, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QComboBox, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QComboBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: QComboBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QComboBox, rectangle: anytype) QPixmap {
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
    /// ` self: QComboBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QComboBox, typeVal: i32, flags: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QComboBox, key: anytype, context: i32) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QComboBox, id: i32, enable: bool) void {
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
    /// ` self: QComboBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QComboBox, id: i32, enable: bool) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QComboBox, param1: i32, on: bool) void {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QComboBox, param1: i32, on: bool) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QComboBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QComboBox.objectName: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QComboBox, name: []const u8) void {
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
    /// ` self: QComboBox `
    ///
    pub fn isWidgetType(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn isWindowType(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn isQuickItemType(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn signalsBlocked(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QComboBox, b: bool) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn thread(self: QComboBox) QThread {
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
    /// ` self: QComboBox `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QComboBox, _thread: anytype) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QComboBox, interval: i32) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QComboBox, time: i64) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QComboBox, id: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QComboBox, id: i32) void {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QComboBox, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QComboBox.children: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QComboBox, filterObj: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QComboBox, obj: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QComboBox, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QComboBox `
    ///
    pub fn disconnect3(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QComboBox, receiver: anytype) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn dumpObjectTree(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    pub fn dumpObjectInfo(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QComboBox, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QComboBox, name: [:0]const u8) QVariant {
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
    /// ` self: QComboBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QComboBox, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QComboBox.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QComboBox.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QComboBox `
    ///
    pub fn bindingStorage(self: QComboBox) QBindingStorage {
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
    /// ` self: QComboBox `
    ///
    pub fn bindingStorage2(self: QComboBox) QBindingStorage {
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
    /// ` self: QComboBox `
    ///
    pub fn destroyed(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QComboBox, callback: *const fn (QComboBox) callconv(.c) void) void {
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
    /// ` self: QComboBox `
    ///
    pub fn parent(self: QComboBox) QObject {
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
    /// ` self: QComboBox `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QComboBox, classname: [:0]const u8) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn deleteLater(self: QComboBox) void {
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
    /// ` self: QComboBox `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QComboBox, interval: i32, timerType: i32) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QComboBox, time: i64, timerType: i32) i32 {
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
    /// ` self: QComboBox `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QComboBox, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QComboBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QComboBox, signal: [:0]const u8) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QComboBox, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QComboBox, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QComboBox, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QComboBox `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QComboBox, param1: anytype) void {
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
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QComboBox, callback: *const fn (QComboBox, QObject) callconv(.c) void) void {
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
    /// ` self: QComboBox `
    ///
    pub fn paintingActive(self: QComboBox) bool {
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
    /// ` self: QComboBox `
    ///
    pub fn widthMM(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn heightMM(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn logicalDpiX(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn logicalDpiY(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn physicalDpiX(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn physicalDpiY(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn devicePixelRatio(self: QComboBox) f64 {
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
    /// ` self: QComboBox `
    ///
    pub fn devicePixelRatioF(self: QComboBox) f64 {
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
    /// ` self: QComboBox `
    ///
    pub fn colorCount(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn depth(self: QComboBox) i32 {
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
    /// ` self: QComboBox `
    ///
    pub fn devType(self: QComboBox) i32 {
        return qtc.QComboBox_DevType(@ptrCast(self.ptr));
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
    /// ` self: QComboBox `
    ///
    pub fn superDevType(self: QComboBox) i32 {
        return qtc.QComboBox_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QComboBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QComboBox_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QComboBox, visible: bool) void {
        qtc.QComboBox_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QComboBox `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: QComboBox, visible: bool) void {
        qtc.QComboBox_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QComboBox, callback: *const fn (QComboBox, bool) callconv(.c) void) void {
        qtc.QComboBox_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QComboBox, param1: i32) i32 {
        return qtc.QComboBox_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QComboBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QComboBox, param1: i32) i32 {
        return qtc.QComboBox_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QComboBox, callback: *const fn (QComboBox, i32) callconv(.c) i32) void {
        qtc.QComboBox_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn hasHeightForWidth(self: QComboBox) bool {
        return qtc.QComboBox_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QComboBox `
    ///
    pub fn superHasHeightForWidth(self: QComboBox) bool {
        return qtc.QComboBox_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QComboBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QComboBox_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn paintEngine(self: QComboBox) QPaintEngine {
        return .{ .ptr = qtc.QComboBox_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QComboBox `
    ///
    pub fn superPaintEngine(self: QComboBox) QPaintEngine {
        return .{ .ptr = qtc.QComboBox_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QComboBox, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QComboBox_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QComboBox_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QComboBox_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QComboBox, callback: *const fn (QComboBox, QMouseEvent) callconv(.c) void) void {
        qtc.QComboBox_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QComboBox_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QComboBox_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QComboBox, callback: *const fn (QComboBox, QMouseEvent) callconv(.c) void) void {
        qtc.QComboBox_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QComboBox_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QComboBox_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QComboBox, callback: *const fn (QComboBox, QEnterEvent) callconv(.c) void) void {
        qtc.QComboBox_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QComboBox_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QComboBox_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QComboBox, callback: *const fn (QComboBox, QEvent) callconv(.c) void) void {
        qtc.QComboBox_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QComboBox_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QComboBox_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QComboBox, callback: *const fn (QComboBox, QMoveEvent) callconv(.c) void) void {
        qtc.QComboBox_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QComboBox_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QComboBox_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QComboBox, callback: *const fn (QComboBox, QCloseEvent) callconv(.c) void) void {
        qtc.QComboBox_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QComboBox_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QComboBox_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QComboBox, callback: *const fn (QComboBox, QTabletEvent) callconv(.c) void) void {
        qtc.QComboBox_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QComboBox_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QComboBox_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QComboBox, callback: *const fn (QComboBox, QActionEvent) callconv(.c) void) void {
        qtc.QComboBox_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QComboBox_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QComboBox_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QComboBox, callback: *const fn (QComboBox, QDragEnterEvent) callconv(.c) void) void {
        qtc.QComboBox_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QComboBox_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QComboBox_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QComboBox, callback: *const fn (QComboBox, QDragMoveEvent) callconv(.c) void) void {
        qtc.QComboBox_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QComboBox_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QComboBox_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QComboBox, callback: *const fn (QComboBox, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QComboBox_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QComboBox_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QComboBox_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QComboBox, callback: *const fn (QComboBox, QDropEvent) callconv(.c) void) void {
        qtc.QComboBox_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QComboBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QComboBox_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QComboBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QComboBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QComboBox_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QComboBox, callback: *const fn (QComboBox, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QComboBox_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QComboBox, param1: i32) i32 {
        return qtc.QComboBox_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QComboBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QComboBox, param1: i32) i32 {
        return qtc.QComboBox_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QComboBox, callback: *const fn (QComboBox, i32) callconv(.c) i32) void {
        qtc.QComboBox_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QComboBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QComboBox_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QComboBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QComboBox_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QComboBox, callback: *const fn (QComboBox, QPainter) callconv(.c) void) void {
        qtc.QComboBox_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QComboBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QComboBox_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QComboBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QComboBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QComboBox_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QComboBox, callback: *const fn (QComboBox, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QComboBox_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn sharedPainter(self: QComboBox) QPainter {
        return .{ .ptr = qtc.QComboBox_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QComboBox `
    ///
    pub fn superSharedPainter(self: QComboBox) QPainter {
        return .{ .ptr = qtc.QComboBox_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QComboBox, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QComboBox_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QComboBox, next: bool) bool {
        return qtc.QComboBox_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QComboBox `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: QComboBox, next: bool) bool {
        return qtc.QComboBox_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: QComboBox, callback: *const fn (QComboBox, bool) callconv(.c) bool) void {
        qtc.QComboBox_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QComboBox, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QComboBox_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QComboBox `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QComboBox, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QComboBox_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QComboBox, callback: *const fn (QComboBox, QObject, QEvent) callconv(.c) bool) void {
        qtc.QComboBox_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QComboBox_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QComboBox_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QComboBox, callback: *const fn (QComboBox, QTimerEvent) callconv(.c) void) void {
        qtc.QComboBox_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QComboBox_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QComboBox_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QComboBox, callback: *const fn (QComboBox, QChildEvent) callconv(.c) void) void {
        qtc.QComboBox_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QComboBox_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QComboBox, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QComboBox_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QComboBox, callback: *const fn (QComboBox, QEvent) callconv(.c) void) void {
        qtc.QComboBox_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QComboBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QComboBox_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QComboBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QComboBox_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QComboBox, callback: *const fn (QComboBox, QMetaMethod) callconv(.c) void) void {
        qtc.QComboBox_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QComboBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QComboBox_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QComboBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QComboBox_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QComboBox, callback: *const fn (QComboBox, QMetaMethod) callconv(.c) void) void {
        qtc.QComboBox_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn updateMicroFocus(self: QComboBox) void {
        qtc.QComboBox_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QComboBox `
    ///
    pub fn superUpdateMicroFocus(self: QComboBox) void {
        qtc.QComboBox_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QComboBox, callback: *const fn () callconv(.c) void) void {
        qtc.QComboBox_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn create(self: QComboBox) void {
        qtc.QComboBox_Create(@ptrCast(self.ptr));
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
    /// ` self: QComboBox `
    ///
    pub fn superCreate(self: QComboBox) void {
        qtc.QComboBox_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QComboBox, callback: *const fn () callconv(.c) void) void {
        qtc.QComboBox_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn destroy(self: QComboBox) void {
        qtc.QComboBox_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QComboBox `
    ///
    pub fn superDestroy(self: QComboBox) void {
        qtc.QComboBox_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QComboBox, callback: *const fn () callconv(.c) void) void {
        qtc.QComboBox_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn focusNextChild(self: QComboBox) bool {
        return qtc.QComboBox_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QComboBox `
    ///
    pub fn superFocusNextChild(self: QComboBox) bool {
        return qtc.QComboBox_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QComboBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QComboBox_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn focusPreviousChild(self: QComboBox) bool {
        return qtc.QComboBox_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QComboBox `
    ///
    pub fn superFocusPreviousChild(self: QComboBox) bool {
        return qtc.QComboBox_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QComboBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QComboBox_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn sender(self: QComboBox) QObject {
        return .{ .ptr = qtc.QComboBox_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QComboBox `
    ///
    pub fn superSender(self: QComboBox) QObject {
        return .{ .ptr = qtc.QComboBox_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QComboBox, callback: *const fn () callconv(.c) QObject) void {
        qtc.QComboBox_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    pub fn senderSignalIndex(self: QComboBox) i32 {
        return qtc.QComboBox_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QComboBox `
    ///
    pub fn superSenderSignalIndex(self: QComboBox) i32 {
        return qtc.QComboBox_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QComboBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QComboBox_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QComboBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QComboBox_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QComboBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QComboBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QComboBox_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QComboBox, callback: *const fn (QComboBox, [*:0]const u8) callconv(.c) i32) void {
        qtc.QComboBox_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QComboBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QComboBox_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QComboBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QComboBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QComboBox_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QComboBox, callback: *const fn (QComboBox, QMetaMethod) callconv(.c) bool) void {
        qtc.QComboBox_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QComboBox, metricA: i32, metricB: i32) f64 {
        return qtc.QComboBox_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QComboBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QComboBox, metricA: i32, metricB: i32) f64 {
        return qtc.QComboBox_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QComboBox`
    ///
    /// ` callback: *const fn (self: QComboBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QComboBox, callback: *const fn (QComboBox, i32, i32) callconv(.c) f64) void {
        qtc.QComboBox_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QComboBox `
    ///
    /// ` callback: *const fn (self: QComboBox, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QComboBox, callback: *const fn (QComboBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#dtor.QComboBox)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QComboBox `
    ///
    pub fn delete(self: QComboBox) void {
        qtc.QComboBox_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#public-types)
pub const enums = struct {
    pub const InsertPolicy = enum(i32) {
        pub const NoInsert: i32 = 0;
        pub const InsertAtTop: i32 = 1;
        pub const InsertAtCurrent: i32 = 2;
        pub const InsertAtBottom: i32 = 3;
        pub const InsertAfterCurrent: i32 = 4;
        pub const InsertBeforeCurrent: i32 = 5;
        pub const InsertAlphabetically: i32 = 6;
    };

    pub const SizeAdjustPolicy = enum(i32) {
        pub const AdjustToContents: i32 = 0;
        pub const AdjustToContentsOnFirstShow: i32 = 1;
        pub const AdjustToMinimumContentsLengthWithIcon: i32 = 2;
    };
};
