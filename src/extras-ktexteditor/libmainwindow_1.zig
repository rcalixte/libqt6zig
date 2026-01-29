const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const mainwindow_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html)
pub const ktexteditor__mainwindow = struct {
    /// New constructs a new KTextEditor::MainWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New(parent: ?*anyopaque) QtC.KTextEditor__MainWindow {
        return qtc.KTextEditor__MainWindow_new(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTextEditor__MainWindow_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KTextEditor__MainWindow_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTextEditor__MainWindow_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__MainWindow_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__MainWindow_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__MainWindow_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__MainWindow_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__MainWindow_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.KTextEditor__MainWindow_Window(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#guiFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn GuiFactory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KTextEditor__MainWindow_GuiFactory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#unhandledShortcutOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn UnhandledShortcutOverride(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_UnhandledShortcutOverride(@ptrCast(self), @ptrCast(e));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#unhandledShortcutOverride)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, e: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnUnhandledShortcutOverride(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_UnhandledShortcutOverride(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#views)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Views(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KTextEditor__View {
        const _arr: qtc.libqt_list = qtc.KTextEditor__MainWindow_Views(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KTextEditor__View, _arr.len) catch @panic("ktexteditor__mainwindow.Views: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__View = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#activeView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn ActiveView(self: ?*anyopaque) QtC.KTextEditor__View {
        return qtc.KTextEditor__MainWindow_ActiveView(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#activateView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` document: QtC.KTextEditor__Document `
    ///
    pub fn ActivateView(self: ?*anyopaque, document: ?*anyopaque) QtC.KTextEditor__View {
        return qtc.KTextEditor__MainWindow_ActivateView(@ptrCast(self), @ptrCast(document));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn OpenUrl(self: ?*anyopaque, url: ?*anyopaque) QtC.KTextEditor__View {
        return qtc.KTextEditor__MainWindow_OpenUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#closeView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn CloseView(self: ?*anyopaque, view: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_CloseView(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#splitView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SplitView(self: ?*anyopaque, orientation: i32) void {
        qtc.KTextEditor__MainWindow_SplitView(@ptrCast(self), @intCast(orientation));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#closeSplitView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn CloseSplitView(self: ?*anyopaque, view: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_CloseSplitView(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewsInSameSplitView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view1: QtC.KTextEditor__View `
    ///
    /// ` view2: QtC.KTextEditor__View `
    ///
    pub fn ViewsInSameSplitView(self: ?*anyopaque, view1: ?*anyopaque, view2: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_ViewsInSameSplitView(@ptrCast(self), @ptrCast(view1), @ptrCast(view2));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn ViewChanged(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_ViewChanged(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, view: QtC.KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnViewChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_ViewChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn ViewCreated(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_ViewCreated(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#viewCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, view: QtC.KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnViewCreated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_ViewCreated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#createViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn CreateViewBar(self: ?*anyopaque, view: ?*anyopaque) QtC.QWidget {
        return qtc.KTextEditor__MainWindow_CreateViewBar(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#deleteViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn DeleteViewBar(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_DeleteViewBar(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#addWidgetToViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` bar: QtC.QWidget `
    ///
    pub fn AddWidgetToViewBar(self: ?*anyopaque, view: ?*anyopaque, bar: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_AddWidgetToViewBar(@ptrCast(self), @ptrCast(view), @ptrCast(bar));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#showViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn ShowViewBar(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_ShowViewBar(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#hideViewBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    pub fn HideViewBar(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_HideViewBar(@ptrCast(self), @ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#createToolView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` plugin: QtC.KTextEditor__Plugin `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` pos: mainwindow_enums.ToolViewPosition `
    ///
    /// ` icon: QtC.QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn CreateToolView(self: ?*anyopaque, plugin: ?*anyopaque, identifier: []const u8, pos: i32, icon: ?*anyopaque, text: []const u8) QtC.QWidget {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__MainWindow_CreateToolView(@ptrCast(self), @ptrCast(plugin), identifier_str, @intCast(pos), @ptrCast(icon), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#moveToolView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` pos: mainwindow_enums.ToolViewPosition `
    ///
    pub fn MoveToolView(self: ?*anyopaque, widget: ?*anyopaque, pos: i32) bool {
        return qtc.KTextEditor__MainWindow_MoveToolView(@ptrCast(self), @ptrCast(widget), @intCast(pos));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#showToolView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn ShowToolView(self: ?*anyopaque, widget: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_ShowToolView(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#hideToolView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn HideToolView(self: ?*anyopaque, widget: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_HideToolView(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#showPluginConfigPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` plugin: QtC.KTextEditor__Plugin `
    ///
    /// ` page: i32 `
    ///
    pub fn ShowPluginConfigPage(self: ?*anyopaque, plugin: ?*anyopaque, page: i32) bool {
        return qtc.KTextEditor__MainWindow_ShowPluginConfigPage(@ptrCast(self), @ptrCast(plugin), @intCast(page));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn PluginView(self: ?*anyopaque, name: []const u8) QtC.QObject {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KTextEditor__MainWindow_PluginView(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` name: []const u8 `
    ///
    /// ` pluginView: QtC.QObject `
    ///
    pub fn PluginViewCreated(self: ?*anyopaque, name: []const u8, pluginView: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KTextEditor__MainWindow_PluginViewCreated(@ptrCast(self), name_str, @ptrCast(pluginView));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, name: [*:0]const u8, pluginView: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnPluginViewCreated(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_PluginViewCreated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` name: []const u8 `
    ///
    /// ` pluginView: QtC.QObject `
    ///
    pub fn PluginViewDeleted(self: ?*anyopaque, name: []const u8, pluginView: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KTextEditor__MainWindow_PluginViewDeleted(@ptrCast(self), name_str, @ptrCast(pluginView));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewDeleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, name: [*:0]const u8, pluginView: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnPluginViewDeleted(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_PluginViewDeleted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn RemoveWidget(self: ?*anyopaque, widget: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_RemoveWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Widgets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.KTextEditor__MainWindow_Widgets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("ktexteditor__mainwindow.Widgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#activeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn ActiveWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KTextEditor__MainWindow_ActiveWidget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#activateWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn ActivateWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_ActivateWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgetAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn WidgetAdded(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_WidgetAdded(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgetAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnWidgetAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_WidgetAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgetRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn WidgetRemoved(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_WidgetRemoved(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#widgetRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnWidgetRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_Connect_WidgetRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` message: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ShowMessage(self: ?*anyopaque, message: map_constu8_qtcqvariant, allocator: std.mem.Allocator) bool {
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
            message_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const message_map = qtc.libqt_map{
            .len = message_count,
            .keys = @ptrCast(message_keys.ptr),
            .values = @ptrCast(message_values.ptr),
        };
        return qtc.KTextEditor__MainWindow_ShowMessage(@ptrCast(self), message_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__mainwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mainwindow.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn OpenUrl2(self: ?*anyopaque, url: ?*anyopaque, encoding: []const u8) QtC.KTextEditor__View {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return qtc.KTextEditor__MainWindow_OpenUrl2(@ptrCast(self), @ptrCast(url), encoding_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktexteditor__mainwindow.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEditor__MainWindow_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEditor__MainWindow_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__MainWindow_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTextEditor__MainWindow_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTextEditor__MainWindow_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KTextEditor__MainWindow_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MainWindow_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__MainWindow_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEditor__MainWindow_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__MainWindow_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__MainWindow_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEditor__MainWindow_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTextEditor__MainWindow_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow`
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEditor__MainWindow_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__MainWindow, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__MainWindow `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__MainWindow_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/mainwindow.html#public-types)
pub const enums = struct {
    pub const ToolViewPosition = enum {
        pub const Left: i32 = 0;
        pub const Right: i32 = 1;
        pub const Top: i32 = 2;
        pub const Bottom: i32 = 3;
    };
};
