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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KXmlGuiWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) KXmlGuiWindow {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KXmlGuiWindow_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KXmlGuiWindow object in C++ memory
    ///
    pub fn new2() KXmlGuiWindow {
        return .{ .ptr = qtc.KXmlGuiWindow_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KXmlGuiWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn new3(_parent: anytype, flags: i32) KXmlGuiWindow {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KXmlGuiWindow_new3(@ptrCast(_parent.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn metaObject(self: KXmlGuiWindow) QMetaObject {
        return .{ .ptr = qtc.KXmlGuiWindow_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KXmlGuiWindow_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superMetaObject(self: KXmlGuiWindow) QMetaObject {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KXmlGuiWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXmlGuiWindow_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KXmlGuiWindow_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KXmlGuiWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXmlGuiWindow_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KXmlGuiWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KXmlGuiWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHelpMenuEnabled` instead
    ///
    pub const SetHelpMenuEnabled = setHelpMenuEnabled;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn setHelpMenuEnabled(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SetHelpMenuEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHelpMenuEnabled` instead
    ///
    pub const IsHelpMenuEnabled = isHelpMenuEnabled;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isHelpMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isHelpMenuEnabled(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_IsHelpMenuEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `guiFactory` instead
    ///
    pub const GuiFactory = guiFactory;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn guiFactory(self: KXmlGuiWindow) KXMLGUIFactory {
        return .{ .ptr = qtc.KXmlGuiWindow_GuiFactory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGuiFactory` instead
    ///
    pub const OnGuiFactory = onGuiFactory;

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
    pub fn onGuiFactory(self: KXmlGuiWindow, callback: *const fn () callconv(.c) KXMLGUIFactory) void {
        qtc.KXmlGuiWindow_OnGuiFactory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGuiFactory` instead
    ///
    pub const SuperGuiFactory = superGuiFactory;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superGuiFactory(self: KXmlGuiWindow) KXMLGUIFactory {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperGuiFactory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createGUI` instead
    ///
    pub const CreateGUI = createGUI;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn createGUI(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_CreateGUI(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStandardToolBarMenuEnabled` instead
    ///
    pub const SetStandardToolBarMenuEnabled = setStandardToolBarMenuEnabled;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setStandardToolBarMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` showToolBarMenu: bool `
    ///
    pub fn setStandardToolBarMenuEnabled(self: KXmlGuiWindow, showToolBarMenu: bool) void {
        qtc.KXmlGuiWindow_SetStandardToolBarMenuEnabled(@ptrCast(self.ptr), showToolBarMenu);
    }

    /// ### DEPRECATED: Use `isStandardToolBarMenuEnabled` instead
    ///
    pub const IsStandardToolBarMenuEnabled = isStandardToolBarMenuEnabled;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isStandardToolBarMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isStandardToolBarMenuEnabled(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_IsStandardToolBarMenuEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createStandardStatusBarAction` instead
    ///
    pub const CreateStandardStatusBarAction = createStandardStatusBarAction;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createStandardStatusBarAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn createStandardStatusBarAction(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_CreateStandardStatusBarAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setupGUI` instead
    ///
    pub const SetupGUI = setupGUI;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn setupGUI(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SetupGUI(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setupGUI2` instead
    ///
    pub const SetupGUI2 = setupGUI2;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` defaultSize: QSize `
    ///
    pub fn setupGUI2(self: KXmlGuiWindow, defaultSize: anytype) void {
        comptime _ = @TypeOf(defaultSize)._is_QSize;
        qtc.KXmlGuiWindow_SetupGUI2(@ptrCast(self.ptr), @ptrCast(defaultSize.ptr));
    }

    /// ### DEPRECATED: Use `toolBarMenuAction` instead
    ///
    pub const ToolBarMenuAction = toolBarMenuAction;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#toolBarMenuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn toolBarMenuAction(self: KXmlGuiWindow) QAction {
        return .{ .ptr = qtc.KXmlGuiWindow_ToolBarMenuAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setupToolbarMenuActions` instead
    ///
    pub const SetupToolbarMenuActions = setupToolbarMenuActions;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupToolbarMenuActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn setupToolbarMenuActions(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SetupToolbarMenuActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toolBarNames` instead
    ///
    pub const ToolBarNames = toolBarNames;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#toolBarNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolBarNames(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_ToolBarNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KXmlGuiWindow.toolBarNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXmlGuiWindow.toolBarNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `finalizeGUI` instead
    ///
    pub const FinalizeGUI = finalizeGUI;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#finalizeGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` force: bool `
    ///
    pub fn finalizeGUI(self: KXmlGuiWindow, force: bool) void {
        qtc.KXmlGuiWindow_FinalizeGUI(@ptrCast(self.ptr), force);
    }

    /// ### DEPRECATED: Use `applyMainWindowSettings` instead
    ///
    pub const ApplyMainWindowSettings = applyMainWindowSettings;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn applyMainWindowSettings(self: KXmlGuiWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KXmlGuiWindow_ApplyMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `onApplyMainWindowSettings` instead
    ///
    pub const OnApplyMainWindowSettings = onApplyMainWindowSettings;

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
    pub fn onApplyMainWindowSettings(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnApplyMainWindowSettings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superApplyMainWindowSettings` instead
    ///
    pub const SuperApplyMainWindowSettings = superApplyMainWindowSettings;

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
    pub fn superApplyMainWindowSettings(self: KXmlGuiWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KXmlGuiWindow_SuperApplyMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `setCommandBarEnabled` instead
    ///
    pub const SetCommandBarEnabled = setCommandBarEnabled;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setCommandBarEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` showCommandBar: bool `
    ///
    pub fn setCommandBarEnabled(self: KXmlGuiWindow, showCommandBar: bool) void {
        qtc.KXmlGuiWindow_SetCommandBarEnabled(@ptrCast(self.ptr), showCommandBar);
    }

    /// ### DEPRECATED: Use `isCommandBarEnabled` instead
    ///
    pub const IsCommandBarEnabled = isCommandBarEnabled;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isCommandBarEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isCommandBarEnabled(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_IsCommandBarEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `configureToolbars` instead
    ///
    pub const ConfigureToolbars = configureToolbars;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn configureToolbars(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_ConfigureToolbars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConfigureToolbars` instead
    ///
    pub const OnConfigureToolbars = onConfigureToolbars;

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
    pub fn onConfigureToolbars(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnConfigureToolbars(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConfigureToolbars` instead
    ///
    pub const SuperConfigureToolbars = superConfigureToolbars;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superConfigureToolbars(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperConfigureToolbars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotStateChanged` instead
    ///
    pub const SlotStateChanged = slotStateChanged;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` newstate: []const u8 `
    ///
    pub fn slotStateChanged(self: KXmlGuiWindow, newstate: []const u8) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SlotStateChanged(@ptrCast(self.ptr), newstate_str);
    }

    /// ### DEPRECATED: Use `onSlotStateChanged` instead
    ///
    pub const OnSlotStateChanged = onSlotStateChanged;

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
    pub fn onSlotStateChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSlotStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotStateChanged` instead
    ///
    pub const SuperSlotStateChanged = superSlotStateChanged;

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
    pub fn superSlotStateChanged(self: KXmlGuiWindow, newstate: []const u8) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SuperSlotStateChanged(@ptrCast(self.ptr), newstate_str);
    }

    /// ### DEPRECATED: Use `slotStateChanged2` instead
    ///
    pub const SlotStateChanged2 = slotStateChanged2;

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
    pub fn slotStateChanged2(self: KXmlGuiWindow, newstate: []const u8, reverse: bool) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SlotStateChanged2(@ptrCast(self.ptr), newstate_str, reverse);
    }

    /// ### DEPRECATED: Use `isToolBarVisible` instead
    ///
    pub const IsToolBarVisible = isToolBarVisible;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isToolBarVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn isToolBarVisible(self: KXmlGuiWindow, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KXmlGuiWindow_IsToolBarVisible(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setToolBarVisible` instead
    ///
    pub const SetToolBarVisible = setToolBarVisible;

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
    pub fn setToolBarVisible(self: KXmlGuiWindow, name: []const u8, visible: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXmlGuiWindow_SetToolBarVisible(@ptrCast(self.ptr), name_str, visible);
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KXmlGuiWindow, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KXmlGuiWindow_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEvent) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KXmlGuiWindow, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KXmlGuiWindow_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `checkAmbiguousShortcuts` instead
    ///
    pub const CheckAmbiguousShortcuts = checkAmbiguousShortcuts;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn checkAmbiguousShortcuts(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_CheckAmbiguousShortcuts(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCheckAmbiguousShortcuts` instead
    ///
    pub const OnCheckAmbiguousShortcuts = onCheckAmbiguousShortcuts;

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
    pub fn onCheckAmbiguousShortcuts(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCheckAmbiguousShortcuts(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCheckAmbiguousShortcuts` instead
    ///
    pub const SuperCheckAmbiguousShortcuts = superCheckAmbiguousShortcuts;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superCheckAmbiguousShortcuts(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperCheckAmbiguousShortcuts(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saveNewToolbarConfig` instead
    ///
    pub const SaveNewToolbarConfig = saveNewToolbarConfig;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn saveNewToolbarConfig(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SaveNewToolbarConfig(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSaveNewToolbarConfig` instead
    ///
    pub const OnSaveNewToolbarConfig = onSaveNewToolbarConfig;

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
    pub fn onSaveNewToolbarConfig(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveNewToolbarConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveNewToolbarConfig` instead
    ///
    pub const SuperSaveNewToolbarConfig = superSaveNewToolbarConfig;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superSaveNewToolbarConfig(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperSaveNewToolbarConfig(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHelpMenuEnabled1` instead
    ///
    pub const SetHelpMenuEnabled1 = setHelpMenuEnabled1;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` showHelpMenu: bool `
    ///
    pub fn setHelpMenuEnabled1(self: KXmlGuiWindow, showHelpMenu: bool) void {
        qtc.KXmlGuiWindow_SetHelpMenuEnabled1(@ptrCast(self.ptr), showHelpMenu);
    }

    /// ### DEPRECATED: Use `createGUI1` instead
    ///
    pub const CreateGUI1 = createGUI1;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` xmlfile: []const u8 `
    ///
    pub fn createGUI1(self: KXmlGuiWindow, xmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_CreateGUI1(@ptrCast(self.ptr), xmlfile_str);
    }

    /// ### DEPRECATED: Use `setupGUI1` instead
    ///
    pub const SetupGUI1 = setupGUI1;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` options: flag of kxmlguiwindow_enums.StandardWindowOption `
    ///
    pub fn setupGUI1(self: KXmlGuiWindow, options: i32) void {
        qtc.KXmlGuiWindow_SetupGUI1(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `setupGUI22` instead
    ///
    pub const SetupGUI22 = setupGUI22;

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
    pub fn setupGUI22(self: KXmlGuiWindow, options: i32, xmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_SetupGUI22(@ptrCast(self.ptr), @bitCast(options), xmlfile_str);
    }

    /// ### DEPRECATED: Use `setupGUI23` instead
    ///
    pub const SetupGUI23 = setupGUI23;

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
    pub fn setupGUI23(self: KXmlGuiWindow, defaultSize: anytype, options: i32) void {
        comptime _ = @TypeOf(defaultSize)._is_QSize;
        qtc.KXmlGuiWindow_SetupGUI23(@ptrCast(self.ptr), @ptrCast(defaultSize.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `setupGUI3` instead
    ///
    pub const SetupGUI3 = setupGUI3;

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
    pub fn setupGUI3(self: KXmlGuiWindow, defaultSize: anytype, options: i32, xmlfile: []const u8) void {
        comptime _ = @TypeOf(defaultSize)._is_QSize;
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_SetupGUI3(@ptrCast(self.ptr), @ptrCast(defaultSize.ptr), @bitCast(options), xmlfile_str);
    }

    /// ### DEPRECATED: Use `canBeRestored` instead
    ///
    pub const CanBeRestored = canBeRestored;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#canBeRestored)
    ///
    /// ## Parameter(s):
    ///
    /// ` numberOfInstances: i32 `
    ///
    pub fn canBeRestored(numberOfInstances: i32) bool {
        return qtc.KMainWindow_CanBeRestored(@bitCast(numberOfInstances));
    }

    /// ### DEPRECATED: Use `classNameOfToplevel` instead
    ///
    pub const ClassNameOfToplevel = classNameOfToplevel;

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
    pub fn classNameOfToplevel(allocator: std.mem.Allocator, instanceNumber: i32) []const u8 {
        var _str = qtc.KMainWindow_ClassNameOfToplevel(@bitCast(instanceNumber));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.classNameOfToplevel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restore` instead
    ///
    pub const Restore = restore;

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
    pub fn restore(self: KXmlGuiWindow, numberOfInstances: i32) bool {
        return qtc.KMainWindow_Restore(@ptrCast(self.ptr), @bitCast(numberOfInstances));
    }

    /// ### DEPRECATED: Use `hasMenuBar` instead
    ///
    pub const HasMenuBar = hasMenuBar;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#hasMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn hasMenuBar(self: KXmlGuiWindow) bool {
        return qtc.KMainWindow_HasMenuBar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `memberList` instead
    ///
    pub const MemberList = memberList;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#memberList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn memberList(allocator: std.mem.Allocator) []KMainWindow {
        const _arr: qtc.libqt_list = qtc.KMainWindow_MemberList();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KMainWindow, _arr.len) catch @panic("KXmlGuiWindow.memberList: Memory allocation failed");
        const _data_val: [*]QtC.KMainWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `toolBar` instead
    ///
    pub const ToolBar = toolBar;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn toolBar(self: KXmlGuiWindow) KToolBar {
        return .{ .ptr = qtc.KMainWindow_ToolBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toolBars` instead
    ///
    pub const ToolBars = toolBars;

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
    pub fn toolBars(self: KXmlGuiWindow, allocator: std.mem.Allocator) []KToolBar {
        const _arr: qtc.libqt_list = qtc.KMainWindow_ToolBars(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KToolBar, _arr.len) catch @panic("KXmlGuiWindow.toolBars: Memory allocation failed");
        const _data_val: [*]QtC.KToolBar = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings` instead
    ///
    pub const SetAutoSaveSettings = setAutoSaveSettings;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn setAutoSaveSettings(self: KXmlGuiWindow) void {
        qtc.KMainWindow_SetAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings2` instead
    ///
    pub const SetAutoSaveSettings2 = setAutoSaveSettings2;

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
    pub fn setAutoSaveSettings2(self: KXmlGuiWindow, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KMainWindow_SetAutoSaveSettings2(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `resetAutoSaveSettings` instead
    ///
    pub const ResetAutoSaveSettings = resetAutoSaveSettings;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn resetAutoSaveSettings(self: KXmlGuiWindow) void {
        qtc.KMainWindow_ResetAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoSaveSettings` instead
    ///
    pub const AutoSaveSettings = autoSaveSettings;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn autoSaveSettings(self: KXmlGuiWindow) bool {
        return qtc.KMainWindow_AutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoSaveGroup` instead
    ///
    pub const AutoSaveGroup = autoSaveGroup;

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
    pub fn autoSaveGroup(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMainWindow_AutoSaveGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.autoSaveGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `autoSaveConfigGroup` instead
    ///
    pub const AutoSaveConfigGroup = autoSaveConfigGroup;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn autoSaveConfigGroup(self: KXmlGuiWindow) KConfigGroup {
        return .{ .ptr = qtc.KMainWindow_AutoSaveConfigGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStateConfigGroup` instead
    ///
    pub const SetStateConfigGroup = setStateConfigGroup;

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
    pub fn setStateConfigGroup(self: KXmlGuiWindow, configGroup: []const u8) void {
        const configGroup_str = qtc.libqt_string{
            .len = configGroup.len,
            .data = configGroup.ptr,
        };
        qtc.KMainWindow_SetStateConfigGroup(@ptrCast(self.ptr), configGroup_str);
    }

    /// ### DEPRECATED: Use `stateConfigGroup` instead
    ///
    pub const StateConfigGroup = stateConfigGroup;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#stateConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn stateConfigGroup(self: KXmlGuiWindow) KConfigGroup {
        return .{ .ptr = qtc.KMainWindow_StateConfigGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `saveMainWindowSettings` instead
    ///
    pub const SaveMainWindowSettings = saveMainWindowSettings;

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
    pub fn saveMainWindowSettings(self: KXmlGuiWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KMainWindow_SaveMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `dbusName` instead
    ///
    pub const DbusName = dbusName;

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
    pub fn dbusName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMainWindow_DbusName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.dbusName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCaption2` instead
    ///
    pub const SetCaption2 = setCaption2;

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
    pub fn setCaption2(self: KXmlGuiWindow, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SetCaption2(@ptrCast(self.ptr), caption_str, modified);
    }

    /// ### DEPRECATED: Use `onSetCaption2` instead
    ///
    pub const OnSetCaption2 = onSetCaption2;

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
    pub fn onSetCaption2(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KMainWindow_OnSetCaption2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCaption2` instead
    ///
    pub const SuperSetCaption2 = superSetCaption2;

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
    pub fn superSetCaption2(self: KXmlGuiWindow, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SuperSetCaption2(@ptrCast(self.ptr), caption_str, modified);
    }

    /// ### DEPRECATED: Use `appHelpActivated` instead
    ///
    pub const AppHelpActivated = appHelpActivated;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#appHelpActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn appHelpActivated(self: KXmlGuiWindow) void {
        qtc.KMainWindow_AppHelpActivated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSettingsDirty` instead
    ///
    pub const SetSettingsDirty = setSettingsDirty;

    /// Inherited from KMainWindow
    ///
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setSettingsDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn setSettingsDirty(self: KXmlGuiWindow) void {
        qtc.KMainWindow_SetSettingsDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `restore2` instead
    ///
    pub const Restore2 = restore2;

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
    /// ` _show: bool `
    ///
    pub fn restore2(self: KXmlGuiWindow, numberOfInstances: i32, _show: bool) bool {
        return qtc.KMainWindow_Restore2(@ptrCast(self.ptr), @bitCast(numberOfInstances), _show);
    }

    /// ### DEPRECATED: Use `toolBar1` instead
    ///
    pub const ToolBar1 = toolBar1;

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
    pub fn toolBar1(self: KXmlGuiWindow, name: []const u8) KToolBar {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KMainWindow_ToolBar1(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings1` instead
    ///
    pub const SetAutoSaveSettings1 = setAutoSaveSettings1;

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
    pub fn setAutoSaveSettings1(self: KXmlGuiWindow, groupName: []const u8) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings1(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings22` instead
    ///
    pub const SetAutoSaveSettings22 = setAutoSaveSettings22;

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
    pub fn setAutoSaveSettings22(self: KXmlGuiWindow, groupName: []const u8, saveWindowSize: bool) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings22(@ptrCast(self.ptr), groupName_str, saveWindowSize);
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings23` instead
    ///
    pub const SetAutoSaveSettings23 = setAutoSaveSettings23;

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
    pub fn setAutoSaveSettings23(self: KXmlGuiWindow, group: anytype, saveWindowSize: bool) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KMainWindow_SetAutoSaveSettings23(@ptrCast(self.ptr), @ptrCast(group.ptr), saveWindowSize);
    }

    /// ### DEPRECATED: Use `iconSize` instead
    ///
    pub const IconSize = iconSize;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn iconSize(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.QMainWindow_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIconSize` instead
    ///
    pub const SetIconSize = setIconSize;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _iconSize: QSize `
    ///
    pub fn setIconSize(self: KXmlGuiWindow, _iconSize: anytype) void {
        comptime _ = @TypeOf(_iconSize)._is_QSize;
        qtc.QMainWindow_SetIconSize(@ptrCast(self.ptr), @ptrCast(_iconSize.ptr));
    }

    /// ### DEPRECATED: Use `toolButtonStyle` instead
    ///
    pub const ToolButtonStyle = toolButtonStyle;

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
    pub fn toolButtonStyle(self: KXmlGuiWindow) i32 {
        return qtc.QMainWindow_ToolButtonStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolButtonStyle` instead
    ///
    pub const SetToolButtonStyle = setToolButtonStyle;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn setToolButtonStyle(self: KXmlGuiWindow, _toolButtonStyle: i32) void {
        qtc.QMainWindow_SetToolButtonStyle(@ptrCast(self.ptr), @bitCast(_toolButtonStyle));
    }

    /// ### DEPRECATED: Use `isAnimated` instead
    ///
    pub const IsAnimated = isAnimated;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isAnimated(self: KXmlGuiWindow) bool {
        return qtc.QMainWindow_IsAnimated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDockNestingEnabled` instead
    ///
    pub const IsDockNestingEnabled = isDockNestingEnabled;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isDockNestingEnabled(self: KXmlGuiWindow) bool {
        return qtc.QMainWindow_IsDockNestingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `documentMode` instead
    ///
    pub const DocumentMode = documentMode;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn documentMode(self: KXmlGuiWindow) bool {
        return qtc.QMainWindow_DocumentMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDocumentMode` instead
    ///
    pub const SetDocumentMode = setDocumentMode;

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
    pub fn setDocumentMode(self: KXmlGuiWindow, enabled: bool) void {
        qtc.QMainWindow_SetDocumentMode(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `tabShape` instead
    ///
    pub const TabShape = tabShape;

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
    pub fn tabShape(self: KXmlGuiWindow) i32 {
        return qtc.QMainWindow_TabShape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabShape` instead
    ///
    pub const SetTabShape = setTabShape;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _tabShape: qtabwidget_enums.TabShape `
    ///
    pub fn setTabShape(self: KXmlGuiWindow, _tabShape: i32) void {
        qtc.QMainWindow_SetTabShape(@ptrCast(self.ptr), @bitCast(_tabShape));
    }

    /// ### DEPRECATED: Use `tabPosition` instead
    ///
    pub const TabPosition = tabPosition;

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
    pub fn tabPosition(self: KXmlGuiWindow, area: i32) i32 {
        return qtc.QMainWindow_TabPosition(@ptrCast(self.ptr), @bitCast(area));
    }

    /// ### DEPRECATED: Use `setTabPosition` instead
    ///
    pub const SetTabPosition = setTabPosition;

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
    /// ` _tabPosition: qtabwidget_enums.TabPosition `
    ///
    pub fn setTabPosition(self: KXmlGuiWindow, areas: i32, _tabPosition: i32) void {
        qtc.QMainWindow_SetTabPosition(@ptrCast(self.ptr), @bitCast(areas), @bitCast(_tabPosition));
    }

    /// ### DEPRECATED: Use `setDockOptions` instead
    ///
    pub const SetDockOptions = setDockOptions;

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
    pub fn setDockOptions(self: KXmlGuiWindow, options: i32) void {
        qtc.QMainWindow_SetDockOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `dockOptions` instead
    ///
    pub const DockOptions = dockOptions;

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
    pub fn dockOptions(self: KXmlGuiWindow) i32 {
        return qtc.QMainWindow_DockOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn isSeparator(self: KXmlGuiWindow, _pos: anytype) bool {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        return qtc.QMainWindow_IsSeparator(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `menuBar` instead
    ///
    pub const MenuBar = menuBar;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn menuBar(self: KXmlGuiWindow) QMenuBar {
        return .{ .ptr = qtc.QMainWindow_MenuBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMenuBar` instead
    ///
    pub const SetMenuBar = setMenuBar;

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
    pub fn setMenuBar(self: KXmlGuiWindow, menubar: anytype) void {
        comptime _ = @TypeOf(menubar)._is_QMenuBar;
        qtc.QMainWindow_SetMenuBar(@ptrCast(self.ptr), @ptrCast(menubar.ptr));
    }

    /// ### DEPRECATED: Use `menuWidget` instead
    ///
    pub const MenuWidget = menuWidget;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn menuWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QMainWindow_MenuWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMenuWidget` instead
    ///
    pub const SetMenuWidget = setMenuWidget;

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
    pub fn setMenuWidget(self: KXmlGuiWindow, menubar: anytype) void {
        comptime _ = @TypeOf(menubar)._is_QWidget;
        qtc.QMainWindow_SetMenuWidget(@ptrCast(self.ptr), @ptrCast(menubar.ptr));
    }

    /// ### DEPRECATED: Use `statusBar` instead
    ///
    pub const StatusBar = statusBar;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn statusBar(self: KXmlGuiWindow) QStatusBar {
        return .{ .ptr = qtc.QMainWindow_StatusBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStatusBar` instead
    ///
    pub const SetStatusBar = setStatusBar;

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
    pub fn setStatusBar(self: KXmlGuiWindow, statusbar: anytype) void {
        comptime _ = @TypeOf(statusbar)._is_QStatusBar;
        qtc.QMainWindow_SetStatusBar(@ptrCast(self.ptr), @ptrCast(statusbar.ptr));
    }

    /// ### DEPRECATED: Use `centralWidget` instead
    ///
    pub const CentralWidget = centralWidget;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn centralWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QMainWindow_CentralWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCentralWidget` instead
    ///
    pub const SetCentralWidget = setCentralWidget;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setCentralWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setCentralWidget(self: KXmlGuiWindow, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QMainWindow_SetCentralWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `takeCentralWidget` instead
    ///
    pub const TakeCentralWidget = takeCentralWidget;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn takeCentralWidget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.QMainWindow_TakeCentralWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCorner` instead
    ///
    pub const SetCorner = setCorner;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _corner: qnamespace_enums.Corner `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    pub fn setCorner(self: KXmlGuiWindow, _corner: i32, area: i32) void {
        qtc.QMainWindow_SetCorner(@ptrCast(self.ptr), @bitCast(_corner), @bitCast(area));
    }

    /// ### DEPRECATED: Use `corner` instead
    ///
    pub const Corner = corner;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#corner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _corner: qnamespace_enums.Corner `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DockWidgetArea `
    ///
    pub fn corner(self: KXmlGuiWindow, _corner: i32) i32 {
        return qtc.QMainWindow_Corner(@ptrCast(self.ptr), @bitCast(_corner));
    }

    /// ### DEPRECATED: Use `addToolBarBreak` instead
    ///
    pub const AddToolBarBreak = addToolBarBreak;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn addToolBarBreak(self: KXmlGuiWindow) void {
        qtc.QMainWindow_AddToolBarBreak(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertToolBarBreak` instead
    ///
    pub const InsertToolBarBreak = insertToolBarBreak;

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
    pub fn insertToolBarBreak(self: KXmlGuiWindow, before: anytype) void {
        comptime _ = @TypeOf(before)._is_QToolBar;
        qtc.QMainWindow_InsertToolBarBreak(@ptrCast(self.ptr), @ptrCast(before.ptr));
    }

    /// ### DEPRECATED: Use `addToolBar` instead
    ///
    pub const AddToolBar = addToolBar;

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
    pub fn addToolBar(self: KXmlGuiWindow, area: i32, toolbar: anytype) void {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_AddToolBar(@ptrCast(self.ptr), @bitCast(area), @ptrCast(toolbar.ptr));
    }

    /// ### DEPRECATED: Use `addToolBar2` instead
    ///
    pub const AddToolBar2 = addToolBar2;

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
    pub fn addToolBar2(self: KXmlGuiWindow, toolbar: anytype) void {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_AddToolBar2(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

    /// ### DEPRECATED: Use `addToolBar3` instead
    ///
    pub const AddToolBar3 = addToolBar3;

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
    pub fn addToolBar3(self: KXmlGuiWindow, title: []const u8) QToolBar {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.QMainWindow_AddToolBar3(@ptrCast(self.ptr), title_str) };
    }

    /// ### DEPRECATED: Use `insertToolBar` instead
    ///
    pub const InsertToolBar = insertToolBar;

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
    pub fn insertToolBar(self: KXmlGuiWindow, before: anytype, toolbar: anytype) void {
        comptime _ = @TypeOf(before)._is_QToolBar;
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_InsertToolBar(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(toolbar.ptr));
    }

    /// ### DEPRECATED: Use `removeToolBar` instead
    ///
    pub const RemoveToolBar = removeToolBar;

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
    pub fn removeToolBar(self: KXmlGuiWindow, toolbar: anytype) void {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_RemoveToolBar(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

    /// ### DEPRECATED: Use `removeToolBarBreak` instead
    ///
    pub const RemoveToolBarBreak = removeToolBarBreak;

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
    pub fn removeToolBarBreak(self: KXmlGuiWindow, before: anytype) void {
        comptime _ = @TypeOf(before)._is_QToolBar;
        qtc.QMainWindow_RemoveToolBarBreak(@ptrCast(self.ptr), @ptrCast(before.ptr));
    }

    /// ### DEPRECATED: Use `unifiedTitleAndToolBarOnMac` instead
    ///
    pub const UnifiedTitleAndToolBarOnMac = unifiedTitleAndToolBarOnMac;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn unifiedTitleAndToolBarOnMac(self: KXmlGuiWindow) bool {
        return qtc.QMainWindow_UnifiedTitleAndToolBarOnMac(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toolBarArea` instead
    ///
    pub const ToolBarArea = toolBarArea;

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
    pub fn toolBarArea(self: KXmlGuiWindow, toolbar: anytype) i32 {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        return qtc.QMainWindow_ToolBarArea(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

    /// ### DEPRECATED: Use `toolBarBreak` instead
    ///
    pub const ToolBarBreak = toolBarBreak;

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
    pub fn toolBarBreak(self: KXmlGuiWindow, toolbar: anytype) bool {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        return qtc.QMainWindow_ToolBarBreak(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

    /// ### DEPRECATED: Use `addDockWidget` instead
    ///
    pub const AddDockWidget = addDockWidget;

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
    pub fn addDockWidget(self: KXmlGuiWindow, area: i32, dockwidget: anytype) void {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_AddDockWidget(@ptrCast(self.ptr), @bitCast(area), @ptrCast(dockwidget.ptr));
    }

    /// ### DEPRECATED: Use `addDockWidget2` instead
    ///
    pub const AddDockWidget2 = addDockWidget2;

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
    pub fn addDockWidget2(self: KXmlGuiWindow, area: i32, dockwidget: anytype, orientation: i32) void {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_AddDockWidget2(@ptrCast(self.ptr), @bitCast(area), @ptrCast(dockwidget.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `splitDockWidget` instead
    ///
    pub const SplitDockWidget = splitDockWidget;

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
    pub fn splitDockWidget(self: KXmlGuiWindow, after: anytype, dockwidget: anytype, orientation: i32) void {
        comptime _ = @TypeOf(after)._is_QDockWidget;
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_SplitDockWidget(@ptrCast(self.ptr), @ptrCast(after.ptr), @ptrCast(dockwidget.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `tabifyDockWidget` instead
    ///
    pub const TabifyDockWidget = tabifyDockWidget;

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
    pub fn tabifyDockWidget(self: KXmlGuiWindow, first: anytype, second: anytype) void {
        comptime _ = @TypeOf(first)._is_QDockWidget;
        comptime _ = @TypeOf(second)._is_QDockWidget;
        qtc.QMainWindow_TabifyDockWidget(@ptrCast(self.ptr), @ptrCast(first.ptr), @ptrCast(second.ptr));
    }

    /// ### DEPRECATED: Use `tabifiedDockWidgets` instead
    ///
    pub const TabifiedDockWidgets = tabifiedDockWidgets;

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
    pub fn tabifiedDockWidgets(self: KXmlGuiWindow, allocator: std.mem.Allocator, dockwidget: anytype) []QDockWidget {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        const _arr: qtc.libqt_list = qtc.QMainWindow_TabifiedDockWidgets(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDockWidget, _arr.len) catch @panic("KXmlGuiWindow.tabifiedDockWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QDockWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `removeDockWidget` instead
    ///
    pub const RemoveDockWidget = removeDockWidget;

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
    pub fn removeDockWidget(self: KXmlGuiWindow, dockwidget: anytype) void {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_RemoveDockWidget(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
    }

    /// ### DEPRECATED: Use `restoreDockWidget` instead
    ///
    pub const RestoreDockWidget = restoreDockWidget;

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
    pub fn restoreDockWidget(self: KXmlGuiWindow, dockwidget: anytype) bool {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        return qtc.QMainWindow_RestoreDockWidget(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
    }

    /// ### DEPRECATED: Use `dockWidgetArea` instead
    ///
    pub const DockWidgetArea = dockWidgetArea;

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
    pub fn dockWidgetArea(self: KXmlGuiWindow, dockwidget: anytype) i32 {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        return qtc.QMainWindow_DockWidgetArea(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
    }

    /// ### DEPRECATED: Use `resizeDocks` instead
    ///
    pub const ResizeDocks = resizeDocks;

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
    pub fn resizeDocks(self: KXmlGuiWindow, docks: []QDockWidget, sizes: []i32, orientation: i32) void {
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

    /// ### DEPRECATED: Use `saveState` instead
    ///
    pub const SaveState = saveState;

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
    pub fn saveState(self: KXmlGuiWindow, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KXmlGuiWindow.saveState: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restoreState` instead
    ///
    pub const RestoreState = restoreState;

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
    pub fn restoreState(self: KXmlGuiWindow, state: []u8) bool {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.QMainWindow_RestoreState(@ptrCast(self.ptr), state_str);
    }

    /// ### DEPRECATED: Use `setAnimated` instead
    ///
    pub const SetAnimated = setAnimated;

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
    pub fn setAnimated(self: KXmlGuiWindow, enabled: bool) void {
        qtc.QMainWindow_SetAnimated(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setDockNestingEnabled` instead
    ///
    pub const SetDockNestingEnabled = setDockNestingEnabled;

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
    pub fn setDockNestingEnabled(self: KXmlGuiWindow, enabled: bool) void {
        qtc.QMainWindow_SetDockNestingEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setUnifiedTitleAndToolBarOnMac` instead
    ///
    pub const SetUnifiedTitleAndToolBarOnMac = setUnifiedTitleAndToolBarOnMac;

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
    pub fn setUnifiedTitleAndToolBarOnMac(self: KXmlGuiWindow, set: bool) void {
        qtc.QMainWindow_SetUnifiedTitleAndToolBarOnMac(@ptrCast(self.ptr), set);
    }

    /// ### DEPRECATED: Use `iconSizeChanged` instead
    ///
    pub const IconSizeChanged = iconSizeChanged;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _iconSize: QSize `
    ///
    pub fn iconSizeChanged(self: KXmlGuiWindow, _iconSize: anytype) void {
        comptime _ = @TypeOf(_iconSize)._is_QSize;
        qtc.QMainWindow_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(_iconSize.ptr));
    }

    /// ### DEPRECATED: Use `onIconSizeChanged` instead
    ///
    pub const OnIconSizeChanged = onIconSizeChanged;

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
    pub fn onIconSizeChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QSize) callconv(.c) void) void {
        qtc.QMainWindow_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `toolButtonStyleChanged` instead
    ///
    pub const ToolButtonStyleChanged = toolButtonStyleChanged;

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn toolButtonStyleChanged(self: KXmlGuiWindow, _toolButtonStyle: i32) void {
        qtc.QMainWindow_ToolButtonStyleChanged(@ptrCast(self.ptr), @bitCast(_toolButtonStyle));
    }

    /// ### DEPRECATED: Use `onToolButtonStyleChanged` instead
    ///
    pub const OnToolButtonStyleChanged = onToolButtonStyleChanged;

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
    pub fn onToolButtonStyleChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32) callconv(.c) void) void {
        qtc.QMainWindow_Connect_ToolButtonStyleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabifiedDockWidgetActivated` instead
    ///
    pub const TabifiedDockWidgetActivated = tabifiedDockWidgetActivated;

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
    pub fn tabifiedDockWidgetActivated(self: KXmlGuiWindow, dockWidget: anytype) void {
        comptime _ = @TypeOf(dockWidget)._is_QDockWidget;
        qtc.QMainWindow_TabifiedDockWidgetActivated(@ptrCast(self.ptr), @ptrCast(dockWidget.ptr));
    }

    /// ### DEPRECATED: Use `onTabifiedDockWidgetActivated` instead
    ///
    pub const OnTabifiedDockWidgetActivated = onTabifiedDockWidgetActivated;

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
    pub fn onTabifiedDockWidgetActivated(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDockWidget) callconv(.c) void) void {
        qtc.QMainWindow_Connect_TabifiedDockWidgetActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addToolBarBreak1` instead
    ///
    pub const AddToolBarBreak1 = addToolBarBreak1;

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
    pub fn addToolBarBreak1(self: KXmlGuiWindow, area: i32) void {
        qtc.QMainWindow_AddToolBarBreak1(@ptrCast(self.ptr), @bitCast(area));
    }

    /// ### DEPRECATED: Use `saveState1` instead
    ///
    pub const SaveState1 = saveState1;

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
    pub fn saveState1(self: KXmlGuiWindow, allocator: std.mem.Allocator, version: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState1(@ptrCast(self.ptr), @bitCast(version));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KXmlGuiWindow.saveState1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restoreState2` instead
    ///
    pub const RestoreState2 = restoreState2;

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
    pub fn restoreState2(self: KXmlGuiWindow, state: []u8, version: i32) bool {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.QMainWindow_RestoreState2(@ptrCast(self.ptr), state_str, @bitCast(version));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn winId(self: KXmlGuiWindow) usize {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn createWinId(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn internalWinId(self: KXmlGuiWindow) usize {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn effectiveWinId(self: KXmlGuiWindow) usize {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn style(self: KXmlGuiWindow) QStyle {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: KXmlGuiWindow, _style: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isTopLevel(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isWindow(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isModal(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: KXmlGuiWindow, _windowModality: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isEnabled(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: KXmlGuiWindow, param1: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: KXmlGuiWindow, enabled: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: KXmlGuiWindow, disabled: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: KXmlGuiWindow, windowModified: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn frameGeometry(self: KXmlGuiWindow) QRect {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn geometry(self: KXmlGuiWindow) QRect {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn normalGeometry(self: KXmlGuiWindow) QRect {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn x(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn y(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn pos(self: KXmlGuiWindow) QPoint {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn frameSize(self: KXmlGuiWindow) QSize {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn size(self: KXmlGuiWindow) QSize {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn width(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn height(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn rect(self: KXmlGuiWindow) QRect {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn childrenRect(self: KXmlGuiWindow) QRect {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn childrenRegion(self: KXmlGuiWindow) QRegion {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn minimumSize(self: KXmlGuiWindow) QSize {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn maximumSize(self: KXmlGuiWindow) QSize {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn minimumWidth(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn minimumHeight(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn maximumWidth(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn maximumHeight(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: KXmlGuiWindow, _minimumSize: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: KXmlGuiWindow, minw: i32, minh: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: KXmlGuiWindow, _maximumSize: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: KXmlGuiWindow, maxw: i32, maxh: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: KXmlGuiWindow, minw: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: KXmlGuiWindow, minh: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: KXmlGuiWindow, maxw: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: KXmlGuiWindow, maxh: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn sizeIncrement(self: KXmlGuiWindow) QSize {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: KXmlGuiWindow, _sizeIncrement: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: KXmlGuiWindow, w: i32, h: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn baseSize(self: KXmlGuiWindow) QSize {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: KXmlGuiWindow, _baseSize: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: KXmlGuiWindow, basew: i32, baseh: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: KXmlGuiWindow, fixedSize: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: KXmlGuiWindow, w: i32, h: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: KXmlGuiWindow, w: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: KXmlGuiWindow, h: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: KXmlGuiWindow, param1: anytype) QPointF {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: KXmlGuiWindow, param1: anytype) QPoint {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: KXmlGuiWindow, param1: anytype) QPointF {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: KXmlGuiWindow, param1: anytype) QPoint {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: KXmlGuiWindow, param1: anytype) QPointF {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: KXmlGuiWindow, param1: anytype) QPoint {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: KXmlGuiWindow, param1: anytype) QPointF {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: KXmlGuiWindow, param1: anytype) QPoint {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: KXmlGuiWindow, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: KXmlGuiWindow, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: KXmlGuiWindow, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: KXmlGuiWindow, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn window(self: KXmlGuiWindow) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn nativeParentWidget(self: KXmlGuiWindow) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn topLevelWidget(self: KXmlGuiWindow) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn palette(self: KXmlGuiWindow) QPalette {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: KXmlGuiWindow, _palette: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: KXmlGuiWindow, _backgroundRole: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: KXmlGuiWindow, _foregroundRole: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn font(self: KXmlGuiWindow) QFont {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: KXmlGuiWindow, _font: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn fontMetrics(self: KXmlGuiWindow) QFontMetrics {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn fontInfo(self: KXmlGuiWindow) QFontInfo {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn cursor(self: KXmlGuiWindow) QCursor {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: KXmlGuiWindow, _cursor: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn unsetCursor(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: KXmlGuiWindow, enable: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn hasMouseTracking(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn underMouse(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: KXmlGuiWindow, enable: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn hasTabletTracking(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: KXmlGuiWindow, _mask: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: KXmlGuiWindow, _mask: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn mask(self: KXmlGuiWindow) QRegion {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn clearMask(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: KXmlGuiWindow, target: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: KXmlGuiWindow, painter: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn grab(self: KXmlGuiWindow) QPixmap {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn graphicsEffect(self: KXmlGuiWindow) QGraphicsEffect {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: KXmlGuiWindow, effect: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: KXmlGuiWindow, typeVal: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: KXmlGuiWindow, typeVal: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: KXmlGuiWindow, _windowTitle: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: KXmlGuiWindow, _styleSheet: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.styleSheet: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.windowTitle: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: KXmlGuiWindow, icon: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn windowIcon(self: KXmlGuiWindow) QIcon {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: KXmlGuiWindow, _windowIconText: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.windowIconText: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: KXmlGuiWindow, _windowRole: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.windowRole: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: KXmlGuiWindow, filePath: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.windowFilePath: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: KXmlGuiWindow, level: f64) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn windowOpacity(self: KXmlGuiWindow) f64 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isWindowModified(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: KXmlGuiWindow, _toolTip: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.toolTip: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: KXmlGuiWindow, msec: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn toolTipDuration(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: KXmlGuiWindow, _statusTip: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.statusTip: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: KXmlGuiWindow, _whatsThis: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.whatsThis: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.accessibleName: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: KXmlGuiWindow, name: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.accessibleDescription: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: KXmlGuiWindow, description: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: KXmlGuiWindow, direction: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn unsetLayoutDirection(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: KXmlGuiWindow, _locale: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn locale(self: KXmlGuiWindow) QLocale {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn unsetLocale(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isRightToLeft(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isLeftToRight(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn setFocus(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isActiveWindow(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn activateWindow(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn clearFocus(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: KXmlGuiWindow, reason: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: KXmlGuiWindow, policy: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn hasFocus(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: KXmlGuiWindow, _focusProxy: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn focusProxy(self: KXmlGuiWindow) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: KXmlGuiWindow, policy: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn grabMouse(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn releaseMouse(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn grabKeyboard(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn releaseKeyboard(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: KXmlGuiWindow, key: anytype) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: KXmlGuiWindow, id: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: KXmlGuiWindow, id: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: KXmlGuiWindow, id: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn updatesEnabled(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: KXmlGuiWindow, enable: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn graphicsProxyWidget(self: KXmlGuiWindow) QGraphicsProxyWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn update(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn repaint(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: KXmlGuiWindow, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: KXmlGuiWindow, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: KXmlGuiWindow, hidden: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn show(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn hide(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn showMinimized(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn showMaximized(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn showFullScreen(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn showNormal(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn close(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn raise(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn lower(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: KXmlGuiWindow, _x: i32, _y: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: KXmlGuiWindow, w: i32, h: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: KXmlGuiWindow, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: KXmlGuiWindow, _geometry: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: KXmlGuiWindow, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KXmlGuiWindow.saveGeometry: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: KXmlGuiWindow, _geometry: []u8) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn adjustSize(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isVisible(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: KXmlGuiWindow, param1: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isHidden(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isMinimized(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isMaximized(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isFullScreen(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: KXmlGuiWindow, state: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: KXmlGuiWindow, state: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn sizePolicy(self: KXmlGuiWindow) QSizePolicy {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: KXmlGuiWindow, _sizePolicy: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: KXmlGuiWindow, horizontal: i32, vertical: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn visibleRegion(self: KXmlGuiWindow) QRegion {
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
    pub fn setContentsMargins(self: KXmlGuiWindow, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: KXmlGuiWindow, margins: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn contentsMargins(self: KXmlGuiWindow) QMargins {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn contentsRect(self: KXmlGuiWindow) QRect {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn layout(self: KXmlGuiWindow) QLayout {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: KXmlGuiWindow, _layout: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn updateGeometry(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: KXmlGuiWindow, _parent: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: KXmlGuiWindow, _parent: anytype, f: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: KXmlGuiWindow, dx: i32, dy: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: KXmlGuiWindow, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn focusWidget(self: KXmlGuiWindow) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn nextInFocusChain(self: KXmlGuiWindow) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn previousInFocusChain(self: KXmlGuiWindow) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn acceptDrops(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: KXmlGuiWindow, on: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _action: QAction `
    ///
    pub fn addAction(self: KXmlGuiWindow, _action: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: KXmlGuiWindow, _actions: []QAction) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: KXmlGuiWindow, before: anytype, _actions: []QAction) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` before: QAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn insertAction(self: KXmlGuiWindow, before: anytype, _action: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _action: QAction `
    ///
    pub fn removeAction(self: KXmlGuiWindow, _action: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KXmlGuiWindow, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KXmlGuiWindow.actions: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: KXmlGuiWindow, text: []const u8) QAction {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: KXmlGuiWindow, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: KXmlGuiWindow, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: KXmlGuiWindow, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn parentWidget(self: KXmlGuiWindow) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: KXmlGuiWindow, typeVal: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: KXmlGuiWindow, param1: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: KXmlGuiWindow, typeVal: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: KXmlGuiWindow, _x: i32, _y: i32) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: KXmlGuiWindow, p: anytype) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: KXmlGuiWindow, p: anytype) QWidget {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: KXmlGuiWindow, param1: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: KXmlGuiWindow, param1: i32) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn ensurePolished(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: KXmlGuiWindow, child: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn autoFillBackground(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: KXmlGuiWindow, enabled: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn backingStore(self: KXmlGuiWindow) QBackingStore {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn windowHandle(self: KXmlGuiWindow) QWindow {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn screen(self: KXmlGuiWindow) QScreen {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: KXmlGuiWindow, _screen: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: KXmlGuiWindow, title: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: KXmlGuiWindow, icon: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QIcon) callconv(.c) void) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: KXmlGuiWindow, iconText: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: KXmlGuiWindow, _pos: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QPoint) callconv(.c) void) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: KXmlGuiWindow, hints: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: KXmlGuiWindow, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: KXmlGuiWindow, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render4(self: KXmlGuiWindow, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: KXmlGuiWindow, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: KXmlGuiWindow, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render42(self: KXmlGuiWindow, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: KXmlGuiWindow, rectangle: anytype) QPixmap {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: KXmlGuiWindow, typeVal: i32, flags: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: KXmlGuiWindow, key: anytype, context: i32) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: KXmlGuiWindow, id: i32, enable: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: KXmlGuiWindow, id: i32, enable: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: KXmlGuiWindow, param1: i32, on: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: KXmlGuiWindow, param1: i32, on: bool) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.objectName: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KXmlGuiWindow, name: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isWidgetType(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isWindowType(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn isQuickItemType(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn signalsBlocked(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KXmlGuiWindow, b: bool) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn thread(self: KXmlGuiWindow) QThread {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KXmlGuiWindow, _thread: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KXmlGuiWindow, interval: i32) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KXmlGuiWindow, time: i64) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KXmlGuiWindow, id: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KXmlGuiWindow, id: i32) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KXmlGuiWindow, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KXmlGuiWindow.children: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KXmlGuiWindow, filterObj: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KXmlGuiWindow, obj: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KXmlGuiWindow, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn disconnect3(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KXmlGuiWindow, receiver: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn dumpObjectTree(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn dumpObjectInfo(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KXmlGuiWindow, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KXmlGuiWindow, name: [:0]const u8) QVariant {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KXmlGuiWindow, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KXmlGuiWindow.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXmlGuiWindow.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn bindingStorage(self: KXmlGuiWindow) QBindingStorage {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn bindingStorage2(self: KXmlGuiWindow) QBindingStorage {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn destroyed(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow) callconv(.c) void) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn parent(self: KXmlGuiWindow) QObject {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KXmlGuiWindow, classname: [:0]const u8) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn deleteLater(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KXmlGuiWindow, interval: i32, timerType: i32) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KXmlGuiWindow, time: i64, timerType: i32) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KXmlGuiWindow, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KXmlGuiWindow, signal: [:0]const u8) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KXmlGuiWindow, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KXmlGuiWindow, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KXmlGuiWindow, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QObject) callconv(.c) void) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn paintingActive(self: KXmlGuiWindow) bool {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn widthMM(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn heightMM(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn logicalDpiX(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn logicalDpiY(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn physicalDpiX(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn physicalDpiY(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn devicePixelRatio(self: KXmlGuiWindow) f64 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn devicePixelRatioF(self: KXmlGuiWindow) f64 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn colorCount(self: KXmlGuiWindow) i32 {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn depth(self: KXmlGuiWindow) i32 {
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

    /// ### DEPRECATED: Use `builderClient` instead
    ///
    pub const BuilderClient = builderClient;

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#builderClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn builderClient(self: KXmlGuiWindow) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIBuilder_BuilderClient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBuilderClient` instead
    ///
    pub const SetBuilderClient = setBuilderClient;

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
    pub fn setBuilderClient(self: KXmlGuiWindow, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIBuilder_SetBuilderClient(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from KXMLGUIBuilder
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguibuilder.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn widget(self: KXmlGuiWindow) QWidget {
        return .{ .ptr = qtc.KXMLGUIBuilder_Widget(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn action(self: KXmlGuiWindow, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn setXMLGUIBuildDocument(self: KXmlGuiWindow, doc: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn xmlguiBuildDocument(self: KXmlGuiWindow) QDomDocument {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _factory: KXMLGUIFactory `
    ///
    pub fn setFactory(self: KXmlGuiWindow, _factory: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn factory(self: KXmlGuiWindow) KXMLGUIFactory {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn parentClient(self: KXmlGuiWindow) KXMLGUIClient {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn insertChildClient(self: KXmlGuiWindow, child: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn removeChildClient(self: KXmlGuiWindow, child: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childClients(self: KXmlGuiWindow, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("KXmlGuiWindow.childClients: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn setClientBuilder(self: KXmlGuiWindow, builder: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn clientBuilder(self: KXmlGuiWindow) KXMLGUIBuilder {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn reloadXML(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn plugActionList(self: KXmlGuiWindow, name: []const u8, actionList: []QAction) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn unplugActionList(self: KXmlGuiWindow, name: []const u8) void {
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
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("KXmlGuiWindow.findMostRecentXMLFile: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.findMostRecentXMLFile: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionEnabled(self: KXmlGuiWindow, state: []const u8, _action: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionDisabled(self: KXmlGuiWindow, state: []const u8, _action: []const u8) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` state: []const u8 `
    ///
    pub fn getActionsToChangeForState(self: KXmlGuiWindow, state: []const u8) KXMLGUIClient__StateChange {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn beginXMLPlug(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn endXMLPlug(self: KXmlGuiWindow) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn prepareXMLUnplug(self: KXmlGuiWindow, param1: anytype) void {
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn replaceXMLFile(self: KXmlGuiWindow, xmlfile: []const u8, localxmlfile: []const u8) void {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.findVersionNumber: Memory allocation failed");
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn replaceXMLFile3(self: KXmlGuiWindow, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
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

    /// ### DEPRECATED: Use `setCaption` instead
    ///
    pub const SetCaption = setCaption;

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
    pub fn setCaption(self: KXmlGuiWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `superSetCaption` instead
    ///
    pub const SuperSetCaption = superSetCaption;

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
    pub fn superSetCaption(self: KXmlGuiWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `onSetCaption` instead
    ///
    pub const OnSetCaption = onSetCaption;

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
    pub fn onSetCaption(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPlainCaption` instead
    ///
    pub const SetPlainCaption = setPlainCaption;

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
    pub fn setPlainCaption(self: KXmlGuiWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SetPlainCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `superSetPlainCaption` instead
    ///
    pub const SuperSetPlainCaption = superSetPlainCaption;

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
    pub fn superSetPlainCaption(self: KXmlGuiWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetPlainCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `onSetPlainCaption` instead
    ///
    pub const OnSetPlainCaption = onSetPlainCaption;

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
    pub fn onSetPlainCaption(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetPlainCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

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
    pub fn keyPressEvent(self: KXmlGuiWindow, keyEvent: anytype) void {
        comptime _ = @TypeOf(keyEvent)._is_QKeyEvent;
        qtc.KXmlGuiWindow_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(keyEvent.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    pub fn superKeyPressEvent(self: KXmlGuiWindow, keyEvent: anytype) void {
        comptime _ = @TypeOf(keyEvent)._is_QKeyEvent;
        qtc.KXmlGuiWindow_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(keyEvent.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QKeyEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

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
    pub fn closeEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.KXmlGuiWindow_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

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
    pub fn superCloseEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.KXmlGuiWindow_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

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
    pub fn onCloseEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QCloseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `queryClose` instead
    ///
    pub const QueryClose = queryClose;

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
    pub fn queryClose(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_QueryClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superQueryClose` instead
    ///
    pub const SuperQueryClose = superQueryClose;

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
    pub fn superQueryClose(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperQueryClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onQueryClose` instead
    ///
    pub const OnQueryClose = onQueryClose;

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
    pub fn onQueryClose(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `saveProperties` instead
    ///
    pub const SaveProperties = saveProperties;

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
    pub fn saveProperties(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KXmlGuiWindow_SaveProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superSaveProperties` instead
    ///
    pub const SuperSaveProperties = superSaveProperties;

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
    pub fn superSaveProperties(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KXmlGuiWindow_SuperSaveProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onSaveProperties` instead
    ///
    pub const OnSaveProperties = onSaveProperties;

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
    pub fn onSaveProperties(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readProperties` instead
    ///
    pub const ReadProperties = readProperties;

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
    pub fn readProperties(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KXmlGuiWindow_ReadProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superReadProperties` instead
    ///
    pub const SuperReadProperties = superReadProperties;

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
    pub fn superReadProperties(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KXmlGuiWindow_SuperReadProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onReadProperties` instead
    ///
    pub const OnReadProperties = onReadProperties;

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
    pub fn onReadProperties(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnReadProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `saveGlobalProperties` instead
    ///
    pub const SaveGlobalProperties = saveGlobalProperties;

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
    pub fn saveGlobalProperties(self: KXmlGuiWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KXmlGuiWindow_SaveGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `superSaveGlobalProperties` instead
    ///
    pub const SuperSaveGlobalProperties = superSaveGlobalProperties;

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
    pub fn superSaveGlobalProperties(self: KXmlGuiWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KXmlGuiWindow_SuperSaveGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `onSaveGlobalProperties` instead
    ///
    pub const OnSaveGlobalProperties = onSaveGlobalProperties;

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
    pub fn onSaveGlobalProperties(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfig) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveGlobalProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readGlobalProperties` instead
    ///
    pub const ReadGlobalProperties = readGlobalProperties;

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
    pub fn readGlobalProperties(self: KXmlGuiWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KXmlGuiWindow_ReadGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `superReadGlobalProperties` instead
    ///
    pub const SuperReadGlobalProperties = superReadGlobalProperties;

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
    pub fn superReadGlobalProperties(self: KXmlGuiWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KXmlGuiWindow_SuperReadGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `onReadGlobalProperties` instead
    ///
    pub const OnReadGlobalProperties = onReadGlobalProperties;

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
    pub fn onReadGlobalProperties(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfig) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnReadGlobalProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createPopupMenu` instead
    ///
    pub const CreatePopupMenu = createPopupMenu;

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
    pub fn createPopupMenu(self: KXmlGuiWindow) QMenu {
        return .{ .ptr = qtc.KXmlGuiWindow_CreatePopupMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superCreatePopupMenu` instead
    ///
    pub const SuperCreatePopupMenu = superCreatePopupMenu;

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
    pub fn superCreatePopupMenu(self: KXmlGuiWindow) QMenu {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperCreatePopupMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreatePopupMenu` instead
    ///
    pub const OnCreatePopupMenu = onCreatePopupMenu;

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
    pub fn onCreatePopupMenu(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QMenu) void {
        qtc.KXmlGuiWindow_OnCreatePopupMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

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
    /// ` _event: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.KXmlGuiWindow_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

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
    /// ` _event: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.KXmlGuiWindow_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

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
    pub fn onContextMenuEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QContextMenuEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn devType(self: KXmlGuiWindow) i32 {
        return qtc.KXmlGuiWindow_DevType(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superDevType(self: KXmlGuiWindow) i32 {
        return qtc.KXmlGuiWindow_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: KXmlGuiWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: KXmlGuiWindow, visible: bool) void {
        qtc.KXmlGuiWindow_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: KXmlGuiWindow, visible: bool) void {
        qtc.KXmlGuiWindow_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.KXmlGuiWindow_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

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
    pub fn superSizeHint(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.KXmlGuiWindow_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

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
    pub fn minimumSizeHint(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.KXmlGuiWindow_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSizeHint` instead
    ///
    pub const SuperMinimumSizeHint = superMinimumSizeHint;

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
    pub fn superMinimumSizeHint(self: KXmlGuiWindow) QSize {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSizeHint` instead
    ///
    pub const OnMinimumSizeHint = onMinimumSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.KXmlGuiWindow_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: KXmlGuiWindow, param1: i32) i32 {
        return qtc.KXmlGuiWindow_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: KXmlGuiWindow, param1: i32) i32 {
        return qtc.KXmlGuiWindow_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn hasHeightForWidth(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superHasHeightForWidth(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn paintEngine(self: KXmlGuiWindow) QPaintEngine {
        return .{ .ptr = qtc.KXmlGuiWindow_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superPaintEngine(self: KXmlGuiWindow) QPaintEngine {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KXmlGuiWindow_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KXmlGuiWindow_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

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
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.KXmlGuiWindow_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.KXmlGuiWindow_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QWheelEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.KXmlGuiWindow_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.KXmlGuiWindow_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QKeyEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KXmlGuiWindow_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KXmlGuiWindow_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QFocusEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KXmlGuiWindow_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KXmlGuiWindow_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QFocusEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.KXmlGuiWindow_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.KXmlGuiWindow_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEnterEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KXmlGuiWindow_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KXmlGuiWindow_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

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
    /// ` _event: QPaintEvent `
    ///
    pub fn paintEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.KXmlGuiWindow_PaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

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
    /// ` _event: QPaintEvent `
    ///
    pub fn superPaintEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.KXmlGuiWindow_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

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
    pub fn onPaintEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QPaintEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.KXmlGuiWindow_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.KXmlGuiWindow_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMoveEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

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
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.KXmlGuiWindow_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

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
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.KXmlGuiWindow_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QResizeEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.KXmlGuiWindow_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.KXmlGuiWindow_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QTabletEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.KXmlGuiWindow_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.KXmlGuiWindow_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QActionEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.KXmlGuiWindow_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.KXmlGuiWindow_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDragEnterEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.KXmlGuiWindow_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.KXmlGuiWindow_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDragMoveEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.KXmlGuiWindow_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.KXmlGuiWindow_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.KXmlGuiWindow_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.KXmlGuiWindow_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDropEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.KXmlGuiWindow_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.KXmlGuiWindow_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QShowEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.KXmlGuiWindow_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.KXmlGuiWindow_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QHideEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: KXmlGuiWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KXmlGuiWindow_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: KXmlGuiWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KXmlGuiWindow_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

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
    pub fn changeEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KXmlGuiWindow_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

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
    pub fn superChangeEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KXmlGuiWindow_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

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
    pub fn onChangeEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: KXmlGuiWindow, param1: i32) i32 {
        return qtc.KXmlGuiWindow_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: KXmlGuiWindow, param1: i32) i32 {
        return qtc.KXmlGuiWindow_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: KXmlGuiWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KXmlGuiWindow_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: KXmlGuiWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KXmlGuiWindow_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QPainter) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: KXmlGuiWindow, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KXmlGuiWindow_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: KXmlGuiWindow, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KXmlGuiWindow_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KXmlGuiWindow_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn sharedPainter(self: KXmlGuiWindow) QPainter {
        return .{ .ptr = qtc.KXmlGuiWindow_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superSharedPainter(self: KXmlGuiWindow) QPainter {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KXmlGuiWindow_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

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
    pub fn inputMethodEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KXmlGuiWindow_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

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
    pub fn superInputMethodEvent(self: KXmlGuiWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KXmlGuiWindow_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

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
    pub fn onInputMethodEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QInputMethodEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

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
    pub fn inputMethodQuery(self: KXmlGuiWindow, param1: i32) QVariant {
        return .{ .ptr = qtc.KXmlGuiWindow_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

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
    pub fn superInputMethodQuery(self: KXmlGuiWindow, param1: i32) QVariant {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32) callconv(.c) QVariant) void {
        qtc.KXmlGuiWindow_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: KXmlGuiWindow, next: bool) bool {
        return qtc.KXmlGuiWindow_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: KXmlGuiWindow, next: bool) bool {
        return qtc.KXmlGuiWindow_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, bool) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KXmlGuiWindow, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KXmlGuiWindow_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KXmlGuiWindow, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KXmlGuiWindow_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QObject, QEvent) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KXmlGuiWindow_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KXmlGuiWindow_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QTimerEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KXmlGuiWindow_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KXmlGuiWindow_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QChildEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KXmlGuiWindow_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KXmlGuiWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KXmlGuiWindow_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QEvent) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KXmlGuiWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXmlGuiWindow_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KXmlGuiWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXmlGuiWindow_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KXmlGuiWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXmlGuiWindow_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KXmlGuiWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXmlGuiWindow_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `containerTags` instead
    ///
    pub const ContainerTags = containerTags;

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
    pub fn containerTags(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_ContainerTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KXmlGuiWindow.containerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXmlGuiWindow.containerTags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superContainerTags` instead
    ///
    pub const SuperContainerTags = superContainerTags;

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
    pub fn superContainerTags(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_SuperContainerTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KXmlGuiWindow.containerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXmlGuiWindow.containerTags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onContainerTags` instead
    ///
    pub const OnContainerTags = onContainerTags;

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
    pub fn onContainerTags(self: KXmlGuiWindow, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KXmlGuiWindow_OnContainerTags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createContainer` instead
    ///
    pub const CreateContainer = createContainer;

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
    /// ` _parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn createContainer(self: KXmlGuiWindow, _parent: anytype, index: i32, element: anytype, containerAction: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        return .{ .ptr = qtc.KXmlGuiWindow_CreateContainer(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(index), @ptrCast(element.ptr), @ptrCast(containerAction.ptr)) };
    }

    /// ### DEPRECATED: Use `superCreateContainer` instead
    ///
    pub const SuperCreateContainer = superCreateContainer;

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
    /// ` _parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn superCreateContainer(self: KXmlGuiWindow, _parent: anytype, index: i32, element: anytype, containerAction: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        return .{ .ptr = qtc.KXmlGuiWindow_SuperCreateContainer(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(index), @ptrCast(element.ptr), @ptrCast(containerAction.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateContainer` instead
    ///
    pub const OnCreateContainer = onCreateContainer;

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
    pub fn onCreateContainer(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QWidget, i32, QDomElement, QAction) callconv(.c) QWidget) void {
        qtc.KXmlGuiWindow_OnCreateContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeContainer` instead
    ///
    pub const RemoveContainer = removeContainer;

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
    /// ` _parent: QWidget `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn removeContainer(self: KXmlGuiWindow, container: anytype, _parent: anytype, element: anytype, containerAction: anytype) void {
        comptime _ = @TypeOf(container)._is_QWidget;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        qtc.KXmlGuiWindow_RemoveContainer(@ptrCast(self.ptr), @ptrCast(container.ptr), @ptrCast(_parent.ptr), @ptrCast(element.ptr), @ptrCast(containerAction.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveContainer` instead
    ///
    pub const SuperRemoveContainer = superRemoveContainer;

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
    /// ` _parent: QWidget `
    ///
    /// ` element: QDomElement `
    ///
    /// ` containerAction: QAction `
    ///
    pub fn superRemoveContainer(self: KXmlGuiWindow, container: anytype, _parent: anytype, element: anytype, containerAction: anytype) void {
        comptime _ = @TypeOf(container)._is_QWidget;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        comptime _ = @TypeOf(containerAction)._is_QAction;
        qtc.KXmlGuiWindow_SuperRemoveContainer(@ptrCast(self.ptr), @ptrCast(container.ptr), @ptrCast(_parent.ptr), @ptrCast(element.ptr), @ptrCast(containerAction.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveContainer` instead
    ///
    pub const OnRemoveContainer = onRemoveContainer;

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
    pub fn onRemoveContainer(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QWidget, QWidget, QDomElement, QAction) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnRemoveContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customTags` instead
    ///
    pub const CustomTags = customTags;

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
    pub fn customTags(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_CustomTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KXmlGuiWindow.customTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXmlGuiWindow.customTags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superCustomTags` instead
    ///
    pub const SuperCustomTags = superCustomTags;

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
    pub fn superCustomTags(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_SuperCustomTags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KXmlGuiWindow.customTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXmlGuiWindow.customTags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onCustomTags` instead
    ///
    pub const OnCustomTags = onCustomTags;

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
    pub fn onCustomTags(self: KXmlGuiWindow, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KXmlGuiWindow_OnCustomTags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createCustomElement` instead
    ///
    pub const CreateCustomElement = createCustomElement;

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
    /// ` _parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    pub fn createCustomElement(self: KXmlGuiWindow, _parent: anytype, index: i32, element: anytype) QAction {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXmlGuiWindow_CreateCustomElement(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(index), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `superCreateCustomElement` instead
    ///
    pub const SuperCreateCustomElement = superCreateCustomElement;

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
    /// ` _parent: QWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` element: QDomElement `
    ///
    pub fn superCreateCustomElement(self: KXmlGuiWindow, _parent: anytype, index: i32, element: anytype) QAction {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXmlGuiWindow_SuperCreateCustomElement(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(index), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateCustomElement` instead
    ///
    pub const OnCreateCustomElement = onCreateCustomElement;

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
    pub fn onCreateCustomElement(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QWidget, i32, QDomElement) callconv(.c) QAction) void {
        qtc.KXmlGuiWindow_OnCreateCustomElement(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `action2` instead
    ///
    pub const Action2 = action2;

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
    pub fn action2(self: KXmlGuiWindow, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXmlGuiWindow_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `superAction2` instead
    ///
    pub const SuperAction2 = superAction2;

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
    pub fn superAction2(self: KXmlGuiWindow, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXmlGuiWindow_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `onAction2` instead
    ///
    pub const OnAction2 = onAction2;

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
    pub fn onAction2(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDomElement) callconv(.c) QAction) void {
        qtc.KXmlGuiWindow_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionCollection` instead
    ///
    pub const ActionCollection = actionCollection;

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
    pub fn actionCollection(self: KXmlGuiWindow) KActionCollection {
        return .{ .ptr = qtc.KXmlGuiWindow_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superActionCollection` instead
    ///
    pub const SuperActionCollection = superActionCollection;

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
    pub fn superActionCollection(self: KXmlGuiWindow) KActionCollection {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onActionCollection` instead
    ///
    pub const OnActionCollection = onActionCollection;

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
    pub fn onActionCollection(self: KXmlGuiWindow, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KXmlGuiWindow_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `componentName` instead
    ///
    pub const ComponentName = componentName;

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
    pub fn componentName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superComponentName` instead
    ///
    pub const SuperComponentName = superComponentName;

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
    pub fn superComponentName(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onComponentName` instead
    ///
    pub const OnComponentName = onComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onComponentName(self: KXmlGuiWindow, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `domDocument` instead
    ///
    pub const DomDocument = domDocument;

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
    pub fn domDocument(self: KXmlGuiWindow) QDomDocument {
        return .{ .ptr = qtc.KXmlGuiWindow_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superDomDocument` instead
    ///
    pub const SuperDomDocument = superDomDocument;

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
    pub fn superDomDocument(self: KXmlGuiWindow) QDomDocument {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperDomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDomDocument` instead
    ///
    pub const OnDomDocument = onDomDocument;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDomDocument(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KXmlGuiWindow_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xmlFile` instead
    ///
    pub const XmlFile = xmlFile;

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
    pub fn xmlFile(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superXmlFile` instead
    ///
    pub const SuperXmlFile = superXmlFile;

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
    pub fn superXmlFile(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onXmlFile` instead
    ///
    pub const OnXmlFile = onXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onXmlFile(self: KXmlGuiWindow, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localXMLFile` instead
    ///
    pub const LocalXMLFile = localXMLFile;

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
    pub fn localXMLFile(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superLocalXMLFile` instead
    ///
    pub const SuperLocalXMLFile = superLocalXMLFile;

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
    pub fn superLocalXMLFile(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLocalXMLFile` instead
    ///
    pub const OnLocalXMLFile = onLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLocalXMLFile(self: KXmlGuiWindow, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setComponentName` instead
    ///
    pub const SetComponentName = setComponentName;

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
    /// ` _componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn setComponentName(self: KXmlGuiWindow, _componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXmlGuiWindow_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `superSetComponentName` instead
    ///
    pub const SuperSetComponentName = superSetComponentName;

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
    /// ` _componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn superSetComponentName(self: KXmlGuiWindow, _componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `onSetComponentName` instead
    ///
    pub const OnSetComponentName = onSetComponentName;

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
    pub fn onSetComponentName(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setXMLFile` instead
    ///
    pub const SetXMLFile = setXMLFile;

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
    pub fn setXMLFile(self: KXmlGuiWindow, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `superSetXMLFile` instead
    ///
    pub const SuperSetXMLFile = superSetXMLFile;

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
    pub fn superSetXMLFile(self: KXmlGuiWindow, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `onSetXMLFile` instead
    ///
    pub const OnSetXMLFile = onSetXMLFile;

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
    pub fn onSetXMLFile(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLocalXMLFile` instead
    ///
    pub const SetLocalXMLFile = setLocalXMLFile;

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
    pub fn setLocalXMLFile(self: KXmlGuiWindow, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `superSetLocalXMLFile` instead
    ///
    pub const SuperSetLocalXMLFile = superSetLocalXMLFile;

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
    pub fn superSetLocalXMLFile(self: KXmlGuiWindow, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `onSetLocalXMLFile` instead
    ///
    pub const OnSetLocalXMLFile = onSetLocalXMLFile;

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
    pub fn onSetLocalXMLFile(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setXML` instead
    ///
    pub const SetXML = setXML;

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
    pub fn setXML(self: KXmlGuiWindow, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXmlGuiWindow_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `superSetXML` instead
    ///
    pub const SuperSetXML = superSetXML;

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
    pub fn superSetXML(self: KXmlGuiWindow, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXmlGuiWindow_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `onSetXML` instead
    ///
    pub const OnSetXML = onSetXML;

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
    pub fn onSetXML(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setDOMDocument` instead
    ///
    pub const SetDOMDocument = setDOMDocument;

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
    pub fn setDOMDocument(self: KXmlGuiWindow, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KXmlGuiWindow_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `superSetDOMDocument` instead
    ///
    pub const SuperSetDOMDocument = superSetDOMDocument;

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
    pub fn superSetDOMDocument(self: KXmlGuiWindow, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KXmlGuiWindow_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `onSetDOMDocument` instead
    ///
    pub const OnSetDOMDocument = onSetDOMDocument;

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
    pub fn onSetDOMDocument(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QDomDocument, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

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
    pub fn stateChanged(self: KXmlGuiWindow, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `superStateChanged` instead
    ///
    pub const SuperStateChanged = superStateChanged;

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
    pub fn superStateChanged(self: KXmlGuiWindow, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

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
    pub fn onStateChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `savePropertiesInternal` instead
    ///
    pub const SavePropertiesInternal = savePropertiesInternal;

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
    pub fn savePropertiesInternal(self: KXmlGuiWindow, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KXmlGuiWindow_SavePropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `superSavePropertiesInternal` instead
    ///
    pub const SuperSavePropertiesInternal = superSavePropertiesInternal;

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
    pub fn superSavePropertiesInternal(self: KXmlGuiWindow, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KXmlGuiWindow_SuperSavePropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onSavePropertiesInternal` instead
    ///
    pub const OnSavePropertiesInternal = onSavePropertiesInternal;

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
    pub fn onSavePropertiesInternal(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfig, i32) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSavePropertiesInternal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readPropertiesInternal` instead
    ///
    pub const ReadPropertiesInternal = readPropertiesInternal;

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
    pub fn readPropertiesInternal(self: KXmlGuiWindow, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_KConfig;
        return qtc.KXmlGuiWindow_ReadPropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `superReadPropertiesInternal` instead
    ///
    pub const SuperReadPropertiesInternal = superReadPropertiesInternal;

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
    pub fn superReadPropertiesInternal(self: KXmlGuiWindow, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_KConfig;
        return qtc.KXmlGuiWindow_SuperReadPropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onReadPropertiesInternal` instead
    ///
    pub const OnReadPropertiesInternal = onReadPropertiesInternal;

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
    pub fn onReadPropertiesInternal(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, KConfig, i32) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnReadPropertiesInternal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `settingsDirty` instead
    ///
    pub const SettingsDirty = settingsDirty;

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
    pub fn settingsDirty(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SettingsDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSettingsDirty` instead
    ///
    pub const SuperSettingsDirty = superSettingsDirty;

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
    pub fn superSettingsDirty(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperSettingsDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSettingsDirty` instead
    ///
    pub const OnSettingsDirty = onSettingsDirty;

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
    pub fn onSettingsDirty(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnSettingsDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `saveAutoSaveSettings` instead
    ///
    pub const SaveAutoSaveSettings = saveAutoSaveSettings;

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
    pub fn saveAutoSaveSettings(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SaveAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSaveAutoSaveSettings` instead
    ///
    pub const SuperSaveAutoSaveSettings = superSaveAutoSaveSettings;

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
    pub fn superSaveAutoSaveSettings(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperSaveAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSaveAutoSaveSettings` instead
    ///
    pub const OnSaveAutoSaveSettings = onSaveAutoSaveSettings;

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
    pub fn onSaveAutoSaveSettings(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveAutoSaveSettings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn updateMicroFocus(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superUpdateMicroFocus(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn create(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_Create(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superCreate(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn destroy(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superDestroy(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn focusNextChild(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superFocusNextChild(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn focusPreviousChild(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superFocusPreviousChild(self: KXmlGuiWindow) bool {
        return qtc.KXmlGuiWindow_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: KXmlGuiWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn sender(self: KXmlGuiWindow) QObject {
        return .{ .ptr = qtc.KXmlGuiWindow_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superSender(self: KXmlGuiWindow) QObject {
        return .{ .ptr = qtc.KXmlGuiWindow_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KXmlGuiWindow, callback: *const fn () callconv(.c) QObject) void {
        qtc.KXmlGuiWindow_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn senderSignalIndex(self: KXmlGuiWindow) i32 {
        return qtc.KXmlGuiWindow_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    pub fn superSenderSignalIndex(self: KXmlGuiWindow) i32 {
        return qtc.KXmlGuiWindow_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KXmlGuiWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KXmlGuiWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXmlGuiWindow_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KXmlGuiWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXmlGuiWindow_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KXmlGuiWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KXmlGuiWindow_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KXmlGuiWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KXmlGuiWindow_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, QMetaMethod) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: KXmlGuiWindow, metricA: i32, metricB: i32) f64 {
        return qtc.KXmlGuiWindow_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: KXmlGuiWindow, metricA: i32, metricB: i32) f64 {
        return qtc.KXmlGuiWindow_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, i32, i32) callconv(.c) f64) void {
        qtc.KXmlGuiWindow_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `standardsXmlFileLocation` instead
    ///
    pub const StandardsXmlFileLocation = standardsXmlFileLocation;

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
    pub fn standardsXmlFileLocation(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.standardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superStandardsXmlFileLocation` instead
    ///
    pub const SuperStandardsXmlFileLocation = superStandardsXmlFileLocation;

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
    pub fn superStandardsXmlFileLocation(self: KXmlGuiWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXmlGuiWindow_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXmlGuiWindow.standardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onStandardsXmlFileLocation` instead
    ///
    pub const OnStandardsXmlFileLocation = onStandardsXmlFileLocation;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXmlGuiWindow`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onStandardsXmlFileLocation(self: KXmlGuiWindow, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loadStandardsXmlFile` instead
    ///
    pub const LoadStandardsXmlFile = loadStandardsXmlFile;

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
    pub fn loadStandardsXmlFile(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superLoadStandardsXmlFile` instead
    ///
    pub const SuperLoadStandardsXmlFile = superLoadStandardsXmlFile;

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
    pub fn superLoadStandardsXmlFile(self: KXmlGuiWindow) void {
        qtc.KXmlGuiWindow_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoadStandardsXmlFile` instead
    ///
    pub const OnLoadStandardsXmlFile = onLoadStandardsXmlFile;

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
    pub fn onLoadStandardsXmlFile(self: KXmlGuiWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXmlGuiWindow `
    ///
    /// ` callback: *const fn (self: KXmlGuiWindow, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KXmlGuiWindow, callback: *const fn (KXmlGuiWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiwindow.html#dtor.KXmlGuiWindow)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KXmlGuiWindow `
    ///
    pub fn delete(self: KXmlGuiWindow) void {
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
