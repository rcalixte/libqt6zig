const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionGroup = @import("libqt6").QActionGroup;
const QDesignerCustomWidgetInterface = @import("libqt6").QDesignerCustomWidgetInterface;
const QDir = @import("libqt6").QDir;
const QIODevice = @import("libqt6").QIODevice;
const QLayout = @import("libqt6").QLayout;
const QMetaEnum = @import("libqt6").QMetaEnum;
const QObject = @import("libqt6").QObject;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html)
pub const QFormBuilder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFormBuilder,

    pub const _is_QFormBuilder = {};
    pub const _is_QAbstractFormBuilder = {};

    /// New constructs a new QFormBuilder object.
    ///
    pub fn New() QFormBuilder {
        return .{ .ptr = qtc.QFormBuilder_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#pluginPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginPaths(self: QFormBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFormBuilder_PluginPaths(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QFormBuilder `
    ///
    pub fn ClearPluginPaths(self: QFormBuilder) void {
        qtc.QFormBuilder_ClearPluginPaths(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#addPluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` pluginPath: []const u8 `
    ///
    pub fn AddPluginPath(self: QFormBuilder, pluginPath: []const u8) void {
        const pluginPath_str = qtc.libqt_string{
            .len = pluginPath.len,
            .data = pluginPath.ptr,
        };
        qtc.QFormBuilder_AddPluginPath(@ptrCast(self.ptr), pluginPath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#setPluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pluginPaths: []const []const u8 `
    ///
    pub fn SetPluginPath(self: QFormBuilder, allocator: std.mem.Allocator, pluginPaths: []const []const u8) void {
        const pluginPaths_arr = allocator.alloc(qtc.libqt_string, pluginPaths.len) catch @panic("qformbuilder.SetPluginPath: Memory allocation failed");
        defer allocator.free(pluginPaths_arr);
        for (pluginPaths, 0..pluginPaths.len) |item, i|
            pluginPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const pluginPaths_list = qtc.libqt_list{
            .len = pluginPaths.len,
            .data = pluginPaths_arr.ptr,
        };
        qtc.QFormBuilder_SetPluginPath(@ptrCast(self.ptr), pluginPaths_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#customWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomWidgets(self: QFormBuilder, allocator: std.mem.Allocator) []QDesignerCustomWidgetInterface {
        const _arr: qtc.libqt_list = qtc.QFormBuilder_CustomWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerCustomWidgetInterface, _arr.len) catch @panic("qformbuilder.CustomWidgets: Memory allocation failed");
        const _data: [*]QtC.QDesignerCustomWidgetInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` widgetName: []const u8 `
    ///
    /// ` parentWidget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateWidget(self: QFormBuilder, widgetName: []const u8, parentWidget: anytype, name: []const u8) QWidget {
        const widgetName_str = qtc.libqt_string{
            .len = widgetName.len,
            .data = widgetName.ptr,
        };
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_CreateWidget(@ptrCast(self.ptr), widgetName_str, @ptrCast(parentWidget.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` callback: *const fn (self: QFormBuilder, widgetName: [*:0]const u8, parentWidget: QWidget, name: [*:0]const u8) callconv(.c) QWidget `
    ///
    pub fn OnCreateWidget(self: QFormBuilder, callback: *const fn (QFormBuilder, [*:0]const u8, QWidget, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.QFormBuilder_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateWidget` instead
    ///
    pub const QBaseCreateWidget = SuperCreateWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` widgetName: []const u8 `
    ///
    /// ` parentWidget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateWidget(self: QFormBuilder, widgetName: []const u8, parentWidget: anytype, name: []const u8) QWidget {
        const widgetName_str = qtc.libqt_string{
            .len = widgetName.len,
            .data = widgetName.ptr,
        };
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_SuperCreateWidget(@ptrCast(self.ptr), widgetName_str, @ptrCast(parentWidget.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` layoutName: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateLayout(self: QFormBuilder, layoutName: []const u8, parent: anytype, name: []const u8) QLayout {
        const layoutName_str = qtc.libqt_string{
            .len = layoutName.len,
            .data = layoutName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_CreateLayout(@ptrCast(self.ptr), layoutName_str, @ptrCast(parent.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` callback: *const fn (self: QFormBuilder, layoutName: [*:0]const u8, parent: QObject, name: [*:0]const u8) callconv(.c) QLayout `
    ///
    pub fn OnCreateLayout(self: QFormBuilder, callback: *const fn (QFormBuilder, [*:0]const u8, QObject, [*:0]const u8) callconv(.c) QLayout) void {
        qtc.QFormBuilder_OnCreateLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateLayout` instead
    ///
    pub const QBaseCreateLayout = SuperCreateLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` layoutName: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateLayout(self: QFormBuilder, layoutName: []const u8, parent: anytype, name: []const u8) QLayout {
        const layoutName_str = qtc.libqt_string{
            .len = layoutName.len,
            .data = layoutName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_SuperCreateLayout(@ptrCast(self.ptr), layoutName_str, @ptrCast(parent.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn UpdateCustomWidgets(self: QFormBuilder) void {
        qtc.QFormBuilder_UpdateCustomWidgets(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateCustomWidgets(self: QFormBuilder, callback: *const fn () callconv(.c) void) void {
        qtc.QFormBuilder_OnUpdateCustomWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateCustomWidgets` instead
    ///
    pub const QBaseUpdateCustomWidgets = SuperUpdateCustomWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn SuperUpdateCustomWidgets(self: QFormBuilder) void {
        qtc.QFormBuilder_SuperUpdateCustomWidgets(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#widgetByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` topLevel: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WidgetByName(self: QFormBuilder, topLevel: anytype, name: []const u8) QWidget {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_WidgetByName(@ptrCast(self.ptr), @ptrCast(topLevel.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#widgetByName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` callback: *const fn (self: QFormBuilder, topLevel: QWidget, name: [*:0]const u8) callconv(.c) QWidget `
    ///
    pub fn OnWidgetByName(self: QFormBuilder, callback: *const fn (QFormBuilder, QWidget, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.QFormBuilder_OnWidgetByName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidgetByName` instead
    ///
    pub const QBaseWidgetByName = SuperWidgetByName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#widgetByName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` topLevel: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperWidgetByName(self: QFormBuilder, topLevel: anytype, name: []const u8) QWidget {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_SuperWidgetByName(@ptrCast(self.ptr), @ptrCast(topLevel.ptr), name_str) };
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn WorkingDirectory(self: QFormBuilder) QDir {
        return .{ .ptr = qtc.QAbstractFormBuilder_WorkingDirectory(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` directory: QDir `
    ///
    pub fn SetWorkingDirectory(self: QFormBuilder, directory: anytype) void {
        comptime _ = @TypeOf(directory)._is_QDir;
        qtc.QAbstractFormBuilder_SetWorkingDirectory(@ptrCast(self.ptr), @ptrCast(directory.ptr));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QFormBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractFormBuilder_ErrorString(@ptrCast(self.ptr));
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
    /// ` self: QFormBuilder `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn Load(self: QFormBuilder, dev: anytype, parentWidget: anytype) QWidget {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QFormBuilder_Load(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(parentWidget.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLoad` instead
    ///
    pub const QBaseLoad = SuperLoad;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn SuperLoad(self: QFormBuilder, dev: anytype, parentWidget: anytype) QWidget {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QFormBuilder_SuperLoad(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(parentWidget.ptr)) };
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder`
    ///
    /// ` callback: *const fn (self: QFormBuilder, dev: QIODevice, parentWidget: QWidget) callconv(.c) QWidget `
    ///
    pub fn OnLoad(self: QFormBuilder, callback: *const fn (QFormBuilder, QIODevice, QWidget) callconv(.c) QWidget) void {
        qtc.QFormBuilder_OnLoad(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Save(self: QFormBuilder, dev: anytype, widget: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormBuilder_Save(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `SuperSave` instead
    ///
    pub const QBaseSave = SuperSave;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSave(self: QFormBuilder, dev: anytype, widget: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormBuilder_SuperSave(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder`
    ///
    /// ` callback: *const fn (self: QFormBuilder, dev: QIODevice, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnSave(self: QFormBuilder, callback: *const fn (QFormBuilder, QIODevice, QWidget) callconv(.c) void) void {
        qtc.QFormBuilder_OnSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` action: QAction `
    ///
    pub fn AddMenuAction(self: QFormBuilder, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QFormBuilder_AddMenuAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddMenuAction` instead
    ///
    pub const QBaseAddMenuAction = SuperAddMenuAction;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperAddMenuAction(self: QFormBuilder, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QFormBuilder_SuperAddMenuAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder`
    ///
    /// ` callback: *const fn (self: QFormBuilder, action: QAction) callconv(.c) void `
    ///
    pub fn OnAddMenuAction(self: QFormBuilder, callback: *const fn (QFormBuilder, QAction) callconv(.c) void) void {
        qtc.QFormBuilder_OnAddMenuAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateAction(self: QFormBuilder, parent: anytype, name: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_CreateAction(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `SuperCreateAction` instead
    ///
    pub const QBaseCreateAction = SuperCreateAction;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateAction(self: QFormBuilder, parent: anytype, name: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_SuperCreateAction(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder`
    ///
    /// ` callback: *const fn (self: QFormBuilder, parent: QObject, name: [*:0]const u8) callconv(.c) QAction `
    ///
    pub fn OnCreateAction(self: QFormBuilder, callback: *const fn (QFormBuilder, QObject, [*:0]const u8) callconv(.c) QAction) void {
        qtc.QFormBuilder_OnCreateAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateActionGroup(self: QFormBuilder, parent: anytype, name: []const u8) QActionGroup {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_CreateActionGroup(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `SuperCreateActionGroup` instead
    ///
    pub const QBaseCreateActionGroup = SuperCreateActionGroup;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateActionGroup(self: QFormBuilder, parent: anytype, name: []const u8) QActionGroup {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_SuperCreateActionGroup(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder`
    ///
    /// ` callback: *const fn (self: QFormBuilder, parent: QObject, name: [*:0]const u8) callconv(.c) QActionGroup `
    ///
    pub fn OnCreateActionGroup(self: QFormBuilder, callback: *const fn (QFormBuilder, QObject, [*:0]const u8) callconv(.c) QActionGroup) void {
        qtc.QFormBuilder_OnCreateActionGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` obj: QObject `
    ///
    /// ` prop: []const u8 `
    ///
    pub fn CheckProperty(self: QFormBuilder, obj: anytype, prop: []const u8) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const prop_str = qtc.libqt_string{
            .len = prop.len,
            .data = prop.ptr,
        };
        return qtc.QFormBuilder_CheckProperty(@ptrCast(self.ptr), @ptrCast(obj.ptr), prop_str);
    }

    /// ### DEPRECATED: Use `SuperCheckProperty` instead
    ///
    pub const QBaseCheckProperty = SuperCheckProperty;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` obj: QObject `
    ///
    /// ` prop: []const u8 `
    ///
    pub fn SuperCheckProperty(self: QFormBuilder, obj: anytype, prop: []const u8) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const prop_str = qtc.libqt_string{
            .len = prop.len,
            .data = prop.ptr,
        };
        return qtc.QFormBuilder_SuperCheckProperty(@ptrCast(self.ptr), @ptrCast(obj.ptr), prop_str);
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder`
    ///
    /// ` callback: *const fn (self: QFormBuilder, obj: QObject, prop: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnCheckProperty(self: QFormBuilder, callback: *const fn (QFormBuilder, QObject, [*:0]const u8) callconv(.c) bool) void {
        qtc.QFormBuilder_OnCheckProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` o: QObject `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn ApplyPropertyInternally(self: QFormBuilder, o: anytype, propertyName: []const u8, value: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QFormBuilder_ApplyPropertyInternally(@ptrCast(self.ptr), @ptrCast(o.ptr), propertyName_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `SuperApplyPropertyInternally` instead
    ///
    pub const QBaseApplyPropertyInternally = SuperApplyPropertyInternally;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` o: QObject `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperApplyPropertyInternally(self: QFormBuilder, o: anytype, propertyName: []const u8, value: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QFormBuilder_SuperApplyPropertyInternally(@ptrCast(self.ptr), @ptrCast(o.ptr), propertyName_str, @ptrCast(value.ptr));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder`
    ///
    /// ` callback: *const fn (self: QFormBuilder, o: QObject, propertyName: [*:0]const u8, value: QVariant) callconv(.c) bool `
    ///
    pub fn OnApplyPropertyInternally(self: QFormBuilder, callback: *const fn (QFormBuilder, QObject, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QFormBuilder_OnApplyPropertyInternally(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn Reset(self: QFormBuilder) void {
        qtc.QFormBuilder_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn SuperReset(self: QFormBuilder) void {
        qtc.QFormBuilder_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: QFormBuilder, callback: *const fn () callconv(.c) void) void {
        qtc.QFormBuilder_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn ToolBarAreaMetaEnum(self: QFormBuilder) QMetaEnum {
        return .{ .ptr = qtc.QFormBuilder_ToolBarAreaMetaEnum(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperToolBarAreaMetaEnum` instead
    ///
    pub const QBaseToolBarAreaMetaEnum = SuperToolBarAreaMetaEnum;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn SuperToolBarAreaMetaEnum(self: QFormBuilder) QMetaEnum {
        return .{ .ptr = qtc.QFormBuilder_SuperToolBarAreaMetaEnum(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFormBuilder`
    ///
    /// ` callback: *const fn () callconv(.c) QMetaEnum `
    ///
    pub fn OnToolBarAreaMetaEnum(self: QFormBuilder, callback: *const fn () callconv(.c) QMetaEnum) void {
        qtc.QFormBuilder_OnToolBarAreaMetaEnum(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#dtor.QFormBuilder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn Delete(self: QFormBuilder) void {
        qtc.QFormBuilder_Delete(@ptrCast(self.ptr));
    }
};
