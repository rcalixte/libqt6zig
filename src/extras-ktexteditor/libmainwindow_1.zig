const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Document = @import("libqt6").KTextEditor__Document;
const KTextEditor__Plugin = @import("libqt6").KTextEditor__Plugin;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
const KXMLGUIFactory = @import("libqt6").KXMLGUIFactory;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const mainwindow_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html)
pub const KTextEditor__MainWindow = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__MainWindow,

    pub const _is_KTextEditor__MainWindow = {};
    pub const _is_QObject = {};

    /// New constructs a new KTextEditor::MainWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) KTextEditor__MainWindow {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KTextEditor__MainWindow_new(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn MetaObject(self: KTextEditor__MainWindow) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__MainWindow_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KTextEditor__MainWindow, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTextEditor__MainWindow_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn SuperMetaObject(self: KTextEditor__MainWindow) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__MainWindow_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTextEditor__MainWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__MainWindow_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KTextEditor__MainWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__MainWindow_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KTextEditor__MainWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__MainWindow_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__MainWindow_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KTextEditor__MainWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__MainWindow_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__mainwindow.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn Window(self: KTextEditor__MainWindow) QWidget {
        return .{ .ptr = qtc.KTextEditor__MainWindow_Window(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#guiFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn GuiFactory(self: KTextEditor__MainWindow) KXMLGUIFactory {
        return .{ .ptr = qtc.KTextEditor__MainWindow_GuiFactory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#unhandledShortcutOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` e: QEvent `
    ///
    pub fn UnhandledShortcutOverride(self: KTextEditor__MainWindow, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.KTextEditor__MainWindow_UnhandledShortcutOverride(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#unhandledShortcutOverride)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, e: QEvent) callconv(.c) void `
    ///
    pub fn OnUnhandledShortcutOverride(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QEvent) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_UnhandledShortcutOverride(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#views)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Views(self: KTextEditor__MainWindow, allocator: std.mem.Allocator) []KTextEditor__View {
        const _arr: qtc.libqt_list = qtc.KTextEditor__MainWindow_Views(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__View, _arr.len) catch @panic("ktexteditor__mainwindow.Views: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__View = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#activeView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn ActiveView(self: KTextEditor__MainWindow) KTextEditor__View {
        return .{ .ptr = qtc.KTextEditor__MainWindow_ActiveView(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#activateView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn ActivateView(self: KTextEditor__MainWindow, document: anytype) KTextEditor__View {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        return .{ .ptr = qtc.KTextEditor__MainWindow_ActivateView(@ptrCast(self.ptr), @ptrCast(document.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` url: QUrl `
    ///
    pub fn OpenUrl(self: KTextEditor__MainWindow, url: anytype) KTextEditor__View {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KTextEditor__MainWindow_OpenUrl(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#closeView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn CloseView(self: KTextEditor__MainWindow, view: anytype) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        return qtc.KTextEditor__MainWindow_CloseView(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#splitView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SplitView(self: KTextEditor__MainWindow, orientation: i32) void {
        qtc.KTextEditor__MainWindow_SplitView(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#closeSplitView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn CloseSplitView(self: KTextEditor__MainWindow, view: anytype) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        return qtc.KTextEditor__MainWindow_CloseSplitView(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewsInSameSplitView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view1: KTextEditor__View `
    ///
    /// ` view2: KTextEditor__View `
    ///
    pub fn ViewsInSameSplitView(self: KTextEditor__MainWindow, view1: anytype, view2: anytype) bool {
        comptime _ = @TypeOf(view1)._is_KTextEditor__View;
        comptime _ = @TypeOf(view2)._is_KTextEditor__View;
        return qtc.KTextEditor__MainWindow_ViewsInSameSplitView(@ptrCast(self.ptr), @ptrCast(view1.ptr), @ptrCast(view2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn ViewChanged(self: KTextEditor__MainWindow, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MainWindow_ViewChanged(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnViewChanged(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_ViewChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn ViewCreated(self: KTextEditor__MainWindow, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MainWindow_ViewCreated(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnViewCreated(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_ViewCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#createViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn CreateViewBar(self: KTextEditor__MainWindow, view: anytype) QWidget {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        return .{ .ptr = qtc.KTextEditor__MainWindow_CreateViewBar(@ptrCast(self.ptr), @ptrCast(view.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#deleteViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn DeleteViewBar(self: KTextEditor__MainWindow, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MainWindow_DeleteViewBar(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#addWidgetToViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` bar: QWidget `
    ///
    pub fn AddWidgetToViewBar(self: KTextEditor__MainWindow, view: anytype, bar: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(bar)._is_QWidget;
        qtc.KTextEditor__MainWindow_AddWidgetToViewBar(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(bar.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#showViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn ShowViewBar(self: KTextEditor__MainWindow, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MainWindow_ShowViewBar(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#hideViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn HideViewBar(self: KTextEditor__MainWindow, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__MainWindow_HideViewBar(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#createToolView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` plugin: KTextEditor__Plugin `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` pos: mainwindow_enums.ToolViewPosition `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn CreateToolView(self: KTextEditor__MainWindow, plugin: anytype, identifier: []const u8, pos: i32, icon: anytype, text: []const u8) QWidget {
        comptime _ = @TypeOf(plugin)._is_KTextEditor__Plugin;
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__MainWindow_CreateToolView(@ptrCast(self.ptr), @ptrCast(plugin.ptr), identifier_str, @bitCast(pos), @ptrCast(icon.ptr), text_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#moveToolView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` widget: QWidget `
    ///
    /// ` pos: mainwindow_enums.ToolViewPosition `
    ///
    pub fn MoveToolView(self: KTextEditor__MainWindow, widget: anytype, pos: i32) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KTextEditor__MainWindow_MoveToolView(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#showToolView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` widget: QWidget `
    ///
    pub fn ShowToolView(self: KTextEditor__MainWindow, widget: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KTextEditor__MainWindow_ShowToolView(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#hideToolView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` widget: QWidget `
    ///
    pub fn HideToolView(self: KTextEditor__MainWindow, widget: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KTextEditor__MainWindow_HideToolView(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#showPluginConfigPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` plugin: KTextEditor__Plugin `
    ///
    /// ` page: i32 `
    ///
    pub fn ShowPluginConfigPage(self: KTextEditor__MainWindow, plugin: anytype, page: i32) bool {
        comptime _ = @TypeOf(plugin)._is_KTextEditor__Plugin;
        return qtc.KTextEditor__MainWindow_ShowPluginConfigPage(@ptrCast(self.ptr), @ptrCast(plugin.ptr), @bitCast(page));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn PluginView(self: KTextEditor__MainWindow, name: []const u8) QObject {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__MainWindow_PluginView(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` name: []const u8 `
    ///
    /// ` pluginView: QObject `
    ///
    pub fn PluginViewCreated(self: KTextEditor__MainWindow, name: []const u8, pluginView: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(pluginView)._is_QObject;
        qtc.KTextEditor__MainWindow_PluginViewCreated(@ptrCast(self.ptr), name_str, @ptrCast(pluginView.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, name: [*:0]const u8, pluginView: QObject) callconv(.c) void `
    ///
    pub fn OnPluginViewCreated(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, [*:0]const u8, QObject) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_PluginViewCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` name: []const u8 `
    ///
    /// ` pluginView: QObject `
    ///
    pub fn PluginViewDeleted(self: KTextEditor__MainWindow, name: []const u8, pluginView: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(pluginView)._is_QObject;
        qtc.KTextEditor__MainWindow_PluginViewDeleted(@ptrCast(self.ptr), name_str, @ptrCast(pluginView.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewDeleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, name: [*:0]const u8, pluginView: QObject) callconv(.c) void `
    ///
    pub fn OnPluginViewDeleted(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, [*:0]const u8, QObject) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_PluginViewDeleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` widget: QWidget `
    ///
    pub fn AddWidget(self: KTextEditor__MainWindow, widget: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KTextEditor__MainWindow_AddWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` widget: QWidget `
    ///
    pub fn RemoveWidget(self: KTextEditor__MainWindow, widget: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KTextEditor__MainWindow_RemoveWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Widgets(self: KTextEditor__MainWindow, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KTextEditor__MainWindow_Widgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("ktexteditor__mainwindow.Widgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#activeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn ActiveWidget(self: KTextEditor__MainWindow) QWidget {
        return .{ .ptr = qtc.KTextEditor__MainWindow_ActiveWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#activateWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` widget: QWidget `
    ///
    pub fn ActivateWidget(self: KTextEditor__MainWindow, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KTextEditor__MainWindow_ActivateWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgetAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` widget: QWidget `
    ///
    pub fn WidgetAdded(self: KTextEditor__MainWindow, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KTextEditor__MainWindow_WidgetAdded(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgetAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnWidgetAdded(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QWidget) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_WidgetAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgetRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` widget: QWidget `
    ///
    pub fn WidgetRemoved(self: KTextEditor__MainWindow, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KTextEditor__MainWindow_WidgetRemoved(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgetRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnWidgetRemoved(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QWidget) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_WidgetRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: ArrayMap_constu8_QVariant `
    ///
    pub fn ShowMessage(self: KTextEditor__MainWindow, allocator: std.mem.Allocator, message: ArrayMap_constu8_QVariant) bool {
        const message_count = message.count();
        const message_keys = allocator.alloc(qtc.libqt_string, message_count) catch @panic("ktexteditor__mainwindow.ShowMessage: Memory allocation failed");
        defer allocator.free(message_keys);
        const message_values = allocator.alloc(QtC.QVariant, message_count) catch @panic("ktexteditor__mainwindow.ShowMessage: Memory allocation failed");
        defer allocator.free(message_values);
        var i: usize = 0;
        var message_it = message.iterator();
        while (message_it.next()) |it_entry| : (i += 1) {
            const message_key = it_entry.key_ptr.*;
            message_keys[i] = qtc.libqt_string{
                .len = message_key.len,
                .data = message_key.ptr,
            };
            message_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const message_map = qtc.libqt_map{
            .len = message_count,
            .keys = @ptrCast(message_keys.ptr),
            .values = @ptrCast(message_values.ptr),
        };
        return qtc.KTextEditor__MainWindow_ShowMessage(@ptrCast(self.ptr), message_map);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__mainwindow.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__mainwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` url: QUrl `
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn OpenUrl2(self: KTextEditor__MainWindow, url: anytype, encoding: []const u8) KTextEditor__View {
        comptime _ = @TypeOf(url)._is_QUrl;
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__MainWindow_OpenUrl2(@ptrCast(self.ptr), @ptrCast(url.ptr), encoding_str) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KTextEditor__MainWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__mainwindow.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KTextEditor__MainWindow, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn IsWidgetType(self: KTextEditor__MainWindow) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn IsWindowType(self: KTextEditor__MainWindow) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn IsQuickItemType(self: KTextEditor__MainWindow) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn SignalsBlocked(self: KTextEditor__MainWindow) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KTextEditor__MainWindow, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn Thread(self: KTextEditor__MainWindow) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTextEditor__MainWindow, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KTextEditor__MainWindow, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KTextEditor__MainWindow, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KTextEditor__MainWindow, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KTextEditor__MainWindow, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KTextEditor__MainWindow, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktexteditor__mainwindow.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTextEditor__MainWindow, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTextEditor__MainWindow, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KTextEditor__MainWindow, obj: anytype) void {
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTextEditor__MainWindow, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn Disconnect3(self: KTextEditor__MainWindow) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KTextEditor__MainWindow, receiver: anytype) bool {
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
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn DumpObjectTree(self: KTextEditor__MainWindow) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn DumpObjectInfo(self: KTextEditor__MainWindow) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTextEditor__MainWindow, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTextEditor__MainWindow, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KTextEditor__MainWindow, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor__mainwindow.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__mainwindow.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn BindingStorage(self: KTextEditor__MainWindow) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn BindingStorage2(self: KTextEditor__MainWindow) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn Destroyed(self: KTextEditor__MainWindow) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn Parent(self: KTextEditor__MainWindow) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KTextEditor__MainWindow, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn DeleteLater(self: KTextEditor__MainWindow) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KTextEditor__MainWindow, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KTextEditor__MainWindow, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTextEditor__MainWindow, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTextEditor__MainWindow, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KTextEditor__MainWindow, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTextEditor__MainWindow, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTextEditor__MainWindow, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTextEditor__MainWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTextEditor__MainWindow, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__MainWindow_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KTextEditor__MainWindow, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__MainWindow_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__MainWindow_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTextEditor__MainWindow, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__MainWindow_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KTextEditor__MainWindow, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__MainWindow_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__MainWindow_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KTextEditor__MainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTextEditor__MainWindow_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KTextEditor__MainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTextEditor__MainWindow_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QTimerEvent) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KTextEditor__MainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTextEditor__MainWindow_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KTextEditor__MainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTextEditor__MainWindow_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QChildEvent) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KTextEditor__MainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTextEditor__MainWindow_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KTextEditor__MainWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTextEditor__MainWindow_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QEvent) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KTextEditor__MainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__MainWindow_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KTextEditor__MainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__MainWindow_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KTextEditor__MainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__MainWindow_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KTextEditor__MainWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__MainWindow_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn Sender(self: KTextEditor__MainWindow) QObject {
        return .{ .ptr = qtc.KTextEditor__MainWindow_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn SuperSender(self: KTextEditor__MainWindow) QObject {
        return .{ .ptr = qtc.KTextEditor__MainWindow_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KTextEditor__MainWindow, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTextEditor__MainWindow_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn SenderSignalIndex(self: KTextEditor__MainWindow) i32 {
        return qtc.KTextEditor__MainWindow_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn SuperSenderSignalIndex(self: KTextEditor__MainWindow) i32 {
        return qtc.KTextEditor__MainWindow_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KTextEditor__MainWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEditor__MainWindow_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KTextEditor__MainWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__MainWindow_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KTextEditor__MainWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__MainWindow_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEditor__MainWindow_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KTextEditor__MainWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__MainWindow_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KTextEditor__MainWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__MainWindow_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, QMetaMethod) callconv(.c) bool) void {
        qtc.KTextEditor__MainWindow_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: KTextEditor__MainWindow, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KTextEditor__MainWindow, callback: *const fn (KTextEditor__MainWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__MainWindow `
    ///
    pub fn Delete(self: KTextEditor__MainWindow) void {
        qtc.KTextEditor__MainWindow_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/mainwindow.html#public-types)
pub const enums = struct {
    pub const ToolViewPosition = enum(i32) {
        pub const Left: i32 = 0;
        pub const Right: i32 = 1;
        pub const Top: i32 = 2;
        pub const Bottom: i32 = 3;
    };
};
