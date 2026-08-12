const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const KConfigGroup = @import("libqt6").KConfigGroup;
const KToolBar = @import("libqt6").KToolBar;
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
const qmainwindow_enums = @import("../libqmainwindow.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qtabwidget_enums = @import("../libqtabwidget.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kmainwindow.html)
pub const KMainWindow = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMainWindow,

    pub const _is_KMainWindow = {};
    pub const _is_QMainWindow = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KMainWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) KMainWindow {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KMainWindow_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KMainWindow object in C++ memory
    ///
    pub fn new2() KMainWindow {
        return .{ .ptr = qtc.KMainWindow_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KMainWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn new3(_parent: anytype, flags: i32) KMainWindow {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KMainWindow_new3(@ptrCast(_parent.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn metaObject(self: KMainWindow) QMetaObject {
        return .{ .ptr = qtc.KMainWindow_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KMainWindow, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KMainWindow_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn superMetaObject(self: KMainWindow) QMetaObject {
        return .{ .ptr = qtc.KMainWindow_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KMainWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KMainWindow_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KMainWindow_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KMainWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KMainWindow_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KMainWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KMainWindow_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KMainWindow, callback: *const fn (KMainWindow, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KMainWindow_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KMainWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KMainWindow_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `canBeRestored` instead
    ///
    pub const CanBeRestored = canBeRestored;

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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.classNameOfToplevel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restore` instead
    ///
    pub const Restore = restore;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` numberOfInstances: i32 `
    ///
    pub fn restore(self: KMainWindow, numberOfInstances: i32) bool {
        return qtc.KMainWindow_Restore(@ptrCast(self.ptr), @bitCast(numberOfInstances));
    }

    /// ### DEPRECATED: Use `hasMenuBar` instead
    ///
    pub const HasMenuBar = hasMenuBar;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#hasMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn hasMenuBar(self: KMainWindow) bool {
        return qtc.KMainWindow_HasMenuBar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `memberList` instead
    ///
    pub const MemberList = memberList;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#memberList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn memberList(allocator: std.mem.Allocator) []KMainWindow {
        const _arr: qtc.libqt_list = qtc.KMainWindow_MemberList();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KMainWindow, _arr.len) catch @panic("KMainWindow.memberList: Memory allocation failed");
        const _data_val: [*]QtC.KMainWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `toolBar` instead
    ///
    pub const ToolBar = toolBar;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn toolBar(self: KMainWindow) KToolBar {
        return .{ .ptr = qtc.KMainWindow_ToolBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toolBars` instead
    ///
    pub const ToolBars = toolBars;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolBars(self: KMainWindow, allocator: std.mem.Allocator) []KToolBar {
        const _arr: qtc.libqt_list = qtc.KMainWindow_ToolBars(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KToolBar, _arr.len) catch @panic("KMainWindow.toolBars: Memory allocation failed");
        const _data_val: [*]QtC.KToolBar = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings` instead
    ///
    pub const SetAutoSaveSettings = setAutoSaveSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn setAutoSaveSettings(self: KMainWindow) void {
        qtc.KMainWindow_SetAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings2` instead
    ///
    pub const SetAutoSaveSettings2 = setAutoSaveSettings2;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` group: KConfigGroup `
    ///
    pub fn setAutoSaveSettings2(self: KMainWindow, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KMainWindow_SetAutoSaveSettings2(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `resetAutoSaveSettings` instead
    ///
    pub const ResetAutoSaveSettings = resetAutoSaveSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn resetAutoSaveSettings(self: KMainWindow) void {
        qtc.KMainWindow_ResetAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoSaveSettings` instead
    ///
    pub const AutoSaveSettings = autoSaveSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn autoSaveSettings(self: KMainWindow) bool {
        return qtc.KMainWindow_AutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoSaveGroup` instead
    ///
    pub const AutoSaveGroup = autoSaveGroup;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn autoSaveGroup(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMainWindow_AutoSaveGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.autoSaveGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `autoSaveConfigGroup` instead
    ///
    pub const AutoSaveConfigGroup = autoSaveConfigGroup;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn autoSaveConfigGroup(self: KMainWindow) KConfigGroup {
        return .{ .ptr = qtc.KMainWindow_AutoSaveConfigGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStateConfigGroup` instead
    ///
    pub const SetStateConfigGroup = setStateConfigGroup;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setStateConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` configGroup: []const u8 `
    ///
    pub fn setStateConfigGroup(self: KMainWindow, configGroup: []const u8) void {
        const configGroup_str = qtc.libqt_string{
            .len = configGroup.len,
            .data = configGroup.ptr,
        };
        qtc.KMainWindow_SetStateConfigGroup(@ptrCast(self.ptr), configGroup_str);
    }

    /// ### DEPRECATED: Use `stateConfigGroup` instead
    ///
    pub const StateConfigGroup = stateConfigGroup;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#stateConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn stateConfigGroup(self: KMainWindow) KConfigGroup {
        return .{ .ptr = qtc.KMainWindow_StateConfigGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `applyMainWindowSettings` instead
    ///
    pub const ApplyMainWindowSettings = applyMainWindowSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#applyMainWindowSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn applyMainWindowSettings(self: KMainWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KMainWindow_ApplyMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `onApplyMainWindowSettings` instead
    ///
    pub const OnApplyMainWindowSettings = onApplyMainWindowSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#applyMainWindowSettings)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, config: KConfigGroup) callconv(.c) void `
    ///
    pub fn onApplyMainWindowSettings(self: KMainWindow, callback: *const fn (KMainWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KMainWindow_OnApplyMainWindowSettings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superApplyMainWindowSettings` instead
    ///
    pub const SuperApplyMainWindowSettings = superApplyMainWindowSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#applyMainWindowSettings)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn superApplyMainWindowSettings(self: KMainWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KMainWindow_SuperApplyMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `saveMainWindowSettings` instead
    ///
    pub const SaveMainWindowSettings = saveMainWindowSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveMainWindowSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn saveMainWindowSettings(self: KMainWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KMainWindow_SaveMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `dbusName` instead
    ///
    pub const DbusName = dbusName;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#dbusName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dbusName(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMainWindow_DbusName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.dbusName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCaption` instead
    ///
    pub const SetCaption = setCaption;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn setCaption(self: KMainWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `onSetCaption` instead
    ///
    pub const OnSetCaption = onSetCaption;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetCaption(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KMainWindow_OnSetCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCaption` instead
    ///
    pub const SuperSetCaption = superSetCaption;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn superSetCaption(self: KMainWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SuperSetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `setCaption2` instead
    ///
    pub const SetCaption2 = setCaption2;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` modified: bool `
    ///
    pub fn setCaption2(self: KMainWindow, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SetCaption2(@ptrCast(self.ptr), caption_str, modified);
    }

    /// ### DEPRECATED: Use `onSetCaption2` instead
    ///
    pub const OnSetCaption2 = onSetCaption2;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, caption: [*:0]const u8, modified: bool) callconv(.c) void `
    ///
    pub fn onSetCaption2(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KMainWindow_OnSetCaption2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCaption2` instead
    ///
    pub const SuperSetCaption2 = superSetCaption2;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` modified: bool `
    ///
    pub fn superSetCaption2(self: KMainWindow, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SuperSetCaption2(@ptrCast(self.ptr), caption_str, modified);
    }

    /// ### DEPRECATED: Use `setPlainCaption` instead
    ///
    pub const SetPlainCaption = setPlainCaption;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn setPlainCaption(self: KMainWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SetPlainCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `onSetPlainCaption` instead
    ///
    pub const OnSetPlainCaption = onSetPlainCaption;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetPlainCaption(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KMainWindow_OnSetPlainCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPlainCaption` instead
    ///
    pub const SuperSetPlainCaption = superSetPlainCaption;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn superSetPlainCaption(self: KMainWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SuperSetPlainCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `appHelpActivated` instead
    ///
    pub const AppHelpActivated = appHelpActivated;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#appHelpActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn appHelpActivated(self: KMainWindow) void {
        qtc.KMainWindow_AppHelpActivated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSettingsDirty` instead
    ///
    pub const SetSettingsDirty = setSettingsDirty;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setSettingsDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn setSettingsDirty(self: KMainWindow) void {
        qtc.KMainWindow_SetSettingsDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KMainWindow, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KMainWindow_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEvent) callconv(.c) bool) void {
        qtc.KMainWindow_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KMainWindow, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KMainWindow_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` keyEvent: QKeyEvent `
    ///
    pub fn keyPressEvent(self: KMainWindow, keyEvent: anytype) void {
        comptime _ = @TypeOf(keyEvent)._is_QKeyEvent;
        qtc.KMainWindow_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(keyEvent.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, keyEvent: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: KMainWindow, callback: *const fn (KMainWindow, QKeyEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` keyEvent: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: KMainWindow, keyEvent: anytype) void {
        comptime _ = @TypeOf(keyEvent)._is_QKeyEvent;
        qtc.KMainWindow_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(keyEvent.ptr));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn closeEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.KMainWindow_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: KMainWindow, callback: *const fn (KMainWindow, QCloseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn superCloseEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.KMainWindow_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `queryClose` instead
    ///
    pub const QueryClose = queryClose;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn queryClose(self: KMainWindow) bool {
        return qtc.KMainWindow_QueryClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onQueryClose` instead
    ///
    pub const OnQueryClose = onQueryClose;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onQueryClose(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superQueryClose` instead
    ///
    pub const SuperQueryClose = superQueryClose;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn superQueryClose(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperQueryClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saveProperties` instead
    ///
    pub const SaveProperties = saveProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn saveProperties(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KMainWindow_SaveProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onSaveProperties` instead
    ///
    pub const OnSaveProperties = onSaveProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: KConfigGroup) callconv(.c) void `
    ///
    pub fn onSaveProperties(self: KMainWindow, callback: *const fn (KMainWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KMainWindow_OnSaveProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveProperties` instead
    ///
    pub const SuperSaveProperties = superSaveProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn superSaveProperties(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KMainWindow_SuperSaveProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `readProperties` instead
    ///
    pub const ReadProperties = readProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn readProperties(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KMainWindow_ReadProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onReadProperties` instead
    ///
    pub const OnReadProperties = onReadProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: KConfigGroup) callconv(.c) void `
    ///
    pub fn onReadProperties(self: KMainWindow, callback: *const fn (KMainWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KMainWindow_OnReadProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadProperties` instead
    ///
    pub const SuperReadProperties = superReadProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn superReadProperties(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KMainWindow_SuperReadProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `saveGlobalProperties` instead
    ///
    pub const SaveGlobalProperties = saveGlobalProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn saveGlobalProperties(self: KMainWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KMainWindow_SaveGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `onSaveGlobalProperties` instead
    ///
    pub const OnSaveGlobalProperties = onSaveGlobalProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, sessionConfig: KConfig) callconv(.c) void `
    ///
    pub fn onSaveGlobalProperties(self: KMainWindow, callback: *const fn (KMainWindow, KConfig) callconv(.c) void) void {
        qtc.KMainWindow_OnSaveGlobalProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveGlobalProperties` instead
    ///
    pub const SuperSaveGlobalProperties = superSaveGlobalProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn superSaveGlobalProperties(self: KMainWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KMainWindow_SuperSaveGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `readGlobalProperties` instead
    ///
    pub const ReadGlobalProperties = readGlobalProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn readGlobalProperties(self: KMainWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KMainWindow_ReadGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `onReadGlobalProperties` instead
    ///
    pub const OnReadGlobalProperties = onReadGlobalProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, sessionConfig: KConfig) callconv(.c) void `
    ///
    pub fn onReadGlobalProperties(self: KMainWindow, callback: *const fn (KMainWindow, KConfig) callconv(.c) void) void {
        qtc.KMainWindow_OnReadGlobalProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadGlobalProperties` instead
    ///
    pub const SuperReadGlobalProperties = superReadGlobalProperties;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn superReadGlobalProperties(self: KMainWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KMainWindow_SuperReadGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### DEPRECATED: Use `savePropertiesInternal` instead
    ///
    pub const SavePropertiesInternal = savePropertiesInternal;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfig `
    ///
    /// ` param2: i32 `
    ///
    pub fn savePropertiesInternal(self: KMainWindow, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KMainWindow_SavePropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onSavePropertiesInternal` instead
    ///
    pub const OnSavePropertiesInternal = onSavePropertiesInternal;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: KConfig, param2: i32) callconv(.c) void `
    ///
    pub fn onSavePropertiesInternal(self: KMainWindow, callback: *const fn (KMainWindow, KConfig, i32) callconv(.c) void) void {
        qtc.KMainWindow_OnSavePropertiesInternal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSavePropertiesInternal` instead
    ///
    pub const SuperSavePropertiesInternal = superSavePropertiesInternal;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfig `
    ///
    /// ` param2: i32 `
    ///
    pub fn superSavePropertiesInternal(self: KMainWindow, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KMainWindow_SuperSavePropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `readPropertiesInternal` instead
    ///
    pub const ReadPropertiesInternal = readPropertiesInternal;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfig `
    ///
    /// ` param2: i32 `
    ///
    pub fn readPropertiesInternal(self: KMainWindow, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_KConfig;
        return qtc.KMainWindow_ReadPropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onReadPropertiesInternal` instead
    ///
    pub const OnReadPropertiesInternal = onReadPropertiesInternal;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: KConfig, param2: i32) callconv(.c) bool `
    ///
    pub fn onReadPropertiesInternal(self: KMainWindow, callback: *const fn (KMainWindow, KConfig, i32) callconv(.c) bool) void {
        qtc.KMainWindow_OnReadPropertiesInternal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadPropertiesInternal` instead
    ///
    pub const SuperReadPropertiesInternal = superReadPropertiesInternal;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfig `
    ///
    /// ` param2: i32 `
    ///
    pub fn superReadPropertiesInternal(self: KMainWindow, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_KConfig;
        return qtc.KMainWindow_SuperReadPropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `settingsDirty` instead
    ///
    pub const SettingsDirty = settingsDirty;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn settingsDirty(self: KMainWindow) bool {
        return qtc.KMainWindow_SettingsDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSettingsDirty` instead
    ///
    pub const OnSettingsDirty = onSettingsDirty;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSettingsDirty(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnSettingsDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSettingsDirty` instead
    ///
    pub const SuperSettingsDirty = superSettingsDirty;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn superSettingsDirty(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperSettingsDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saveAutoSaveSettings` instead
    ///
    pub const SaveAutoSaveSettings = saveAutoSaveSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn saveAutoSaveSettings(self: KMainWindow) void {
        qtc.KMainWindow_SaveAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSaveAutoSaveSettings` instead
    ///
    pub const OnSaveAutoSaveSettings = onSaveAutoSaveSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSaveAutoSaveSettings(self: KMainWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KMainWindow_OnSaveAutoSaveSettings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveAutoSaveSettings` instead
    ///
    pub const SuperSaveAutoSaveSettings = superSaveAutoSaveSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn superSaveAutoSaveSettings(self: KMainWindow) void {
        qtc.KMainWindow_SuperSaveAutoSaveSettings(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restore2` instead
    ///
    pub const Restore2 = restore2;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` numberOfInstances: i32 `
    ///
    /// ` _show: bool `
    ///
    pub fn restore2(self: KMainWindow, numberOfInstances: i32, _show: bool) bool {
        return qtc.KMainWindow_Restore2(@ptrCast(self.ptr), @bitCast(numberOfInstances), _show);
    }

    /// ### DEPRECATED: Use `toolBar1` instead
    ///
    pub const ToolBar1 = toolBar1;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn toolBar1(self: KMainWindow, name: []const u8) KToolBar {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KMainWindow_ToolBar1(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings1` instead
    ///
    pub const SetAutoSaveSettings1 = setAutoSaveSettings1;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn setAutoSaveSettings1(self: KMainWindow, groupName: []const u8) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings1(@ptrCast(self.ptr), groupName_str);
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings22` instead
    ///
    pub const SetAutoSaveSettings22 = setAutoSaveSettings22;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` groupName: []const u8 `
    ///
    /// ` saveWindowSize: bool `
    ///
    pub fn setAutoSaveSettings22(self: KMainWindow, groupName: []const u8, saveWindowSize: bool) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings22(@ptrCast(self.ptr), groupName_str, saveWindowSize);
    }

    /// ### DEPRECATED: Use `setAutoSaveSettings23` instead
    ///
    pub const SetAutoSaveSettings23 = setAutoSaveSettings23;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` group: KConfigGroup `
    ///
    /// ` saveWindowSize: bool `
    ///
    pub fn setAutoSaveSettings23(self: KMainWindow, group: anytype, saveWindowSize: bool) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn iconSize(self: KMainWindow) QSize {
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
    /// ` self: KMainWindow `
    ///
    /// ` _iconSize: QSize `
    ///
    pub fn setIconSize(self: KMainWindow, _iconSize: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolButtonStyle `
    ///
    pub fn toolButtonStyle(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` _toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn setToolButtonStyle(self: KMainWindow, _toolButtonStyle: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn isAnimated(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isDockNestingEnabled(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn documentMode(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn setDocumentMode(self: KMainWindow, enabled: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` qtabwidget_enums.TabShape `
    ///
    pub fn tabShape(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` _tabShape: qtabwidget_enums.TabShape `
    ///
    pub fn setTabShape(self: KMainWindow, _tabShape: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    /// ## Returns:
    ///
    /// ` qtabwidget_enums.TabPosition `
    ///
    pub fn tabPosition(self: KMainWindow, area: i32) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` areas: flag of qnamespace_enums.DockWidgetArea `
    ///
    /// ` _tabPosition: qtabwidget_enums.TabPosition `
    ///
    pub fn setTabPosition(self: KMainWindow, areas: i32, _tabPosition: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` options: flag of qmainwindow_enums.DockOption `
    ///
    pub fn setDockOptions(self: KMainWindow, options: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qmainwindow_enums.DockOption `
    ///
    pub fn dockOptions(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn isSeparator(self: KMainWindow, _pos: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn menuBar(self: KMainWindow) QMenuBar {
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
    /// ` self: KMainWindow `
    ///
    /// ` menubar: QMenuBar `
    ///
    pub fn setMenuBar(self: KMainWindow, menubar: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn menuWidget(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    /// ` menubar: QWidget `
    ///
    pub fn setMenuWidget(self: KMainWindow, menubar: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn statusBar(self: KMainWindow) QStatusBar {
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
    /// ` self: KMainWindow `
    ///
    /// ` statusbar: QStatusBar `
    ///
    pub fn setStatusBar(self: KMainWindow, statusbar: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn centralWidget(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setCentralWidget(self: KMainWindow, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QMainWindow_SetCentralWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn takeCentralWidget(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    /// ` _corner: qnamespace_enums.Corner `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    pub fn setCorner(self: KMainWindow, _corner: i32, area: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _corner: qnamespace_enums.Corner `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DockWidgetArea `
    ///
    pub fn corner(self: KMainWindow, _corner: i32) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn addToolBarBreak(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` before: QToolBar `
    ///
    pub fn insertToolBarBreak(self: KMainWindow, before: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` area: qnamespace_enums.ToolBarArea `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn addToolBar(self: KMainWindow, area: i32, toolbar: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn addToolBar2(self: KMainWindow, toolbar: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn addToolBar3(self: KMainWindow, title: []const u8) QToolBar {
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
    /// ` self: KMainWindow `
    ///
    /// ` before: QToolBar `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn insertToolBar(self: KMainWindow, before: anytype, toolbar: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn removeToolBar(self: KMainWindow, toolbar: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` before: QToolBar `
    ///
    pub fn removeToolBarBreak(self: KMainWindow, before: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn unifiedTitleAndToolBarOnMac(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` toolbar: QToolBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolBarArea `
    ///
    pub fn toolBarArea(self: KMainWindow, toolbar: anytype) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn toolBarBreak(self: KMainWindow, toolbar: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn addDockWidget(self: KMainWindow, area: i32, dockwidget: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn addDockWidget2(self: KMainWindow, area: i32, dockwidget: anytype, orientation: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` after: QDockWidget `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn splitDockWidget(self: KMainWindow, after: anytype, dockwidget: anytype, orientation: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` first: QDockWidget `
    ///
    /// ` second: QDockWidget `
    ///
    pub fn tabifyDockWidget(self: KMainWindow, first: anytype, second: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn tabifiedDockWidgets(self: KMainWindow, allocator: std.mem.Allocator, dockwidget: anytype) []QDockWidget {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        const _arr: qtc.libqt_list = qtc.QMainWindow_TabifiedDockWidgets(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDockWidget, _arr.len) catch @panic("KMainWindow.tabifiedDockWidgets: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn removeDockWidget(self: KMainWindow, dockwidget: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn restoreDockWidget(self: KMainWindow, dockwidget: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DockWidgetArea `
    ///
    pub fn dockWidgetArea(self: KMainWindow, dockwidget: anytype) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` docks: []QDockWidget `
    ///
    /// ` sizes: []i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn resizeDocks(self: KMainWindow, docks: []QDockWidget, sizes: []i32, orientation: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveState(self: KMainWindow, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KMainWindow.saveState: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` state: []u8 `
    ///
    pub fn restoreState(self: KMainWindow, state: []u8) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAnimated(self: KMainWindow, enabled: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn setDockNestingEnabled(self: KMainWindow, enabled: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` set: bool `
    ///
    pub fn setUnifiedTitleAndToolBarOnMac(self: KMainWindow, set: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _iconSize: QSize `
    ///
    pub fn iconSizeChanged(self: KMainWindow, _iconSize: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, iconSize: QSize) callconv(.c) void `
    ///
    pub fn onIconSizeChanged(self: KMainWindow, callback: *const fn (KMainWindow, QSize) callconv(.c) void) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn toolButtonStyleChanged(self: KMainWindow, _toolButtonStyle: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, toolButtonStyle: qnamespace_enums.ToolButtonStyle) callconv(.c) void `
    ///
    pub fn onToolButtonStyleChanged(self: KMainWindow, callback: *const fn (KMainWindow, i32) callconv(.c) void) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` dockWidget: QDockWidget `
    ///
    pub fn tabifiedDockWidgetActivated(self: KMainWindow, dockWidget: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, dockWidget: QDockWidget) callconv(.c) void `
    ///
    pub fn onTabifiedDockWidgetActivated(self: KMainWindow, callback: *const fn (KMainWindow, QDockWidget) callconv(.c) void) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` area: qnamespace_enums.ToolBarArea `
    ///
    pub fn addToolBarBreak1(self: KMainWindow, area: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` version: i32 `
    ///
    pub fn saveState1(self: KMainWindow, allocator: std.mem.Allocator, version: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState1(@ptrCast(self.ptr), @bitCast(version));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KMainWindow.saveState1: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` state: []u8 `
    ///
    /// ` version: i32 `
    ///
    pub fn restoreState2(self: KMainWindow, state: []u8, version: i32) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn winId(self: KMainWindow) usize {
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
    /// ` self: KMainWindow `
    ///
    pub fn createWinId(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn internalWinId(self: KMainWindow) usize {
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
    /// ` self: KMainWindow `
    ///
    pub fn effectiveWinId(self: KMainWindow) usize {
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
    /// ` self: KMainWindow `
    ///
    pub fn style(self: KMainWindow) QStyle {
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
    /// ` self: KMainWindow `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: KMainWindow, _style: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn isTopLevel(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isWindow(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isModal(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: KMainWindow, _windowModality: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn isEnabled(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: KMainWindow, param1: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: KMainWindow, enabled: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: KMainWindow, disabled: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: KMainWindow, windowModified: bool) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn frameGeometry(self: KMainWindow) QRect {
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
    /// ` self: KMainWindow `
    ///
    pub fn geometry(self: KMainWindow) QRect {
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
    /// ` self: KMainWindow `
    ///
    pub fn normalGeometry(self: KMainWindow) QRect {
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
    /// ` self: KMainWindow `
    ///
    pub fn x(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn y(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn pos(self: KMainWindow) QPoint {
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
    /// ` self: KMainWindow `
    ///
    pub fn frameSize(self: KMainWindow) QSize {
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
    /// ` self: KMainWindow `
    ///
    pub fn size(self: KMainWindow) QSize {
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
    /// ` self: KMainWindow `
    ///
    pub fn width(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn height(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn rect(self: KMainWindow) QRect {
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
    /// ` self: KMainWindow `
    ///
    pub fn childrenRect(self: KMainWindow) QRect {
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
    /// ` self: KMainWindow `
    ///
    pub fn childrenRegion(self: KMainWindow) QRegion {
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
    /// ` self: KMainWindow `
    ///
    pub fn minimumSize(self: KMainWindow) QSize {
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
    /// ` self: KMainWindow `
    ///
    pub fn maximumSize(self: KMainWindow) QSize {
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
    /// ` self: KMainWindow `
    ///
    pub fn minimumWidth(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn minimumHeight(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn maximumWidth(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn maximumHeight(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: KMainWindow, _minimumSize: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: KMainWindow, minw: i32, minh: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: KMainWindow, _maximumSize: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: KMainWindow, maxw: i32, maxh: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: KMainWindow, minw: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: KMainWindow, minh: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: KMainWindow, maxw: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: KMainWindow, maxh: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn sizeIncrement(self: KMainWindow) QSize {
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
    /// ` self: KMainWindow `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: KMainWindow, _sizeIncrement: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: KMainWindow, w: i32, h: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn baseSize(self: KMainWindow) QSize {
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
    /// ` self: KMainWindow `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: KMainWindow, _baseSize: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: KMainWindow, basew: i32, baseh: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: KMainWindow, fixedSize: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: KMainWindow, w: i32, h: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: KMainWindow, w: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: KMainWindow, h: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: KMainWindow, param1: anytype) QPointF {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: KMainWindow, param1: anytype) QPoint {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: KMainWindow, param1: anytype) QPointF {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: KMainWindow, param1: anytype) QPoint {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: KMainWindow, param1: anytype) QPointF {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: KMainWindow, param1: anytype) QPoint {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: KMainWindow, param1: anytype) QPointF {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: KMainWindow, param1: anytype) QPoint {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: KMainWindow, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: KMainWindow, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: KMainWindow, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: KMainWindow, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KMainWindow `
    ///
    pub fn window(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    pub fn nativeParentWidget(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    pub fn topLevelWidget(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    pub fn palette(self: KMainWindow) QPalette {
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
    /// ` self: KMainWindow `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: KMainWindow, _palette: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: KMainWindow, _backgroundRole: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: KMainWindow, _foregroundRole: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn font(self: KMainWindow) QFont {
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
    /// ` self: KMainWindow `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: KMainWindow, _font: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn fontMetrics(self: KMainWindow) QFontMetrics {
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
    /// ` self: KMainWindow `
    ///
    pub fn fontInfo(self: KMainWindow) QFontInfo {
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
    /// ` self: KMainWindow `
    ///
    pub fn cursor(self: KMainWindow) QCursor {
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
    /// ` self: KMainWindow `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: KMainWindow, _cursor: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn unsetCursor(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: KMainWindow, enable: bool) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn hasMouseTracking(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn underMouse(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: KMainWindow, enable: bool) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn hasTabletTracking(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: KMainWindow, _mask: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: KMainWindow, _mask: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn mask(self: KMainWindow) QRegion {
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
    /// ` self: KMainWindow `
    ///
    pub fn clearMask(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: KMainWindow, target: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: KMainWindow, painter: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn grab(self: KMainWindow) QPixmap {
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
    /// ` self: KMainWindow `
    ///
    pub fn graphicsEffect(self: KMainWindow) QGraphicsEffect {
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
    /// ` self: KMainWindow `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: KMainWindow, effect: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: KMainWindow, typeVal: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: KMainWindow, typeVal: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: KMainWindow, _windowTitle: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: KMainWindow, _styleSheet: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.styleSheet: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.windowTitle: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: KMainWindow, icon: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn windowIcon(self: KMainWindow) QIcon {
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
    /// ` self: KMainWindow `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: KMainWindow, _windowIconText: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.windowIconText: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: KMainWindow, _windowRole: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.windowRole: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: KMainWindow, filePath: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.windowFilePath: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: KMainWindow, level: f64) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn windowOpacity(self: KMainWindow) f64 {
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
    /// ` self: KMainWindow `
    ///
    pub fn isWindowModified(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: KMainWindow, _toolTip: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.toolTip: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: KMainWindow, msec: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn toolTipDuration(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: KMainWindow, _statusTip: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.statusTip: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: KMainWindow, _whatsThis: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.whatsThis: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.accessibleName: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: KMainWindow, name: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.accessibleDescription: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: KMainWindow, description: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: KMainWindow, direction: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn unsetLayoutDirection(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: KMainWindow, _locale: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn locale(self: KMainWindow) QLocale {
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
    /// ` self: KMainWindow `
    ///
    pub fn unsetLocale(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn isRightToLeft(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isLeftToRight(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn setFocus(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn isActiveWindow(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn activateWindow(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn clearFocus(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: KMainWindow, reason: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: KMainWindow, policy: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn hasFocus(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: KMainWindow, _focusProxy: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn focusProxy(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: KMainWindow, policy: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn grabMouse(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: KMainWindow, param1: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn releaseMouse(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn grabKeyboard(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn releaseKeyboard(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: KMainWindow, key: anytype) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: KMainWindow, id: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: KMainWindow, id: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: KMainWindow, id: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn updatesEnabled(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: KMainWindow, enable: bool) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn graphicsProxyWidget(self: KMainWindow) QGraphicsProxyWidget {
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
    /// ` self: KMainWindow `
    ///
    pub fn update(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn repaint(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: KMainWindow, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: KMainWindow, param1: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: KMainWindow, param1: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: KMainWindow, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: KMainWindow, param1: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: KMainWindow, param1: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: KMainWindow, hidden: bool) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn show(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn hide(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn showMinimized(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn showMaximized(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn showFullScreen(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn showNormal(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn close(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn raise(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn lower(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: KMainWindow, param1: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: KMainWindow, _x: i32, _y: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: KMainWindow, param1: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: KMainWindow, w: i32, h: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: KMainWindow, param1: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: KMainWindow, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: KMainWindow, _geometry: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: KMainWindow, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KMainWindow.saveGeometry: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: KMainWindow, _geometry: []u8) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn adjustSize(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn isVisible(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: KMainWindow, param1: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isHidden(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isMinimized(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isMaximized(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isFullScreen(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: KMainWindow, state: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: KMainWindow, state: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn sizePolicy(self: KMainWindow) QSizePolicy {
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
    /// ` self: KMainWindow `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: KMainWindow, _sizePolicy: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: KMainWindow, horizontal: i32, vertical: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn visibleRegion(self: KMainWindow) QRegion {
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
    /// ` self: KMainWindow `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: KMainWindow, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: KMainWindow, margins: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn contentsMargins(self: KMainWindow) QMargins {
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
    /// ` self: KMainWindow `
    ///
    pub fn contentsRect(self: KMainWindow) QRect {
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
    /// ` self: KMainWindow `
    ///
    pub fn layout(self: KMainWindow) QLayout {
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
    /// ` self: KMainWindow `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: KMainWindow, _layout: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn updateGeometry(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: KMainWindow, _parent: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: KMainWindow, _parent: anytype, f: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: KMainWindow, dx: i32, dy: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: KMainWindow, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn focusWidget(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    pub fn nextInFocusChain(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    pub fn previousInFocusChain(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    pub fn acceptDrops(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: KMainWindow, on: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: KMainWindow, action: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: KMainWindow, _actions: []QAction) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: KMainWindow, before: anytype, _actions: []QAction) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: KMainWindow, before: anytype, action: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: KMainWindow, action: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KMainWindow, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KMainWindow.actions: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: KMainWindow, text: []const u8) QAction {
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
    /// ` self: KMainWindow `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: KMainWindow, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KMainWindow `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: KMainWindow, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KMainWindow `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: KMainWindow, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KMainWindow `
    ///
    pub fn parentWidget(self: KMainWindow) QWidget {
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
    /// ` self: KMainWindow `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: KMainWindow, typeVal: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: KMainWindow, param1: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: KMainWindow, typeVal: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: KMainWindow, _x: i32, _y: i32) QWidget {
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
    /// ` self: KMainWindow `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: KMainWindow, p: anytype) QWidget {
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
    /// ` self: KMainWindow `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: KMainWindow, p: anytype) QWidget {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: KMainWindow, param1: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: KMainWindow, param1: i32) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn ensurePolished(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: KMainWindow, child: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn autoFillBackground(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: KMainWindow, enabled: bool) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn backingStore(self: KMainWindow) QBackingStore {
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
    /// ` self: KMainWindow `
    ///
    pub fn windowHandle(self: KMainWindow) QWindow {
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
    /// ` self: KMainWindow `
    ///
    pub fn screen(self: KMainWindow) QScreen {
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
    /// ` self: KMainWindow `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: KMainWindow, _screen: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: KMainWindow, title: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: KMainWindow, icon: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: KMainWindow, callback: *const fn (KMainWindow, QIcon) callconv(.c) void) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: KMainWindow, iconText: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: KMainWindow, _pos: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: KMainWindow, callback: *const fn (KMainWindow, QPoint) callconv(.c) void) void {
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
    /// ` self: KMainWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: KMainWindow, hints: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: KMainWindow, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: KMainWindow, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: KMainWindow, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: KMainWindow, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: KMainWindow, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: KMainWindow, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: KMainWindow, rectangle: anytype) QPixmap {
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
    /// ` self: KMainWindow `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: KMainWindow, typeVal: i32, flags: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: KMainWindow, key: anytype, context: i32) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: KMainWindow, id: i32, enable: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: KMainWindow, id: i32, enable: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: KMainWindow, param1: i32, on: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: KMainWindow, param1: i32, on: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMainWindow.objectName: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KMainWindow, name: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn isWidgetType(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isWindowType(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn isQuickItemType(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn signalsBlocked(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KMainWindow, b: bool) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn thread(self: KMainWindow) QThread {
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
    /// ` self: KMainWindow `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KMainWindow, _thread: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KMainWindow, interval: i32) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KMainWindow, time: i64) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KMainWindow, id: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KMainWindow, id: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KMainWindow, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KMainWindow.children: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KMainWindow, filterObj: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KMainWindow, obj: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KMainWindow, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KMainWindow `
    ///
    pub fn disconnect3(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KMainWindow, receiver: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn dumpObjectTree(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn dumpObjectInfo(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KMainWindow, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KMainWindow, name: [:0]const u8) QVariant {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KMainWindow, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KMainWindow.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KMainWindow.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    pub fn bindingStorage(self: KMainWindow) QBindingStorage {
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
    /// ` self: KMainWindow `
    ///
    pub fn bindingStorage2(self: KMainWindow) QBindingStorage {
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
    /// ` self: KMainWindow `
    ///
    pub fn destroyed(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KMainWindow, callback: *const fn (KMainWindow) callconv(.c) void) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn parent(self: KMainWindow) QObject {
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
    /// ` self: KMainWindow `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KMainWindow, classname: [:0]const u8) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn deleteLater(self: KMainWindow) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KMainWindow, interval: i32, timerType: i32) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KMainWindow, time: i64, timerType: i32) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KMainWindow, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KMainWindow, signal: [:0]const u8) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KMainWindow, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KMainWindow, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KMainWindow, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KMainWindow, param1: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KMainWindow, callback: *const fn (KMainWindow, QObject) callconv(.c) void) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn paintingActive(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn widthMM(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn heightMM(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn logicalDpiX(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn logicalDpiY(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn physicalDpiX(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn physicalDpiY(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn devicePixelRatio(self: KMainWindow) f64 {
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
    /// ` self: KMainWindow `
    ///
    pub fn devicePixelRatioF(self: KMainWindow) f64 {
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
    /// ` self: KMainWindow `
    ///
    pub fn colorCount(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn depth(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    pub fn createPopupMenu(self: KMainWindow) QMenu {
        return .{ .ptr = qtc.KMainWindow_CreatePopupMenu(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn superCreatePopupMenu(self: KMainWindow) QMenu {
        return .{ .ptr = qtc.KMainWindow_SuperCreatePopupMenu(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QMenu `
    ///
    pub fn onCreatePopupMenu(self: KMainWindow, callback: *const fn () callconv(.c) QMenu) void {
        qtc.KMainWindow_OnCreatePopupMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.KMainWindow_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.KMainWindow_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: KMainWindow, callback: *const fn (KMainWindow, QContextMenuEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn devType(self: KMainWindow) i32 {
        return qtc.KMainWindow_DevType(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn superDevType(self: KMainWindow) i32 {
        return qtc.KMainWindow_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: KMainWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.KMainWindow_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: KMainWindow, visible: bool) void {
        qtc.KMainWindow_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KMainWindow `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: KMainWindow, visible: bool) void {
        qtc.KMainWindow_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: KMainWindow, callback: *const fn (KMainWindow, bool) callconv(.c) void) void {
        qtc.KMainWindow_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn sizeHint(self: KMainWindow) QSize {
        return .{ .ptr = qtc.KMainWindow_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn superSizeHint(self: KMainWindow) QSize {
        return .{ .ptr = qtc.KMainWindow_SuperSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: KMainWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.KMainWindow_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn minimumSizeHint(self: KMainWindow) QSize {
        return .{ .ptr = qtc.KMainWindow_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn superMinimumSizeHint(self: KMainWindow) QSize {
        return .{ .ptr = qtc.KMainWindow_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: KMainWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.KMainWindow_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: KMainWindow, param1: i32) i32 {
        return qtc.KMainWindow_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: KMainWindow, param1: i32) i32 {
        return qtc.KMainWindow_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: KMainWindow, callback: *const fn (KMainWindow, i32) callconv(.c) i32) void {
        qtc.KMainWindow_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn hasHeightForWidth(self: KMainWindow) bool {
        return qtc.KMainWindow_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn superHasHeightForWidth(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn paintEngine(self: KMainWindow) QPaintEngine {
        return .{ .ptr = qtc.KMainWindow_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn superPaintEngine(self: KMainWindow) QPaintEngine {
        return .{ .ptr = qtc.KMainWindow_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: KMainWindow, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KMainWindow_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KMainWindow_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KMainWindow_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KMainWindow_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KMainWindow_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KMainWindow_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KMainWindow_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KMainWindow_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KMainWindow_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.KMainWindow_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.KMainWindow_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: KMainWindow, callback: *const fn (KMainWindow, QWheelEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.KMainWindow_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.KMainWindow_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: KMainWindow, callback: *const fn (KMainWindow, QKeyEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KMainWindow_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KMainWindow_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: KMainWindow, callback: *const fn (KMainWindow, QFocusEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KMainWindow_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KMainWindow_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: KMainWindow, callback: *const fn (KMainWindow, QFocusEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.KMainWindow_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.KMainWindow_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEnterEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KMainWindow_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KMainWindow_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn paintEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.KMainWindow_PaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn superPaintEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.KMainWindow_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: KMainWindow, callback: *const fn (KMainWindow, QPaintEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.KMainWindow_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.KMainWindow_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMoveEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.KMainWindow_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.KMainWindow_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: KMainWindow, callback: *const fn (KMainWindow, QResizeEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.KMainWindow_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.KMainWindow_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: KMainWindow, callback: *const fn (KMainWindow, QTabletEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.KMainWindow_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.KMainWindow_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: KMainWindow, callback: *const fn (KMainWindow, QActionEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.KMainWindow_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.KMainWindow_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: KMainWindow, callback: *const fn (KMainWindow, QDragEnterEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.KMainWindow_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.KMainWindow_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QDragMoveEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.KMainWindow_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.KMainWindow_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.KMainWindow_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.KMainWindow_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: KMainWindow, callback: *const fn (KMainWindow, QDropEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.KMainWindow_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.KMainWindow_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: KMainWindow, callback: *const fn (KMainWindow, QShowEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.KMainWindow_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.KMainWindow_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: KMainWindow, callback: *const fn (KMainWindow, QHideEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: KMainWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KMainWindow_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KMainWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: KMainWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KMainWindow_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: KMainWindow, callback: *const fn (KMainWindow, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KMainWindow_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QEvent `
    ///
    pub fn changeEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KMainWindow_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superChangeEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KMainWindow_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: KMainWindow, param1: i32) i32 {
        return qtc.KMainWindow_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: KMainWindow, param1: i32) i32 {
        return qtc.KMainWindow_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: KMainWindow, callback: *const fn (KMainWindow, i32) callconv(.c) i32) void {
        qtc.KMainWindow_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: KMainWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KMainWindow_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: KMainWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KMainWindow_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: KMainWindow, callback: *const fn (KMainWindow, QPainter) callconv(.c) void) void {
        qtc.KMainWindow_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: KMainWindow, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KMainWindow_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: KMainWindow, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KMainWindow_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: KMainWindow, callback: *const fn (KMainWindow, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KMainWindow_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn sharedPainter(self: KMainWindow) QPainter {
        return .{ .ptr = qtc.KMainWindow_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn superSharedPainter(self: KMainWindow) QPainter {
        return .{ .ptr = qtc.KMainWindow_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: KMainWindow, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KMainWindow_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KMainWindow_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KMainWindow_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: KMainWindow, callback: *const fn (KMainWindow, QInputMethodEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: KMainWindow, param1: i32) QVariant {
        return .{ .ptr = qtc.KMainWindow_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: KMainWindow, param1: i32) QVariant {
        return .{ .ptr = qtc.KMainWindow_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: KMainWindow, callback: *const fn (KMainWindow, i32) callconv(.c) QVariant) void {
        qtc.KMainWindow_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: KMainWindow, next: bool) bool {
        return qtc.KMainWindow_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KMainWindow `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: KMainWindow, next: bool) bool {
        return qtc.KMainWindow_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: KMainWindow, callback: *const fn (KMainWindow, bool) callconv(.c) bool) void {
        qtc.KMainWindow_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KMainWindow, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KMainWindow_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KMainWindow, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KMainWindow_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KMainWindow, callback: *const fn (KMainWindow, QObject, QEvent) callconv(.c) bool) void {
        qtc.KMainWindow_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KMainWindow_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KMainWindow_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KMainWindow, callback: *const fn (KMainWindow, QTimerEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KMainWindow_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KMainWindow_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KMainWindow, callback: *const fn (KMainWindow, QChildEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KMainWindow_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KMainWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KMainWindow_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KMainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KMainWindow_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KMainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KMainWindow_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KMainWindow, callback: *const fn (KMainWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KMainWindow_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KMainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KMainWindow_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KMainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KMainWindow_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KMainWindow, callback: *const fn (KMainWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KMainWindow_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn updateMicroFocus(self: KMainWindow) void {
        qtc.KMainWindow_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn superUpdateMicroFocus(self: KMainWindow) void {
        qtc.KMainWindow_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: KMainWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KMainWindow_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn create(self: KMainWindow) void {
        qtc.KMainWindow_Create(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn superCreate(self: KMainWindow) void {
        qtc.KMainWindow_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: KMainWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KMainWindow_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn destroy(self: KMainWindow) void {
        qtc.KMainWindow_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn superDestroy(self: KMainWindow) void {
        qtc.KMainWindow_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: KMainWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KMainWindow_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn focusNextChild(self: KMainWindow) bool {
        return qtc.KMainWindow_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn superFocusNextChild(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn focusPreviousChild(self: KMainWindow) bool {
        return qtc.KMainWindow_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn superFocusPreviousChild(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn sender(self: KMainWindow) QObject {
        return .{ .ptr = qtc.KMainWindow_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn superSender(self: KMainWindow) QObject {
        return .{ .ptr = qtc.KMainWindow_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KMainWindow, callback: *const fn () callconv(.c) QObject) void {
        qtc.KMainWindow_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn senderSignalIndex(self: KMainWindow) i32 {
        return qtc.KMainWindow_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn superSenderSignalIndex(self: KMainWindow) i32 {
        return qtc.KMainWindow_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KMainWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.KMainWindow_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KMainWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KMainWindow_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KMainWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KMainWindow_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) i32) void {
        qtc.KMainWindow_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KMainWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KMainWindow_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KMainWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KMainWindow_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KMainWindow, callback: *const fn (KMainWindow, QMetaMethod) callconv(.c) bool) void {
        qtc.KMainWindow_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: KMainWindow, metricA: i32, metricB: i32) f64 {
        return qtc.KMainWindow_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KMainWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: KMainWindow, metricA: i32, metricB: i32) f64 {
        return qtc.KMainWindow_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KMainWindow`
    ///
    /// ` callback: *const fn (self: KMainWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: KMainWindow, callback: *const fn (KMainWindow, i32, i32) callconv(.c) f64) void {
        qtc.KMainWindow_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#dtor.KMainWindow)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KMainWindow `
    ///
    pub fn delete(self: KMainWindow) void {
        qtc.KMainWindow_Delete(@ptrCast(self.ptr));
    }
};
