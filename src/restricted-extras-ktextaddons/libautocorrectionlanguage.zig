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
const qcombobox_enums = @import("../libqcombobox.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
pub const TextAutoCorrectionWidgets__AutoCorrectionLanguage = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextAutoCorrectionWidgets__AutoCorrectionLanguage,

    pub const _is_TextAutoCorrectionWidgets__AutoCorrectionLanguage = {};
    pub const _is_QComboBox = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new TextAutoCorrectionWidgets::AutoCorrectionLanguage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) TextAutoCorrectionWidgets__AutoCorrectionLanguage {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_new(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn Language(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Language(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.Language: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Language2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Language2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.Language2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` language: []const u8 `
    ///
    pub fn SetLanguage(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetLanguage(@ptrCast(self.ptr), language_str);
    }

    /// Inherited from QComboBox
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MaxVisibleItems(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QComboBox_MaxVisibleItems(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` maxItems: i32 `
    ///
    pub fn SetMaxVisibleItems(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, maxItems: i32) void {
        qtc.QComboBox_SetMaxVisibleItems(@ptrCast(self.ptr), @bitCast(maxItems));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Count(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QComboBox_Count(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` max: i32 `
    ///
    pub fn SetMaxCount(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, max: i32) void {
        qtc.QComboBox_SetMaxCount(@ptrCast(self.ptr), @bitCast(max));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MaxCount(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QComboBox_MaxCount(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn DuplicatesEnabled(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QComboBox_DuplicatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDuplicatesEnabled(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, enable: bool) void {
        qtc.QComboBox_SetDuplicatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, frame: bool) void {
        qtc.QComboBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn HasFrame(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QComboBox_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` text: []const u8 `
    ///
    pub fn FindText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, text: []const u8) i32 {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` data: QVariant `
    ///
    pub fn FindData(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, data: anytype) i32 {
        comptime _ = @TypeOf(data)._is_QVariant;
        return qtc.QComboBox_FindData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` qcombobox_enums.InsertPolicy `
    ///
    pub fn InsertPolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QComboBox_InsertPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` policy: qcombobox_enums.InsertPolicy `
    ///
    pub fn SetInsertPolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, policy: i32) void {
        qtc.QComboBox_SetInsertPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` qcombobox_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QComboBox_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` policy: qcombobox_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, policy: i32) void {
        qtc.QComboBox_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MinimumContentsLength(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QComboBox_MinimumContentsLength(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` characters: i32 `
    ///
    pub fn SetMinimumContentsLength(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, characters: i32) void {
        qtc.QComboBox_SetMinimumContentsLength(@ptrCast(self.ptr), @bitCast(characters));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IconSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.QComboBox_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` size: QSize `
    ///
    pub fn SetIconSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QComboBox_SetIconSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` placeholderText: []const u8 `
    ///
    pub fn SetPlaceholderText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, placeholderText: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceholderText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QComboBox_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsEditable(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QComboBox_IsEditable(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` editable: bool `
    ///
    pub fn SetEditable(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, editable: bool) void {
        qtc.QComboBox_SetEditable(@ptrCast(self.ptr), editable);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SetLineEdit(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QComboBox_SetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn LineEdit(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QLineEdit {
        return .{ .ptr = qtc.QComboBox_LineEdit(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` v: QValidator `
    ///
    pub fn SetValidator(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, v: anytype) void {
        comptime _ = @TypeOf(v)._is_QValidator;
        qtc.QComboBox_SetValidator(@ptrCast(self.ptr), @ptrCast(v.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Validator(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QValidator {
        return .{ .ptr = qtc.QComboBox_Validator(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` c: QCompleter `
    ///
    pub fn SetCompleter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QCompleter;
        qtc.QComboBox_SetCompleter(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Completer(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QCompleter {
        return .{ .ptr = qtc.QComboBox_Completer(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ItemDelegate(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QAbstractItemDelegate {
        return .{ .ptr = qtc.QComboBox_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegate(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QComboBox_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Model(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QAbstractItemModel {
        return .{ .ptr = qtc.QComboBox_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn RootModelIndex(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QModelIndex {
        return .{ .ptr = qtc.QComboBox_RootModelIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetRootModelIndex(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QComboBox_SetRootModelIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ModelColumn(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QComboBox_ModelColumn(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` visibleColumn: i32 `
    ///
    pub fn SetModelColumn(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, visibleColumn: i32) void {
        qtc.QComboBox_SetModelColumn(@ptrCast(self.ptr), @bitCast(visibleColumn));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn CurrentIndex(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QComboBox_CurrentIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QComboBox_CurrentText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.CurrentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn CurrentData(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QVariant {
        return .{ .ptr = qtc.QComboBox_CurrentData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QComboBox_ItemText(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.ItemText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemIcon(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) QIcon {
        return .{ .ptr = qtc.QComboBox_ItemIcon(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemData(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_ItemData(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddItem(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, text: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddItem2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, icon: anytype, text: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` texts: []const []const u8 `
    ///
    pub fn AddItems(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator, texts: []const []const u8) void {
        const texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.AddItems: Memory allocation failed");
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertItem(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32, text: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertItem2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32, icon: anytype, text: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    /// ` texts: []const []const u8 `
    ///
    pub fn InsertItems(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator, index: i32, texts: []const []const u8) void {
        const texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.InsertItems: Memory allocation failed");
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    pub fn InsertSeparator(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) void {
        qtc.QComboBox_InsertSeparator(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveItem(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) void {
        qtc.QComboBox_RemoveItem(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetItemText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32, text: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetItemIcon(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QComboBox_SetItemIcon(@ptrCast(self.ptr), @bitCast(index), @ptrCast(icon.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetItemData(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QComboBox_SetItemData(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn View(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QAbstractItemView {
        return .{ .ptr = qtc.QComboBox_View(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` itemView: QAbstractItemView `
    ///
    pub fn SetView(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, itemView: anytype) void {
        comptime _ = @TypeOf(itemView)._is_QAbstractItemView;
        qtc.QComboBox_SetView(@ptrCast(self.ptr), @ptrCast(itemView.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn InputMethodQuery2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QComboBox_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Clear(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QComboBox_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ClearEditText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QComboBox_ClearEditText(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetEditText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, text: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentIndex(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) void {
        qtc.QComboBox_SetCurrentIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetCurrentText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, text: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn EditTextChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEditTextChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_EditTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    pub fn Activated(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) void {
        qtc.QComboBox_Activated(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) callconv(.c) void `
    ///
    pub fn OnActivated(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextActivated(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextActivated(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    pub fn Highlighted(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) void {
        qtc.QComboBox_Highlighted(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) callconv(.c) void `
    ///
    pub fn OnHighlighted(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Highlighted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextHighlighted(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextHighlighted(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextHighlighted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    pub fn CurrentIndexChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) void {
        qtc.QComboBox_CurrentIndexChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32) callconv(.c) void `
    ///
    pub fn OnCurrentIndexChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentIndexChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn CurrentTextChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCurrentTextChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn FindText2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, text: []const u8, flags: i32) i32 {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` data: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn FindData2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, data: anytype, role: i32) i32 {
        comptime _ = @TypeOf(data)._is_QVariant;
        return qtc.QComboBox_FindData2(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(role));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` data: QVariant `
    ///
    /// ` role: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn FindData3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, data: anytype, role: i32, flags: i32) i32 {
        comptime _ = @TypeOf(data)._is_QVariant;
        return qtc.QComboBox_FindData3(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(role), @bitCast(flags));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` role: i32 `
    ///
    pub fn CurrentData1(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, role: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_CurrentData1(@ptrCast(self.ptr), @bitCast(role)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    /// ` role: i32 `
    ///
    pub fn ItemData2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QComboBox_ItemData2(@ptrCast(self.ptr), @bitCast(index), @bitCast(role)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn AddItem22(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, text: []const u8, userData: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn AddItem3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, icon: anytype, text: []const u8, userData: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn InsertItem3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32, text: []const u8, userData: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` userData: QVariant `
    ///
    pub fn InsertItem4(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32, icon: anytype, text: []const u8, userData: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetItemData3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, index: i32, value: anytype, role: i32) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QComboBox_SetItemData3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr), @bitCast(role));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn WinId(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn CreateWinId(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn InternalWinId(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn EffectiveWinId(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Style(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsTopLevel(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsWindow(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsModal(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsEnabled(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn FrameGeometry(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Geometry(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn NormalGeometry(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn X(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Y(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Pos(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn FrameSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Size(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Width(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Height(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Rect(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ChildrenRect(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ChildrenRegion(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MinimumSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MaximumSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MinimumWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MinimumHeight(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MaximumWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MaximumHeight(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SizeIncrement(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn BaseSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Window(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn NativeParentWidget(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn TopLevelWidget(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Palette(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Font(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn FontMetrics(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn FontInfo(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Cursor(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn UnsetCursor(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn HasMouseTracking(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn UnderMouse(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn HasTabletTracking(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Mask(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ClearMask(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Grab(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn GraphicsEffect(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, windowTitle: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, styleSheet: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn WindowIcon(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, windowIconText: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, windowRole: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, filePath: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn WindowOpacity(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsWindowModified(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, toolTip: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ToolTipDuration(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, statusTip: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, whatsThis: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, name: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, description: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn UnsetLayoutDirection(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Locale(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn UnsetLocale(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsRightToLeft(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsLeftToRight(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SetFocus(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsActiveWindow(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ActivateWindow(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ClearFocus(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn HasFocus(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn FocusProxy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn GrabMouse(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ReleaseMouse(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn GrabKeyboard(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ReleaseKeyboard(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, id: i32) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn UpdatesEnabled(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn GraphicsProxyWidget(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Update(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Repaint(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Show(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Hide(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ShowMinimized(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ShowMaximized(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ShowFullScreen(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ShowNormal(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Close(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Raise(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Lower(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, geometry: []u8) bool {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn AdjustSize(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsVisible(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsHidden(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsMinimized(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsMaximized(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsFullScreen(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SizePolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn VisibleRegion(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ContentsMargins(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ContentsRect(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Layout(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn UpdateGeometry(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn FocusWidget(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn NextInFocusChain(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn PreviousInFocusChain(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn AcceptDrops(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, actions: []QAction) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, before: anytype, actions: []QAction) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, before: anytype, action: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.Actions: Memory allocation failed");
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, text: []const u8) QAction {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ParentWidget(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn EnsurePolished(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn AutoFillBackground(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn BackingStore(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn WindowHandle(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Screen(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, screen: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, title: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, iconText: []const u8) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32, on: bool) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsWidgetType(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsWindowType(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn IsQuickItemType(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SignalsBlocked(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Thread(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.Children: Memory allocation failed");
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, obj: anytype) void {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Disconnect3(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, receiver: anytype) bool {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn DumpObjectTree(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn DumpObjectInfo(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textautocorrectionwidgets__autocorrectionlanguage.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn BindingStorage(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn BindingStorage2(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Destroyed(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Parent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn DeleteLater(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, time: i64, timerType: i32) i32 {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn PaintingActive(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn WidthMM(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn HeightMM(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn LogicalDpiX(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn LogicalDpiY(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn PhysicalDpiX(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn PhysicalDpiY(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn DevicePixelRatio(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn DevicePixelRatioF(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ColorCount(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Depth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
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

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#metaObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MetaObject(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QMetaObject {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#metaObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperMetaObject(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QMetaObject {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#metaObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SuperSetModel(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnSetModel(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QAbstractItemModel) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SizeHint(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperSizeHint(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn MinimumSizeHint(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperMinimumSizeHint(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QSize {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn ShowPopup(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowPopup(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperShowPopup(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperShowPopup(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnShowPopup(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnShowPopup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn HidePopup(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_HidePopup(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperHidePopup(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHidePopup(@ptrCast(self.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnHidePopup(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHidePopup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QEvent) callconv(.c) bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) QVariant {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) QVariant {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, i32) callconv(.c) QVariant) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusInEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QFocusEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QFocusEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QEvent `
    ///
    pub fn ChangeEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperChangeEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn ResizeEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QResizeEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn PaintEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QPaintEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QShowEvent `
    ///
    pub fn ShowEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QShowEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QShowEvent `
    ///
    pub fn SuperShowEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QShowEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QShowEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QHideEvent `
    ///
    pub fn HideEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QHideEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_HideEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QHideEvent `
    ///
    pub fn SuperHideEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QHideEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QHideEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MousePressEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QMouseEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QMouseEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QKeyEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QKeyEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn WheelEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QWheelEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, e: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` option: QStyleOptionComboBox `
    ///
    pub fn InitStyleOption(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComboBox;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` option: QStyleOptionComboBox `
    ///
    pub fn SuperInitStyleOption(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComboBox;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QComboBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, option: QStyleOptionComboBox) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QStyleOptionComboBox) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn DevType(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperDevType(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) i32) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, visible: bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, visible: bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, bool) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, i32) callconv(.c) i32) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn HasHeightForWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperHasHeightForWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn PaintEngine(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QPaintEngine {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperPaintEngine(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QPaintEngine {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QMouseEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QMouseEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QEnterEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QMoveEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QCloseEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QTabletEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QActionEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QDropEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: i32) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, i32) callconv(.c) i32) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QPainter) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SharedPainter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QPainter {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperSharedPainter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QPainter {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, next: bool) bool {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, next: bool) bool {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, bool) callconv(.c) bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QTimerEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QChildEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QEvent) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QMetaMethod) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QMetaMethod) callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn UpdateMicroFocus(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperUpdateMicroFocus(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Create(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Create(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperCreate(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Destroy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperDestroy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) void) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn FocusNextChild(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperFocusNextChild(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn FocusPreviousChild(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperFocusPreviousChild(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) bool {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Sender(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QObject {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperSender(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) QObject {
        return .{ .ptr = qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SenderSignalIndex(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn SuperSenderSignalIndex(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) i32 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn () callconv(.c) i32) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, QMetaMethod) callconv(.c) bool) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, metricA: i32, metricB: i32) f64 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, metricA: i32, metricB: i32) f64 {
        return qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage`
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, i32, i32) callconv(.c) f64) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage, callback: *const fn (TextAutoCorrectionWidgets__AutoCorrectionLanguage, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextAutoCorrectionWidgets__AutoCorrectionLanguage `
    ///
    pub fn Delete(self: TextAutoCorrectionWidgets__AutoCorrectionLanguage) void {
        qtc.TextAutoCorrectionWidgets__AutoCorrectionLanguage_Delete(@ptrCast(self.ptr));
    }
};
