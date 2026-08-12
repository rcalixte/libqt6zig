const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KConfigGroup = @import("libqt6").KConfigGroup;
const KSyntaxHighlighting__Theme = @import("libqt6").KSyntaxHighlighting__Theme;
const KTextEditor__AbstractAnnotationItemDelegate = @import("libqt6").KTextEditor__AbstractAnnotationItemDelegate;
const KTextEditor__AnnotationModel = @import("libqt6").KTextEditor__AnnotationModel;
const KTextEditor__AttributeBlock = @import("libqt6").KTextEditor__AttributeBlock;
const KTextEditor__CodeCompletionModel = @import("libqt6").KTextEditor__CodeCompletionModel;
const KTextEditor__Cursor = @import("libqt6").KTextEditor__Cursor;
const KTextEditor__Document = @import("libqt6").KTextEditor__Document;
const KTextEditor__InlineNoteProvider = @import("libqt6").KTextEditor__InlineNoteProvider;
const KTextEditor__MainWindow = @import("libqt6").KTextEditor__MainWindow;
const KTextEditor__Range = @import("libqt6").KTextEditor__Range;
const KTextEditor__TextHintProvider = @import("libqt6").KTextEditor__TextHintProvider;
const KXMLGUIBuilder = @import("libqt6").KXMLGUIBuilder;
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
const KXMLGUIClient__StateChange = @import("libqt6").KXMLGUIClient__StateChange;
const KXMLGUIFactory = @import("libqt6").KXMLGUIFactory;
const QAction = @import("libqt6").QAction;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QCursor = @import("libqt6").QCursor;
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QFontInfo = @import("libqt6").QFontInfo;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsProxyWidget = @import("libqt6").QGraphicsProxyWidget;
const QIcon = @import("libqt6").QIcon;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMenu = @import("libqt6").QMenu;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QScreen = @import("libqt6").QScreen;
const QScrollBar = @import("libqt6").QScrollBar;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const codecompletionmodel_enums = @import("libcodecompletionmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");
const view_enums = enums;
const Set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html)
pub const KTextEditor__View = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__View,

    pub const _is_KTextEditor__View = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};
    pub const _is_KXMLGUIClient = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn metaObject(self: KTextEditor__View) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__View_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KTextEditor__View, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__View_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KTextEditor__View, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__View_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn document(self: KTextEditor__View) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__View_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `viewMode` instead
    ///
    pub const ViewMode = viewMode;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` view_enums.ViewMode `
    ///
    pub fn viewMode(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_ViewMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `viewModeHuman` instead
    ///
    pub const ViewModeHuman = viewModeHuman;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewModeHuman)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn viewModeHuman(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__View_ViewModeHuman(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.viewModeHuman: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setViewInputMode` instead
    ///
    pub const SetViewInputMode = setViewInputMode;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setViewInputMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` inputMode: view_enums.InputMode `
    ///
    pub fn setViewInputMode(self: KTextEditor__View, inputMode: i32) void {
        qtc.KTextEditor__View_SetViewInputMode(@ptrCast(self.ptr), @bitCast(inputMode));
    }

    /// ### DEPRECATED: Use `viewInputMode` instead
    ///
    pub const ViewInputMode = viewInputMode;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` view_enums.InputMode `
    ///
    pub fn viewInputMode(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_ViewInputMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `viewInputModeHuman` instead
    ///
    pub const ViewInputModeHuman = viewInputModeHuman;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputModeHuman)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn viewInputModeHuman(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__View_ViewInputModeHuman(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.viewInputModeHuman: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mainWindow` instead
    ///
    pub const MainWindow = mainWindow;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#mainWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn mainWindow(self: KTextEditor__View) KTextEditor__MainWindow {
        return .{ .ptr = qtc.KTextEditor__View_MainWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `focusIn` instead
    ///
    pub const FocusIn = focusIn;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn focusIn(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_FocusIn(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onFocusIn` instead
    ///
    pub const OnFocusIn = onFocusIn;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusIn)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn onFocusIn(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_FocusIn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOut` instead
    ///
    pub const FocusOut = focusOut;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn focusOut(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_FocusOut(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOut` instead
    ///
    pub const OnFocusOut = onFocusOut;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusOut)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn onFocusOut(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_FocusOut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewModeChanged` instead
    ///
    pub const ViewModeChanged = viewModeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` mode: view_enums.ViewMode `
    ///
    pub fn viewModeChanged(self: KTextEditor__View, view: anytype, mode: i32) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_ViewModeChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onViewModeChanged` instead
    ///
    pub const OnViewModeChanged = onViewModeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, mode: view_enums.ViewMode) callconv(.c) void `
    ///
    pub fn onViewModeChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, i32) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_ViewModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewInputModeChanged` instead
    ///
    pub const ViewInputModeChanged = viewInputModeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` mode: view_enums.InputMode `
    ///
    pub fn viewInputModeChanged(self: KTextEditor__View, view: anytype, mode: i32) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_ViewInputModeChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onViewInputModeChanged` instead
    ///
    pub const OnViewInputModeChanged = onViewInputModeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, mode: view_enums.InputMode) callconv(.c) void `
    ///
    pub fn onViewInputModeChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, i32) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_ViewInputModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textInserted` instead
    ///
    pub const TextInserted = textInserted;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#textInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn textInserted(self: KTextEditor__View, view: anytype, position: anytype, text: []const u8) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__View_TextInserted(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(position.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onTextInserted` instead
    ///
    pub const OnTextInserted = onTextInserted;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#textInserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, position: KTextEditor__Cursor, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextInserted(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, KTextEditor__Cursor, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_TextInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setContextMenu` instead
    ///
    pub const SetContextMenu = setContextMenu;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` menu: QMenu `
    ///
    pub fn setContextMenu(self: KTextEditor__View, menu: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KTextEditor__View_SetContextMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr));
    }

    /// ### DEPRECATED: Use `contextMenu` instead
    ///
    pub const ContextMenu = contextMenu;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#contextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn contextMenu(self: KTextEditor__View) QMenu {
        return .{ .ptr = qtc.KTextEditor__View_ContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultContextMenu` instead
    ///
    pub const DefaultContextMenu = defaultContextMenu;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#defaultContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` menu: QMenu `
    ///
    pub fn defaultContextMenu(self: KTextEditor__View, menu: anytype) QMenu {
        comptime _ = @TypeOf(menu)._is_QMenu;
        return .{ .ptr = qtc.KTextEditor__View_DefaultContextMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr)) };
    }

    /// ### DEPRECATED: Use `contextMenuAboutToShow` instead
    ///
    pub const ContextMenuAboutToShow = contextMenuAboutToShow;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#contextMenuAboutToShow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` menu: QMenu `
    ///
    pub fn contextMenuAboutToShow(self: KTextEditor__View, view: anytype, menu: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KTextEditor__View_ContextMenuAboutToShow(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(menu.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuAboutToShow` instead
    ///
    pub const OnContextMenuAboutToShow = onContextMenuAboutToShow;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#contextMenuAboutToShow)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, menu: QMenu) callconv(.c) void `
    ///
    pub fn onContextMenuAboutToShow(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, QMenu) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_ContextMenuAboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn setCursorPosition(self: KTextEditor__View, position: anytype) bool {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__View_SetCursorPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `setCursorPositions` instead
    ///
    pub const SetCursorPositions = setCursorPositions;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setCursorPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` positions: []KTextEditor__Cursor `
    ///
    pub fn setCursorPositions(self: KTextEditor__View, positions: []KTextEditor__Cursor) void {
        const positions_list = qtc.libqt_list{
            .len = positions.len,
            .data = @ptrCast(positions.ptr),
        };
        qtc.KTextEditor__View_SetCursorPositions(@ptrCast(self.ptr), positions_list);
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn cursorPosition(self: KTextEditor__View) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__View_CursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorPositions` instead
    ///
    pub const CursorPositions = cursorPositions;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn cursorPositions(self: KTextEditor__View, allocator: std.mem.Allocator) []KTextEditor__Cursor {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_CursorPositions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Cursor, _arr.len) catch @panic("KTextEditor__View.cursorPositions: Memory allocation failed");
        const _data_val: [*]QtC.KTextEditor__Cursor = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `cursorPositionVirtual` instead
    ///
    pub const CursorPositionVirtual = cursorPositionVirtual;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionVirtual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn cursorPositionVirtual(self: KTextEditor__View) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__View_CursorPositionVirtual(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorToCoordinate` instead
    ///
    pub const CursorToCoordinate = cursorToCoordinate;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorToCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` _cursor: KTextEditor__Cursor `
    ///
    pub fn cursorToCoordinate(self: KTextEditor__View, _cursor: anytype) QPoint {
        comptime _ = @TypeOf(_cursor)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__View_CursorToCoordinate(@ptrCast(self.ptr), @ptrCast(_cursor.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorPositionCoordinates` instead
    ///
    pub const CursorPositionCoordinates = cursorPositionCoordinates;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionCoordinates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn cursorPositionCoordinates(self: KTextEditor__View) QPoint {
        return .{ .ptr = qtc.KTextEditor__View_CursorPositionCoordinates(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `coordinatesToCursor` instead
    ///
    pub const CoordinatesToCursor = coordinatesToCursor;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#coordinatesToCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` coord: QPoint `
    ///
    pub fn coordinatesToCursor(self: KTextEditor__View, coord: anytype) KTextEditor__Cursor {
        comptime _ = @TypeOf(coord)._is_QPoint;
        return .{ .ptr = qtc.KTextEditor__View_CoordinatesToCursor(@ptrCast(self.ptr), @ptrCast(coord.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorPositionChanged` instead
    ///
    pub const CursorPositionChanged = cursorPositionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` newPosition: KTextEditor__Cursor `
    ///
    pub fn cursorPositionChanged(self: KTextEditor__View, view: anytype, newPosition: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(newPosition)._is_KTextEditor__Cursor;
        qtc.KTextEditor__View_CursorPositionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(newPosition.ptr));
    }

    /// ### DEPRECATED: Use `onCursorPositionChanged` instead
    ///
    pub const OnCursorPositionChanged = onCursorPositionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, newPosition: KTextEditor__Cursor) callconv(.c) void `
    ///
    pub fn onCursorPositionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, KTextEditor__Cursor) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalScrollPositionChanged` instead
    ///
    pub const VerticalScrollPositionChanged = verticalScrollPositionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#verticalScrollPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` newPos: KTextEditor__Cursor `
    ///
    pub fn verticalScrollPositionChanged(self: KTextEditor__View, view: anytype, newPos: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(newPos)._is_KTextEditor__Cursor;
        qtc.KTextEditor__View_VerticalScrollPositionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(newPos.ptr));
    }

    /// ### DEPRECATED: Use `onVerticalScrollPositionChanged` instead
    ///
    pub const OnVerticalScrollPositionChanged = onVerticalScrollPositionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#verticalScrollPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, newPos: KTextEditor__Cursor) callconv(.c) void `
    ///
    pub fn onVerticalScrollPositionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, KTextEditor__Cursor) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_VerticalScrollPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalScrollPositionChanged` instead
    ///
    pub const HorizontalScrollPositionChanged = horizontalScrollPositionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#horizontalScrollPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn horizontalScrollPositionChanged(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_HorizontalScrollPositionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onHorizontalScrollPositionChanged` instead
    ///
    pub const OnHorizontalScrollPositionChanged = onHorizontalScrollPositionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#horizontalScrollPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn onHorizontalScrollPositionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_HorizontalScrollPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseTrackingEnabled` instead
    ///
    pub const MouseTrackingEnabled = mouseTrackingEnabled;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#mouseTrackingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn mouseTrackingEnabled(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_MouseTrackingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMouseTrackingEnabled` instead
    ///
    pub const SetMouseTrackingEnabled = setMouseTrackingEnabled;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setMouseTrackingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTrackingEnabled(self: KTextEditor__View, enable: bool) bool {
        return qtc.KTextEditor__View_SetMouseTrackingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `mousePositionChanged` instead
    ///
    pub const MousePositionChanged = mousePositionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#mousePositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` newPosition: KTextEditor__Cursor `
    ///
    pub fn mousePositionChanged(self: KTextEditor__View, view: anytype, newPosition: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(newPosition)._is_KTextEditor__Cursor;
        qtc.KTextEditor__View_MousePositionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(newPosition.ptr));
    }

    /// ### DEPRECATED: Use `onMousePositionChanged` instead
    ///
    pub const OnMousePositionChanged = onMousePositionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#mousePositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, newPosition: KTextEditor__Cursor) callconv(.c) void `
    ///
    pub fn onMousePositionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, KTextEditor__Cursor) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_MousePositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSelection` instead
    ///
    pub const SetSelection = setSelection;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn setSelection(self: KTextEditor__View, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__View_SetSelection(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `setSelections` instead
    ///
    pub const SetSelections = setSelections;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` ranges: []KTextEditor__Range `
    ///
    pub fn setSelections(self: KTextEditor__View, ranges: []KTextEditor__Range) void {
        const ranges_list = qtc.libqt_list{
            .len = ranges.len,
            .data = @ptrCast(ranges.ptr),
        };
        qtc.KTextEditor__View_SetSelections(@ptrCast(self.ptr), ranges_list);
    }

    /// ### DEPRECATED: Use `selection` instead
    ///
    pub const Selection = selection;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn selection(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_Selection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectionRange` instead
    ///
    pub const SelectionRange = selectionRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn selectionRange(self: KTextEditor__View) KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__View_SelectionRange(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectionRanges` instead
    ///
    pub const SelectionRanges = selectionRanges;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectionRanges(self: KTextEditor__View, allocator: std.mem.Allocator) []KTextEditor__Range {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_SelectionRanges(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Range, _arr.len) catch @panic("KTextEditor__View.selectionRanges: Memory allocation failed");
        const _data_val: [*]QtC.KTextEditor__Range = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectionText` instead
    ///
    pub const SelectionText = selectionText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectionText(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__View_SelectionText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.selectionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `removeSelection` instead
    ///
    pub const RemoveSelection = removeSelection;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#removeSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn removeSelection(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_RemoveSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeSelectionText` instead
    ///
    pub const RemoveSelectionText = removeSelectionText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#removeSelectionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn removeSelectionText(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_RemoveSelectionText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBlockSelection` instead
    ///
    pub const SetBlockSelection = setBlockSelection;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setBlockSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` on: bool `
    ///
    pub fn setBlockSelection(self: KTextEditor__View, on: bool) bool {
        return qtc.KTextEditor__View_SetBlockSelection(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `blockSelection` instead
    ///
    pub const BlockSelection = blockSelection;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#blockSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn blockSelection(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_BlockSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn selectionChanged(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_SelectionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertText` instead
    ///
    pub const InsertText = insertText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` text: []const u8 `
    ///
    pub fn insertText(self: KTextEditor__View, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__View_InsertText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `insertTemplate` instead
    ///
    pub const InsertTemplate = insertTemplate;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#insertTemplate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` insertPosition: KTextEditor__Cursor `
    ///
    /// ` templateString: []const u8 `
    ///
    pub fn insertTemplate(self: KTextEditor__View, insertPosition: anytype, templateString: []const u8) bool {
        comptime _ = @TypeOf(insertPosition)._is_KTextEditor__Cursor;
        const templateString_str = qtc.libqt_string{
            .len = templateString.len,
            .data = templateString.ptr,
        };
        return qtc.KTextEditor__View_InsertTemplate(@ptrCast(self.ptr), @ptrCast(insertPosition.ptr), templateString_str);
    }

    /// ### DEPRECATED: Use `setScrollPosition` instead
    ///
    pub const SetScrollPosition = setScrollPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setScrollPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` _cursor: KTextEditor__Cursor `
    ///
    pub fn setScrollPosition(self: KTextEditor__View, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_KTextEditor__Cursor;
        qtc.KTextEditor__View_SetScrollPosition(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalScrollPosition` instead
    ///
    pub const SetHorizontalScrollPosition = setHorizontalScrollPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setHorizontalScrollPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` _x: i32 `
    ///
    pub fn setHorizontalScrollPosition(self: KTextEditor__View, _x: i32) void {
        qtc.KTextEditor__View_SetHorizontalScrollPosition(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `maxScrollPosition` instead
    ///
    pub const MaxScrollPosition = maxScrollPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#maxScrollPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn maxScrollPosition(self: KTextEditor__View) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__View_MaxScrollPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstDisplayedLine` instead
    ///
    pub const FirstDisplayedLine = firstDisplayedLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#firstDisplayedLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn firstDisplayedLine(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_FirstDisplayedLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastDisplayedLine` instead
    ///
    pub const LastDisplayedLine = lastDisplayedLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#lastDisplayedLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn lastDisplayedLine(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_LastDisplayedLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textAreaRect` instead
    ///
    pub const TextAreaRect = textAreaRect;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#textAreaRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn textAreaRect(self: KTextEditor__View) QRect {
        return .{ .ptr = qtc.KTextEditor__View_TextAreaRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `verticalScrollBar` instead
    ///
    pub const VerticalScrollBar = verticalScrollBar;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn verticalScrollBar(self: KTextEditor__View) QScrollBar {
        return .{ .ptr = qtc.KTextEditor__View_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `horizontalScrollBar` instead
    ///
    pub const HorizontalScrollBar = horizontalScrollBar;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn horizontalScrollBar(self: KTextEditor__View) QScrollBar {
        return .{ .ptr = qtc.KTextEditor__View_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `displayRangeChanged` instead
    ///
    pub const DisplayRangeChanged = displayRangeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#displayRangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn displayRangeChanged(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_DisplayRangeChanged(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onDisplayRangeChanged` instead
    ///
    pub const OnDisplayRangeChanged = onDisplayRangeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#displayRangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn onDisplayRangeChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_DisplayRangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `print` instead
    ///
    pub const Print = print;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn print(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_Print(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `printPreview` instead
    ///
    pub const PrintPreview = printPreview;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#printPreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn printPreview(self: KTextEditor__View) void {
        qtc.KTextEditor__View_PrintPreview(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStatusBarEnabled` instead
    ///
    pub const IsStatusBarEnabled = isStatusBarEnabled;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#isStatusBarEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn isStatusBarEnabled(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_IsStatusBarEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatusBarEnabled` instead
    ///
    pub const SetStatusBarEnabled = setStatusBarEnabled;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setStatusBarEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` enable: bool `
    ///
    pub fn setStatusBarEnabled(self: KTextEditor__View, enable: bool) void {
        qtc.KTextEditor__View_SetStatusBarEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `statusBarEnabledChanged` instead
    ///
    pub const StatusBarEnabledChanged = statusBarEnabledChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#statusBarEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` enabled: bool `
    ///
    pub fn statusBarEnabledChanged(self: KTextEditor__View, view: anytype, enabled: bool) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_StatusBarEnabledChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onStatusBarEnabledChanged` instead
    ///
    pub const OnStatusBarEnabledChanged = onStatusBarEnabledChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#statusBarEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, enabled: bool) callconv(.c) void `
    ///
    pub fn onStatusBarEnabledChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, bool) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_StatusBarEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readSessionConfig` instead
    ///
    pub const ReadSessionConfig = readSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#readSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` flags: Set_constu8 `
    ///
    pub fn readSessionConfig(self: KTextEditor__View, allocator: std.mem.Allocator, config: anytype, flags: Set_constu8) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        const flags_count = flags.count();
        const flags_arr = allocator.alloc(qtc.libqt_string, flags_count) catch @panic("KTextEditor__View.readSessionConfig: Memory allocation failed");
        defer allocator.free(flags_arr);
        var flags_it = flags.keyIterator();
        var flags_i: usize = 0;
        while (flags_it.next()) |flags_item| : (flags_i += 1) {
            flags_arr[flags_i] = .{
                .len = flags_item.*.len,
                .data = flags_item.*.ptr,
            };
        }
        const flags_set = qtc.libqt_list{
            .len = flags_count,
            .data = flags_arr.ptr,
        };
        qtc.KTextEditor__View_ReadSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr), flags_set);
    }

    /// ### DEPRECATED: Use `writeSessionConfig` instead
    ///
    pub const WriteSessionConfig = writeSessionConfig;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#writeSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` flags: Set_constu8 `
    ///
    pub fn writeSessionConfig(self: KTextEditor__View, allocator: std.mem.Allocator, config: anytype, flags: Set_constu8) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        const flags_count = flags.count();
        const flags_arr = allocator.alloc(qtc.libqt_string, flags_count) catch @panic("KTextEditor__View.writeSessionConfig: Memory allocation failed");
        defer allocator.free(flags_arr);
        var flags_it = flags.keyIterator();
        var flags_i: usize = 0;
        while (flags_it.next()) |flags_item| : (flags_i += 1) {
            flags_arr[flags_i] = .{
                .len = flags_item.*.len,
                .data = flags_item.*.ptr,
            };
        }
        const flags_set = qtc.libqt_list{
            .len = flags_count,
            .data = flags_arr.ptr,
        };
        qtc.KTextEditor__View_WriteSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr), flags_set);
    }

    /// ### DEPRECATED: Use `lineAttributes` instead
    ///
    pub const LineAttributes = lineAttributes;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#lineAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` line: i32 `
    ///
    pub fn lineAttributes(self: KTextEditor__View, allocator: std.mem.Allocator, line: i32) []KTextEditor__AttributeBlock {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_LineAttributes(@ptrCast(self.ptr), @bitCast(line));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__AttributeBlock, _arr.len) catch @panic("KTextEditor__View.lineAttributes: Memory allocation failed");
        const _data_val: [*]QtC.KTextEditor__AttributeBlock = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `configChanged` instead
    ///
    pub const ConfigChanged = configChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn configChanged(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_ConfigChanged(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onConfigChanged` instead
    ///
    pub const OnConfigChanged = onConfigChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn onConfigChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `configKeys` instead
    ///
    pub const ConfigKeys = configKeys;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#configKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn configKeys(self: KTextEditor__View, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_ConfigKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KTextEditor__View.configKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__View.configKeys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `configValue` instead
    ///
    pub const ConfigValue = configValue;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` key: []const u8 `
    ///
    pub fn configValue(self: KTextEditor__View, key: []const u8) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__View_ConfigValue(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `setConfigValue` instead
    ///
    pub const SetConfigValue = setConfigValue;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setConfigValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setConfigValue(self: KTextEditor__View, key: []const u8, value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KTextEditor__View_SetConfigValue(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAnnotationModel` instead
    ///
    pub const SetAnnotationModel = setAnnotationModel;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` model: KTextEditor__AnnotationModel `
    ///
    pub fn setAnnotationModel(self: KTextEditor__View, model: anytype) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        qtc.KTextEditor__View_SetAnnotationModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### DEPRECATED: Use `annotationModel` instead
    ///
    pub const AnnotationModel = annotationModel;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn annotationModel(self: KTextEditor__View) KTextEditor__AnnotationModel {
        return .{ .ptr = qtc.KTextEditor__View_AnnotationModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationBorderVisible` instead
    ///
    pub const SetAnnotationBorderVisible = setAnnotationBorderVisible;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationBorderVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` visible: bool `
    ///
    pub fn setAnnotationBorderVisible(self: KTextEditor__View, visible: bool) void {
        qtc.KTextEditor__View_SetAnnotationBorderVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isAnnotationBorderVisible` instead
    ///
    pub const IsAnnotationBorderVisible = isAnnotationBorderVisible;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#isAnnotationBorderVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn isAnnotationBorderVisible(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_IsAnnotationBorderVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnnotationItemDelegate` instead
    ///
    pub const SetAnnotationItemDelegate = setAnnotationItemDelegate;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` delegate: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn setAnnotationItemDelegate(self: KTextEditor__View, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KTextEditor__AbstractAnnotationItemDelegate;
        qtc.KTextEditor__View_SetAnnotationItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `annotationItemDelegate` instead
    ///
    pub const AnnotationItemDelegate = annotationItemDelegate;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn annotationItemDelegate(self: KTextEditor__View) KTextEditor__AbstractAnnotationItemDelegate {
        return .{ .ptr = qtc.KTextEditor__View_AnnotationItemDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationUniformItemSizes` instead
    ///
    pub const SetAnnotationUniformItemSizes = setAnnotationUniformItemSizes;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationUniformItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` uniformItemSizes: bool `
    ///
    pub fn setAnnotationUniformItemSizes(self: KTextEditor__View, uniformItemSizes: bool) void {
        qtc.KTextEditor__View_SetAnnotationUniformItemSizes(@ptrCast(self.ptr), uniformItemSizes);
    }

    /// ### DEPRECATED: Use `uniformAnnotationItemSizes` instead
    ///
    pub const UniformAnnotationItemSizes = uniformAnnotationItemSizes;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#uniformAnnotationItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn uniformAnnotationItemSizes(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_UniformAnnotationItemSizes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `annotationContextMenuAboutToShow` instead
    ///
    pub const AnnotationContextMenuAboutToShow = annotationContextMenuAboutToShow;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationContextMenuAboutToShow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` menu: QMenu `
    ///
    /// ` line: i32 `
    ///
    pub fn annotationContextMenuAboutToShow(self: KTextEditor__View, view: anytype, menu: anytype, line: i32) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KTextEditor__View_AnnotationContextMenuAboutToShow(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(menu.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `onAnnotationContextMenuAboutToShow` instead
    ///
    pub const OnAnnotationContextMenuAboutToShow = onAnnotationContextMenuAboutToShow;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationContextMenuAboutToShow)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, menu: QMenu, line: i32) callconv(.c) void `
    ///
    pub fn onAnnotationContextMenuAboutToShow(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, QMenu, i32) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_AnnotationContextMenuAboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `annotationActivated` instead
    ///
    pub const AnnotationActivated = annotationActivated;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` line: i32 `
    ///
    pub fn annotationActivated(self: KTextEditor__View, view: anytype, line: i32) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_AnnotationActivated(@ptrCast(self.ptr), @ptrCast(view.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `onAnnotationActivated` instead
    ///
    pub const OnAnnotationActivated = onAnnotationActivated;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, line: i32) callconv(.c) void `
    ///
    pub fn onAnnotationActivated(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, i32) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_AnnotationActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `annotationBorderVisibilityChanged` instead
    ///
    pub const AnnotationBorderVisibilityChanged = annotationBorderVisibilityChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationBorderVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` visible: bool `
    ///
    pub fn annotationBorderVisibilityChanged(self: KTextEditor__View, view: anytype, visible: bool) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_AnnotationBorderVisibilityChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), visible);
    }

    /// ### DEPRECATED: Use `onAnnotationBorderVisibilityChanged` instead
    ///
    pub const OnAnnotationBorderVisibilityChanged = onAnnotationBorderVisibilityChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationBorderVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, visible: bool) callconv(.c) void `
    ///
    pub fn onAnnotationBorderVisibilityChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, bool) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_AnnotationBorderVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `registerInlineNoteProvider` instead
    ///
    pub const RegisterInlineNoteProvider = registerInlineNoteProvider;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#registerInlineNoteProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` provider: KTextEditor__InlineNoteProvider `
    ///
    pub fn registerInlineNoteProvider(self: KTextEditor__View, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KTextEditor__InlineNoteProvider;
        qtc.KTextEditor__View_RegisterInlineNoteProvider(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### DEPRECATED: Use `unregisterInlineNoteProvider` instead
    ///
    pub const UnregisterInlineNoteProvider = unregisterInlineNoteProvider;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#unregisterInlineNoteProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` provider: KTextEditor__InlineNoteProvider `
    ///
    pub fn unregisterInlineNoteProvider(self: KTextEditor__View, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KTextEditor__InlineNoteProvider;
        qtc.KTextEditor__View_UnregisterInlineNoteProvider(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### DEPRECATED: Use `registerTextHintProvider` instead
    ///
    pub const RegisterTextHintProvider = registerTextHintProvider;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#registerTextHintProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` provider: KTextEditor__TextHintProvider `
    ///
    pub fn registerTextHintProvider(self: KTextEditor__View, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KTextEditor__TextHintProvider;
        qtc.KTextEditor__View_RegisterTextHintProvider(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### DEPRECATED: Use `unregisterTextHintProvider` instead
    ///
    pub const UnregisterTextHintProvider = unregisterTextHintProvider;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#unregisterTextHintProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` provider: KTextEditor__TextHintProvider `
    ///
    pub fn unregisterTextHintProvider(self: KTextEditor__View, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KTextEditor__TextHintProvider;
        qtc.KTextEditor__View_UnregisterTextHintProvider(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### DEPRECATED: Use `setTextHintDelay` instead
    ///
    pub const SetTextHintDelay = setTextHintDelay;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setTextHintDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` delay: i32 `
    ///
    pub fn setTextHintDelay(self: KTextEditor__View, delay: i32) void {
        qtc.KTextEditor__View_SetTextHintDelay(@ptrCast(self.ptr), @bitCast(delay));
    }

    /// ### DEPRECATED: Use `textHintDelay` instead
    ///
    pub const TextHintDelay = textHintDelay;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#textHintDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn textHintDelay(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_TextHintDelay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCompletionActive` instead
    ///
    pub const IsCompletionActive = isCompletionActive;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#isCompletionActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn isCompletionActive(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_IsCompletionActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startCompletion` instead
    ///
    pub const StartCompletion = startCompletion;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#startCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` word: KTextEditor__Range `
    ///
    /// ` model: KTextEditor__CodeCompletionModel `
    ///
    pub fn startCompletion(self: KTextEditor__View, word: anytype, model: anytype) void {
        comptime _ = @TypeOf(word)._is_KTextEditor__Range;
        comptime _ = @TypeOf(model)._is_KTextEditor__CodeCompletionModel;
        qtc.KTextEditor__View_StartCompletion(@ptrCast(self.ptr), @ptrCast(word.ptr), @ptrCast(model.ptr));
    }

    /// ### DEPRECATED: Use `abortCompletion` instead
    ///
    pub const AbortCompletion = abortCompletion;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#abortCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn abortCompletion(self: KTextEditor__View) void {
        qtc.KTextEditor__View_AbortCompletion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `forceCompletion` instead
    ///
    pub const ForceCompletion = forceCompletion;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#forceCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn forceCompletion(self: KTextEditor__View) void {
        qtc.KTextEditor__View_ForceCompletion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerCompletionModel` instead
    ///
    pub const RegisterCompletionModel = registerCompletionModel;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#registerCompletionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` model: KTextEditor__CodeCompletionModel `
    ///
    pub fn registerCompletionModel(self: KTextEditor__View, model: anytype) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__CodeCompletionModel;
        qtc.KTextEditor__View_RegisterCompletionModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### DEPRECATED: Use `unregisterCompletionModel` instead
    ///
    pub const UnregisterCompletionModel = unregisterCompletionModel;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#unregisterCompletionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` model: KTextEditor__CodeCompletionModel `
    ///
    pub fn unregisterCompletionModel(self: KTextEditor__View, model: anytype) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__CodeCompletionModel;
        qtc.KTextEditor__View_UnregisterCompletionModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### DEPRECATED: Use `isAutomaticInvocationEnabled` instead
    ///
    pub const IsAutomaticInvocationEnabled = isAutomaticInvocationEnabled;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#isAutomaticInvocationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn isAutomaticInvocationEnabled(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_IsAutomaticInvocationEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutomaticInvocationEnabled` instead
    ///
    pub const SetAutomaticInvocationEnabled = setAutomaticInvocationEnabled;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAutomaticInvocationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutomaticInvocationEnabled(self: KTextEditor__View, enabled: bool) void {
        qtc.KTextEditor__View_SetAutomaticInvocationEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `startCompletion2` instead
    ///
    pub const StartCompletion2 = startCompletion2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#startCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` word: KTextEditor__Range `
    ///
    /// ` models: []KTextEditor__CodeCompletionModel `
    ///
    /// ` invocationType: codecompletionmodel_enums.InvocationType `
    ///
    pub fn startCompletion2(self: KTextEditor__View, word: anytype, models: []KTextEditor__CodeCompletionModel, invocationType: i32) void {
        comptime _ = @TypeOf(word)._is_KTextEditor__Range;
        const models_list = qtc.libqt_list{
            .len = models.len,
            .data = @ptrCast(models.ptr),
        };
        qtc.KTextEditor__View_StartCompletion2(@ptrCast(self.ptr), @ptrCast(word.ptr), models_list, @bitCast(invocationType));
    }

    /// ### DEPRECATED: Use `codeCompletionModels` instead
    ///
    pub const CodeCompletionModels = codeCompletionModels;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#codeCompletionModels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn codeCompletionModels(self: KTextEditor__View, allocator: std.mem.Allocator) []KTextEditor__CodeCompletionModel {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_CodeCompletionModels(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__CodeCompletionModel, _arr.len) catch @panic("KTextEditor__View.codeCompletionModels: Memory allocation failed");
        const _data_val: [*]QtC.KTextEditor__CodeCompletionModel = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `theme` instead
    ///
    pub const Theme = theme;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn theme(self: KTextEditor__View) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KTextEditor__View_Theme(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `insertTemplate3` instead
    ///
    pub const InsertTemplate3 = insertTemplate3;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#insertTemplate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` insertPosition: KTextEditor__Cursor `
    ///
    /// ` templateString: []const u8 `
    ///
    /// ` script: []const u8 `
    ///
    pub fn insertTemplate3(self: KTextEditor__View, insertPosition: anytype, templateString: []const u8, script: []const u8) bool {
        comptime _ = @TypeOf(insertPosition)._is_KTextEditor__Cursor;
        const templateString_str = qtc.libqt_string{
            .len = templateString.len,
            .data = templateString.ptr,
        };
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        return qtc.KTextEditor__View_InsertTemplate3(@ptrCast(self.ptr), @ptrCast(insertPosition.ptr), templateString_str, script_str);
    }

    /// ### DEPRECATED: Use `firstDisplayedLine1` instead
    ///
    pub const FirstDisplayedLine1 = firstDisplayedLine1;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#firstDisplayedLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` lineType: view_enums.LineType `
    ///
    pub fn firstDisplayedLine1(self: KTextEditor__View, lineType: i32) i32 {
        return qtc.KTextEditor__View_FirstDisplayedLine1(@ptrCast(self.ptr), @bitCast(lineType));
    }

    /// ### DEPRECATED: Use `lastDisplayedLine1` instead
    ///
    pub const LastDisplayedLine1 = lastDisplayedLine1;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#lastDisplayedLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` lineType: view_enums.LineType `
    ///
    pub fn lastDisplayedLine1(self: KTextEditor__View, lineType: i32) i32 {
        return qtc.KTextEditor__View_LastDisplayedLine1(@ptrCast(self.ptr), @bitCast(lineType));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn devType(self: KTextEditor__View) i32 {
        return qtc.QWidget_DevType(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__View `
    ///
    pub fn winId(self: KTextEditor__View) usize {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn createWinId(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn internalWinId(self: KTextEditor__View) usize {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn effectiveWinId(self: KTextEditor__View) usize {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn style(self: KTextEditor__View) QStyle {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: KTextEditor__View, _style: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isTopLevel(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isWindow(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isModal(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: KTextEditor__View, _windowModality: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isEnabled(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: KTextEditor__View, param1: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: KTextEditor__View, enabled: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: KTextEditor__View, disabled: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: KTextEditor__View, windowModified: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn frameGeometry(self: KTextEditor__View) QRect {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn geometry(self: KTextEditor__View) QRect {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn normalGeometry(self: KTextEditor__View) QRect {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn x(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn y(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn pos(self: KTextEditor__View) QPoint {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn frameSize(self: KTextEditor__View) QSize {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn size(self: KTextEditor__View) QSize {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn width(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn height(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn rect(self: KTextEditor__View) QRect {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn childrenRect(self: KTextEditor__View) QRect {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn childrenRegion(self: KTextEditor__View) QRegion {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn minimumSize(self: KTextEditor__View) QSize {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn maximumSize(self: KTextEditor__View) QSize {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn minimumWidth(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn minimumHeight(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn maximumWidth(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn maximumHeight(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: KTextEditor__View, _minimumSize: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: KTextEditor__View, minw: i32, minh: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: KTextEditor__View, _maximumSize: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: KTextEditor__View, maxw: i32, maxh: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: KTextEditor__View, minw: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: KTextEditor__View, minh: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: KTextEditor__View, maxw: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: KTextEditor__View, maxh: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn sizeIncrement(self: KTextEditor__View) QSize {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: KTextEditor__View, _sizeIncrement: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: KTextEditor__View, w: i32, h: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn baseSize(self: KTextEditor__View) QSize {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: KTextEditor__View, _baseSize: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: KTextEditor__View, basew: i32, baseh: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: KTextEditor__View, fixedSize: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: KTextEditor__View, w: i32, h: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: KTextEditor__View, w: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: KTextEditor__View, h: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: KTextEditor__View, param1: anytype) QPointF {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: KTextEditor__View, param1: anytype) QPoint {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: KTextEditor__View, param1: anytype) QPointF {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: KTextEditor__View, param1: anytype) QPoint {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: KTextEditor__View, param1: anytype) QPointF {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: KTextEditor__View, param1: anytype) QPoint {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: KTextEditor__View, param1: anytype) QPointF {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: KTextEditor__View, param1: anytype) QPoint {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: KTextEditor__View, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: KTextEditor__View, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: KTextEditor__View, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: KTextEditor__View, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn window(self: KTextEditor__View) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn nativeParentWidget(self: KTextEditor__View) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn topLevelWidget(self: KTextEditor__View) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn palette(self: KTextEditor__View) QPalette {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: KTextEditor__View, _palette: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: KTextEditor__View, _backgroundRole: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: KTextEditor__View, _foregroundRole: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn font(self: KTextEditor__View) QFont {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: KTextEditor__View, _font: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn fontMetrics(self: KTextEditor__View) QFontMetrics {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn fontInfo(self: KTextEditor__View) QFontInfo {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn cursor(self: KTextEditor__View) QCursor {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: KTextEditor__View, _cursor: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn unsetCursor(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: KTextEditor__View, enable: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn hasMouseTracking(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn underMouse(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: KTextEditor__View, enable: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn hasTabletTracking(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: KTextEditor__View, _mask: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: KTextEditor__View, _mask: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn mask(self: KTextEditor__View) QRegion {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn clearMask(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: KTextEditor__View, target: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: KTextEditor__View, painter: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn grab(self: KTextEditor__View) QPixmap {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn graphicsEffect(self: KTextEditor__View) QGraphicsEffect {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: KTextEditor__View, effect: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: KTextEditor__View, typeVal: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: KTextEditor__View, typeVal: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: KTextEditor__View, _windowTitle: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: KTextEditor__View, _styleSheet: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.styleSheet: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.windowTitle: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: KTextEditor__View, icon: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn windowIcon(self: KTextEditor__View) QIcon {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: KTextEditor__View, _windowIconText: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.windowIconText: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: KTextEditor__View, _windowRole: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.windowRole: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: KTextEditor__View, filePath: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.windowFilePath: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: KTextEditor__View, level: f64) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn windowOpacity(self: KTextEditor__View) f64 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isWindowModified(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: KTextEditor__View, _toolTip: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.toolTip: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: KTextEditor__View, msec: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn toolTipDuration(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: KTextEditor__View, _statusTip: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.statusTip: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: KTextEditor__View, _whatsThis: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.whatsThis: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.accessibleName: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: KTextEditor__View, name: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.accessibleDescription: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: KTextEditor__View, description: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: KTextEditor__View, direction: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn unsetLayoutDirection(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: KTextEditor__View, _locale: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn locale(self: KTextEditor__View) QLocale {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn unsetLocale(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isRightToLeft(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isLeftToRight(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn setFocus(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isActiveWindow(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn activateWindow(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn clearFocus(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: KTextEditor__View, reason: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: KTextEditor__View, policy: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn hasFocus(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: KTextEditor__View, _focusProxy: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn focusProxy(self: KTextEditor__View) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: KTextEditor__View, policy: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn grabMouse(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: KTextEditor__View, param1: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn releaseMouse(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn grabKeyboard(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn releaseKeyboard(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: KTextEditor__View, key: anytype) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: KTextEditor__View, id: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: KTextEditor__View, id: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: KTextEditor__View, id: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn updatesEnabled(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: KTextEditor__View, enable: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn graphicsProxyWidget(self: KTextEditor__View) QGraphicsProxyWidget {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn update(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn repaint(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: KTextEditor__View, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: KTextEditor__View, param1: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: KTextEditor__View, param1: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: KTextEditor__View, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: KTextEditor__View, param1: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: KTextEditor__View, visible: bool) void {
        qtc.QWidget_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KTextEditor__View `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: KTextEditor__View, hidden: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn show(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn hide(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn showMinimized(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn showMaximized(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn showFullScreen(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn showNormal(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn close(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn raise(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn lower(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: KTextEditor__View, param1: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: KTextEditor__View, _x: i32, _y: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: KTextEditor__View, param1: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: KTextEditor__View, w: i32, h: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: KTextEditor__View, param1: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: KTextEditor__View, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: KTextEditor__View, _geometry: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: KTextEditor__View, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KTextEditor__View.saveGeometry: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: KTextEditor__View, _geometry: []u8) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn adjustSize(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isVisible(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: KTextEditor__View, param1: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isHidden(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isMinimized(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isMaximized(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isFullScreen(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: KTextEditor__View, state: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: KTextEditor__View, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn sizeHint(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn minimumSizeHint(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KTextEditor__View `
    ///
    pub fn sizePolicy(self: KTextEditor__View) QSizePolicy {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: KTextEditor__View, _sizePolicy: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: KTextEditor__View, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: KTextEditor__View, param1: i32) i32 {
        return qtc.QWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn hasHeightForWidth(self: KTextEditor__View) bool {
        return qtc.QWidget_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__View `
    ///
    pub fn visibleRegion(self: KTextEditor__View) QRegion {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: KTextEditor__View, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: KTextEditor__View, margins: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn contentsMargins(self: KTextEditor__View) QMargins {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn contentsRect(self: KTextEditor__View) QRect {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn layout(self: KTextEditor__View) QLayout {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: KTextEditor__View, _layout: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn updateGeometry(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: KTextEditor__View, _parent: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: KTextEditor__View, _parent: anytype, f: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: KTextEditor__View, dx: i32, dy: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: KTextEditor__View, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn focusWidget(self: KTextEditor__View) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn nextInFocusChain(self: KTextEditor__View) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn previousInFocusChain(self: KTextEditor__View) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn acceptDrops(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: KTextEditor__View, on: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _action: QAction `
    ///
    pub fn addAction(self: KTextEditor__View, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(_action.ptr));
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: KTextEditor__View, _actions: []QAction) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: KTextEditor__View, before: anytype, _actions: []QAction) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` before: QAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn insertAction(self: KTextEditor__View, before: anytype, _action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.QWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(_action.ptr));
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _action: QAction `
    ///
    pub fn removeAction(self: KTextEditor__View, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(_action.ptr));
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KTextEditor__View, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KTextEditor__View.actions: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: KTextEditor__View, text: []const u8) QAction {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: KTextEditor__View, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: KTextEditor__View, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: KTextEditor__View, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn parentWidget(self: KTextEditor__View) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: KTextEditor__View, typeVal: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: KTextEditor__View, param1: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: KTextEditor__View, typeVal: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: KTextEditor__View, _x: i32, _y: i32) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: KTextEditor__View, p: anytype) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: KTextEditor__View, p: anytype) QWidget {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: KTextEditor__View, param1: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: KTextEditor__View, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn paintEngine(self: KTextEditor__View) QPaintEngine {
        return .{ .ptr = qtc.QWidget_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KTextEditor__View `
    ///
    pub fn ensurePolished(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: KTextEditor__View, child: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn autoFillBackground(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: KTextEditor__View, enabled: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn backingStore(self: KTextEditor__View) QBackingStore {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn windowHandle(self: KTextEditor__View) QWindow {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn screen(self: KTextEditor__View) QScreen {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: KTextEditor__View, _screen: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: KTextEditor__View, title: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: KTextEditor__View, icon: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, QIcon) callconv(.c) void) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: KTextEditor__View, iconText: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: KTextEditor__View, _pos: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: KTextEditor__View, callback: *const fn (KTextEditor__View, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: KTextEditor__View, param1: i32) QVariant {
        return .{ .ptr = qtc.QWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: KTextEditor__View `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: KTextEditor__View, hints: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: KTextEditor__View, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: KTextEditor__View, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: KTextEditor__View, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: KTextEditor__View, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: KTextEditor__View, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: KTextEditor__View, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: KTextEditor__View, rectangle: anytype) QPixmap {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: KTextEditor__View, typeVal: i32, flags: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: KTextEditor__View, key: anytype, context: i32) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: KTextEditor__View, id: i32, enable: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: KTextEditor__View, id: i32, enable: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: KTextEditor__View, param1: i32, on: bool) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: KTextEditor__View, param1: i32, on: bool) void {
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

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KTextEditor__View, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.objectName: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KTextEditor__View, name: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isWidgetType(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isWindowType(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn isQuickItemType(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn signalsBlocked(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KTextEditor__View, b: bool) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn thread(self: KTextEditor__View) QThread {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KTextEditor__View, _thread: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KTextEditor__View, interval: i32) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KTextEditor__View, time: i64) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KTextEditor__View, id: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KTextEditor__View, id: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KTextEditor__View, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KTextEditor__View.children: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KTextEditor__View, filterObj: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KTextEditor__View, obj: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KTextEditor__View, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn disconnect3(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KTextEditor__View, receiver: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn dumpObjectTree(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn dumpObjectInfo(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KTextEditor__View, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KTextEditor__View, name: [:0]const u8) QVariant {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KTextEditor__View, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KTextEditor__View.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__View.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    pub fn bindingStorage(self: KTextEditor__View) QBindingStorage {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn bindingStorage2(self: KTextEditor__View) QBindingStorage {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn destroyed(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KTextEditor__View, callback: *const fn (KTextEditor__View) callconv(.c) void) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn parent(self: KTextEditor__View) QObject {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KTextEditor__View, classname: [:0]const u8) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn deleteLater(self: KTextEditor__View) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KTextEditor__View, interval: i32, timerType: i32) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KTextEditor__View, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KTextEditor__View, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KTextEditor__View, signal: [:0]const u8) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KTextEditor__View, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KTextEditor__View, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KTextEditor__View, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KTextEditor__View, param1: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KTextEditor__View, callback: *const fn (KTextEditor__View, QObject) callconv(.c) void) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn paintingActive(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn widthMM(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn heightMM(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn logicalDpiX(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn logicalDpiY(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn physicalDpiX(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn physicalDpiY(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn devicePixelRatio(self: KTextEditor__View) f64 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn devicePixelRatioF(self: KTextEditor__View) f64 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn colorCount(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn depth(self: KTextEditor__View) i32 {
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
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn encodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` name: []const u8 `
    ///
    pub fn action(self: KTextEditor__View, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `action2` instead
    ///
    pub const Action2 = action2;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` element: QDomElement `
    ///
    pub fn action2(self: KTextEditor__View, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIClient_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `actionCollection` instead
    ///
    pub const ActionCollection = actionCollection;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn actionCollection(self: KTextEditor__View) KActionCollection {
        return .{ .ptr = qtc.KXMLGUIClient_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `componentName` instead
    ///
    pub const ComponentName = componentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn componentName(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `domDocument` instead
    ///
    pub const DomDocument = domDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn domDocument(self: KTextEditor__View) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `xmlFile` instead
    ///
    pub const XmlFile = xmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn xmlFile(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localXMLFile` instead
    ///
    pub const LocalXMLFile = localXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localXMLFile(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setXMLGUIBuildDocument` instead
    ///
    pub const SetXMLGUIBuildDocument = setXMLGUIBuildDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn setXMLGUIBuildDocument(self: KTextEditor__View, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// ### DEPRECATED: Use `xmlguiBuildDocument` instead
    ///
    pub const XmlguiBuildDocument = xmlguiBuildDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn xmlguiBuildDocument(self: KTextEditor__View) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFactory` instead
    ///
    pub const SetFactory = setFactory;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` _factory: KXMLGUIFactory `
    ///
    pub fn setFactory(self: KTextEditor__View, _factory: anytype) void {
        comptime _ = @TypeOf(_factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(_factory.ptr));
    }

    /// ### DEPRECATED: Use `factory` instead
    ///
    pub const Factory = factory;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn factory(self: KTextEditor__View) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentClient` instead
    ///
    pub const ParentClient = parentClient;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn parentClient(self: KTextEditor__View) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insertChildClient` instead
    ///
    pub const InsertChildClient = insertChildClient;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn insertChildClient(self: KTextEditor__View, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `removeChildClient` instead
    ///
    pub const RemoveChildClient = removeChildClient;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn removeChildClient(self: KTextEditor__View, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `childClients` instead
    ///
    pub const ChildClients = childClients;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childClients(self: KTextEditor__View, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("KTextEditor__View.childClients: Memory allocation failed");
        const _data_val: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setClientBuilder` instead
    ///
    pub const SetClientBuilder = setClientBuilder;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn setClientBuilder(self: KTextEditor__View, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// ### DEPRECATED: Use `clientBuilder` instead
    ///
    pub const ClientBuilder = clientBuilder;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn clientBuilder(self: KTextEditor__View) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reloadXML` instead
    ///
    pub const ReloadXML = reloadXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn reloadXML(self: KTextEditor__View) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `plugActionList` instead
    ///
    pub const PlugActionList = plugActionList;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn plugActionList(self: KTextEditor__View, name: []const u8, actionList: []QAction) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIClient_PlugActionList(@ptrCast(self.ptr), name_str, actionList_list);
    }

    /// ### DEPRECATED: Use `unplugActionList` instead
    ///
    pub const UnplugActionList = unplugActionList;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` name: []const u8 `
    ///
    pub fn unplugActionList(self: KTextEditor__View, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `findMostRecentXMLFile` instead
    ///
    pub const FindMostRecentXMLFile = findMostRecentXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    /// ` doc: []const u8 `
    ///
    pub fn findMostRecentXMLFile(allocator: std.mem.Allocator, files: []const []const u8, doc: []const u8) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("KTextEditor__View.findMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |str_item, i|
            files_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        const doc_str = qtc.libqt_string{
            .len = doc.len,
            .data = doc.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindMostRecentXMLFile(files_list, doc_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.findMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addStateActionEnabled` instead
    ///
    pub const AddStateActionEnabled = addStateActionEnabled;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionEnabled(self: KTextEditor__View, state: []const u8, _action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = _action.len,
            .data = _action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### DEPRECATED: Use `addStateActionDisabled` instead
    ///
    pub const AddStateActionDisabled = addStateActionDisabled;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionDisabled(self: KTextEditor__View, state: []const u8, _action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = _action.len,
            .data = _action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### DEPRECATED: Use `getActionsToChangeForState` instead
    ///
    pub const GetActionsToChangeForState = getActionsToChangeForState;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` state: []const u8 `
    ///
    pub fn getActionsToChangeForState(self: KTextEditor__View, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

    /// ### DEPRECATED: Use `beginXMLPlug` instead
    ///
    pub const BeginXMLPlug = beginXMLPlug;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    pub fn beginXMLPlug(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `endXMLPlug` instead
    ///
    pub const EndXMLPlug = endXMLPlug;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn endXMLPlug(self: KTextEditor__View) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prepareXMLUnplug` instead
    ///
    pub const PrepareXMLUnplug = prepareXMLUnplug;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    pub fn prepareXMLUnplug(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `replaceXMLFile` instead
    ///
    pub const ReplaceXMLFile = replaceXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn replaceXMLFile(self: KTextEditor__View, xmlfile: []const u8, localxmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str);
    }

    /// ### DEPRECATED: Use `findVersionNumber` instead
    ///
    pub const FindVersionNumber = findVersionNumber;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xml: []const u8 `
    ///
    pub fn findVersionNumber(allocator: std.mem.Allocator, xml: []const u8) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__View.findVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `replaceXMLFile3` instead
    ///
    pub const ReplaceXMLFile3 = replaceXMLFile3;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn replaceXMLFile3(self: KTextEditor__View, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile3(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str, merge);
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
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn delete(self: KTextEditor__View) void {
        qtc.KTextEditor__View_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/view.html#public-types)
pub const enums = struct {
    pub const InputMode = enum(i32) {
        pub const NormalInputMode: i32 = 0;
        pub const ViInputMode: i32 = 1;
    };

    pub const ViewMode = enum(i32) {
        pub const NormalModeInsert: i32 = 0;
        pub const NormalModeOverwrite: i32 = 1;
        pub const ViModeNormal: i32 = 10;
        pub const ViModeInsert: i32 = 11;
        pub const ViModeVisual: i32 = 12;
        pub const ViModeVisualLine: i32 = 13;
        pub const ViModeVisualBlock: i32 = 14;
        pub const ViModeReplace: i32 = 15;
    };

    pub const LineType = enum(i32) {
        pub const RealLine: i32 = 0;
        pub const VisibleLine: i32 = 1;
    };
};
