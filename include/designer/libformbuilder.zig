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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFormBuilder object in C++ memory
    ///
    pub fn new() QFormBuilder {
        return .{ .ptr = qtc.QFormBuilder_new() };
    }

    /// ### DEPRECATED: Use `pluginPaths` instead
    ///
    pub const PluginPaths = pluginPaths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#pluginPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pluginPaths(self: QFormBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFormBuilder_PluginPaths(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFormBuilder.pluginPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFormBuilder.pluginPaths: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `clearPluginPaths` instead
    ///
    pub const ClearPluginPaths = clearPluginPaths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#clearPluginPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn clearPluginPaths(self: QFormBuilder) void {
        qtc.QFormBuilder_ClearPluginPaths(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addPluginPath` instead
    ///
    pub const AddPluginPath = addPluginPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#addPluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` pluginPath: []const u8 `
    ///
    pub fn addPluginPath(self: QFormBuilder, pluginPath: []const u8) void {
        const pluginPath_str = qtc.libqt_string{
            .len = pluginPath.len,
            .data = pluginPath.ptr,
        };
        qtc.QFormBuilder_AddPluginPath(@ptrCast(self.ptr), pluginPath_str);
    }

    /// ### DEPRECATED: Use `setPluginPath` instead
    ///
    pub const SetPluginPath = setPluginPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#setPluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _pluginPaths: []const []const u8 `
    ///
    pub fn setPluginPath(self: QFormBuilder, allocator: std.mem.Allocator, _pluginPaths: []const []const u8) void {
        const pluginPaths_arr = allocator.alloc(qtc.libqt_string, _pluginPaths.len) catch @panic("QFormBuilder.setPluginPath: Memory allocation failed");
        defer allocator.free(pluginPaths_arr);
        for (_pluginPaths, 0.._pluginPaths.len) |str_item, i|
            pluginPaths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const pluginPaths_list = qtc.libqt_list{
            .len = _pluginPaths.len,
            .data = pluginPaths_arr.ptr,
        };
        qtc.QFormBuilder_SetPluginPath(@ptrCast(self.ptr), pluginPaths_list);
    }

    /// ### DEPRECATED: Use `customWidgets` instead
    ///
    pub const CustomWidgets = customWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#customWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customWidgets(self: QFormBuilder, allocator: std.mem.Allocator) []QDesignerCustomWidgetInterface {
        const _arr: qtc.libqt_list = qtc.QFormBuilder_CustomWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerCustomWidgetInterface, _arr.len) catch @panic("QFormBuilder.customWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QDesignerCustomWidgetInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

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
    pub fn createWidget(self: QFormBuilder, widgetName: []const u8, parentWidget: anytype, name: []const u8) QWidget {
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

    /// ### DEPRECATED: Use `onCreateWidget` instead
    ///
    pub const OnCreateWidget = onCreateWidget;

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
    pub fn onCreateWidget(self: QFormBuilder, callback: *const fn (QFormBuilder, [*:0]const u8, QWidget, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.QFormBuilder_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateWidget` instead
    ///
    pub const SuperCreateWidget = superCreateWidget;

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
    pub fn superCreateWidget(self: QFormBuilder, widgetName: []const u8, parentWidget: anytype, name: []const u8) QWidget {
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

    /// ### DEPRECATED: Use `createLayout` instead
    ///
    pub const CreateLayout = createLayout;

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
    pub fn createLayout(self: QFormBuilder, layoutName: []const u8, parent: anytype, name: []const u8) QLayout {
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

    /// ### DEPRECATED: Use `onCreateLayout` instead
    ///
    pub const OnCreateLayout = onCreateLayout;

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
    pub fn onCreateLayout(self: QFormBuilder, callback: *const fn (QFormBuilder, [*:0]const u8, QObject, [*:0]const u8) callconv(.c) QLayout) void {
        qtc.QFormBuilder_OnCreateLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateLayout` instead
    ///
    pub const SuperCreateLayout = superCreateLayout;

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
    pub fn superCreateLayout(self: QFormBuilder, layoutName: []const u8, parent: anytype, name: []const u8) QLayout {
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

    /// ### DEPRECATED: Use `updateCustomWidgets` instead
    ///
    pub const UpdateCustomWidgets = updateCustomWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn updateCustomWidgets(self: QFormBuilder) void {
        qtc.QFormBuilder_UpdateCustomWidgets(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateCustomWidgets` instead
    ///
    pub const OnUpdateCustomWidgets = onUpdateCustomWidgets;

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
    pub fn onUpdateCustomWidgets(self: QFormBuilder, callback: *const fn () callconv(.c) void) void {
        qtc.QFormBuilder_OnUpdateCustomWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateCustomWidgets` instead
    ///
    pub const SuperUpdateCustomWidgets = superUpdateCustomWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn superUpdateCustomWidgets(self: QFormBuilder) void {
        qtc.QFormBuilder_SuperUpdateCustomWidgets(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widgetByName` instead
    ///
    pub const WidgetByName = widgetByName;

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
    pub fn widgetByName(self: QFormBuilder, topLevel: anytype, name: []const u8) QWidget {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_WidgetByName(@ptrCast(self.ptr), @ptrCast(topLevel.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `onWidgetByName` instead
    ///
    pub const OnWidgetByName = onWidgetByName;

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
    pub fn onWidgetByName(self: QFormBuilder, callback: *const fn (QFormBuilder, QWidget, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.QFormBuilder_OnWidgetByName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWidgetByName` instead
    ///
    pub const SuperWidgetByName = superWidgetByName;

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
    pub fn superWidgetByName(self: QFormBuilder, topLevel: anytype, name: []const u8) QWidget {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_SuperWidgetByName(@ptrCast(self.ptr), @ptrCast(topLevel.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `workingDirectory` instead
    ///
    pub const WorkingDirectory = workingDirectory;

    /// Inherited from QAbstractFormBuilder
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn workingDirectory(self: QFormBuilder) QDir {
        return .{ .ptr = qtc.QAbstractFormBuilder_WorkingDirectory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWorkingDirectory` instead
    ///
    pub const SetWorkingDirectory = setWorkingDirectory;

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
    pub fn setWorkingDirectory(self: QFormBuilder, directory: anytype) void {
        comptime _ = @TypeOf(directory)._is_QDir;
        qtc.QAbstractFormBuilder_SetWorkingDirectory(@ptrCast(self.ptr), @ptrCast(directory.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

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
    pub fn errorString(self: QFormBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractFormBuilder_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFormBuilder.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

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
    pub fn load(self: QFormBuilder, dev: anytype, parentWidget: anytype) QWidget {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QFormBuilder_Load(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(parentWidget.ptr)) };
    }

    /// ### DEPRECATED: Use `superLoad` instead
    ///
    pub const SuperLoad = superLoad;

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
    pub fn superLoad(self: QFormBuilder, dev: anytype, parentWidget: anytype) QWidget {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QFormBuilder_SuperLoad(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(parentWidget.ptr)) };
    }

    /// ### DEPRECATED: Use `onLoad` instead
    ///
    pub const OnLoad = onLoad;

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
    pub fn onLoad(self: QFormBuilder, callback: *const fn (QFormBuilder, QIODevice, QWidget) callconv(.c) QWidget) void {
        qtc.QFormBuilder_OnLoad(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QFormBuilder, dev: anytype, widget: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormBuilder_Save(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `superSave` instead
    ///
    pub const SuperSave = superSave;

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
    pub fn superSave(self: QFormBuilder, dev: anytype, widget: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QFormBuilder_SuperSave(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onSave` instead
    ///
    pub const OnSave = onSave;

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
    pub fn onSave(self: QFormBuilder, callback: *const fn (QFormBuilder, QIODevice, QWidget) callconv(.c) void) void {
        qtc.QFormBuilder_OnSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addMenuAction` instead
    ///
    pub const AddMenuAction = addMenuAction;

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
    pub fn addMenuAction(self: QFormBuilder, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QFormBuilder_AddMenuAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `superAddMenuAction` instead
    ///
    pub const SuperAddMenuAction = superAddMenuAction;

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
    pub fn superAddMenuAction(self: QFormBuilder, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QFormBuilder_SuperAddMenuAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `onAddMenuAction` instead
    ///
    pub const OnAddMenuAction = onAddMenuAction;

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
    pub fn onAddMenuAction(self: QFormBuilder, callback: *const fn (QFormBuilder, QAction) callconv(.c) void) void {
        qtc.QFormBuilder_OnAddMenuAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createAction` instead
    ///
    pub const CreateAction = createAction;

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
    pub fn createAction(self: QFormBuilder, parent: anytype, name: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_CreateAction(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `superCreateAction` instead
    ///
    pub const SuperCreateAction = superCreateAction;

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
    pub fn superCreateAction(self: QFormBuilder, parent: anytype, name: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_SuperCreateAction(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `onCreateAction` instead
    ///
    pub const OnCreateAction = onCreateAction;

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
    pub fn onCreateAction(self: QFormBuilder, callback: *const fn (QFormBuilder, QObject, [*:0]const u8) callconv(.c) QAction) void {
        qtc.QFormBuilder_OnCreateAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createActionGroup` instead
    ///
    pub const CreateActionGroup = createActionGroup;

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
    pub fn createActionGroup(self: QFormBuilder, parent: anytype, name: []const u8) QActionGroup {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_CreateActionGroup(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `superCreateActionGroup` instead
    ///
    pub const SuperCreateActionGroup = superCreateActionGroup;

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
    pub fn superCreateActionGroup(self: QFormBuilder, parent: anytype, name: []const u8) QActionGroup {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormBuilder_SuperCreateActionGroup(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `onCreateActionGroup` instead
    ///
    pub const OnCreateActionGroup = onCreateActionGroup;

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
    pub fn onCreateActionGroup(self: QFormBuilder, callback: *const fn (QFormBuilder, QObject, [*:0]const u8) callconv(.c) QActionGroup) void {
        qtc.QFormBuilder_OnCreateActionGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `checkProperty` instead
    ///
    pub const CheckProperty = checkProperty;

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
    pub fn checkProperty(self: QFormBuilder, obj: anytype, prop: []const u8) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const prop_str = qtc.libqt_string{
            .len = prop.len,
            .data = prop.ptr,
        };
        return qtc.QFormBuilder_CheckProperty(@ptrCast(self.ptr), @ptrCast(obj.ptr), prop_str);
    }

    /// ### DEPRECATED: Use `superCheckProperty` instead
    ///
    pub const SuperCheckProperty = superCheckProperty;

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
    pub fn superCheckProperty(self: QFormBuilder, obj: anytype, prop: []const u8) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const prop_str = qtc.libqt_string{
            .len = prop.len,
            .data = prop.ptr,
        };
        return qtc.QFormBuilder_SuperCheckProperty(@ptrCast(self.ptr), @ptrCast(obj.ptr), prop_str);
    }

    /// ### DEPRECATED: Use `onCheckProperty` instead
    ///
    pub const OnCheckProperty = onCheckProperty;

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
    pub fn onCheckProperty(self: QFormBuilder, callback: *const fn (QFormBuilder, QObject, [*:0]const u8) callconv(.c) bool) void {
        qtc.QFormBuilder_OnCheckProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `applyPropertyInternally` instead
    ///
    pub const ApplyPropertyInternally = applyPropertyInternally;

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
    pub fn applyPropertyInternally(self: QFormBuilder, o: anytype, propertyName: []const u8, value: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QFormBuilder_ApplyPropertyInternally(@ptrCast(self.ptr), @ptrCast(o.ptr), propertyName_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `superApplyPropertyInternally` instead
    ///
    pub const SuperApplyPropertyInternally = superApplyPropertyInternally;

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
    pub fn superApplyPropertyInternally(self: QFormBuilder, o: anytype, propertyName: []const u8, value: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QFormBuilder_SuperApplyPropertyInternally(@ptrCast(self.ptr), @ptrCast(o.ptr), propertyName_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onApplyPropertyInternally` instead
    ///
    pub const OnApplyPropertyInternally = onApplyPropertyInternally;

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
    pub fn onApplyPropertyInternally(self: QFormBuilder, callback: *const fn (QFormBuilder, QObject, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QFormBuilder_OnApplyPropertyInternally(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

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
    pub fn reset(self: QFormBuilder) void {
        qtc.QFormBuilder_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

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
    pub fn superReset(self: QFormBuilder) void {
        qtc.QFormBuilder_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

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
    pub fn onReset(self: QFormBuilder, callback: *const fn () callconv(.c) void) void {
        qtc.QFormBuilder_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `toolBarAreaMetaEnum` instead
    ///
    pub const ToolBarAreaMetaEnum = toolBarAreaMetaEnum;

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
    pub fn toolBarAreaMetaEnum(self: QFormBuilder) QMetaEnum {
        return .{ .ptr = qtc.QFormBuilder_ToolBarAreaMetaEnum(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superToolBarAreaMetaEnum` instead
    ///
    pub const SuperToolBarAreaMetaEnum = superToolBarAreaMetaEnum;

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
    pub fn superToolBarAreaMetaEnum(self: QFormBuilder) QMetaEnum {
        return .{ .ptr = qtc.QFormBuilder_SuperToolBarAreaMetaEnum(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onToolBarAreaMetaEnum` instead
    ///
    pub const OnToolBarAreaMetaEnum = onToolBarAreaMetaEnum;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onToolBarAreaMetaEnum(self: QFormBuilder, callback: *const fn () callconv(.c) QMetaEnum) void {
        qtc.QFormBuilder_OnToolBarAreaMetaEnum(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#dtor.QFormBuilder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormBuilder `
    ///
    pub fn delete(self: QFormBuilder) void {
        qtc.QFormBuilder_Delete(@ptrCast(self.ptr));
    }
};
