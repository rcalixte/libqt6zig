const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html)
pub const qformbuilder = struct {
    /// New constructs a new QFormBuilder object.
    ///
    pub fn New() QtC.QFormBuilder {
        return qtc.QFormBuilder_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#pluginPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginPaths(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFormBuilder_PluginPaths(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qformbuilder.PluginPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qformbuilder.PluginPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#clearPluginPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    pub fn ClearPluginPaths(self: ?*anyopaque) void {
        qtc.QFormBuilder_ClearPluginPaths(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#addPluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` pluginPath: []const u8 `
    ///
    pub fn AddPluginPath(self: ?*anyopaque, pluginPath: []const u8) void {
        const pluginPath_str = qtc.libqt_string{
            .len = pluginPath.len,
            .data = pluginPath.ptr,
        };
        qtc.QFormBuilder_AddPluginPath(@ptrCast(self), pluginPath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#setPluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` pluginPaths: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetPluginPath(self: ?*anyopaque, pluginPaths: []const []const u8, allocator: std.mem.Allocator) void {
        var pluginPaths_arr = allocator.alloc(qtc.libqt_string, pluginPaths.len) catch @panic("qformbuilder.SetPluginPath: Memory allocation failed");
        defer allocator.free(pluginPaths_arr);
        for (pluginPaths, 0..pluginPaths.len) |item, i| {
            pluginPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const pluginPaths_list = qtc.libqt_list{
            .len = pluginPaths.len,
            .data = pluginPaths_arr.ptr,
        };
        qtc.QFormBuilder_SetPluginPath(@ptrCast(self), pluginPaths_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#customWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomWidgets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDesignerCustomWidgetInterface {
        const _arr: qtc.libqt_list = qtc.QFormBuilder_CustomWidgets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDesignerCustomWidgetInterface, _arr.len) catch @panic("qformbuilder.CustomWidgets: Memory allocation failed");
        const _data: [*]QtC.QDesignerCustomWidgetInterface = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` widgetName: []const u8 `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateWidget(self: ?*anyopaque, widgetName: []const u8, parentWidget: ?*anyopaque, name: []const u8) QtC.QWidget {
        const widgetName_str = qtc.libqt_string{
            .len = widgetName.len,
            .data = widgetName.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_CreateWidget(@ptrCast(self), widgetName_str, @ptrCast(parentWidget), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, widgetName: [*:0]const u8, parentWidget: QtC.QWidget, name: [*:0]const u8) callconv(.c) QtC.QWidget `
    ///
    pub fn OnCreateWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QWidget) void {
        qtc.QFormBuilder_OnCreateWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` widgetName: []const u8 `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseCreateWidget(self: ?*anyopaque, widgetName: []const u8, parentWidget: ?*anyopaque, name: []const u8) QtC.QWidget {
        const widgetName_str = qtc.libqt_string{
            .len = widgetName.len,
            .data = widgetName.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_QBaseCreateWidget(@ptrCast(self), widgetName_str, @ptrCast(parentWidget), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` layoutName: []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateLayout(self: ?*anyopaque, layoutName: []const u8, parent: ?*anyopaque, name: []const u8) QtC.QLayout {
        const layoutName_str = qtc.libqt_string{
            .len = layoutName.len,
            .data = layoutName.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_CreateLayout(@ptrCast(self), layoutName_str, @ptrCast(parent), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, layoutName: [*:0]const u8, parent: QtC.QObject, name: [*:0]const u8) callconv(.c) QtC.QLayout `
    ///
    pub fn OnCreateLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QLayout) void {
        qtc.QFormBuilder_OnCreateLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` layoutName: []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseCreateLayout(self: ?*anyopaque, layoutName: []const u8, parent: ?*anyopaque, name: []const u8) QtC.QLayout {
        const layoutName_str = qtc.libqt_string{
            .len = layoutName.len,
            .data = layoutName.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_QBaseCreateLayout(@ptrCast(self), layoutName_str, @ptrCast(parent), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    pub fn UpdateCustomWidgets(self: ?*anyopaque) void {
        qtc.QFormBuilder_UpdateCustomWidgets(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateCustomWidgets(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QFormBuilder_OnUpdateCustomWidgets(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    pub fn QBaseUpdateCustomWidgets(self: ?*anyopaque) void {
        qtc.QFormBuilder_QBaseUpdateCustomWidgets(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#widgetByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` topLevel: QtC.QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WidgetByName(self: ?*anyopaque, topLevel: ?*anyopaque, name: []const u8) QtC.QWidget {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_WidgetByName(@ptrCast(self), @ptrCast(topLevel), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#widgetByName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, topLevel: QtC.QWidget, name: [*:0]const u8) callconv(.c) QtC.QWidget `
    ///
    pub fn OnWidgetByName(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QWidget) void {
        qtc.QFormBuilder_OnWidgetByName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#widgetByName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` topLevel: QtC.QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseWidgetByName(self: ?*anyopaque, topLevel: ?*anyopaque, name: []const u8) QtC.QWidget {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_QBaseWidgetByName(@ptrCast(self), @ptrCast(topLevel), name_str);
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    pub fn WorkingDirectory(self: ?*anyopaque) QtC.QDir {
        return qtc.QAbstractFormBuilder_WorkingDirectory(@ptrCast(self));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` directory: QtC.QDir `
    ///
    pub fn SetWorkingDirectory(self: ?*anyopaque, directory: ?*anyopaque) void {
        qtc.QAbstractFormBuilder_SetWorkingDirectory(@ptrCast(self), @ptrCast(directory));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractFormBuilder_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qformbuilder.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    pub fn Load(self: ?*anyopaque, dev: ?*anyopaque, parentWidget: ?*anyopaque) QtC.QWidget {
        return qtc.QFormBuilder_Load(@ptrCast(self), @ptrCast(dev), @ptrCast(parentWidget));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    pub fn QBaseLoad(self: ?*anyopaque, dev: ?*anyopaque, parentWidget: ?*anyopaque) QtC.QWidget {
        return qtc.QFormBuilder_QBaseLoad(@ptrCast(self), @ptrCast(dev), @ptrCast(parentWidget));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder`
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, dev: QtC.QIODevice, parentWidget: QtC.QWidget) callconv(.c) QtC.QWidget `
    ///
    pub fn OnLoad(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QFormBuilder_OnLoad(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn Save(self: ?*anyopaque, dev: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QFormBuilder_Save(@ptrCast(self), @ptrCast(dev), @ptrCast(widget));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn QBaseSave(self: ?*anyopaque, dev: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QFormBuilder_QBaseSave(@ptrCast(self), @ptrCast(dev), @ptrCast(widget));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder`
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, dev: QtC.QIODevice, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnSave(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormBuilder_OnSave(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn AddMenuAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QFormBuilder_AddMenuAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn QBaseAddMenuAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QFormBuilder_QBaseAddMenuAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder`
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, action: QtC.QAction) callconv(.c) void `
    ///
    pub fn OnAddMenuAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFormBuilder_OnAddMenuAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateAction(self: ?*anyopaque, parent: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_CreateAction(@ptrCast(self), @ptrCast(parent), name_str);
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseCreateAction(self: ?*anyopaque, parent: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_QBaseCreateAction(@ptrCast(self), @ptrCast(parent), name_str);
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder`
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, parent: QtC.QObject, name: [*:0]const u8) callconv(.c) QtC.QAction `
    ///
    pub fn OnCreateAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QAction) void {
        qtc.QFormBuilder_OnCreateAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateActionGroup(self: ?*anyopaque, parent: ?*anyopaque, name: []const u8) QtC.QActionGroup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_CreateActionGroup(@ptrCast(self), @ptrCast(parent), name_str);
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseCreateActionGroup(self: ?*anyopaque, parent: ?*anyopaque, name: []const u8) QtC.QActionGroup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormBuilder_QBaseCreateActionGroup(@ptrCast(self), @ptrCast(parent), name_str);
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder`
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, parent: QtC.QObject, name: [*:0]const u8) callconv(.c) QtC.QActionGroup `
    ///
    pub fn OnCreateActionGroup(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QActionGroup) void {
        qtc.QFormBuilder_OnCreateActionGroup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` prop: []const u8 `
    ///
    pub fn CheckProperty(self: ?*anyopaque, obj: ?*anyopaque, prop: []const u8) bool {
        const prop_str = qtc.libqt_string{
            .len = prop.len,
            .data = prop.ptr,
        };
        return qtc.QFormBuilder_CheckProperty(@ptrCast(self), @ptrCast(obj), prop_str);
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` prop: []const u8 `
    ///
    pub fn QBaseCheckProperty(self: ?*anyopaque, obj: ?*anyopaque, prop: []const u8) bool {
        const prop_str = qtc.libqt_string{
            .len = prop.len,
            .data = prop.ptr,
        };
        return qtc.QFormBuilder_QBaseCheckProperty(@ptrCast(self), @ptrCast(obj), prop_str);
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder`
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, obj: QtC.QObject, prop: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnCheckProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QFormBuilder_OnCheckProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` o: QtC.QObject `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn ApplyPropertyInternally(self: ?*anyopaque, o: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) bool {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QFormBuilder_ApplyPropertyInternally(@ptrCast(self), @ptrCast(o), propertyName_str, @ptrCast(value));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    /// ` o: QtC.QObject `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseApplyPropertyInternally(self: ?*anyopaque, o: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) bool {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QFormBuilder_QBaseApplyPropertyInternally(@ptrCast(self), @ptrCast(o), propertyName_str, @ptrCast(value));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder`
    ///
    /// ` callback: *const fn (self: QtC.QFormBuilder, o: QtC.QObject, propertyName: [*:0]const u8, value: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnApplyPropertyInternally(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFormBuilder_OnApplyPropertyInternally(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QFormBuilder_Reset(@ptrCast(self));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    pub fn QBaseReset(self: ?*anyopaque) void {
        qtc.QFormBuilder_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QFormBuilder_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    pub fn ToolBarAreaMetaEnum(self: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QFormBuilder_ToolBarAreaMetaEnum(@ptrCast(self));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    pub fn QBaseToolBarAreaMetaEnum(self: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QFormBuilder_QBaseToolBarAreaMetaEnum(@ptrCast(self));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFormBuilder`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaEnum `
    ///
    pub fn OnToolBarAreaMetaEnum(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaEnum) void {
        qtc.QFormBuilder_OnToolBarAreaMetaEnum(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#dtor.QFormBuilder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFormBuilder `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFormBuilder_Delete(@ptrCast(self));
    }
};
