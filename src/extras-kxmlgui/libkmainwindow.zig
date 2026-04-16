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

    /// New constructs a new KMainWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KMainWindow {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KMainWindow_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KMainWindow object.
    ///
    pub fn New2() KMainWindow {
        return .{ .ptr = qtc.KMainWindow_new2() };
    }

    /// New3 constructs a new KMainWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn New3(parent: anytype, flags: i32) KMainWindow {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KMainWindow_new3(@ptrCast(parent.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn MetaObject(self: KMainWindow) QMetaObject {
        return .{ .ptr = qtc.KMainWindow_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KMainWindow, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KMainWindow_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperMetaObject(self: KMainWindow) QMetaObject {
        return .{ .ptr = qtc.KMainWindow_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KMainWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KMainWindow_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KMainWindow_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KMainWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KMainWindow_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KMainWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KMainWindow_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KMainWindow, callback: *const fn (KMainWindow, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KMainWindow_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KMainWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KMainWindow_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#canBeRestored)
    ///
    /// ## Parameter(s):
    ///
    /// ` numberOfInstances: i32 `
    ///
    pub fn CanBeRestored(numberOfInstances: i32) bool {
        return qtc.KMainWindow_CanBeRestored(@bitCast(numberOfInstances));
    }

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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.ClassNameOfToplevel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` numberOfInstances: i32 `
    ///
    pub fn Restore(self: KMainWindow, numberOfInstances: i32) bool {
        return qtc.KMainWindow_Restore(@ptrCast(self.ptr), @bitCast(numberOfInstances));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#hasMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn HasMenuBar(self: KMainWindow) bool {
        return qtc.KMainWindow_HasMenuBar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#memberList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MemberList(allocator: std.mem.Allocator) []KMainWindow {
        const _arr: qtc.libqt_list = qtc.KMainWindow_MemberList();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KMainWindow, _arr.len) catch @panic("kmainwindow.MemberList: Memory allocation failed");
        const _data: [*]QtC.KMainWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ToolBar(self: KMainWindow) KToolBar {
        return .{ .ptr = qtc.KMainWindow_ToolBar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolBars(self: KMainWindow, allocator: std.mem.Allocator) []KToolBar {
        const _arr: qtc.libqt_list = qtc.KMainWindow_ToolBars(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KToolBar, _arr.len) catch @panic("kmainwindow.ToolBars: Memory allocation failed");
        const _data: [*]QtC.KToolBar = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SetAutoSaveSettings(self: KMainWindow) void {
        qtc.KMainWindow_SetAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` group: KConfigGroup `
    ///
    pub fn SetAutoSaveSettings2(self: KMainWindow, group: anytype) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KMainWindow_SetAutoSaveSettings2(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ResetAutoSaveSettings(self: KMainWindow) void {
        qtc.KMainWindow_ResetAutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn AutoSaveSettings(self: KMainWindow) bool {
        return qtc.KMainWindow_AutoSaveSettings(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AutoSaveGroup(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMainWindow_AutoSaveGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.AutoSaveGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn AutoSaveConfigGroup(self: KMainWindow) KConfigGroup {
        return .{ .ptr = qtc.KMainWindow_AutoSaveConfigGroup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setStateConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` configGroup: []const u8 `
    ///
    pub fn SetStateConfigGroup(self: KMainWindow, configGroup: []const u8) void {
        const configGroup_str = qtc.libqt_string{
            .len = configGroup.len,
            .data = configGroup.ptr,
        };
        qtc.KMainWindow_SetStateConfigGroup(@ptrCast(self.ptr), configGroup_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#stateConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn StateConfigGroup(self: KMainWindow) KConfigGroup {
        return .{ .ptr = qtc.KMainWindow_StateConfigGroup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#applyMainWindowSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn ApplyMainWindowSettings(self: KMainWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KMainWindow_ApplyMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

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
    pub fn OnApplyMainWindowSettings(self: KMainWindow, callback: *const fn (KMainWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KMainWindow_OnApplyMainWindowSettings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperApplyMainWindowSettings` instead
    ///
    pub const QBaseApplyMainWindowSettings = SuperApplyMainWindowSettings;

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
    pub fn SuperApplyMainWindowSettings(self: KMainWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KMainWindow_SuperApplyMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveMainWindowSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn SaveMainWindowSettings(self: KMainWindow, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KMainWindow_SaveMainWindowSettings(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#dbusName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DbusName(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMainWindow_DbusName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.DbusName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetCaption(self: KMainWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SetCaption(@ptrCast(self.ptr), caption_str);
    }

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
    pub fn OnSetCaption(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KMainWindow_OnSetCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCaption` instead
    ///
    pub const QBaseSetCaption = SuperSetCaption;

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
    pub fn SuperSetCaption(self: KMainWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SuperSetCaption(@ptrCast(self.ptr), caption_str);
    }

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
    pub fn SetCaption2(self: KMainWindow, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SetCaption2(@ptrCast(self.ptr), caption_str, modified);
    }

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
    pub fn OnSetCaption2(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KMainWindow_OnSetCaption2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCaption2` instead
    ///
    pub const QBaseSetCaption2 = SuperSetCaption2;

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
    pub fn SuperSetCaption2(self: KMainWindow, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SuperSetCaption2(@ptrCast(self.ptr), caption_str, modified);
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetPlainCaption(self: KMainWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SetPlainCaption(@ptrCast(self.ptr), caption_str);
    }

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
    pub fn OnSetPlainCaption(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.KMainWindow_OnSetPlainCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPlainCaption` instead
    ///
    pub const QBaseSetPlainCaption = SuperSetPlainCaption;

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
    pub fn SuperSetPlainCaption(self: KMainWindow, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SuperSetPlainCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#appHelpActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn AppHelpActivated(self: KMainWindow) void {
        qtc.KMainWindow_AppHelpActivated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setSettingsDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SetSettingsDirty(self: KMainWindow) void {
        qtc.KMainWindow_SetSettingsDirty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KMainWindow, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KMainWindow_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEvent) callconv(.c) bool) void {
        qtc.KMainWindow_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KMainWindow, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KMainWindow_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` keyEvent: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KMainWindow, keyEvent: anytype) void {
        comptime _ = @TypeOf(keyEvent)._is_QKeyEvent;
        qtc.KMainWindow_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(keyEvent.ptr));
    }

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
    pub fn OnKeyPressEvent(self: KMainWindow, callback: *const fn (KMainWindow, QKeyEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

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
    pub fn SuperKeyPressEvent(self: KMainWindow, keyEvent: anytype) void {
        comptime _ = @TypeOf(keyEvent)._is_QKeyEvent;
        qtc.KMainWindow_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(keyEvent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn CloseEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.KMainWindow_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnCloseEvent(self: KMainWindow, callback: *const fn (KMainWindow, QCloseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

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
    pub fn SuperCloseEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.KMainWindow_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn QueryClose(self: KMainWindow) bool {
        return qtc.KMainWindow_QueryClose(@ptrCast(self.ptr));
    }

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
    pub fn OnQueryClose(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperQueryClose` instead
    ///
    pub const QBaseQueryClose = SuperQueryClose;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SuperQueryClose(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperQueryClose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn SaveProperties(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KMainWindow_SaveProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnSaveProperties(self: KMainWindow, callback: *const fn (KMainWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KMainWindow_OnSaveProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveProperties` instead
    ///
    pub const QBaseSaveProperties = SuperSaveProperties;

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
    pub fn SuperSaveProperties(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KMainWindow_SuperSaveProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn ReadProperties(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KMainWindow_ReadProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnReadProperties(self: KMainWindow, callback: *const fn (KMainWindow, KConfigGroup) callconv(.c) void) void {
        qtc.KMainWindow_OnReadProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadProperties` instead
    ///
    pub const QBaseReadProperties = SuperReadProperties;

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
    pub fn SuperReadProperties(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        qtc.KMainWindow_SuperReadProperties(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn SaveGlobalProperties(self: KMainWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KMainWindow_SaveGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

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
    pub fn OnSaveGlobalProperties(self: KMainWindow, callback: *const fn (KMainWindow, KConfig) callconv(.c) void) void {
        qtc.KMainWindow_OnSaveGlobalProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveGlobalProperties` instead
    ///
    pub const QBaseSaveGlobalProperties = SuperSaveGlobalProperties;

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
    pub fn SuperSaveGlobalProperties(self: KMainWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KMainWindow_SuperSaveGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` sessionConfig: KConfig `
    ///
    pub fn ReadGlobalProperties(self: KMainWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KMainWindow_ReadGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

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
    pub fn OnReadGlobalProperties(self: KMainWindow, callback: *const fn (KMainWindow, KConfig) callconv(.c) void) void {
        qtc.KMainWindow_OnReadGlobalProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadGlobalProperties` instead
    ///
    pub const QBaseReadGlobalProperties = SuperReadGlobalProperties;

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
    pub fn SuperReadGlobalProperties(self: KMainWindow, sessionConfig: anytype) void {
        comptime _ = @TypeOf(sessionConfig)._is_KConfig;
        qtc.KMainWindow_SuperReadGlobalProperties(@ptrCast(self.ptr), @ptrCast(sessionConfig.ptr));
    }

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
    pub fn SavePropertiesInternal(self: KMainWindow, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KMainWindow_SavePropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

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
    pub fn OnSavePropertiesInternal(self: KMainWindow, callback: *const fn (KMainWindow, KConfig, i32) callconv(.c) void) void {
        qtc.KMainWindow_OnSavePropertiesInternal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSavePropertiesInternal` instead
    ///
    pub const QBaseSavePropertiesInternal = SuperSavePropertiesInternal;

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
    pub fn SuperSavePropertiesInternal(self: KMainWindow, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KMainWindow_SuperSavePropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

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
    pub fn ReadPropertiesInternal(self: KMainWindow, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_KConfig;
        return qtc.KMainWindow_ReadPropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

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
    pub fn OnReadPropertiesInternal(self: KMainWindow, callback: *const fn (KMainWindow, KConfig, i32) callconv(.c) bool) void {
        qtc.KMainWindow_OnReadPropertiesInternal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadPropertiesInternal` instead
    ///
    pub const QBaseReadPropertiesInternal = SuperReadPropertiesInternal;

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
    pub fn SuperReadPropertiesInternal(self: KMainWindow, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_KConfig;
        return qtc.KMainWindow_SuperReadPropertiesInternal(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SettingsDirty(self: KMainWindow) bool {
        return qtc.KMainWindow_SettingsDirty(@ptrCast(self.ptr));
    }

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
    pub fn OnSettingsDirty(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnSettingsDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSettingsDirty` instead
    ///
    pub const QBaseSettingsDirty = SuperSettingsDirty;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SuperSettingsDirty(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperSettingsDirty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SaveAutoSaveSettings(self: KMainWindow) void {
        qtc.KMainWindow_SaveAutoSaveSettings(@ptrCast(self.ptr));
    }

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
    pub fn OnSaveAutoSaveSettings(self: KMainWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KMainWindow_OnSaveAutoSaveSettings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveAutoSaveSettings` instead
    ///
    pub const QBaseSaveAutoSaveSettings = SuperSaveAutoSaveSettings;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SuperSaveAutoSaveSettings(self: KMainWindow) void {
        qtc.KMainWindow_SuperSaveAutoSaveSettings(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` numberOfInstances: i32 `
    ///
    /// ` show: bool `
    ///
    pub fn Restore2(self: KMainWindow, numberOfInstances: i32, show: bool) bool {
        return qtc.KMainWindow_Restore2(@ptrCast(self.ptr), @bitCast(numberOfInstances), show);
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ToolBar1(self: KMainWindow, name: []const u8) KToolBar {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KMainWindow_ToolBar1(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` groupName: []const u8 `
    ///
    pub fn SetAutoSaveSettings1(self: KMainWindow, groupName: []const u8) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings1(@ptrCast(self.ptr), groupName_str);
    }

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
    pub fn SetAutoSaveSettings22(self: KMainWindow, groupName: []const u8, saveWindowSize: bool) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings22(@ptrCast(self.ptr), groupName_str, saveWindowSize);
    }

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
    pub fn SetAutoSaveSettings23(self: KMainWindow, group: anytype, saveWindowSize: bool) void {
        comptime _ = @TypeOf(group)._is_KConfigGroup;
        qtc.KMainWindow_SetAutoSaveSettings23(@ptrCast(self.ptr), @ptrCast(group.ptr), saveWindowSize);
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IconSize(self: KMainWindow) QSize {
        return .{ .ptr = qtc.QMainWindow_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` iconSize: QSize `
    ///
    pub fn SetIconSize(self: KMainWindow, iconSize: anytype) void {
        comptime _ = @TypeOf(iconSize)._is_QSize;
        qtc.QMainWindow_SetIconSize(@ptrCast(self.ptr), @ptrCast(iconSize.ptr));
    }

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
    pub fn ToolButtonStyle(self: KMainWindow) i32 {
        return qtc.QMainWindow_ToolButtonStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn SetToolButtonStyle(self: KMainWindow, toolButtonStyle: i32) void {
        qtc.QMainWindow_SetToolButtonStyle(@ptrCast(self.ptr), @bitCast(toolButtonStyle));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsAnimated(self: KMainWindow) bool {
        return qtc.QMainWindow_IsAnimated(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsDockNestingEnabled(self: KMainWindow) bool {
        return qtc.QMainWindow_IsDockNestingEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn DocumentMode(self: KMainWindow) bool {
        return qtc.QMainWindow_DocumentMode(@ptrCast(self.ptr));
    }

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
    pub fn SetDocumentMode(self: KMainWindow, enabled: bool) void {
        qtc.QMainWindow_SetDocumentMode(@ptrCast(self.ptr), enabled);
    }

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
    pub fn TabShape(self: KMainWindow) i32 {
        return qtc.QMainWindow_TabShape(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` tabShape: qtabwidget_enums.TabShape `
    ///
    pub fn SetTabShape(self: KMainWindow, tabShape: i32) void {
        qtc.QMainWindow_SetTabShape(@ptrCast(self.ptr), @bitCast(tabShape));
    }

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
    pub fn TabPosition(self: KMainWindow, area: i32) i32 {
        return qtc.QMainWindow_TabPosition(@ptrCast(self.ptr), @bitCast(area));
    }

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
    /// ` tabPosition: qtabwidget_enums.TabPosition `
    ///
    pub fn SetTabPosition(self: KMainWindow, areas: i32, tabPosition: i32) void {
        qtc.QMainWindow_SetTabPosition(@ptrCast(self.ptr), @bitCast(areas), @bitCast(tabPosition));
    }

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
    pub fn SetDockOptions(self: KMainWindow, options: i32) void {
        qtc.QMainWindow_SetDockOptions(@ptrCast(self.ptr), @bitCast(options));
    }

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
    pub fn DockOptions(self: KMainWindow) i32 {
        return qtc.QMainWindow_DockOptions(@ptrCast(self.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` pos: QPoint `
    ///
    pub fn IsSeparator(self: KMainWindow, pos: anytype) bool {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.QMainWindow_IsSeparator(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn MenuBar(self: KMainWindow) QMenuBar {
        return .{ .ptr = qtc.QMainWindow_MenuBar(@ptrCast(self.ptr)) };
    }

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
    pub fn SetMenuBar(self: KMainWindow, menubar: anytype) void {
        comptime _ = @TypeOf(menubar)._is_QMenuBar;
        qtc.QMainWindow_SetMenuBar(@ptrCast(self.ptr), @ptrCast(menubar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn MenuWidget(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QMainWindow_MenuWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn SetMenuWidget(self: KMainWindow, menubar: anytype) void {
        comptime _ = @TypeOf(menubar)._is_QWidget;
        qtc.QMainWindow_SetMenuWidget(@ptrCast(self.ptr), @ptrCast(menubar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn StatusBar(self: KMainWindow) QStatusBar {
        return .{ .ptr = qtc.QMainWindow_StatusBar(@ptrCast(self.ptr)) };
    }

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
    pub fn SetStatusBar(self: KMainWindow, statusbar: anytype) void {
        comptime _ = @TypeOf(statusbar)._is_QStatusBar;
        qtc.QMainWindow_SetStatusBar(@ptrCast(self.ptr), @ptrCast(statusbar.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn CentralWidget(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QMainWindow_CentralWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCentralWidget(self: KMainWindow, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QMainWindow_SetCentralWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn TakeCentralWidget(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QMainWindow_TakeCentralWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` corner: qnamespace_enums.Corner `
    ///
    /// ` area: qnamespace_enums.DockWidgetArea `
    ///
    pub fn SetCorner(self: KMainWindow, corner: i32, area: i32) void {
        qtc.QMainWindow_SetCorner(@ptrCast(self.ptr), @bitCast(corner), @bitCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#corner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` corner: qnamespace_enums.Corner `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DockWidgetArea `
    ///
    pub fn Corner(self: KMainWindow, corner: i32) i32 {
        return qtc.QMainWindow_Corner(@ptrCast(self.ptr), @bitCast(corner));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn AddToolBarBreak(self: KMainWindow) void {
        qtc.QMainWindow_AddToolBarBreak(@ptrCast(self.ptr));
    }

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
    pub fn InsertToolBarBreak(self: KMainWindow, before: anytype) void {
        comptime _ = @TypeOf(before)._is_QToolBar;
        qtc.QMainWindow_InsertToolBarBreak(@ptrCast(self.ptr), @ptrCast(before.ptr));
    }

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
    pub fn AddToolBar(self: KMainWindow, area: i32, toolbar: anytype) void {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_AddToolBar(@ptrCast(self.ptr), @bitCast(area), @ptrCast(toolbar.ptr));
    }

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
    pub fn AddToolBar2(self: KMainWindow, toolbar: anytype) void {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_AddToolBar2(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

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
    pub fn AddToolBar3(self: KMainWindow, title: []const u8) QToolBar {
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
    /// ` self: KMainWindow `
    ///
    /// ` before: QToolBar `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn InsertToolBar(self: KMainWindow, before: anytype, toolbar: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` toolbar: QToolBar `
    ///
    pub fn RemoveToolBar(self: KMainWindow, toolbar: anytype) void {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        qtc.QMainWindow_RemoveToolBar(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

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
    pub fn RemoveToolBarBreak(self: KMainWindow, before: anytype) void {
        comptime _ = @TypeOf(before)._is_QToolBar;
        qtc.QMainWindow_RemoveToolBarBreak(@ptrCast(self.ptr), @ptrCast(before.ptr));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn UnifiedTitleAndToolBarOnMac(self: KMainWindow) bool {
        return qtc.QMainWindow_UnifiedTitleAndToolBarOnMac(@ptrCast(self.ptr));
    }

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
    pub fn ToolBarArea(self: KMainWindow, toolbar: anytype) i32 {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        return qtc.QMainWindow_ToolBarArea(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

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
    pub fn ToolBarBreak(self: KMainWindow, toolbar: anytype) bool {
        comptime _ = @TypeOf(toolbar)._is_QToolBar;
        return qtc.QMainWindow_ToolBarBreak(@ptrCast(self.ptr), @ptrCast(toolbar.ptr));
    }

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
    pub fn AddDockWidget(self: KMainWindow, area: i32, dockwidget: anytype) void {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_AddDockWidget(@ptrCast(self.ptr), @bitCast(area), @ptrCast(dockwidget.ptr));
    }

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
    pub fn AddDockWidget2(self: KMainWindow, area: i32, dockwidget: anytype, orientation: i32) void {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_AddDockWidget2(@ptrCast(self.ptr), @bitCast(area), @ptrCast(dockwidget.ptr), @bitCast(orientation));
    }

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
    pub fn SplitDockWidget(self: KMainWindow, after: anytype, dockwidget: anytype, orientation: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` first: QDockWidget `
    ///
    /// ` second: QDockWidget `
    ///
    pub fn TabifyDockWidget(self: KMainWindow, first: anytype, second: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn TabifiedDockWidgets(self: KMainWindow, allocator: std.mem.Allocator, dockwidget: anytype) []QDockWidget {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        const _arr: qtc.libqt_list = qtc.QMainWindow_TabifiedDockWidgets(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDockWidget, _arr.len) catch @panic("kmainwindow.TabifiedDockWidgets: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` dockwidget: QDockWidget `
    ///
    pub fn RemoveDockWidget(self: KMainWindow, dockwidget: anytype) void {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        qtc.QMainWindow_RemoveDockWidget(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
    }

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
    pub fn RestoreDockWidget(self: KMainWindow, dockwidget: anytype) bool {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        return qtc.QMainWindow_RestoreDockWidget(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
    }

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
    pub fn DockWidgetArea(self: KMainWindow, dockwidget: anytype) i32 {
        comptime _ = @TypeOf(dockwidget)._is_QDockWidget;
        return qtc.QMainWindow_DockWidgetArea(@ptrCast(self.ptr), @ptrCast(dockwidget.ptr));
    }

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
    pub fn ResizeDocks(self: KMainWindow, docks: []QDockWidget, sizes: []i32, orientation: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveState(self: KMainWindow, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kmainwindow.SaveState: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn RestoreState(self: KMainWindow, state: []u8) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAnimated(self: KMainWindow, enabled: bool) void {
        qtc.QMainWindow_SetAnimated(@ptrCast(self.ptr), enabled);
    }

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
    pub fn SetDockNestingEnabled(self: KMainWindow, enabled: bool) void {
        qtc.QMainWindow_SetDockNestingEnabled(@ptrCast(self.ptr), enabled);
    }

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
    pub fn SetUnifiedTitleAndToolBarOnMac(self: KMainWindow, set: bool) void {
        qtc.QMainWindow_SetUnifiedTitleAndToolBarOnMac(@ptrCast(self.ptr), set);
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` iconSize: QSize `
    ///
    pub fn IconSizeChanged(self: KMainWindow, iconSize: anytype) void {
        comptime _ = @TypeOf(iconSize)._is_QSize;
        qtc.QMainWindow_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(iconSize.ptr));
    }

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
    pub fn OnIconSizeChanged(self: KMainWindow, callback: *const fn (KMainWindow, QSize) callconv(.c) void) void {
        qtc.QMainWindow_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` toolButtonStyle: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn ToolButtonStyleChanged(self: KMainWindow, toolButtonStyle: i32) void {
        qtc.QMainWindow_ToolButtonStyleChanged(@ptrCast(self.ptr), @bitCast(toolButtonStyle));
    }

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
    pub fn OnToolButtonStyleChanged(self: KMainWindow, callback: *const fn (KMainWindow, i32) callconv(.c) void) void {
        qtc.QMainWindow_Connect_ToolButtonStyleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TabifiedDockWidgetActivated(self: KMainWindow, dockWidget: anytype) void {
        comptime _ = @TypeOf(dockWidget)._is_QDockWidget;
        qtc.QMainWindow_TabifiedDockWidgetActivated(@ptrCast(self.ptr), @ptrCast(dockWidget.ptr));
    }

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
    pub fn OnTabifiedDockWidgetActivated(self: KMainWindow, callback: *const fn (KMainWindow, QDockWidget) callconv(.c) void) void {
        qtc.QMainWindow_Connect_TabifiedDockWidgetActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddToolBarBreak1(self: KMainWindow, area: i32) void {
        qtc.QMainWindow_AddToolBarBreak1(@ptrCast(self.ptr), @bitCast(area));
    }

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
    pub fn SaveState1(self: KMainWindow, allocator: std.mem.Allocator, version: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState1(@ptrCast(self.ptr), @bitCast(version));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kmainwindow.SaveState1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn RestoreState2(self: KMainWindow, state: []u8, version: i32) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn WinId(self: KMainWindow) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn CreateWinId(self: KMainWindow) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn InternalWinId(self: KMainWindow) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn EffectiveWinId(self: KMainWindow) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Style(self: KMainWindow) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KMainWindow, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsTopLevel(self: KMainWindow) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsWindow(self: KMainWindow) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsModal(self: KMainWindow) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

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
    pub fn WindowModality(self: KMainWindow) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KMainWindow, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsEnabled(self: KMainWindow) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn IsEnabledTo(self: KMainWindow, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SetEnabled(self: KMainWindow, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

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
    pub fn SetDisabled(self: KMainWindow, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

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
    pub fn SetWindowModified(self: KMainWindow, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn FrameGeometry(self: KMainWindow) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Geometry(self: KMainWindow) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn NormalGeometry(self: KMainWindow) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn X(self: KMainWindow) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Y(self: KMainWindow) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Pos(self: KMainWindow) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn FrameSize(self: KMainWindow) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Size(self: KMainWindow) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Width(self: KMainWindow) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Height(self: KMainWindow) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Rect(self: KMainWindow) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ChildrenRect(self: KMainWindow) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ChildrenRegion(self: KMainWindow) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn MinimumSize(self: KMainWindow) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn MaximumSize(self: KMainWindow) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn MinimumWidth(self: KMainWindow) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn MinimumHeight(self: KMainWindow) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn MaximumWidth(self: KMainWindow) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn MaximumHeight(self: KMainWindow) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KMainWindow, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

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
    pub fn SetMinimumSize2(self: KMainWindow, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KMainWindow, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

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
    pub fn SetMaximumSize2(self: KMainWindow, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

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
    pub fn SetMinimumWidth(self: KMainWindow, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

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
    pub fn SetMinimumHeight(self: KMainWindow, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

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
    pub fn SetMaximumWidth(self: KMainWindow, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

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
    pub fn SetMaximumHeight(self: KMainWindow, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SizeIncrement(self: KMainWindow) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KMainWindow, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

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
    pub fn SetSizeIncrement2(self: KMainWindow, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn BaseSize(self: KMainWindow) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KMainWindow, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

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
    pub fn SetBaseSize2(self: KMainWindow, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

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
    pub fn SetFixedSize(self: KMainWindow, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

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
    pub fn SetFixedSize2(self: KMainWindow, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

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
    pub fn SetFixedWidth(self: KMainWindow, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

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
    pub fn SetFixedHeight(self: KMainWindow, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

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
    pub fn MapToGlobal(self: KMainWindow, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToGlobal2(self: KMainWindow, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromGlobal(self: KMainWindow, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromGlobal2(self: KMainWindow, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToParent(self: KMainWindow, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToParent2(self: KMainWindow, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromParent(self: KMainWindow, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromParent2(self: KMainWindow, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapTo(self: KMainWindow, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KMainWindow, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KMainWindow, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KMainWindow, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KMainWindow `
    ///
    pub fn Window(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn NativeParentWidget(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn TopLevelWidget(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Palette(self: KMainWindow) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KMainWindow, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KMainWindow, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

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
    pub fn BackgroundRole(self: KMainWindow) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KMainWindow, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

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
    pub fn ForegroundRole(self: KMainWindow) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Font(self: KMainWindow) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KMainWindow, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn FontMetrics(self: KMainWindow) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn FontInfo(self: KMainWindow) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Cursor(self: KMainWindow) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KMainWindow, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn UnsetCursor(self: KMainWindow) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

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
    pub fn SetMouseTracking(self: KMainWindow, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn HasMouseTracking(self: KMainWindow) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn UnderMouse(self: KMainWindow) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

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
    pub fn SetTabletTracking(self: KMainWindow, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn HasTabletTracking(self: KMainWindow) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KMainWindow, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KMainWindow, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Mask(self: KMainWindow) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ClearMask(self: KMainWindow) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

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
    pub fn Render(self: KMainWindow, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

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
    pub fn Render2(self: KMainWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Grab(self: KMainWindow) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn GraphicsEffect(self: KMainWindow) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

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
    pub fn SetGraphicsEffect(self: KMainWindow, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

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
    pub fn GrabGesture(self: KMainWindow, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn UngrabGesture(self: KMainWindow, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KMainWindow, windowTitle: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KMainWindow, styleSheet: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn WindowTitle(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowIcon(self: KMainWindow, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn WindowIcon(self: KMainWindow) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KMainWindow, windowIconText: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KMainWindow, windowRole: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowFilePath(self: KMainWindow, filePath: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowOpacity(self: KMainWindow, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn WindowOpacity(self: KMainWindow) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsWindowModified(self: KMainWindow) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KMainWindow, toolTip: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetToolTipDuration(self: KMainWindow, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ToolTipDuration(self: KMainWindow) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KMainWindow, statusTip: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KMainWindow, whatsThis: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn AccessibleName(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetAccessibleName(self: KMainWindow, name: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetAccessibleDescription(self: KMainWindow, description: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KMainWindow, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

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
    pub fn LayoutDirection(self: KMainWindow) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn UnsetLayoutDirection(self: KMainWindow) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KMainWindow, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Locale(self: KMainWindow) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn UnsetLocale(self: KMainWindow) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsRightToLeft(self: KMainWindow) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsLeftToRight(self: KMainWindow) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SetFocus(self: KMainWindow) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsActiveWindow(self: KMainWindow) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ActivateWindow(self: KMainWindow) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ClearFocus(self: KMainWindow) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

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
    pub fn SetFocus2(self: KMainWindow, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

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
    pub fn FocusPolicy(self: KMainWindow) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

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
    pub fn SetFocusPolicy(self: KMainWindow, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn HasFocus(self: KMainWindow) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KMainWindow, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn FocusProxy(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

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
    pub fn ContextMenuPolicy(self: KMainWindow) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

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
    pub fn SetContextMenuPolicy(self: KMainWindow, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn GrabMouse(self: KMainWindow) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

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
    pub fn GrabMouse2(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ReleaseMouse(self: KMainWindow) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn GrabKeyboard(self: KMainWindow) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ReleaseKeyboard(self: KMainWindow) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

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
    pub fn GrabShortcut(self: KMainWindow, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

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
    pub fn ReleaseShortcut(self: KMainWindow, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn SetShortcutEnabled(self: KMainWindow, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn SetShortcutAutoRepeat(self: KMainWindow, id: i32) void {
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
    /// ` self: KMainWindow `
    ///
    pub fn UpdatesEnabled(self: KMainWindow) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetUpdatesEnabled(self: KMainWindow, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn GraphicsProxyWidget(self: KMainWindow) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Update(self: KMainWindow) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Repaint(self: KMainWindow) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KMainWindow, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

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
    pub fn Update3(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Update4(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KMainWindow, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

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
    pub fn Repaint3(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Repaint4(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SetHidden(self: KMainWindow, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Show(self: KMainWindow) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Hide(self: KMainWindow) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ShowMinimized(self: KMainWindow) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ShowMaximized(self: KMainWindow) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ShowFullScreen(self: KMainWindow) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ShowNormal(self: KMainWindow) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Close(self: KMainWindow) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Raise(self: KMainWindow) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Lower(self: KMainWindow) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

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
    pub fn StackUnder(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KMainWindow, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

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
    pub fn Move2(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Resize(self: KMainWindow, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

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
    pub fn Resize2(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KMainWindow, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KMainWindow, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

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
    pub fn SaveGeometry(self: KMainWindow, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kmainwindow.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KMainWindow, geometry: []u8) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn AdjustSize(self: KMainWindow) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsVisible(self: KMainWindow) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

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
    pub fn IsVisibleTo(self: KMainWindow, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsHidden(self: KMainWindow) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsMinimized(self: KMainWindow) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsMaximized(self: KMainWindow) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsFullScreen(self: KMainWindow) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

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
    pub fn WindowState(self: KMainWindow) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

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
    pub fn SetWindowState(self: KMainWindow, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn OverrideWindowState(self: KMainWindow, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SizePolicy(self: KMainWindow) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KMainWindow, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

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
    pub fn SetSizePolicy2(self: KMainWindow, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn VisibleRegion(self: KMainWindow) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

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
    pub fn SetContentsMargins(self: KMainWindow, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

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
    pub fn SetContentsMargins2(self: KMainWindow, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ContentsMargins(self: KMainWindow) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ContentsRect(self: KMainWindow) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Layout(self: KMainWindow) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KMainWindow, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn UpdateGeometry(self: KMainWindow) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KMainWindow, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KMainWindow, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

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
    pub fn Scroll(self: KMainWindow, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

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
    pub fn Scroll2(self: KMainWindow, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn FocusWidget(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn NextInFocusChain(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn PreviousInFocusChain(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn AcceptDrops(self: KMainWindow) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

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
    pub fn SetAcceptDrops(self: KMainWindow, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

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
    pub fn AddAction(self: KMainWindow, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KMainWindow, actions: []QAction) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KMainWindow, before: anytype, actions: []QAction) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KMainWindow, before: anytype, action: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KMainWindow, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

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
    pub fn Actions(self: KMainWindow, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kmainwindow.Actions: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KMainWindow, text: []const u8) QAction {
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
    /// ` self: KMainWindow `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KMainWindow, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KMainWindow `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KMainWindow, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KMainWindow `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KMainWindow, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KMainWindow `
    ///
    pub fn ParentWidget(self: KMainWindow) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn SetWindowFlags(self: KMainWindow, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn WindowFlags(self: KMainWindow) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

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
    pub fn SetWindowFlag(self: KMainWindow, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OverrideWindowFlags(self: KMainWindow, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn WindowType(self: KMainWindow) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KMainWindow, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

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
    pub fn ChildAt2(self: KMainWindow, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

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
    pub fn ChildAt3(self: KMainWindow, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

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
    pub fn SetAttribute(self: KMainWindow, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn TestAttribute(self: KMainWindow, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn EnsurePolished(self: KMainWindow) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

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
    pub fn IsAncestorOf(self: KMainWindow, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn AutoFillBackground(self: KMainWindow) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

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
    pub fn SetAutoFillBackground(self: KMainWindow, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn BackingStore(self: KMainWindow) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn WindowHandle(self: KMainWindow) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Screen(self: KMainWindow) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KMainWindow, screen: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KMainWindow, title: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WindowIconChanged(self: KMainWindow, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

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
    pub fn OnWindowIconChanged(self: KMainWindow, callback: *const fn (KMainWindow, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WindowIconTextChanged(self: KMainWindow, iconText: []const u8) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` callback: *const fn (self: KMainWindow, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KMainWindow, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn OnCustomContextMenuRequested(self: KMainWindow, callback: *const fn (KMainWindow, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InputMethodHints(self: KMainWindow) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

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
    pub fn SetInputMethodHints(self: KMainWindow, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

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
    pub fn Render22(self: KMainWindow, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KMainWindow, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn Render4(self: KMainWindow, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KMainWindow, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KMainWindow, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn Render42(self: KMainWindow, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KMainWindow, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

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
    pub fn GrabGesture2(self: KMainWindow, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

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
    pub fn GrabShortcut2(self: KMainWindow, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

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
    pub fn SetShortcutEnabled2(self: KMainWindow, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

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
    pub fn SetShortcutAutoRepeat2(self: KMainWindow, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

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
    pub fn SetWindowFlag2(self: KMainWindow, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

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
    pub fn SetAttribute2(self: KMainWindow, param1: i32, on: bool) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KMainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmainwindow.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KMainWindow, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsWidgetType(self: KMainWindow) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsWindowType(self: KMainWindow) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn IsQuickItemType(self: KMainWindow) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn SignalsBlocked(self: KMainWindow) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KMainWindow, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Thread(self: KMainWindow) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KMainWindow, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KMainWindow, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KMainWindow, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KMainWindow, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KMainWindow, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KMainWindow, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kmainwindow.Children: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KMainWindow, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KMainWindow, obj: anytype) void {
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
    /// ` self: KMainWindow `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KMainWindow, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KMainWindow `
    ///
    pub fn Disconnect3(self: KMainWindow) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KMainWindow, receiver: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    pub fn DumpObjectTree(self: KMainWindow) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn DumpObjectInfo(self: KMainWindow) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KMainWindow, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KMainWindow, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KMainWindow, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kmainwindow.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kmainwindow.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KMainWindow `
    ///
    pub fn BindingStorage(self: KMainWindow) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn BindingStorage2(self: KMainWindow) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Destroyed(self: KMainWindow) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KMainWindow, callback: *const fn (KMainWindow) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Parent(self: KMainWindow) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KMainWindow, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn DeleteLater(self: KMainWindow) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KMainWindow, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KMainWindow, time: i64, timerType: i32) i32 {
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
    /// ` self: KMainWindow `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KMainWindow, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KMainWindow, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KMainWindow, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KMainWindow, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KMainWindow, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KMainWindow, callback: *const fn (KMainWindow, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn PaintingActive(self: KMainWindow) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn WidthMM(self: KMainWindow) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn HeightMM(self: KMainWindow) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn LogicalDpiX(self: KMainWindow) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn LogicalDpiY(self: KMainWindow) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn PhysicalDpiX(self: KMainWindow) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn PhysicalDpiY(self: KMainWindow) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn DevicePixelRatio(self: KMainWindow) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn DevicePixelRatioF(self: KMainWindow) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn ColorCount(self: KMainWindow) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Depth(self: KMainWindow) i32 {
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
    pub fn CreatePopupMenu(self: KMainWindow) QMenu {
        return .{ .ptr = qtc.KMainWindow_CreatePopupMenu(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperCreatePopupMenu(self: KMainWindow) QMenu {
        return .{ .ptr = qtc.KMainWindow_SuperCreatePopupMenu(@ptrCast(self.ptr)) };
    }

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
    pub fn OnCreatePopupMenu(self: KMainWindow, callback: *const fn () callconv(.c) QMenu) void {
        qtc.KMainWindow_OnCreatePopupMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KMainWindow_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KMainWindow_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnContextMenuEvent(self: KMainWindow, callback: *const fn (KMainWindow, QContextMenuEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DevType(self: KMainWindow) i32 {
        return qtc.KMainWindow_DevType(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperDevType(self: KMainWindow) i32 {
        return qtc.KMainWindow_SuperDevType(@ptrCast(self.ptr));
    }

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
    pub fn OnDevType(self: KMainWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.KMainWindow_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetVisible(self: KMainWindow, visible: bool) void {
        qtc.KMainWindow_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KMainWindow `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KMainWindow, visible: bool) void {
        qtc.KMainWindow_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnSetVisible(self: KMainWindow, callback: *const fn (KMainWindow, bool) callconv(.c) void) void {
        qtc.KMainWindow_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SizeHint(self: KMainWindow) QSize {
        return .{ .ptr = qtc.KMainWindow_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperSizeHint(self: KMainWindow) QSize {
        return .{ .ptr = qtc.KMainWindow_SuperSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSizeHint(self: KMainWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.KMainWindow_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinimumSizeHint(self: KMainWindow) QSize {
        return .{ .ptr = qtc.KMainWindow_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperMinimumSizeHint(self: KMainWindow) QSize {
        return .{ .ptr = qtc.KMainWindow_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinimumSizeHint(self: KMainWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.KMainWindow_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HeightForWidth(self: KMainWindow, param1: i32) i32 {
        return qtc.KMainWindow_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KMainWindow, param1: i32) i32 {
        return qtc.KMainWindow_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnHeightForWidth(self: KMainWindow, callback: *const fn (KMainWindow, i32) callconv(.c) i32) void {
        qtc.KMainWindow_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HasHeightForWidth(self: KMainWindow) bool {
        return qtc.KMainWindow_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperHasHeightForWidth(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

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
    pub fn OnHasHeightForWidth(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn PaintEngine(self: KMainWindow) QPaintEngine {
        return .{ .ptr = qtc.KMainWindow_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperPaintEngine(self: KMainWindow) QPaintEngine {
        return .{ .ptr = qtc.KMainWindow_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

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
    pub fn OnPaintEngine(self: KMainWindow, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KMainWindow_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KMainWindow_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KMainWindow_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMousePressEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KMainWindow_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KMainWindow_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMouseReleaseEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KMainWindow_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KMainWindow_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMouseDoubleClickEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KMainWindow_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KMainWindow_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMouseMoveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMouseEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KMainWindow_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KMainWindow_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnWheelEvent(self: KMainWindow, callback: *const fn (KMainWindow, QWheelEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KMainWindow_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KMainWindow_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnKeyReleaseEvent(self: KMainWindow, callback: *const fn (KMainWindow, QKeyEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KMainWindow_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KMainWindow_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnFocusInEvent(self: KMainWindow, callback: *const fn (KMainWindow, QFocusEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KMainWindow_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KMainWindow_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnFocusOutEvent(self: KMainWindow, callback: *const fn (KMainWindow, QFocusEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KMainWindow_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KMainWindow_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEnterEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEnterEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KMainWindow_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KMainWindow_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnLeaveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KMainWindow_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KMainWindow_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnPaintEvent(self: KMainWindow, callback: *const fn (KMainWindow, QPaintEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KMainWindow_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KMainWindow_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMoveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QMoveEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KMainWindow_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KMainWindow_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnResizeEvent(self: KMainWindow, callback: *const fn (KMainWindow, QResizeEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KMainWindow_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KMainWindow_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTabletEvent(self: KMainWindow, callback: *const fn (KMainWindow, QTabletEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KMainWindow_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KMainWindow_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnActionEvent(self: KMainWindow, callback: *const fn (KMainWindow, QActionEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KMainWindow_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KMainWindow_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDragEnterEvent(self: KMainWindow, callback: *const fn (KMainWindow, QDragEnterEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KMainWindow_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KMainWindow_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDragMoveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QDragMoveEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KMainWindow_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KMainWindow_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDragLeaveEvent(self: KMainWindow, callback: *const fn (KMainWindow, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KMainWindow_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KMainWindow_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDropEvent(self: KMainWindow, callback: *const fn (KMainWindow, QDropEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KMainWindow_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KMainWindow_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnShowEvent(self: KMainWindow, callback: *const fn (KMainWindow, QShowEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KMainWindow_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KMainWindow_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnHideEvent(self: KMainWindow, callback: *const fn (KMainWindow, QHideEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn NativeEvent(self: KMainWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KMainWindow_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KMainWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KMainWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KMainWindow_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

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
    pub fn OnNativeEvent(self: KMainWindow, callback: *const fn (KMainWindow, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KMainWindow_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChangeEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KMainWindow_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KMainWindow_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnChangeEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Metric(self: KMainWindow, param1: i32) i32 {
        return qtc.KMainWindow_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KMainWindow, param1: i32) i32 {
        return qtc.KMainWindow_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnMetric(self: KMainWindow, callback: *const fn (KMainWindow, i32) callconv(.c) i32) void {
        qtc.KMainWindow_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InitPainter(self: KMainWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KMainWindow_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KMainWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KMainWindow_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnInitPainter(self: KMainWindow, callback: *const fn (KMainWindow, QPainter) callconv(.c) void) void {
        qtc.KMainWindow_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Redirected(self: KMainWindow, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KMainWindow_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KMainWindow, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KMainWindow_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

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
    pub fn OnRedirected(self: KMainWindow, callback: *const fn (KMainWindow, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KMainWindow_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SharedPainter(self: KMainWindow) QPainter {
        return .{ .ptr = qtc.KMainWindow_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperSharedPainter(self: KMainWindow) QPainter {
        return .{ .ptr = qtc.KMainWindow_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSharedPainter(self: KMainWindow, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KMainWindow_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InputMethodEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KMainWindow_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KMainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KMainWindow_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnInputMethodEvent(self: KMainWindow, callback: *const fn (KMainWindow, QInputMethodEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InputMethodQuery(self: KMainWindow, param1: i32) QVariant {
        return .{ .ptr = qtc.KMainWindow_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: KMainWindow `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KMainWindow, param1: i32) QVariant {
        return .{ .ptr = qtc.KMainWindow_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn OnInputMethodQuery(self: KMainWindow, callback: *const fn (KMainWindow, i32) callconv(.c) QVariant) void {
        qtc.KMainWindow_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusNextPrevChild(self: KMainWindow, next: bool) bool {
        return qtc.KMainWindow_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KMainWindow `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KMainWindow, next: bool) bool {
        return qtc.KMainWindow_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

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
    pub fn OnFocusNextPrevChild(self: KMainWindow, callback: *const fn (KMainWindow, bool) callconv(.c) bool) void {
        qtc.KMainWindow_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KMainWindow, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KMainWindow_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KMainWindow, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KMainWindow_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KMainWindow, callback: *const fn (KMainWindow, QObject, QEvent) callconv(.c) bool) void {
        qtc.KMainWindow_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KMainWindow_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KMainWindow_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KMainWindow, callback: *const fn (KMainWindow, QTimerEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KMainWindow_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KMainWindow_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KMainWindow, callback: *const fn (KMainWindow, QChildEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KMainWindow_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KMainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KMainWindow_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KMainWindow, callback: *const fn (KMainWindow, QEvent) callconv(.c) void) void {
        qtc.KMainWindow_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KMainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KMainWindow_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KMainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KMainWindow_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KMainWindow, callback: *const fn (KMainWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KMainWindow_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KMainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KMainWindow_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KMainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KMainWindow_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KMainWindow, callback: *const fn (KMainWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KMainWindow_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateMicroFocus(self: KMainWindow) void {
        qtc.KMainWindow_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperUpdateMicroFocus(self: KMainWindow) void {
        qtc.KMainWindow_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateMicroFocus(self: KMainWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KMainWindow_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Create(self: KMainWindow) void {
        qtc.KMainWindow_Create(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperCreate(self: KMainWindow) void {
        qtc.KMainWindow_SuperCreate(@ptrCast(self.ptr));
    }

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
    pub fn OnCreate(self: KMainWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KMainWindow_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Destroy(self: KMainWindow) void {
        qtc.KMainWindow_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperDestroy(self: KMainWindow) void {
        qtc.KMainWindow_SuperDestroy(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroy(self: KMainWindow, callback: *const fn () callconv(.c) void) void {
        qtc.KMainWindow_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusNextChild(self: KMainWindow) bool {
        return qtc.KMainWindow_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperFocusNextChild(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperFocusNextChild(@ptrCast(self.ptr));
    }

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
    pub fn OnFocusNextChild(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusPreviousChild(self: KMainWindow) bool {
        return qtc.KMainWindow_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperFocusPreviousChild(self: KMainWindow) bool {
        return qtc.KMainWindow_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

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
    pub fn OnFocusPreviousChild(self: KMainWindow, callback: *const fn () callconv(.c) bool) void {
        qtc.KMainWindow_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KMainWindow) QObject {
        return .{ .ptr = qtc.KMainWindow_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperSender(self: KMainWindow) QObject {
        return .{ .ptr = qtc.KMainWindow_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KMainWindow, callback: *const fn () callconv(.c) QObject) void {
        qtc.KMainWindow_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KMainWindow) i32 {
        return qtc.KMainWindow_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KMainWindow `
    ///
    pub fn SuperSenderSignalIndex(self: KMainWindow) i32 {
        return qtc.KMainWindow_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KMainWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.KMainWindow_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KMainWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KMainWindow_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KMainWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KMainWindow_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) i32) void {
        qtc.KMainWindow_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KMainWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KMainWindow_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KMainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KMainWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KMainWindow_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KMainWindow, callback: *const fn (KMainWindow, QMetaMethod) callconv(.c) bool) void {
        qtc.KMainWindow_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn GetDecodedMetricF(self: KMainWindow, metricA: i32, metricB: i32) f64 {
        return qtc.KMainWindow_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KMainWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KMainWindow, metricA: i32, metricB: i32) f64 {
        return qtc.KMainWindow_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

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
    pub fn OnGetDecodedMetricF(self: KMainWindow, callback: *const fn (KMainWindow, i32, i32) callconv(.c) f64) void {
        qtc.KMainWindow_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KMainWindow, callback: *const fn (KMainWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kmainwindow.html#dtor.KMainWindow)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KMainWindow `
    ///
    pub fn Delete(self: KMainWindow) void {
        qtc.KMainWindow_Delete(@ptrCast(self.ptr));
    }
};
