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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MetaObject(self: KTextEditor__View) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__View_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTextEditor__View, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__View_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KTextEditor__View, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__View_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Document(self: KTextEditor__View) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__View_Document(@ptrCast(self.ptr)) };
    }

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
    pub fn ViewMode(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_ViewMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewModeHuman)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ViewModeHuman(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__View_ViewModeHuman(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.ViewModeHuman: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setViewInputMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` inputMode: view_enums.InputMode `
    ///
    pub fn SetViewInputMode(self: KTextEditor__View, inputMode: i32) void {
        qtc.KTextEditor__View_SetViewInputMode(@ptrCast(self.ptr), @bitCast(inputMode));
    }

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
    pub fn ViewInputMode(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_ViewInputMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputModeHuman)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ViewInputModeHuman(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__View_ViewInputModeHuman(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.ViewInputModeHuman: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#mainWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MainWindow(self: KTextEditor__View) KTextEditor__MainWindow {
        return .{ .ptr = qtc.KTextEditor__View_MainWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn FocusIn(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_FocusIn(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusIn)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnFocusIn(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_FocusIn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn FocusOut(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_FocusOut(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusOut)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnFocusOut(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_FocusOut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ViewModeChanged(self: KTextEditor__View, view: anytype, mode: i32) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_ViewModeChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, mode: view_enums.ViewMode) callconv(.c) void `
    ///
    pub fn OnViewModeChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, i32) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_ViewModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ViewInputModeChanged(self: KTextEditor__View, view: anytype, mode: i32) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_ViewInputModeChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, mode: view_enums.InputMode) callconv(.c) void `
    ///
    pub fn OnViewInputModeChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, i32) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_ViewInputModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TextInserted(self: KTextEditor__View, view: anytype, position: anytype, text: []const u8) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__View_TextInserted(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(position.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#textInserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, position: KTextEditor__Cursor, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextInserted(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, KTextEditor__Cursor, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_TextInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` menu: QMenu `
    ///
    pub fn SetContextMenu(self: KTextEditor__View, menu: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KTextEditor__View_SetContextMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#contextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ContextMenu(self: KTextEditor__View) QMenu {
        return .{ .ptr = qtc.KTextEditor__View_ContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#defaultContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` menu: QMenu `
    ///
    pub fn DefaultContextMenu(self: KTextEditor__View, menu: anytype) QMenu {
        comptime _ = @TypeOf(menu)._is_QMenu;
        return .{ .ptr = qtc.KTextEditor__View_DefaultContextMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr)) };
    }

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
    pub fn ContextMenuAboutToShow(self: KTextEditor__View, view: anytype, menu: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KTextEditor__View_ContextMenuAboutToShow(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(menu.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#contextMenuAboutToShow)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, menu: QMenu) callconv(.c) void `
    ///
    pub fn OnContextMenuAboutToShow(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, QMenu) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_ContextMenuAboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn SetCursorPosition(self: KTextEditor__View, position: anytype) bool {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__View_SetCursorPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setCursorPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` positions: []KTextEditor__Cursor `
    ///
    pub fn SetCursorPositions(self: KTextEditor__View, positions: []KTextEditor__Cursor) void {
        const positions_list = qtc.libqt_list{
            .len = positions.len,
            .data = @ptrCast(positions.ptr),
        };
        qtc.KTextEditor__View_SetCursorPositions(@ptrCast(self.ptr), positions_list);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn CursorPosition(self: KTextEditor__View) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__View_CursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CursorPositions(self: KTextEditor__View, allocator: std.mem.Allocator) []KTextEditor__Cursor {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_CursorPositions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Cursor, _arr.len) catch @panic("ktexteditor__view.CursorPositions: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Cursor = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionVirtual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn CursorPositionVirtual(self: KTextEditor__View) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__View_CursorPositionVirtual(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorToCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn CursorToCoordinate(self: KTextEditor__View, cursor: anytype) QPoint {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__View_CursorToCoordinate(@ptrCast(self.ptr), @ptrCast(cursor.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionCoordinates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn CursorPositionCoordinates(self: KTextEditor__View) QPoint {
        return .{ .ptr = qtc.KTextEditor__View_CursorPositionCoordinates(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#coordinatesToCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` coord: QPoint `
    ///
    pub fn CoordinatesToCursor(self: KTextEditor__View, coord: anytype) KTextEditor__Cursor {
        comptime _ = @TypeOf(coord)._is_QPoint;
        return .{ .ptr = qtc.KTextEditor__View_CoordinatesToCursor(@ptrCast(self.ptr), @ptrCast(coord.ptr)) };
    }

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
    pub fn CursorPositionChanged(self: KTextEditor__View, view: anytype, newPosition: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(newPosition)._is_KTextEditor__Cursor;
        qtc.KTextEditor__View_CursorPositionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(newPosition.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, newPosition: KTextEditor__Cursor) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, KTextEditor__Cursor) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VerticalScrollPositionChanged(self: KTextEditor__View, view: anytype, newPos: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(newPos)._is_KTextEditor__Cursor;
        qtc.KTextEditor__View_VerticalScrollPositionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(newPos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#verticalScrollPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, newPos: KTextEditor__Cursor) callconv(.c) void `
    ///
    pub fn OnVerticalScrollPositionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, KTextEditor__Cursor) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_VerticalScrollPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#horizontalScrollPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn HorizontalScrollPositionChanged(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_HorizontalScrollPositionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#horizontalScrollPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollPositionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_HorizontalScrollPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#mouseTrackingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MouseTrackingEnabled(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_MouseTrackingEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setMouseTrackingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTrackingEnabled(self: KTextEditor__View, enable: bool) bool {
        return qtc.KTextEditor__View_SetMouseTrackingEnabled(@ptrCast(self.ptr), enable);
    }

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
    pub fn MousePositionChanged(self: KTextEditor__View, view: anytype, newPosition: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(newPosition)._is_KTextEditor__Cursor;
        qtc.KTextEditor__View_MousePositionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(newPosition.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#mousePositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, newPosition: KTextEditor__Cursor) callconv(.c) void `
    ///
    pub fn OnMousePositionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, KTextEditor__Cursor) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_MousePositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn SetSelection(self: KTextEditor__View, range: anytype) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__View_SetSelection(@ptrCast(self.ptr), @ptrCast(range.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` ranges: []KTextEditor__Range `
    ///
    pub fn SetSelections(self: KTextEditor__View, ranges: []KTextEditor__Range) void {
        const ranges_list = qtc.libqt_list{
            .len = ranges.len,
            .data = @ptrCast(ranges.ptr),
        };
        qtc.KTextEditor__View_SetSelections(@ptrCast(self.ptr), ranges_list);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Selection(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_Selection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn SelectionRange(self: KTextEditor__View) KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__View_SelectionRange(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectionRanges(self: KTextEditor__View, allocator: std.mem.Allocator) []KTextEditor__Range {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_SelectionRanges(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Range, _arr.len) catch @panic("ktexteditor__view.SelectionRanges: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Range = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectionText(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__View_SelectionText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.SelectionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#removeSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn RemoveSelection(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_RemoveSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#removeSelectionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn RemoveSelectionText(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_RemoveSelectionText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setBlockSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` on: bool `
    ///
    pub fn SetBlockSelection(self: KTextEditor__View, on: bool) bool {
        return qtc.KTextEditor__View_SetBlockSelection(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#blockSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn BlockSelection(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_BlockSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn SelectionChanged(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_SelectionChanged(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertText(self: KTextEditor__View, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__View_InsertText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn InsertTemplate(self: KTextEditor__View, insertPosition: anytype, templateString: []const u8) bool {
        comptime _ = @TypeOf(insertPosition)._is_KTextEditor__Cursor;
        const templateString_str = qtc.libqt_string{
            .len = templateString.len,
            .data = templateString.ptr,
        };
        return qtc.KTextEditor__View_InsertTemplate(@ptrCast(self.ptr), @ptrCast(insertPosition.ptr), templateString_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setScrollPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn SetScrollPosition(self: KTextEditor__View, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        qtc.KTextEditor__View_SetScrollPosition(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setHorizontalScrollPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` x: i32 `
    ///
    pub fn SetHorizontalScrollPosition(self: KTextEditor__View, x: i32) void {
        qtc.KTextEditor__View_SetHorizontalScrollPosition(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#maxScrollPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MaxScrollPosition(self: KTextEditor__View) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__View_MaxScrollPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#firstDisplayedLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn FirstDisplayedLine(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_FirstDisplayedLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#lastDisplayedLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn LastDisplayedLine(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_LastDisplayedLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#textAreaRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn TextAreaRect(self: KTextEditor__View) QRect {
        return .{ .ptr = qtc.KTextEditor__View_TextAreaRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn VerticalScrollBar(self: KTextEditor__View) QScrollBar {
        return .{ .ptr = qtc.KTextEditor__View_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn HorizontalScrollBar(self: KTextEditor__View) QScrollBar {
        return .{ .ptr = qtc.KTextEditor__View_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#displayRangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn DisplayRangeChanged(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_DisplayRangeChanged(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#displayRangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnDisplayRangeChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_DisplayRangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Print(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_Print(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#printPreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn PrintPreview(self: KTextEditor__View) void {
        qtc.KTextEditor__View_PrintPreview(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#isStatusBarEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsStatusBarEnabled(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_IsStatusBarEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setStatusBarEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` enable: bool `
    ///
    pub fn SetStatusBarEnabled(self: KTextEditor__View, enable: bool) void {
        qtc.KTextEditor__View_SetStatusBarEnabled(@ptrCast(self.ptr), enable);
    }

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
    pub fn StatusBarEnabledChanged(self: KTextEditor__View, view: anytype, enabled: bool) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_StatusBarEnabledChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#statusBarEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, enabled: bool) callconv(.c) void `
    ///
    pub fn OnStatusBarEnabledChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, bool) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_StatusBarEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ReadSessionConfig(self: KTextEditor__View, allocator: std.mem.Allocator, config: anytype, flags: Set_constu8) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        const flags_count = flags.count();
        const flags_arr = allocator.alloc(qtc.libqt_string, flags_count) catch @panic("ktexteditor__view.ReadSessionConfig: Memory allocation failed");
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
    pub fn WriteSessionConfig(self: KTextEditor__View, allocator: std.mem.Allocator, config: anytype, flags: Set_constu8) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        const flags_count = flags.count();
        const flags_arr = allocator.alloc(qtc.libqt_string, flags_count) catch @panic("ktexteditor__view.WriteSessionConfig: Memory allocation failed");
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
    pub fn LineAttributes(self: KTextEditor__View, allocator: std.mem.Allocator, line: i32) []KTextEditor__AttributeBlock {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_LineAttributes(@ptrCast(self.ptr), @bitCast(line));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__AttributeBlock, _arr.len) catch @panic("ktexteditor__view.LineAttributes: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__AttributeBlock = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn ConfigChanged(self: KTextEditor__View, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_ConfigChanged(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnConfigChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#configKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConfigKeys(self: KTextEditor__View, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_ConfigKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor__view.ConfigKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__view.ConfigKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ConfigValue(self: KTextEditor__View, key: []const u8) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__View_ConfigValue(@ptrCast(self.ptr), key_str) };
    }

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
    pub fn SetConfigValue(self: KTextEditor__View, key: []const u8, value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KTextEditor__View_SetConfigValue(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` model: KTextEditor__AnnotationModel `
    ///
    pub fn SetAnnotationModel(self: KTextEditor__View, model: anytype) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        qtc.KTextEditor__View_SetAnnotationModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn AnnotationModel(self: KTextEditor__View) KTextEditor__AnnotationModel {
        return .{ .ptr = qtc.KTextEditor__View_AnnotationModel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationBorderVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` visible: bool `
    ///
    pub fn SetAnnotationBorderVisible(self: KTextEditor__View, visible: bool) void {
        qtc.KTextEditor__View_SetAnnotationBorderVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#isAnnotationBorderVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsAnnotationBorderVisible(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_IsAnnotationBorderVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` delegate: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn SetAnnotationItemDelegate(self: KTextEditor__View, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KTextEditor__AbstractAnnotationItemDelegate;
        qtc.KTextEditor__View_SetAnnotationItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn AnnotationItemDelegate(self: KTextEditor__View) KTextEditor__AbstractAnnotationItemDelegate {
        return .{ .ptr = qtc.KTextEditor__View_AnnotationItemDelegate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationUniformItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` uniformItemSizes: bool `
    ///
    pub fn SetAnnotationUniformItemSizes(self: KTextEditor__View, uniformItemSizes: bool) void {
        qtc.KTextEditor__View_SetAnnotationUniformItemSizes(@ptrCast(self.ptr), uniformItemSizes);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#uniformAnnotationItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn UniformAnnotationItemSizes(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_UniformAnnotationItemSizes(@ptrCast(self.ptr));
    }

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
    pub fn AnnotationContextMenuAboutToShow(self: KTextEditor__View, view: anytype, menu: anytype, line: i32) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KTextEditor__View_AnnotationContextMenuAboutToShow(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(menu.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationContextMenuAboutToShow)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, menu: QMenu, line: i32) callconv(.c) void `
    ///
    pub fn OnAnnotationContextMenuAboutToShow(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, QMenu, i32) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_AnnotationContextMenuAboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AnnotationActivated(self: KTextEditor__View, view: anytype, line: i32) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_AnnotationActivated(@ptrCast(self.ptr), @ptrCast(view.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, line: i32) callconv(.c) void `
    ///
    pub fn OnAnnotationActivated(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, i32) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_AnnotationActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AnnotationBorderVisibilityChanged(self: KTextEditor__View, view: anytype, visible: bool) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__View_AnnotationBorderVisibilityChanged(@ptrCast(self.ptr), @ptrCast(view.ptr), visible);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationBorderVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, view: KTextEditor__View, visible: bool) callconv(.c) void `
    ///
    pub fn OnAnnotationBorderVisibilityChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, KTextEditor__View, bool) callconv(.c) void) void {
        qtc.KTextEditor__View_Connect_AnnotationBorderVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#registerInlineNoteProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` provider: KTextEditor__InlineNoteProvider `
    ///
    pub fn RegisterInlineNoteProvider(self: KTextEditor__View, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KTextEditor__InlineNoteProvider;
        qtc.KTextEditor__View_RegisterInlineNoteProvider(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#unregisterInlineNoteProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` provider: KTextEditor__InlineNoteProvider `
    ///
    pub fn UnregisterInlineNoteProvider(self: KTextEditor__View, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KTextEditor__InlineNoteProvider;
        qtc.KTextEditor__View_UnregisterInlineNoteProvider(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#registerTextHintProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` provider: KTextEditor__TextHintProvider `
    ///
    pub fn RegisterTextHintProvider(self: KTextEditor__View, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KTextEditor__TextHintProvider;
        qtc.KTextEditor__View_RegisterTextHintProvider(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#unregisterTextHintProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` provider: KTextEditor__TextHintProvider `
    ///
    pub fn UnregisterTextHintProvider(self: KTextEditor__View, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KTextEditor__TextHintProvider;
        qtc.KTextEditor__View_UnregisterTextHintProvider(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setTextHintDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` delay: i32 `
    ///
    pub fn SetTextHintDelay(self: KTextEditor__View, delay: i32) void {
        qtc.KTextEditor__View_SetTextHintDelay(@ptrCast(self.ptr), @bitCast(delay));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#textHintDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn TextHintDelay(self: KTextEditor__View) i32 {
        return qtc.KTextEditor__View_TextHintDelay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#isCompletionActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsCompletionActive(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_IsCompletionActive(@ptrCast(self.ptr));
    }

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
    pub fn StartCompletion(self: KTextEditor__View, word: anytype, model: anytype) void {
        comptime _ = @TypeOf(word)._is_KTextEditor__Range;
        comptime _ = @TypeOf(model)._is_KTextEditor__CodeCompletionModel;
        qtc.KTextEditor__View_StartCompletion(@ptrCast(self.ptr), @ptrCast(word.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#abortCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn AbortCompletion(self: KTextEditor__View) void {
        qtc.KTextEditor__View_AbortCompletion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#forceCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ForceCompletion(self: KTextEditor__View) void {
        qtc.KTextEditor__View_ForceCompletion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#registerCompletionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` model: KTextEditor__CodeCompletionModel `
    ///
    pub fn RegisterCompletionModel(self: KTextEditor__View, model: anytype) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__CodeCompletionModel;
        qtc.KTextEditor__View_RegisterCompletionModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#unregisterCompletionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` model: KTextEditor__CodeCompletionModel `
    ///
    pub fn UnregisterCompletionModel(self: KTextEditor__View, model: anytype) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__CodeCompletionModel;
        qtc.KTextEditor__View_UnregisterCompletionModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#isAutomaticInvocationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsAutomaticInvocationEnabled(self: KTextEditor__View) bool {
        return qtc.KTextEditor__View_IsAutomaticInvocationEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAutomaticInvocationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutomaticInvocationEnabled(self: KTextEditor__View, enabled: bool) void {
        qtc.KTextEditor__View_SetAutomaticInvocationEnabled(@ptrCast(self.ptr), enabled);
    }

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
    pub fn StartCompletion2(self: KTextEditor__View, word: anytype, models: []KTextEditor__CodeCompletionModel, invocationType: i32) void {
        comptime _ = @TypeOf(word)._is_KTextEditor__Range;
        const models_list = qtc.libqt_list{
            .len = models.len,
            .data = @ptrCast(models.ptr),
        };
        qtc.KTextEditor__View_StartCompletion2(@ptrCast(self.ptr), @ptrCast(word.ptr), models_list, @bitCast(invocationType));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#codeCompletionModels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CodeCompletionModels(self: KTextEditor__View, allocator: std.mem.Allocator) []KTextEditor__CodeCompletionModel {
        const _arr: qtc.libqt_list = qtc.KTextEditor__View_CodeCompletionModels(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__CodeCompletionModel, _arr.len) catch @panic("ktexteditor__view.CodeCompletionModels: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__CodeCompletionModel = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Theme(self: KTextEditor__View) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KTextEditor__View_Theme(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn InsertTemplate3(self: KTextEditor__View, insertPosition: anytype, templateString: []const u8, script: []const u8) bool {
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

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#firstDisplayedLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` lineType: view_enums.LineType `
    ///
    pub fn FirstDisplayedLine1(self: KTextEditor__View, lineType: i32) i32 {
        return qtc.KTextEditor__View_FirstDisplayedLine1(@ptrCast(self.ptr), @bitCast(lineType));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-view.html#lastDisplayedLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` lineType: view_enums.LineType `
    ///
    pub fn LastDisplayedLine1(self: KTextEditor__View, lineType: i32) i32 {
        return qtc.KTextEditor__View_LastDisplayedLine1(@ptrCast(self.ptr), @bitCast(lineType));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn DevType(self: KTextEditor__View) i32 {
        return qtc.QWidget_DevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn WinId(self: KTextEditor__View) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn CreateWinId(self: KTextEditor__View) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn InternalWinId(self: KTextEditor__View) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn EffectiveWinId(self: KTextEditor__View) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Style(self: KTextEditor__View) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KTextEditor__View, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsTopLevel(self: KTextEditor__View) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsWindow(self: KTextEditor__View) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsModal(self: KTextEditor__View) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

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
    pub fn WindowModality(self: KTextEditor__View) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KTextEditor__View, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsEnabled(self: KTextEditor__View) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn IsEnabledTo(self: KTextEditor__View, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SetEnabled(self: KTextEditor__View, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

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
    pub fn SetDisabled(self: KTextEditor__View, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

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
    pub fn SetWindowModified(self: KTextEditor__View, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn FrameGeometry(self: KTextEditor__View) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Geometry(self: KTextEditor__View) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn NormalGeometry(self: KTextEditor__View) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn X(self: KTextEditor__View) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Y(self: KTextEditor__View) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Pos(self: KTextEditor__View) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn FrameSize(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Size(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Width(self: KTextEditor__View) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Height(self: KTextEditor__View) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Rect(self: KTextEditor__View) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ChildrenRect(self: KTextEditor__View) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ChildrenRegion(self: KTextEditor__View) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MinimumSize(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MaximumSize(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MinimumWidth(self: KTextEditor__View) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MinimumHeight(self: KTextEditor__View) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MaximumWidth(self: KTextEditor__View) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MaximumHeight(self: KTextEditor__View) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KTextEditor__View, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

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
    pub fn SetMinimumSize2(self: KTextEditor__View, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KTextEditor__View, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

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
    pub fn SetMaximumSize2(self: KTextEditor__View, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

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
    pub fn SetMinimumWidth(self: KTextEditor__View, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

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
    pub fn SetMinimumHeight(self: KTextEditor__View, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

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
    pub fn SetMaximumWidth(self: KTextEditor__View, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

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
    pub fn SetMaximumHeight(self: KTextEditor__View, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn SizeIncrement(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KTextEditor__View, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

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
    pub fn SetSizeIncrement2(self: KTextEditor__View, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn BaseSize(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KTextEditor__View, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

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
    pub fn SetBaseSize2(self: KTextEditor__View, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

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
    pub fn SetFixedSize(self: KTextEditor__View, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

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
    pub fn SetFixedSize2(self: KTextEditor__View, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

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
    pub fn SetFixedWidth(self: KTextEditor__View, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

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
    pub fn SetFixedHeight(self: KTextEditor__View, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

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
    pub fn MapToGlobal(self: KTextEditor__View, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToGlobal2(self: KTextEditor__View, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromGlobal(self: KTextEditor__View, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromGlobal2(self: KTextEditor__View, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToParent(self: KTextEditor__View, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToParent2(self: KTextEditor__View, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromParent(self: KTextEditor__View, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromParent2(self: KTextEditor__View, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapTo(self: KTextEditor__View, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KTextEditor__View, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KTextEditor__View, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KTextEditor__View, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn Window(self: KTextEditor__View) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn NativeParentWidget(self: KTextEditor__View) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn TopLevelWidget(self: KTextEditor__View) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Palette(self: KTextEditor__View) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KTextEditor__View, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KTextEditor__View, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

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
    pub fn BackgroundRole(self: KTextEditor__View) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KTextEditor__View, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

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
    pub fn ForegroundRole(self: KTextEditor__View) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Font(self: KTextEditor__View) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KTextEditor__View, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn FontMetrics(self: KTextEditor__View) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn FontInfo(self: KTextEditor__View) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Cursor(self: KTextEditor__View) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KTextEditor__View, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn UnsetCursor(self: KTextEditor__View) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

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
    pub fn SetMouseTracking(self: KTextEditor__View, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn HasMouseTracking(self: KTextEditor__View) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn UnderMouse(self: KTextEditor__View) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

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
    pub fn SetTabletTracking(self: KTextEditor__View, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn HasTabletTracking(self: KTextEditor__View) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KTextEditor__View, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KTextEditor__View, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Mask(self: KTextEditor__View) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ClearMask(self: KTextEditor__View) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

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
    pub fn Render(self: KTextEditor__View, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

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
    pub fn Render2(self: KTextEditor__View, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Grab(self: KTextEditor__View) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn GraphicsEffect(self: KTextEditor__View) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

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
    pub fn SetGraphicsEffect(self: KTextEditor__View, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

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
    pub fn GrabGesture(self: KTextEditor__View, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn UngrabGesture(self: KTextEditor__View, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KTextEditor__View, windowTitle: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KTextEditor__View, styleSheet: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn WindowTitle(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowIcon(self: KTextEditor__View, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn WindowIcon(self: KTextEditor__View) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KTextEditor__View, windowIconText: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KTextEditor__View, windowRole: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowFilePath(self: KTextEditor__View, filePath: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowOpacity(self: KTextEditor__View, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn WindowOpacity(self: KTextEditor__View) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsWindowModified(self: KTextEditor__View) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KTextEditor__View, toolTip: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetToolTipDuration(self: KTextEditor__View, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ToolTipDuration(self: KTextEditor__View) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KTextEditor__View, statusTip: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KTextEditor__View, whatsThis: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn AccessibleName(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetAccessibleName(self: KTextEditor__View, name: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetAccessibleDescription(self: KTextEditor__View, description: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KTextEditor__View, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

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
    pub fn LayoutDirection(self: KTextEditor__View) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn UnsetLayoutDirection(self: KTextEditor__View) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KTextEditor__View, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Locale(self: KTextEditor__View) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn UnsetLocale(self: KTextEditor__View) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsRightToLeft(self: KTextEditor__View) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsLeftToRight(self: KTextEditor__View) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn SetFocus(self: KTextEditor__View) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsActiveWindow(self: KTextEditor__View) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ActivateWindow(self: KTextEditor__View) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ClearFocus(self: KTextEditor__View) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

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
    pub fn SetFocus2(self: KTextEditor__View, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

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
    pub fn FocusPolicy(self: KTextEditor__View) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

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
    pub fn SetFocusPolicy(self: KTextEditor__View, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn HasFocus(self: KTextEditor__View) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KTextEditor__View, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn FocusProxy(self: KTextEditor__View) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

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
    pub fn ContextMenuPolicy(self: KTextEditor__View) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

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
    pub fn SetContextMenuPolicy(self: KTextEditor__View, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn GrabMouse(self: KTextEditor__View) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

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
    pub fn GrabMouse2(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ReleaseMouse(self: KTextEditor__View) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn GrabKeyboard(self: KTextEditor__View) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ReleaseKeyboard(self: KTextEditor__View) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

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
    pub fn GrabShortcut(self: KTextEditor__View, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

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
    pub fn ReleaseShortcut(self: KTextEditor__View, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn SetShortcutEnabled(self: KTextEditor__View, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn SetShortcutAutoRepeat(self: KTextEditor__View, id: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn UpdatesEnabled(self: KTextEditor__View) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetUpdatesEnabled(self: KTextEditor__View, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn GraphicsProxyWidget(self: KTextEditor__View) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Update(self: KTextEditor__View) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Repaint(self: KTextEditor__View) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KTextEditor__View, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

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
    pub fn Update3(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Update4(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KTextEditor__View, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

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
    pub fn Repaint3(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Repaint4(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SetVisible(self: KTextEditor__View, visible: bool) void {
        qtc.QWidget_SetVisible(@ptrCast(self.ptr), visible);
    }

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
    pub fn SetHidden(self: KTextEditor__View, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Show(self: KTextEditor__View) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Hide(self: KTextEditor__View) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ShowMinimized(self: KTextEditor__View) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ShowMaximized(self: KTextEditor__View) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ShowFullScreen(self: KTextEditor__View) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ShowNormal(self: KTextEditor__View) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Close(self: KTextEditor__View) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Raise(self: KTextEditor__View) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Lower(self: KTextEditor__View) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

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
    pub fn StackUnder(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KTextEditor__View, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

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
    pub fn Move2(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Resize(self: KTextEditor__View, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

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
    pub fn Resize2(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KTextEditor__View, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KTextEditor__View, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

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
    pub fn SaveGeometry(self: KTextEditor__View, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("ktexteditor__view.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KTextEditor__View, geometry: []u8) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn AdjustSize(self: KTextEditor__View) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsVisible(self: KTextEditor__View) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

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
    pub fn IsVisibleTo(self: KTextEditor__View, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsHidden(self: KTextEditor__View) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsMinimized(self: KTextEditor__View) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsMaximized(self: KTextEditor__View) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsFullScreen(self: KTextEditor__View) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

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
    pub fn WindowState(self: KTextEditor__View) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

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
    pub fn SetWindowState(self: KTextEditor__View, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn OverrideWindowState(self: KTextEditor__View, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn SizeHint(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_SizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn MinimumSizeHint(self: KTextEditor__View) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn SizePolicy(self: KTextEditor__View) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KTextEditor__View, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

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
    pub fn SetSizePolicy2(self: KTextEditor__View, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

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
    pub fn HeightForWidth(self: KTextEditor__View, param1: i32) i32 {
        return qtc.QWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn HasHeightForWidth(self: KTextEditor__View) bool {
        return qtc.QWidget_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn VisibleRegion(self: KTextEditor__View) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

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
    pub fn SetContentsMargins(self: KTextEditor__View, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

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
    pub fn SetContentsMargins2(self: KTextEditor__View, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ContentsMargins(self: KTextEditor__View) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ContentsRect(self: KTextEditor__View) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Layout(self: KTextEditor__View) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KTextEditor__View, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn UpdateGeometry(self: KTextEditor__View) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KTextEditor__View, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KTextEditor__View, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

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
    pub fn Scroll(self: KTextEditor__View, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

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
    pub fn Scroll2(self: KTextEditor__View, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn FocusWidget(self: KTextEditor__View) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn NextInFocusChain(self: KTextEditor__View) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn PreviousInFocusChain(self: KTextEditor__View) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn AcceptDrops(self: KTextEditor__View) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

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
    pub fn SetAcceptDrops(self: KTextEditor__View, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KTextEditor__View, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KTextEditor__View, actions: []QAction) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KTextEditor__View, before: anytype, actions: []QAction) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KTextEditor__View, before: anytype, action: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KTextEditor__View, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

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
    pub fn Actions(self: KTextEditor__View, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("ktexteditor__view.Actions: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KTextEditor__View, text: []const u8) QAction {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KTextEditor__View, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KTextEditor__View, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KTextEditor__View, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn ParentWidget(self: KTextEditor__View) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn SetWindowFlags(self: KTextEditor__View, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn WindowFlags(self: KTextEditor__View) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

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
    pub fn SetWindowFlag(self: KTextEditor__View, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OverrideWindowFlags(self: KTextEditor__View, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn WindowType(self: KTextEditor__View) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KTextEditor__View, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

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
    pub fn ChildAt2(self: KTextEditor__View, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

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
    pub fn ChildAt3(self: KTextEditor__View, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

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
    pub fn SetAttribute(self: KTextEditor__View, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn TestAttribute(self: KTextEditor__View, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn PaintEngine(self: KTextEditor__View) QPaintEngine {
        return .{ .ptr = qtc.QWidget_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn EnsurePolished(self: KTextEditor__View) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

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
    pub fn IsAncestorOf(self: KTextEditor__View, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn AutoFillBackground(self: KTextEditor__View) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

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
    pub fn SetAutoFillBackground(self: KTextEditor__View, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn BackingStore(self: KTextEditor__View) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn WindowHandle(self: KTextEditor__View) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Screen(self: KTextEditor__View) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KTextEditor__View, screen: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KTextEditor__View, title: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WindowIconChanged(self: KTextEditor__View, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

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
    pub fn OnWindowIconChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WindowIconTextChanged(self: KTextEditor__View, iconText: []const u8) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` callback: *const fn (self: KTextEditor__View, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KTextEditor__View, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn OnCustomContextMenuRequested(self: KTextEditor__View, callback: *const fn (KTextEditor__View, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InputMethodQuery(self: KTextEditor__View, param1: i32) QVariant {
        return .{ .ptr = qtc.QWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn InputMethodHints(self: KTextEditor__View) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

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
    pub fn SetInputMethodHints(self: KTextEditor__View, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

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
    pub fn Render22(self: KTextEditor__View, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KTextEditor__View, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn Render4(self: KTextEditor__View, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KTextEditor__View, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KTextEditor__View, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn Render42(self: KTextEditor__View, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KTextEditor__View, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

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
    pub fn GrabGesture2(self: KTextEditor__View, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

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
    pub fn GrabShortcut2(self: KTextEditor__View, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

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
    pub fn SetShortcutEnabled2(self: KTextEditor__View, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

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
    pub fn SetShortcutAutoRepeat2(self: KTextEditor__View, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

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
    pub fn SetWindowFlag2(self: KTextEditor__View, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

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
    pub fn SetAttribute2(self: KTextEditor__View, param1: i32, on: bool) void {
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTextEditor__View, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn ObjectName(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KTextEditor__View, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsWidgetType(self: KTextEditor__View) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsWindowType(self: KTextEditor__View) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn IsQuickItemType(self: KTextEditor__View) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn SignalsBlocked(self: KTextEditor__View) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KTextEditor__View, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Thread(self: KTextEditor__View) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTextEditor__View, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KTextEditor__View, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KTextEditor__View, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KTextEditor__View, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KTextEditor__View, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KTextEditor__View, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktexteditor__view.Children: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTextEditor__View, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KTextEditor__View, obj: anytype) void {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTextEditor__View, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn Disconnect3(self: KTextEditor__View) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KTextEditor__View, receiver: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    pub fn DumpObjectTree(self: KTextEditor__View) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn DumpObjectInfo(self: KTextEditor__View) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KTextEditor__View, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTextEditor__View, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KTextEditor__View, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor__view.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__view.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__View `
    ///
    pub fn BindingStorage(self: KTextEditor__View) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn BindingStorage2(self: KTextEditor__View) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Destroyed(self: KTextEditor__View) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KTextEditor__View, callback: *const fn (KTextEditor__View) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Parent(self: KTextEditor__View) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KTextEditor__View, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn DeleteLater(self: KTextEditor__View) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KTextEditor__View, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KTextEditor__View, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTextEditor__View, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTextEditor__View, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KTextEditor__View, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTextEditor__View, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTextEditor__View, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__View `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KTextEditor__View, callback: *const fn (KTextEditor__View, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn PaintingActive(self: KTextEditor__View) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn WidthMM(self: KTextEditor__View) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn HeightMM(self: KTextEditor__View) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn LogicalDpiX(self: KTextEditor__View) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn LogicalDpiY(self: KTextEditor__View) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn PhysicalDpiX(self: KTextEditor__View) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn PhysicalDpiY(self: KTextEditor__View) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn DevicePixelRatio(self: KTextEditor__View) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn DevicePixelRatioF(self: KTextEditor__View) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ColorCount(self: KTextEditor__View) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Depth(self: KTextEditor__View) i32 {
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
    pub fn Action(self: KTextEditor__View, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

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
    pub fn Action2(self: KTextEditor__View, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIClient_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ActionCollection(self: KTextEditor__View) KActionCollection {
        return .{ .ptr = qtc.KXMLGUIClient_ActionCollection(@ptrCast(self.ptr)) };
    }

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
    pub fn ComponentName(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn DomDocument(self: KTextEditor__View) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_DomDocument(@ptrCast(self.ptr)) };
    }

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
    pub fn XmlFile(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn LocalXMLFile(self: KTextEditor__View, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetXMLGUIBuildDocument(self: KTextEditor__View, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn XmlguiBuildDocument(self: KTextEditor__View) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    /// ` factory: KXMLGUIFactory `
    ///
    pub fn SetFactory(self: KTextEditor__View, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Factory(self: KTextEditor__View) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ParentClient(self: KTextEditor__View) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

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
    pub fn InsertChildClient(self: KTextEditor__View, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

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
    pub fn RemoveChildClient(self: KTextEditor__View, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

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
    pub fn ChildClients(self: KTextEditor__View, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("ktexteditor__view.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn SetClientBuilder(self: KTextEditor__View, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ClientBuilder(self: KTextEditor__View) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn ReloadXML(self: KTextEditor__View) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

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
    pub fn PlugActionList(self: KTextEditor__View, name: []const u8, actionList: []QAction) void {
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
    pub fn UnplugActionList(self: KTextEditor__View, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

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
    pub fn FindMostRecentXMLFile(allocator: std.mem.Allocator, files: []const []const u8, doc: []const u8) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("ktexteditor__view.FindMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i|
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionEnabled(self: KTextEditor__View, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self.ptr), state_str, action_str);
    }

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
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionDisabled(self: KTextEditor__View, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self.ptr), state_str, action_str);
    }

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
    pub fn GetActionsToChangeForState(self: KTextEditor__View, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

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
    pub fn BeginXMLPlug(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn EndXMLPlug(self: KTextEditor__View) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

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
    pub fn PrepareXMLUnplug(self: KTextEditor__View, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn ReplaceXMLFile(self: KTextEditor__View, xmlfile: []const u8, localxmlfile: []const u8) void {
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
    pub fn FindVersionNumber(allocator: std.mem.Allocator, xml: []const u8) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__view.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ReplaceXMLFile3(self: KTextEditor__View, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
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
    pub fn OnObjectNameChanged(self: KTextEditor__View, callback: *const fn (KTextEditor__View, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__View `
    ///
    pub fn Delete(self: KTextEditor__View) void {
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
