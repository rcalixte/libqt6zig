const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KConfig = @import("libqt6").KConfig;
const KConfigGroup = @import("libqt6").KConfigGroup;
const KMainWindow = @import("libqt6").KMainWindow;
const KToolBar = @import("libqt6").KToolBar;
const KXMLGUIBuilder = @import("libqt6").KXMLGUIBuilder;
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
const KXMLGUIClient__StateChange = @import("libqt6").KXMLGUIClient__StateChange;
const KXMLGUIFactory = @import("libqt6").KXMLGUIFactory;
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QContextMenuEvent = @import("libqt6").QContextMenuEvent;
const QCursor = @import("libqt6").QCursor;
const QDockWidget = @import("libqt6").QDockWidget;
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
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
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMenu = @import("libqt6").QMenu;
const QMenuBar = @import("libqt6").QMenuBar;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
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
const QStatusBar = @import("libqt6").QStatusBar;
const QStyle = @import("libqt6").QStyle;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QToolBar = @import("libqt6").QToolBar;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const kxmlguiclient_enums = @import("libkxmlguiclient.zig").enums;
const kxmlguiwindow_enums = enums;
const qmainwindow_enums = @import("../libqmainwindow.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qtabwidget_enums = @import("../libqtabwidget.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html)
pub const KXmlGuiWindow = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KXmlGuiWindow,

    pub const _is_KXmlGuiWindow = {};
    pub const _is_KMainWindow = {};
    pub const _is_QMainWindow = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};
    pub const _is_KXMLGUIBuilder = {};
    pub const _is_KXMLGUIClient = {};

    /// New constructs a new KXmlGuiWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KXmlGuiWindow {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KXmlGuiWindow_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KXmlGuiWindow object.
    ///
    pub fn New2() KXmlGuiWindow {
        return .{ .ptr = qtc.KXmlGuiWindow_new2() };
    }

    /// New3 constructs a new KXmlGuiWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn New3(parent: anytype, flags: i32) KXmlGuiWindow {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KXmlGuiWindow_new3(@ptrCast(parent.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MetaObject(self: KXmlGuiWindow) QMetaObject {
        return .{ .ptr = qtc.KXmlGuiWindow_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KXmlGuiWindow_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperMetaObject(self: KXmlGuiWindow) QMetaObject {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KXmlGuiWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXmlGuiWindow_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KXmlGuiWindow_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KXmlGuiWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXmlGuiWindow_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KXmlGuiWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KXmlGuiWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SetHelpMenuEnabled(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SetHelpMenuEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isHelpMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsHelpMenuEnabled(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_IsHelpMenuEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn GuiFactory(self: KXmlGuiWindow) KXMLGUIFactory {
        return .{ .ptr = qtc.KXmlGuiWindow_GuiFactory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn () callconv(.c) KXMLGUIFactory `
    ///
    pub fn OnGuiFactory(self: KXmlGuiWindow, callback: *const fn () callconv(.c) KXMLGUIFactory) void {
        qtc.KXmlGuiWindow_OnGuiFactory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGuiFactory` instead
    ///
    pub const QBaseGuiFactory = SuperGuiFactory;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperGuiFactory(self: KXmlGuiWindow) KXMLGUIFactory {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperGuiFactory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn CreateGUI(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_CreateGUI(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setStandardToolBarMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` showToolBarMenu: bool `
    ///
    pub fn SetStandardToolBarMenuEnabled(self: KXmlGuiWindow, showToolBarMenu: bool) void {
        qtc.KXmlGuiWindow_SetStandardToolBarMenuEnabled(@ptrCast(self.ptr), showToolBarMenu);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isStandardToolBarMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsStandardToolBarMenuEnabled(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_IsStandardToolBarMenuEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createStandardStatusBarAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn CreateStandardStatusBarAction(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_CreateStandardStatusBarAction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SetupGUI(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SetupGUI(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` defaultSize: QSize `
    ///
    pub fn SetupGUI2(self: KXmlGuiWindow, defaultSize: anytype) void {
        comptime _ = @TypeOf(defaultSize)._is_QSize;
        qtc.KXmlGuiWindow_SetupGUI2(@ptrCast(self.ptr), @ptrCast(defaultSize.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#toolBarMenuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ToolBarMenuAction(self: KXmlGuiWindow) QAction {
        return .{ .ptr = qtc.KXmlGuiWindow_ToolBarMenuAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupToolbarMenuActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SetupToolbarMenuActions(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SetupToolbarMenuActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#toolBarNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolBarNames(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_ToolBarNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.ToolBarNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.ToolBarNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#finalizeGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` force: bool `
    ///
    pub fn FinalizeGUI(self: KXmlGuiWindow, force: bool) void {
        qtc.KXmlGuiWindow_FinalizeGUI(@ptrCast(self.ptr), force);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn ApplyMainWindowSettings(self: KXmlGuiWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KXmlGuiWindow_ApplyMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, config: KConfigGroup) callconv(.c) void `
    ///
    pub fn OnApplyMainWindowSettings(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnApplyMainWindowSettings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperApplyMainWindowSettings` instead
    ///
    pub const QBaseApplyMainWindowSettings = SuperApplyMainWindowSettings;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn SuperApplyMainWindowSettings(self: KXmlGuiWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KXmlGuiWindow_SuperApplyMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setCommandBarEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` showCommandBar: bool `
    ///
    pub fn SetCommandBarEnabled(self: KXmlGuiWindow, showCommandBar: bool) void {
        qtc.KXmlGuiWindow_SetCommandBarEnabled(@ptrCast(self.ptr), showCommandBar);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isCommandBarEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsCommandBarEnabled(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_IsCommandBarEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ConfigureToolbars(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_ConfigureToolbars(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnConfigureToolbars(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnConfigureToolbars(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperConfigureToolbars` instead
    ///
    pub const QBaseConfigureToolbars = SuperConfigureToolbars;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperConfigureToolbars(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperConfigureToolbars(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` newstate: []const u8 `
    ///
    pub fn SlotStateChanged(self: KXmlGuiWindow, newstate: []const u8) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SlotStateChanged(@ptrCast(self.ptr), newstate_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, newstate: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSlotStateChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSlotStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotStateChanged` instead
    ///
    pub const QBaseSlotStateChanged = SuperSlotStateChanged;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` newstate: []const u8 `
    ///
    pub fn SuperSlotStateChanged(self: KXmlGuiWindow, newstate: []const u8) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SuperSlotStateChanged(@ptrCast(self.ptr), newstate_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: bool `
    ///
    pub fn SlotStateChanged2(self: KXmlGuiWindow, newstate: []const u8, reverse: bool) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SlotStateChanged2(@ptrCast(self.ptr), newstate_str, reverse);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isToolBarVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsToolBarVisible(self: KXmlGuiWindow, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KXmlGuiWindow_IsToolBarVisible(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setToolBarVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    /// ` visible: bool `
    ///
    pub fn SetToolBarVisible(self: KXmlGuiWindow, name: []const u8, visible: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXmlGuiWindow_SetToolBarVisible(@ptrCast(self.ptr), name_str, visible);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KXmlGuiWindow, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KXmlGuiWindow_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEvent) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KXmlGuiWindow, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KXmlGuiWindow_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn CheckAmbiguousShortcuts(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_CheckAmbiguousShortcuts(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCheckAmbiguousShortcuts(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCheckAmbiguousShortcuts(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCheckAmbiguousShortcuts` instead
    ///
    pub const QBaseCheckAmbiguousShortcuts = SuperCheckAmbiguousShortcuts;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperCheckAmbiguousShortcuts(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperCheckAmbiguousShortcuts(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SaveNewToolbarConfig(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SaveNewToolbarConfig(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSaveNewToolbarConfig(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveNewToolbarConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveNewToolbarConfig` instead
    ///
    pub const QBaseSaveNewToolbarConfig = SuperSaveNewToolbarConfig;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperSaveNewToolbarConfig(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperSaveNewToolbarConfig(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` showHelpMenu: bool `
    ///
    pub fn SetHelpMenuEnabled1(self: KXmlGuiWindow, showHelpMenu: bool) void {
        qtc.KXmlGuiWindow_SetHelpMenuEnabled1(@ptrCast(self.ptr), showHelpMenu);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` xmlfile: []const u8 `
    ///
    pub fn CreateGUI1(self: KXmlGuiWindow, xmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_CreateGUI1(@ptrCast(self.ptr), xmlfile_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` options: flag of kxmlguiwindow_enums.StandardWindowOption `
    ///
    pub fn SetupGUI1(self: KXmlGuiWindow, options: i32) void {
        qtc.KXmlGuiWindow_SetupGUI1(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` options: flag of kxmlguiwindow_enums.StandardWindowOption `
    ///
    /// ` xmlfile: []const u8 `
    ///
    pub fn SetupGUI22(self: KXmlGuiWindow, options: i32, xmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_SetupGUI22(@ptrCast(self.ptr), @bitCast(options), xmlfile_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` defaultSize: QSize `
    ///
    /// ` options: flag of kxmlguiwindow_enums.StandardWindowOption `
    ///
    pub fn SetupGUI23(self: KXmlGuiWindow, defaultSize: anytype, options: i32) void {
        comptime _ = @TypeOf(defaultSize)._is_QSize;
        qtc.KXmlGuiWindow_SetupGUI23(@ptrCast(self.ptr), @ptrCast(defaultSize.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` defaultSize: QSize `
    ///
    /// ` options: flag of kxmlguiwindow_enums.StandardWindowOption `
    ///
    /// ` xmlfile: []const u8 `
    ///
    pub fn SetupGUI3(self: KXmlGuiWindow, defaultSize: anytype, options: i32, xmlfile: []const u8) void {
        comptime _ = @TypeOf(defaultSize)._is_QSize;
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_SetupGUI3(@ptrCast(self.ptr), @ptrCast(defaultSize.ptr), @bitCast(options), xmlfile_str);
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#canBeRestored)
    ///
    /// ## Parameter(s):
    ///
    /// ` numberOfInstances: i32 `
    ///
    pub fn CanBeRestored(numberOfInstances: i32) bool {
        return qtc.KMainWindow_CanBeRestored(@bitCast(numberOfInstances));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#classNameOfToplevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` instanceNumber: i32 `
    ///
    pub fn ClassNameOfToplevel(allocator: std.mem.Allocator, instanceNumber: i32) []const u8 {
        var _str = qtc.KMainWindow_ClassNameOfToplevel(@bitCast(instanceNumber));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ClassNameOfToplevel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` numberOfInstances: i32 `
    ///
    pub fn Restore(self: KXmlGuiWindow, numberOfInstances: i32) bool {
        return qtc.KMainWindow_Restore(@ptrCast(self.ptr), @bitCast(numberOfInstances));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#hasMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn HasMenuBar(self: KXmlGuiWindow) bool {
        return qtc.KMainWindow_HasMenuBar(@ptrCast(self.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#memberList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MemberList(allocator: std.mem.Allocator) []KMainWindow {
        const _arr: qtc.libqt_list = qtc.KMainWindow_MemberList();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KMainWindow, _arr.len) catch @panic("kxmlguiwindow.MemberList: Memory allocation failed");
        const _data: [*]QtC.KMainWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ToolBar(self: KXmlGuiWindow) KToolBar {
        return .{ .ptr = qtc.KMainWindow_ToolBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolBars(self: KXmlGuiWindow, allocator: std.mem.Allocator) []KToolBar {
        const _arr: qtc.libqt_list = qtc.KMainWindow_ToolBars(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KToolBar, _arr.len) catch @panic("kxmlguiwindow.ToolBars: Memory allocation failed");
        const _data: [*]QtC.KToolBar = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SetAutoSaveSettings(self: KXmlGuiWindow) void {
        qtc.KMainWindow_SetAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` group: KConfigGroup `
    ///
    pub fn SetAutoSaveSettings2(self: KXmlGuiWindow, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KMainWindow_SetAutoSaveSettings2(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ResetAutoSaveSettings(self: KXmlGuiWindow) void {
        qtc.KMainWindow_ResetAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn AutoSaveSettings(self: KXmlGuiWindow) bool {
        return qtc.KMainWindow_AutoSaveSettings(@ptrCast(self.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AutoSaveGroup(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMainWindow_AutoSaveGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.AutoSaveGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn AutoSaveConfigGroup(self: KXmlGuiWindow) KConfigGroup {
        return .{ .ptr = qtc.KMainWindow_AutoSaveConfigGroup(@ptrCast(self.ptr)) };
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setStateConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` configGroup: []const u8 `
    ///
    pub fn SetStateConfigGroup(self: KXmlGuiWindow, configGroup: []const u8) void {
        const configGroup_str = qtc.libqt_string{
            .len = configGroup.len,
            .data = configGroup.ptr,
        };
        qtc.KMainWindow_SetStateConfigGroup(@ptrCast(self.ptr), configGroup_str);
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#stateConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn StateConfigGroup(self: KXmlGuiWindow) KConfigGroup {
        return .{ .ptr = qtc.KMainWindow_StateConfigGroup(@ptrCast(self.ptr)) };
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveMainWindowSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn SaveMainWindowSettings(self: KXmlGuiWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KMainWindow_SaveMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#dbusName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DbusName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMainWindow_DbusName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.DbusName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` modified: bool `
    ///
    pub fn SetCaption2(self: KXmlGuiWindow, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SetCaption2(@ptrCast(self.ptr), caption_str, modified);
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, caption: [*:0]const u8, modified: bool) callconv(.c) void `
    ///
    pub fn OnSetCaption2(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KMainWindow_OnSetCaption2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCaption2` instead
    ///
    pub const QBaseSetCaption2 = SuperSetCaption2;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` modified: bool `
    ///
    pub fn SuperSetCaption2(self: KXmlGuiWindow, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SuperSetCaption2(@ptrCast(self.ptr), caption_str, modified);
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#appHelpActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn AppHelpActivated(self: KXmlGuiWindow) void {
        qtc.KMainWindow_AppHelpActivated(@ptrCast(self.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setSettingsDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SetSettingsDirty(self: KXmlGuiWindow) void {
        qtc.KMainWindow_SetSettingsDirty(@ptrCast(self.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` numberOfInstances: i32 `
    ///
    /// ` show: bool `
    ///
    pub fn Restore2(self: KXmlGuiWindow, numberOfInstances: i32, show: bool) bool {
        return qtc.KMainWindow_Restore2(@ptrCast(self.ptr), @bitCast(numberOfInstances), show);
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ToolBar1(self: KXmlGuiWindow, name: []const u8) KToolBar {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KMainWindow_ToolBar1(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn SetAutoSaveSettings1(self: KXmlGuiWindow, groupName: []const u8) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings1(@ptrCast(self.ptr), groupName_str);
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` saveWindowSize: bool `
    ///
    pub fn SetAutoSaveSettings22(self: KXmlGuiWindow, groupName: []const u8, saveWindowSize: bool) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings22(@ptrCast(self.ptr), groupName_str, saveWindowSize);
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` group: KConfigGroup `
    ///
    /// ` saveWindowSize: bool `
    ///
    pub fn SetAutoSaveSettings23(self: KXmlGuiWindow, group: anytype, saveWindowSize: bool) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KMainWindow_SetAutoSaveSettings23(@ptrCast(self.ptr), @ptrCast(group.ptr), saveWindowSize);
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IconSize(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.QMainWindow_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` iconSize: QSize `
    ///
    pub fn SetIconSize(self: KXmlGuiWindow, iconSize: anytype) void {
        comptime _ = @TypeOf(iconSize)._is_QSize;
        qtc.QMainWindow_SetIconSize(@ptrCast(self.ptr), @ptrCast(iconSize.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolButtonStyle `
    ///
    pub fn ToolButtonStyle(self: KXmlGuiWindow) i32 {
        return qtc.QMainWindow_ToolButtonStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn SetToolButtonStyle(self: KXmlGuiWindow, toolButtonStyle: i32) void {
        qtc.QMainWindow_SetToolButtonStyle(@ptrCast(self.ptr), @bitCast(toolButtonStyle));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsAnimated(self: KXmlGuiWindow) bool {
        return qtc.QMainWindow_IsAnimated(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsDockNestingEnabled(self: KXmlGuiWindow) bool {
        return qtc.QMainWindow_IsDockNestingEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn DocumentMode(self: KXmlGuiWindow) bool {
        return qtc.QMainWindow_DocumentMode(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setDocumentMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetDocumentMode(self: KXmlGuiWindow, enabled: bool) void {
        qtc.QMainWindow_SetDocumentMode(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qtabwidget_enums.TabShape `
    ///
    pub fn TabShape(self: KXmlGuiWindow) i32 {
        return qtc.QMainWindow_TabShape(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` tabShape: qtabwidget_enums.TabShape `
    ///
    pub fn SetTabShape(self: KXmlGuiWindow, tabShape: i32) void {
        qtc.QMainWindow_SetTabShape(@ptrCast(self.ptr), @bitCast(tabShape));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    /// ## Returns:
    ///
    /// ` qtabwidget_enums.TabPosition `
    ///
    pub fn TabPosition(self: KXmlGuiWindow, area: i32) i32 {
        return qtc.QMainWindow_TabPosition(@ptrCast(self.ptr), @bitCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setTabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` areas: flag of qnamespace_enums.DockWidgetArea `
    ///
    /// ` tabPosition: qtabwidget_enums.TabPosition `
    ///
    pub fn SetTabPosition(self: KXmlGuiWindow, areas: i32, tabPosition: i32) void {
        qtc.QMainWindow_SetTabPosition(@ptrCast(self.ptr), @bitCast(areas), @bitCast(tabPosition));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setDockOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` options: flag of qmainwindow_enums.DockOption `
    ///
    pub fn SetDockOptions(self: KXmlGuiWindow, options: i32) void {
        qtc.QMainWindow_SetDockOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#dockOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qmainwindow_enums.DockOption `
    ///
    pub fn DockOptions(self: KXmlGuiWindow) i32 {
        return qtc.QMainWindow_DockOptions(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` pos: QPoint `
    ///
    pub fn IsSeparator(self: KXmlGuiWindow, pos: anytype) bool {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.QMainWindow_IsSeparator(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MenuBar(self: KXmlGuiWindow) QMenuBar {
        return .{ .ptr = qtc.QMainWindow_MenuBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` menubar: QMenuBar `
    ///
    pub fn SetMenuBar(self: KXmlGuiWindow, menubar: anytype) void {
        comptime _ = @TypeOf(menubar)._is_QMenuBar;
        qtc.QMainWindow_SetMenuBar(@ptrCast(self.ptr), @ptrCast(menubar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MenuWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QMainWindow_MenuWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setMenuWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` menubar: QWidget `
    ///
    pub fn SetMenuWidget(self: KXmlGuiWindow, menubar: anytype) void {
        comptime _ = @TypeOf(menubar)._is_QWidget;
        qtc.QMainWindow_SetMenuWidget(@ptrCast(self.ptr), @ptrCast(menubar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn StatusBar(self: KXmlGuiWindow) QStatusBar {
        return .{ .ptr = qtc.QMainWindow_StatusBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setStatusBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` statusbar: QStatusBar `
    ///
    pub fn SetStatusBar(self: KXmlGuiWindow, statusbar: anytype) void {
        comptime _ = @TypeOf(statusbar)._is_QStatusBar;
        qtc.QMainWindow_SetStatusBar(@ptrCast(self.ptr), @ptrCast(statusbar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn CentralWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QMainWindow_CentralWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setCentralWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCentralWidget(self: KXmlGuiWindow, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QMainWindow_SetCentralWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn TakeCentralWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QMainWindow_TakeCentralWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` corner: qnamespace_enums.Corner `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    pub fn SetCorner(self: KXmlGuiWindow, corner: i32, area: i32) void {
        qtc.QMainWindow_SetCorner(@ptrCast(self.ptr), @bitCast(corner), @bitCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#corner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` corner: qnamespace_enums.Corner `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DockWidgetArea `
    ///
    pub fn Corner(self: KXmlGuiWindow, corner: i32) i32 {
        return qtc.QMainWindow_Corner(@ptrCast(self.ptr), @bitCast(corner));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn AddToolBarBreak(self: KXmlGuiWindow) void {
        qtc.QMainWindow_AddToolBarBreak(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBarBreak)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` before: QToolBar `
    ///
    pub fn InsertToolBarBreak(self: KXmlGuiWindow, before: anytype) void {
        comptime _ = @TypeOf(before)._is_QToolBar;
        qtc.QMainWindow_InsertToolBarBreak(@ptrCast(self.ptr), @ptrCast(before.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` area: qnamespace_enums.ToolBarArea `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn AddToolBar(self: KXmlGuiWindow, area: i32, toolbar: anytype) void {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_AddToolBar(@ptrCast(self.ptr), @bitCast(area), @ptrCast(toolbar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn AddToolBar2(self: KXmlGuiWindow, toolbar: anytype) void {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_AddToolBar2(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn AddToolBar3(self: KXmlGuiWindow, title: []const u8) QToolBar {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.QMainWindow_AddToolBar3(@ptrCast(self.ptr), title_str) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` before: QToolBar `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn InsertToolBar(self: KXmlGuiWindow, before: anytype, toolbar: anytype) void {
        comptime _ = @TypeOf(before)._is_QToolBar;
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_InsertToolBar(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(toolbar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn RemoveToolBar(self: KXmlGuiWindow, toolbar: anytype) void {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_RemoveToolBar(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBarBreak)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` before: QToolBar `
    ///
    pub fn RemoveToolBarBreak(self: KXmlGuiWindow, before: anytype) void {
        comptime _ = @TypeOf(before)._is_QToolBar;
        qtc.QMainWindow_RemoveToolBarBreak(@ptrCast(self.ptr), @ptrCast(before.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn UnifiedTitleAndToolBarOnMac(self: KXmlGuiWindow) bool {
        return qtc.QMainWindow_UnifiedTitleAndToolBarOnMac(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolBarArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` toolbar: QToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolBarArea `
    ///
    pub fn ToolBarArea(self: KXmlGuiWindow, toolbar: anytype) i32 {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        return qtc.QMainWindow_ToolBarArea(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolBarBreak)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn ToolBarBreak(self: KXmlGuiWindow, toolbar: anytype) bool {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        return qtc.QMainWindow_ToolBarBreak(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn AddDockWidget(self: KXmlGuiWindow, area: i32, dockwidget: anytype) void {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_AddDockWidget(@ptrCast(self.ptr), @bitCast(area), @ptrCast(dockwidget.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn AddDockWidget2(self: KXmlGuiWindow, area: i32, dockwidget: anytype, orientation: i32) void {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_AddDockWidget2(@ptrCast(self.ptr), @bitCast(area), @ptrCast(dockwidget.ptr), @bitCast(orientation));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#splitDockWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` after: QDockWidget `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SplitDockWidget(self: KXmlGuiWindow, after: anytype, dockwidget: anytype, orientation: i32) void {
        comptime _ = @TypeOf(after)._is_QDockWidget;
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_SplitDockWidget(@ptrCast(self.ptr), @ptrCast(after.ptr), @ptrCast(dockwidget.ptr), @bitCast(orientation));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifyDockWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` first: QDockWidget `
    ///
    /// ` second: QDockWidget `
    ///
    pub fn TabifyDockWidget(self: KXmlGuiWindow, first: anytype, second: anytype) void {
        comptime _ = @TypeOf(first)._is_QDockWidget;
        comptime _ = @TypeOf(second)._is_QDockWidget;
        qtc.QMainWindow_TabifyDockWidget(@ptrCast(self.ptr), @ptrCast(first.ptr), @ptrCast(second.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn TabifiedDockWidgets(self: KXmlGuiWindow, allocator: std.mem.Allocator, dockwidget: anytype) []QDockWidget {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        const _arr: qtc.libqt_list = qtc.QMainWindow_TabifiedDockWidgets(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDockWidget, _arr.len) catch @panic("kxmlguiwindow.TabifiedDockWidgets: Memory allocation failed");
        const _data: [*]QtC.QDockWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#removeDockWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn RemoveDockWidget(self: KXmlGuiWindow, dockwidget: anytype) void {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_RemoveDockWidget(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#restoreDockWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn RestoreDockWidget(self: KXmlGuiWindow, dockwidget: anytype) bool {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        return qtc.QMainWindow_RestoreDockWidget(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#dockWidgetArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DockWidgetArea `
    ///
    pub fn DockWidgetArea(self: KXmlGuiWindow, dockwidget: anytype) i32 {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        return qtc.QMainWindow_DockWidgetArea(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#resizeDocks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` docks: []QDockWidget `
    ///
    /// ` sizes: []i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn ResizeDocks(self: KXmlGuiWindow, docks: []QDockWidget, sizes: []i32, orientation: i32) void {
        const docks_list = qtc.libqt_list{
            .len = docks.len,
            .data = @ptrCast(docks.ptr),
        };
        const sizes_list = qtc.libqt_list{
            .len = sizes.len,
            .data = sizes.ptr,
        };
        qtc.QMainWindow_ResizeDocks(@ptrCast(self.ptr), docks_list, sizes_list, @bitCast(orientation));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveState(self: KXmlGuiWindow, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kxmlguiwindow.SaveState: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: []u8 `
    ///
    pub fn RestoreState(self: KXmlGuiWindow, state: []u8) bool {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.QMainWindow_RestoreState(@ptrCast(self.ptr), state_str);
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAnimated(self: KXmlGuiWindow, enabled: bool) void {
        qtc.QMainWindow_SetAnimated(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setDockNestingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetDockNestingEnabled(self: KXmlGuiWindow, enabled: bool) void {
        qtc.QMainWindow_SetDockNestingEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setUnifiedTitleAndToolBarOnMac)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` set: bool `
    ///
    pub fn SetUnifiedTitleAndToolBarOnMac(self: KXmlGuiWindow, set: bool) void {
        qtc.QMainWindow_SetUnifiedTitleAndToolBarOnMac(@ptrCast(self.ptr), set);
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` iconSize: QSize `
    ///
    pub fn IconSizeChanged(self: KXmlGuiWindow, iconSize: anytype) void {
        comptime _ = @TypeOf(iconSize)._is_QSize;
        qtc.QMainWindow_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(iconSize.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, iconSize: QSize) callconv(.c) void `
    ///
    pub fn OnIconSizeChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QSize) callconv(.c) void) void {
        qtc.QMainWindow_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn ToolButtonStyleChanged(self: KXmlGuiWindow, toolButtonStyle: i32) void {
        qtc.QMainWindow_ToolButtonStyleChanged(@ptrCast(self.ptr), @bitCast(toolButtonStyle));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, toolButtonStyle: qnamespace_enums.ToolButtonStyle) callconv(.c) void `
    ///
    pub fn OnToolButtonStyleChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32) callconv(.c) void) void {
        qtc.QMainWindow_Connect_ToolButtonStyleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` dockWidget: QDockWidget `
    ///
    pub fn TabifiedDockWidgetActivated(self: KXmlGuiWindow, dockWidget: anytype) void {
        comptime _ = @TypeOf(dockWidget)._is_QDockWidget;
        qtc.QMainWindow_TabifiedDockWidgetActivated(@ptrCast(self.ptr), @ptrCast(dockWidget.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, dockWidget: QDockWidget) callconv(.c) void `
    ///
    pub fn OnTabifiedDockWidgetActivated(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDockWidget) callconv(.c) void) void {
        qtc.QMainWindow_Connect_TabifiedDockWidgetActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` area: qnamespace_enums.ToolBarArea `
    ///
    pub fn AddToolBarBreak1(self: KXmlGuiWindow, area: i32) void {
        qtc.QMainWindow_AddToolBarBreak1(@ptrCast(self.ptr), @bitCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` version: i32 `
    ///
    pub fn SaveState1(self: KXmlGuiWindow, allocator: std.mem.Allocator, version: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState1(@ptrCast(self.ptr), @bitCast(version));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kxmlguiwindow.SaveState1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: []u8 `
    ///
    /// ` version: i32 `
    ///
    pub fn RestoreState2(self: KXmlGuiWindow, state: []u8, version: i32) bool {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.QMainWindow_RestoreState2(@ptrCast(self.ptr), state_str, @bitCast(version));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn WinId(self: KXmlGuiWindow) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn CreateWinId(self: KXmlGuiWindow) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn InternalWinId(self: KXmlGuiWindow) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn EffectiveWinId(self: KXmlGuiWindow) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Style(self: KXmlGuiWindow) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KXmlGuiWindow, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsTopLevel(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsWindow(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsModal(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KXmlGuiWindow, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsEnabled(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KXmlGuiWindow, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KXmlGuiWindow, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KXmlGuiWindow, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KXmlGuiWindow, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn FrameGeometry(self: KXmlGuiWindow) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Geometry(self: KXmlGuiWindow) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn NormalGeometry(self: KXmlGuiWindow) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn X(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Y(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Pos(self: KXmlGuiWindow) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn FrameSize(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Size(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Width(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Height(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Rect(self: KXmlGuiWindow) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ChildrenRect(self: KXmlGuiWindow) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ChildrenRegion(self: KXmlGuiWindow) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MinimumSize(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MaximumSize(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MinimumWidth(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MinimumHeight(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MaximumWidth(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MaximumHeight(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KXmlGuiWindow, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KXmlGuiWindow, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KXmlGuiWindow, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KXmlGuiWindow, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KXmlGuiWindow, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KXmlGuiWindow, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KXmlGuiWindow, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KXmlGuiWindow, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SizeIncrement(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KXmlGuiWindow, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KXmlGuiWindow, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn BaseSize(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KXmlGuiWindow, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KXmlGuiWindow, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KXmlGuiWindow, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KXmlGuiWindow, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KXmlGuiWindow, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KXmlGuiWindow, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KXmlGuiWindow, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KXmlGuiWindow, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KXmlGuiWindow, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KXmlGuiWindow, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KXmlGuiWindow, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KXmlGuiWindow, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KXmlGuiWindow, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KXmlGuiWindow, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KXmlGuiWindow, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KXmlGuiWindow, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KXmlGuiWindow, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KXmlGuiWindow, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Window(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn NativeParentWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn TopLevelWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Palette(self: KXmlGuiWindow) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KXmlGuiWindow, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KXmlGuiWindow, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KXmlGuiWindow, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Font(self: KXmlGuiWindow) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KXmlGuiWindow, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn FontMetrics(self: KXmlGuiWindow) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn FontInfo(self: KXmlGuiWindow) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Cursor(self: KXmlGuiWindow) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KXmlGuiWindow, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn UnsetCursor(self: KXmlGuiWindow) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KXmlGuiWindow, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn HasMouseTracking(self: KXmlGuiWindow) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn UnderMouse(self: KXmlGuiWindow) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KXmlGuiWindow, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn HasTabletTracking(self: KXmlGuiWindow) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KXmlGuiWindow, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KXmlGuiWindow, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Mask(self: KXmlGuiWindow) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ClearMask(self: KXmlGuiWindow) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KXmlGuiWindow, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KXmlGuiWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Grab(self: KXmlGuiWindow) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn GraphicsEffect(self: KXmlGuiWindow) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KXmlGuiWindow, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KXmlGuiWindow, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KXmlGuiWindow, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KXmlGuiWindow, windowTitle: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KXmlGuiWindow, styleSheet: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KXmlGuiWindow, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn WindowIcon(self: KXmlGuiWindow) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KXmlGuiWindow, windowIconText: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KXmlGuiWindow, windowRole: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KXmlGuiWindow, filePath: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KXmlGuiWindow, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn WindowOpacity(self: KXmlGuiWindow) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsWindowModified(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KXmlGuiWindow, toolTip: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KXmlGuiWindow, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ToolTipDuration(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KXmlGuiWindow, statusTip: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KXmlGuiWindow, whatsThis: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KXmlGuiWindow, name: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KXmlGuiWindow, description: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KXmlGuiWindow, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn UnsetLayoutDirection(self: KXmlGuiWindow) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KXmlGuiWindow, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Locale(self: KXmlGuiWindow) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn UnsetLocale(self: KXmlGuiWindow) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsRightToLeft(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsLeftToRight(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SetFocus(self: KXmlGuiWindow) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsActiveWindow(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ActivateWindow(self: KXmlGuiWindow) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ClearFocus(self: KXmlGuiWindow) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KXmlGuiWindow, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KXmlGuiWindow, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn HasFocus(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KXmlGuiWindow, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn FocusProxy(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KXmlGuiWindow, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn GrabMouse(self: KXmlGuiWindow) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ReleaseMouse(self: KXmlGuiWindow) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn GrabKeyboard(self: KXmlGuiWindow) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ReleaseKeyboard(self: KXmlGuiWindow) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KXmlGuiWindow, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KXmlGuiWindow, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KXmlGuiWindow, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KXmlGuiWindow, id: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn UpdatesEnabled(self: KXmlGuiWindow) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KXmlGuiWindow, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn GraphicsProxyWidget(self: KXmlGuiWindow) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Update(self: KXmlGuiWindow) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Repaint(self: KXmlGuiWindow) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KXmlGuiWindow, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KXmlGuiWindow, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KXmlGuiWindow, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Show(self: KXmlGuiWindow) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Hide(self: KXmlGuiWindow) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ShowMinimized(self: KXmlGuiWindow) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ShowMaximized(self: KXmlGuiWindow) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ShowFullScreen(self: KXmlGuiWindow) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ShowNormal(self: KXmlGuiWindow) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Close(self: KXmlGuiWindow) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Raise(self: KXmlGuiWindow) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Lower(self: KXmlGuiWindow) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KXmlGuiWindow, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KXmlGuiWindow, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KXmlGuiWindow, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KXmlGuiWindow, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KXmlGuiWindow, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kxmlguiwindow.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KXmlGuiWindow, geometry: []u8) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn AdjustSize(self: KXmlGuiWindow) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsVisible(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KXmlGuiWindow, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsHidden(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsMinimized(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsMaximized(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsFullScreen(self: KXmlGuiWindow) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KXmlGuiWindow, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KXmlGuiWindow, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SizePolicy(self: KXmlGuiWindow) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KXmlGuiWindow, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KXmlGuiWindow, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn VisibleRegion(self: KXmlGuiWindow) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KXmlGuiWindow, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KXmlGuiWindow, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ContentsMargins(self: KXmlGuiWindow) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ContentsRect(self: KXmlGuiWindow) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Layout(self: KXmlGuiWindow) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KXmlGuiWindow, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn UpdateGeometry(self: KXmlGuiWindow) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KXmlGuiWindow, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KXmlGuiWindow, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KXmlGuiWindow, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KXmlGuiWindow, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn FocusWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn NextInFocusChain(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn PreviousInFocusChain(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn AcceptDrops(self: KXmlGuiWindow) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KXmlGuiWindow, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KXmlGuiWindow, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KXmlGuiWindow, actions: []QAction) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KXmlGuiWindow, before: anytype, actions: []QAction) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KXmlGuiWindow, before: anytype, action: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KXmlGuiWindow, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KXmlGuiWindow, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kxmlguiwindow.Actions: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KXmlGuiWindow, text: []const u8) QAction {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KXmlGuiWindow, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KXmlGuiWindow, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KXmlGuiWindow, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ParentWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KXmlGuiWindow, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KXmlGuiWindow, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KXmlGuiWindow, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KXmlGuiWindow, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KXmlGuiWindow, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KXmlGuiWindow, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KXmlGuiWindow, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KXmlGuiWindow, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn EnsurePolished(self: KXmlGuiWindow) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KXmlGuiWindow, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn AutoFillBackground(self: KXmlGuiWindow) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KXmlGuiWindow, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn BackingStore(self: KXmlGuiWindow) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn WindowHandle(self: KXmlGuiWindow) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Screen(self: KXmlGuiWindow) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KXmlGuiWindow, screen: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KXmlGuiWindow, title: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KXmlGuiWindow, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KXmlGuiWindow, iconText: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KXmlGuiWindow, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KXmlGuiWindow) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KXmlGuiWindow, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KXmlGuiWindow, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KXmlGuiWindow, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KXmlGuiWindow, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KXmlGuiWindow, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KXmlGuiWindow, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KXmlGuiWindow, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KXmlGuiWindow, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KXmlGuiWindow, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KXmlGuiWindow, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KXmlGuiWindow, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KXmlGuiWindow, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KXmlGuiWindow, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KXmlGuiWindow, param1: i32, on: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KXmlGuiWindow, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsWidgetType(self: KXmlGuiWindow) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsWindowType(self: KXmlGuiWindow) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn IsQuickItemType(self: KXmlGuiWindow) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SignalsBlocked(self: KXmlGuiWindow) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KXmlGuiWindow, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Thread(self: KXmlGuiWindow) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KXmlGuiWindow, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KXmlGuiWindow, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KXmlGuiWindow, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KXmlGuiWindow, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KXmlGuiWindow, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KXmlGuiWindow, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kxmlguiwindow.Children: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KXmlGuiWindow, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KXmlGuiWindow, obj: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KXmlGuiWindow, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Disconnect3(self: KXmlGuiWindow) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KXmlGuiWindow, receiver: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn DumpObjectTree(self: KXmlGuiWindow) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn DumpObjectInfo(self: KXmlGuiWindow) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KXmlGuiWindow, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KXmlGuiWindow, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KXmlGuiWindow, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kxmlguiwindow.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn BindingStorage(self: KXmlGuiWindow) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn BindingStorage2(self: KXmlGuiWindow) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Destroyed(self: KXmlGuiWindow) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Parent(self: KXmlGuiWindow) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KXmlGuiWindow, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn DeleteLater(self: KXmlGuiWindow) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KXmlGuiWindow, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KXmlGuiWindow, time: i64, timerType: i32) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KXmlGuiWindow, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KXmlGuiWindow, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KXmlGuiWindow, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KXmlGuiWindow, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KXmlGuiWindow, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn PaintingActive(self: KXmlGuiWindow) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn WidthMM(self: KXmlGuiWindow) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn HeightMM(self: KXmlGuiWindow) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn LogicalDpiX(self: KXmlGuiWindow) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn LogicalDpiY(self: KXmlGuiWindow) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn PhysicalDpiX(self: KXmlGuiWindow) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn PhysicalDpiY(self: KXmlGuiWindow) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn DevicePixelRatio(self: KXmlGuiWindow) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn DevicePixelRatioF(self: KXmlGuiWindow) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ColorCount(self: KXmlGuiWindow) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Depth(self: KXmlGuiWindow) i32 {
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

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#builderClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn BuilderClient(self: KXmlGuiWindow) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIBuilder_BuilderClient(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn SetBuilderClient(self: KXmlGuiWindow, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIBuilder_SetBuilderClient(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Widget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.KXMLGUIBuilder_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action(self: KXmlGuiWindow, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn SetXMLGUIBuildDocument(self: KXmlGuiWindow, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn XmlguiBuildDocument(self: KXmlGuiWindow) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` factory: KXMLGUIFactory `
    ///
    pub fn SetFactory(self: KXmlGuiWindow, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Factory(self: KXmlGuiWindow) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ParentClient(self: KXmlGuiWindow) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn InsertChildClient(self: KXmlGuiWindow, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn RemoveChildClient(self: KXmlGuiWindow, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildClients(self: KXmlGuiWindow, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("kxmlguiwindow.ChildClients: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn SetClientBuilder(self: KXmlGuiWindow, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ClientBuilder(self: KXmlGuiWindow) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ReloadXML(self: KXmlGuiWindow) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn PlugActionList(self: KXmlGuiWindow, name: []const u8, actionList: []QAction) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnplugActionList(self: KXmlGuiWindow, name: []const u8) void {
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
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kxmlguiwindow.FindMostRecentXMLFile: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionEnabled(self: KXmlGuiWindow, state: []const u8, action: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionDisabled(self: KXmlGuiWindow, state: []const u8, action: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: []const u8 `
    ///
    pub fn GetActionsToChangeForState(self: KXmlGuiWindow, state: []const u8) KXMLGUIClient__StateChange {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn BeginXMLPlug(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn EndXMLPlug(self: KXmlGuiWindow) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn PrepareXMLUnplug(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn ReplaceXMLFile(self: KXmlGuiWindow, xmlfile: []const u8, localxmlfile: []const u8) void {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn ReplaceXMLFile3(self: KXmlGuiWindow, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
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

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetCaption(self: KXmlGuiWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `SuperSetCaption` instead
    ///
    pub const QBaseSetCaption = SuperSetCaption;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SuperSetCaption(self: KXmlGuiWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetCaption(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetPlainCaption(self: KXmlGuiWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SetPlainCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `SuperSetPlainCaption` instead
    ///
    pub const QBaseSetPlainCaption = SuperSetPlainCaption;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SuperSetPlainCaption(self: KXmlGuiWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetPlainCaption(@ptrCast(self.ptr), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetPlainCaption(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetPlainCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` keyEvent: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KXmlGuiWindow, keyEvent: anytype) void {
        comptime _ = @TypeOf(keyEvent)._is_QKeyEvent;
        qtc.KXmlGuiWindow_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(keyEvent.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` keyEvent: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KXmlGuiWindow, keyEvent: anytype) void {
        comptime _ = @TypeOf(keyEvent)._is_QKeyEvent;
        qtc.KXmlGuiWindow_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(keyEvent.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, keyEvent: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QKeyEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn CloseEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.KXmlGuiWindow_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.KXmlGuiWindow_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QCloseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn QueryClose(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_QueryClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperQueryClose` instead
    ///
    pub const QBaseQueryClose = SuperQueryClose;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperQueryClose(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperQueryClose(@ptrCast(self.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnQueryClose(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn SaveProperties(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KXmlGuiWindow_SaveProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperSaveProperties` instead
    ///
    pub const QBaseSaveProperties = SuperSaveProperties;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn SuperSaveProperties(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KXmlGuiWindow_SuperSaveProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: KConfigGroup) callconv(.c) void `
    ///
    pub fn OnSaveProperties(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn ReadProperties(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KXmlGuiWindow_ReadProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperReadProperties` instead
    ///
    pub const QBaseReadProperties = SuperReadProperties;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn SuperReadProperties(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KXmlGuiWindow_SuperReadProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: KConfigGroup) callconv(.c) void `
    ///
    pub fn OnReadProperties(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnReadProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn SaveGlobalProperties(self: KXmlGuiWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KXmlGuiWindow_SaveGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `SuperSaveGlobalProperties` instead
    ///
    pub const QBaseSaveGlobalProperties = SuperSaveGlobalProperties;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn SuperSaveGlobalProperties(self: KXmlGuiWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KXmlGuiWindow_SuperSaveGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, sessionConfig: KConfig) callconv(.c) void `
    ///
    pub fn OnSaveGlobalProperties(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfig) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveGlobalProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn ReadGlobalProperties(self: KXmlGuiWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KXmlGuiWindow_ReadGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `SuperReadGlobalProperties` instead
    ///
    pub const QBaseReadGlobalProperties = SuperReadGlobalProperties;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn SuperReadGlobalProperties(self: KXmlGuiWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KXmlGuiWindow_SuperReadGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, sessionConfig: KConfig) callconv(.c) void `
    ///
    pub fn OnReadGlobalProperties(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfig) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnReadGlobalProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn CreatePopupMenu(self: KXmlGuiWindow) QMenu {
        return .{ .ptr = qtc.KXmlGuiWindow_CreatePopupMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCreatePopupMenu` instead
    ///
    pub const QBaseCreatePopupMenu = SuperCreatePopupMenu;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperCreatePopupMenu(self: KXmlGuiWindow) QMenu {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperCreatePopupMenu(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QMenu `
    ///
    pub fn OnCreatePopupMenu(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QMenu) void {
        qtc.KXmlGuiWindow_OnCreatePopupMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KXmlGuiWindow_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KXmlGuiWindow_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QContextMenuEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn DevType(self: KXmlGuiWindow) i32 {
        return qtc.KXmlGuiWindow_DevType(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperDevType(self: KXmlGuiWindow) i32 {
        return qtc.KXmlGuiWindow_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KXmlGuiWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KXmlGuiWindow, visible: bool) void {
        qtc.KXmlGuiWindow_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KXmlGuiWindow, visible: bool) void {
        qtc.KXmlGuiWindow_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SizeHint(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.KXmlGuiWindow_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperSizeHint(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.KXmlGuiWindow_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn MinimumSizeHint(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.KXmlGuiWindow_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperMinimumSizeHint(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.KXmlGuiWindow_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KXmlGuiWindow, param1: i32) i32 {
        return qtc.KXmlGuiWindow_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KXmlGuiWindow, param1: i32) i32 {
        return qtc.KXmlGuiWindow_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn HasHeightForWidth(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperHasHeightForWidth(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn PaintEngine(self: KXmlGuiWindow) QPaintEngine {
        return .{ .ptr = qtc.KXmlGuiWindow_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperPaintEngine(self: KXmlGuiWindow) QPaintEngine {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KXmlGuiWindow_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KXmlGuiWindow_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KXmlGuiWindow_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QWheelEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KXmlGuiWindow_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KXmlGuiWindow_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QKeyEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KXmlGuiWindow_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KXmlGuiWindow_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QFocusEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KXmlGuiWindow_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KXmlGuiWindow_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QFocusEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KXmlGuiWindow_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KXmlGuiWindow_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEnterEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KXmlGuiWindow_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KXmlGuiWindow_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KXmlGuiWindow_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KXmlGuiWindow_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QPaintEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KXmlGuiWindow_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KXmlGuiWindow_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMoveEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KXmlGuiWindow_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KXmlGuiWindow_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QResizeEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KXmlGuiWindow_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KXmlGuiWindow_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QTabletEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KXmlGuiWindow_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KXmlGuiWindow_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QActionEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KXmlGuiWindow_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KXmlGuiWindow_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDragEnterEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KXmlGuiWindow_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KXmlGuiWindow_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDragMoveEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KXmlGuiWindow_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KXmlGuiWindow_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KXmlGuiWindow_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KXmlGuiWindow_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDropEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KXmlGuiWindow_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KXmlGuiWindow_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QShowEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KXmlGuiWindow_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KXmlGuiWindow_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QHideEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KXmlGuiWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KXmlGuiWindow_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KXmlGuiWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KXmlGuiWindow_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KXmlGuiWindow_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KXmlGuiWindow_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KXmlGuiWindow, param1: i32) i32 {
        return qtc.KXmlGuiWindow_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KXmlGuiWindow, param1: i32) i32 {
        return qtc.KXmlGuiWindow_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KXmlGuiWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KXmlGuiWindow_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KXmlGuiWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KXmlGuiWindow_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QPainter) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KXmlGuiWindow, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KXmlGuiWindow_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KXmlGuiWindow, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KXmlGuiWindow_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KXmlGuiWindow_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SharedPainter(self: KXmlGuiWindow) QPainter {
        return .{ .ptr = qtc.KXmlGuiWindow_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperSharedPainter(self: KXmlGuiWindow) QPainter {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KXmlGuiWindow_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KXmlGuiWindow_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KXmlGuiWindow_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QInputMethodEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KXmlGuiWindow, param1: i32) QVariant {
        return .{ .ptr = qtc.KXmlGuiWindow_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KXmlGuiWindow, param1: i32) QVariant {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32) callconv(.c) QVariant) void {
        qtc.KXmlGuiWindow_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KXmlGuiWindow, next: bool) bool {
        return qtc.KXmlGuiWindow_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KXmlGuiWindow, next: bool) bool {
        return qtc.KXmlGuiWindow_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, bool) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KXmlGuiWindow, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KXmlGuiWindow_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KXmlGuiWindow, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KXmlGuiWindow_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QObject, QEvent) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KXmlGuiWindow_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KXmlGuiWindow_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QTimerEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KXmlGuiWindow_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KXmlGuiWindow_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QChildEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KXmlGuiWindow_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KXmlGuiWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KXmlGuiWindow_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KXmlGuiWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXmlGuiWindow_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KXmlGuiWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXmlGuiWindow_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KXmlGuiWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXmlGuiWindow_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KXmlGuiWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXmlGuiWindow_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContainerTags(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_ContainerTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.ContainerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.ContainerTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperContainerTags` instead
    ///
    pub const QBaseContainerTags = SuperContainerTags;

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperContainerTags(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_SuperContainerTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.ContainerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.ContainerTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnContainerTags(self: KXmlGuiWindow, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KXmlGuiWindow_OnContainerTags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn CreateContainer(self: KXmlGuiWindow, parent: anytype, index: i32, element: anytype, containerAction: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        return .{ .ptr = qtc.KXmlGuiWindow_CreateContainer(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr), @ptrCast(containerAction.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCreateContainer` instead
    ///
    pub const QBaseCreateContainer = SuperCreateContainer;

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn SuperCreateContainer(self: KXmlGuiWindow, parent: anytype, index: i32, element: anytype, containerAction: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        return .{ .ptr = qtc.KXmlGuiWindow_SuperCreateContainer(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr), @ptrCast(containerAction.ptr)) };
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, parent: QWidget, index: i32, element: QDomElement, containerAction: QAction) callconv(.c) QWidget `
    ///
    pub fn OnCreateContainer(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QWidget, i32, QDomElement, QAction) callconv(.c) QWidget) void {
        qtc.KXmlGuiWindow_OnCreateContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` container: QWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn RemoveContainer(self: KXmlGuiWindow, container: anytype, parent: anytype, element: anytype, containerAction: anytype) void {
        comptime _ = @TypeOf(container)._is_QWidget;
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        qtc.KXmlGuiWindow_RemoveContainer(@ptrCast(self.ptr), @ptrCast(container.ptr), @ptrCast(parent.ptr), @ptrCast(element.ptr), @ptrCast(containerAction.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveContainer` instead
    ///
    pub const QBaseRemoveContainer = SuperRemoveContainer;

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` container: QWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn SuperRemoveContainer(self: KXmlGuiWindow, container: anytype, parent: anytype, element: anytype, containerAction: anytype) void {
        comptime _ = @TypeOf(container)._is_QWidget;
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        qtc.KXmlGuiWindow_SuperRemoveContainer(@ptrCast(self.ptr), @ptrCast(container.ptr), @ptrCast(parent.ptr), @ptrCast(element.ptr), @ptrCast(containerAction.ptr));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, container: QWidget, parent: QWidget, element: QDomElement, containerAction: QAction) callconv(.c) void `
    ///
    pub fn OnRemoveContainer(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QWidget, QWidget, QDomElement, QAction) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnRemoveContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomTags(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_CustomTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.CustomTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.CustomTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperCustomTags` instead
    ///
    pub const QBaseCustomTags = SuperCustomTags;

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperCustomTags(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_SuperCustomTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.CustomTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.CustomTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnCustomTags(self: KXmlGuiWindow, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KXmlGuiWindow_OnCustomTags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    pub fn CreateCustomElement(self: KXmlGuiWindow, parent: anytype, index: i32, element: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXmlGuiWindow_CreateCustomElement(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCreateCustomElement` instead
    ///
    pub const QBaseCreateCustomElement = SuperCreateCustomElement;

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    pub fn SuperCreateCustomElement(self: KXmlGuiWindow, parent: anytype, index: i32, element: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXmlGuiWindow_SuperCreateCustomElement(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(element.ptr)) };
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, parent: QWidget, index: i32, element: QDomElement) callconv(.c) QAction `
    ///
    pub fn OnCreateCustomElement(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QWidget, i32, QDomElement) callconv(.c) QAction) void {
        qtc.KXmlGuiWindow_OnCreateCustomElement(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` element: QDomElement `
    ///
    pub fn Action2(self: KXmlGuiWindow, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXmlGuiWindow_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAction2` instead
    ///
    pub const QBaseAction2 = SuperAction2;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` element: QDomElement `
    ///
    pub fn SuperAction2(self: KXmlGuiWindow, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXmlGuiWindow_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, element: QDomElement) callconv(.c) QAction `
    ///
    pub fn OnAction2(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDomElement) callconv(.c) QAction) void {
        qtc.KXmlGuiWindow_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ActionCollection(self: KXmlGuiWindow) KActionCollection {
        return .{ .ptr = qtc.KXmlGuiWindow_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperActionCollection` instead
    ///
    pub const QBaseActionCollection = SuperActionCollection;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperActionCollection(self: KXmlGuiWindow) KActionCollection {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperActionCollection(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) KActionCollection `
    ///
    pub fn OnActionCollection(self: KXmlGuiWindow, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KXmlGuiWindow_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperComponentName` instead
    ///
    pub const QBaseComponentName = SuperComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperComponentName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnComponentName(self: KXmlGuiWindow, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn DomDocument(self: KXmlGuiWindow) QDomDocument {
        return .{ .ptr = qtc.KXmlGuiWindow_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDomDocument` instead
    ///
    pub const QBaseDomDocument = SuperDomDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperDomDocument(self: KXmlGuiWindow) QDomDocument {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperDomDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QDomDocument `
    ///
    pub fn OnDomDocument(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KXmlGuiWindow_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn XmlFile(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperXmlFile` instead
    ///
    pub const QBaseXmlFile = SuperXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperXmlFile(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnXmlFile(self: KXmlGuiWindow, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalXMLFile(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperLocalXMLFile` instead
    ///
    pub const QBaseLocalXMLFile = SuperLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperLocalXMLFile(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalXMLFile(self: KXmlGuiWindow, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SetComponentName(self: KXmlGuiWindow, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXmlGuiWindow_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `SuperSetComponentName` instead
    ///
    pub const QBaseSetComponentName = SuperSetComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SuperSetComponentName(self: KXmlGuiWindow, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetComponentName(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SetXMLFile(self: KXmlGuiWindow, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `SuperSetXMLFile` instead
    ///
    pub const QBaseSetXMLFile = SuperSetXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SuperSetXMLFile(self: KXmlGuiWindow, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void `
    ///
    pub fn OnSetXMLFile(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetLocalXMLFile(self: KXmlGuiWindow, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `SuperSetLocalXMLFile` instead
    ///
    pub const QBaseSetLocalXMLFile = SuperSetLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SuperSetLocalXMLFile(self: KXmlGuiWindow, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, file: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetLocalXMLFile(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SetXML(self: KXmlGuiWindow, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXmlGuiWindow_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `SuperSetXML` instead
    ///
    pub const QBaseSetXML = SuperSetXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetXML(self: KXmlGuiWindow, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, document: [*:0]const u8, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetXML(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SetDOMDocument(self: KXmlGuiWindow, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KXmlGuiWindow_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `SuperSetDOMDocument` instead
    ///
    pub const QBaseSetDOMDocument = SuperSetDOMDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetDOMDocument(self: KXmlGuiWindow, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KXmlGuiWindow_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, document: QDomDocument, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetDOMDocument(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDomDocument, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn StateChanged(self: KXmlGuiWindow, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `SuperStateChanged` instead
    ///
    pub const QBaseStateChanged = SuperStateChanged;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn SuperStateChanged(self: KXmlGuiWindow, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: KConfig `
    ///
    /// ` param2: i32 `
    ///
    pub fn SavePropertiesInternal(self: KXmlGuiWindow, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KXmlGuiWindow_SavePropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `SuperSavePropertiesInternal` instead
    ///
    pub const QBaseSavePropertiesInternal = SuperSavePropertiesInternal;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: KConfig `
    ///
    /// ` param2: i32 `
    ///
    pub fn SuperSavePropertiesInternal(self: KXmlGuiWindow, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KXmlGuiWindow_SuperSavePropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: KConfig, param2: i32) callconv(.c) void `
    ///
    pub fn OnSavePropertiesInternal(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfig, i32) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSavePropertiesInternal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: KConfig `
    ///
    /// ` param2: i32 `
    ///
    pub fn ReadPropertiesInternal(self: KXmlGuiWindow, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_KConfig;
        return qtc.KXmlGuiWindow_ReadPropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `SuperReadPropertiesInternal` instead
    ///
    pub const QBaseReadPropertiesInternal = SuperReadPropertiesInternal;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: KConfig `
    ///
    /// ` param2: i32 `
    ///
    pub fn SuperReadPropertiesInternal(self: KXmlGuiWindow, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_KConfig;
        return qtc.KXmlGuiWindow_SuperReadPropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: KConfig, param2: i32) callconv(.c) bool `
    ///
    pub fn OnReadPropertiesInternal(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfig, i32) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnReadPropertiesInternal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SettingsDirty(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SettingsDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSettingsDirty` instead
    ///
    pub const QBaseSettingsDirty = SuperSettingsDirty;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperSettingsDirty(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperSettingsDirty(@ptrCast(self.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSettingsDirty(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnSettingsDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SaveAutoSaveSettings(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SaveAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSaveAutoSaveSettings` instead
    ///
    pub const QBaseSaveAutoSaveSettings = SuperSaveAutoSaveSettings;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperSaveAutoSaveSettings(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperSaveAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSaveAutoSaveSettings(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveAutoSaveSettings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn UpdateMicroFocus(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperUpdateMicroFocus(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Create(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_Create(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperCreate(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Destroy(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperDestroy(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn FocusNextChild(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperFocusNextChild(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn FocusPreviousChild(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperFocusPreviousChild(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Sender(self: KXmlGuiWindow) QObject {
        return .{ .ptr = qtc.KXmlGuiWindow_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperSender(self: KXmlGuiWindow) QObject {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QObject) void {
        qtc.KXmlGuiWindow_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SenderSignalIndex(self: KXmlGuiWindow) i32 {
        return qtc.KXmlGuiWindow_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperSenderSignalIndex(self: KXmlGuiWindow) i32 {
        return qtc.KXmlGuiWindow_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KXmlGuiWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KXmlGuiWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXmlGuiWindow_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KXmlGuiWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXmlGuiWindow_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KXmlGuiWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KXmlGuiWindow_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KXmlGuiWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KXmlGuiWindow_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMetaMethod) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KXmlGuiWindow, metricA: i32, metricB: i32) f64 {
        return qtc.KXmlGuiWindow_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KXmlGuiWindow, metricA: i32, metricB: i32) f64 {
        return qtc.KXmlGuiWindow_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32, i32) callconv(.c) f64) void {
        qtc.KXmlGuiWindow_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StandardsXmlFileLocation(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperStandardsXmlFileLocation` instead
    ///
    pub const QBaseStandardsXmlFileLocation = SuperStandardsXmlFileLocation;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperStandardsXmlFileLocation(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStandardsXmlFileLocation(self: KXmlGuiWindow, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn LoadStandardsXmlFile(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperLoadStandardsXmlFile` instead
    ///
    pub const QBaseLoadStandardsXmlFile = SuperLoadStandardsXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn SuperLoadStandardsXmlFile(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnLoadStandardsXmlFile(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#dtor.KXmlGuiWindow)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn Delete(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#public-types)
pub const enums = struct {
    pub const StandardWindowOption = enum(i32) {
        pub const ToolBar: i32 = 1;
        pub const Keys: i32 = 2;
        pub const StatusBar: i32 = 4;
        pub const Save: i32 = 8;
        pub const Create: i32 = 16;
        pub const Default: i32 = 31;
    };
};
