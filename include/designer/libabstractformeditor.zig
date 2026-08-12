const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDesignerActionEditorInterface = @import("libqt6").QDesignerActionEditorInterface;
const QDesignerFormWindowManagerInterface = @import("libqt6").QDesignerFormWindowManagerInterface;
const QDesignerIntegrationInterface = @import("libqt6").QDesignerIntegrationInterface;
const QDesignerMetaDataBaseInterface = @import("libqt6").QDesignerMetaDataBaseInterface;
const QDesignerObjectInspectorInterface = @import("libqt6").QDesignerObjectInspectorInterface;
const QDesignerOptionsPageInterface = @import("libqt6").QDesignerOptionsPageInterface;
const QDesignerPromotionInterface = @import("libqt6").QDesignerPromotionInterface;
const QDesignerPropertyEditorInterface = @import("libqt6").QDesignerPropertyEditorInterface;
const QDesignerSettingsInterface = @import("libqt6").QDesignerSettingsInterface;
const QDesignerWidgetBoxInterface = @import("libqt6").QDesignerWidgetBoxInterface;
const QDesignerWidgetDataBaseInterface = @import("libqt6").QDesignerWidgetDataBaseInterface;
const QDesignerWidgetFactoryInterface = @import("libqt6").QDesignerWidgetFactoryInterface;
const QEvent = @import("libqt6").QEvent;
const QExtensionManager = @import("libqt6").QExtensionManager;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html)
pub const QDesignerFormEditorInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerFormEditorInterface,

    pub const _is_QDesignerFormEditorInterface = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerFormEditorInterface object in C++ memory
    ///
    pub fn new() QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDesignerFormEditorInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QDesignerFormEditorInterface {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerFormEditorInterface_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn metaObject(self: QDesignerFormEditorInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDesignerFormEditorInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerFormEditorInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn superMetaObject(self: QDesignerFormEditorInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDesignerFormEditorInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormEditorInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDesignerFormEditorInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormEditorInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDesignerFormEditorInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormEditorInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerFormEditorInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDesignerFormEditorInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormEditorInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormEditorInterface.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extensionManager` instead
    ///
    pub const ExtensionManager = extensionManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#extensionManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn extensionManager(self: QDesignerFormEditorInterface) QExtensionManager {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_ExtensionManager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevel` instead
    ///
    pub const TopLevel = topLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#topLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn topLevel(self: QDesignerFormEditorInterface) QWidget {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_TopLevel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `widgetBox` instead
    ///
    pub const WidgetBox = widgetBox;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn widgetBox(self: QDesignerFormEditorInterface) QDesignerWidgetBoxInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_WidgetBox(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `propertyEditor` instead
    ///
    pub const PropertyEditor = propertyEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#propertyEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn propertyEditor(self: QDesignerFormEditorInterface) QDesignerPropertyEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_PropertyEditor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `objectInspector` instead
    ///
    pub const ObjectInspector = objectInspector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#objectInspector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn objectInspector(self: QDesignerFormEditorInterface) QDesignerObjectInspectorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_ObjectInspector(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `formWindowManager` instead
    ///
    pub const FormWindowManager = formWindowManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#formWindowManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn formWindowManager(self: QDesignerFormEditorInterface) QDesignerFormWindowManagerInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_FormWindowManager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `widgetDataBase` instead
    ///
    pub const WidgetDataBase = widgetDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn widgetDataBase(self: QDesignerFormEditorInterface) QDesignerWidgetDataBaseInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_WidgetDataBase(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metaDataBase` instead
    ///
    pub const MetaDataBase = metaDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#metaDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn metaDataBase(self: QDesignerFormEditorInterface) QDesignerMetaDataBaseInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_MetaDataBase(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `promotion` instead
    ///
    pub const Promotion = promotion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#promotion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn promotion(self: QDesignerFormEditorInterface) QDesignerPromotionInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_Promotion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `widgetFactory` instead
    ///
    pub const WidgetFactory = widgetFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn widgetFactory(self: QDesignerFormEditorInterface) QDesignerWidgetFactoryInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_WidgetFactory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionEditor` instead
    ///
    pub const ActionEditor = actionEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#actionEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn actionEditor(self: QDesignerFormEditorInterface) QDesignerActionEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_ActionEditor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `integration` instead
    ///
    pub const Integration = integration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#integration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn integration(self: QDesignerFormEditorInterface) QDesignerIntegrationInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_Integration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `settingsManager` instead
    ///
    pub const SettingsManager = settingsManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#settingsManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn settingsManager(self: QDesignerFormEditorInterface) QDesignerSettingsInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_SettingsManager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `resourceLocation` instead
    ///
    pub const ResourceLocation = resourceLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#resourceLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn resourceLocation(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerFormEditorInterface_ResourceLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormEditorInterface.resourceLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `optionsPages` instead
    ///
    pub const OptionsPages = optionsPages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#optionsPages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn optionsPages(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []QDesignerOptionsPageInterface {
        const _arr: qtc.libqt_list = qtc.QDesignerFormEditorInterface_OptionsPages(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerOptionsPageInterface, _arr.len) catch @panic("QDesignerFormEditorInterface.optionsPages: Memory allocation failed");
        const _data_val: [*]QtC.QDesignerOptionsPageInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setTopLevel` instead
    ///
    pub const SetTopLevel = setTopLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _topLevel: QWidget `
    ///
    pub fn setTopLevel(self: QDesignerFormEditorInterface, _topLevel: anytype) void {
        comptime _ = @TypeOf(_topLevel)._is_QWidget;
        qtc.QDesignerFormEditorInterface_SetTopLevel(@ptrCast(self.ptr), @ptrCast(_topLevel.ptr));
    }

    /// ### DEPRECATED: Use `setWidgetBox` instead
    ///
    pub const SetWidgetBox = setWidgetBox;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _widgetBox: QDesignerWidgetBoxInterface `
    ///
    pub fn setWidgetBox(self: QDesignerFormEditorInterface, _widgetBox: anytype) void {
        comptime _ = @TypeOf(_widgetBox)._is_QDesignerWidgetBoxInterface;
        qtc.QDesignerFormEditorInterface_SetWidgetBox(@ptrCast(self.ptr), @ptrCast(_widgetBox.ptr));
    }

    /// ### DEPRECATED: Use `setPropertyEditor` instead
    ///
    pub const SetPropertyEditor = setPropertyEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPropertyEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _propertyEditor: QDesignerPropertyEditorInterface `
    ///
    pub fn setPropertyEditor(self: QDesignerFormEditorInterface, _propertyEditor: anytype) void {
        comptime _ = @TypeOf(_propertyEditor)._is_QDesignerPropertyEditorInterface;
        qtc.QDesignerFormEditorInterface_SetPropertyEditor(@ptrCast(self.ptr), @ptrCast(_propertyEditor.ptr));
    }

    /// ### DEPRECATED: Use `setObjectInspector` instead
    ///
    pub const SetObjectInspector = setObjectInspector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setObjectInspector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _objectInspector: QDesignerObjectInspectorInterface `
    ///
    pub fn setObjectInspector(self: QDesignerFormEditorInterface, _objectInspector: anytype) void {
        comptime _ = @TypeOf(_objectInspector)._is_QDesignerObjectInspectorInterface;
        qtc.QDesignerFormEditorInterface_SetObjectInspector(@ptrCast(self.ptr), @ptrCast(_objectInspector.ptr));
    }

    /// ### DEPRECATED: Use `setActionEditor` instead
    ///
    pub const SetActionEditor = setActionEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setActionEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _actionEditor: QDesignerActionEditorInterface `
    ///
    pub fn setActionEditor(self: QDesignerFormEditorInterface, _actionEditor: anytype) void {
        comptime _ = @TypeOf(_actionEditor)._is_QDesignerActionEditorInterface;
        qtc.QDesignerFormEditorInterface_SetActionEditor(@ptrCast(self.ptr), @ptrCast(_actionEditor.ptr));
    }

    /// ### DEPRECATED: Use `setIntegration` instead
    ///
    pub const SetIntegration = setIntegration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setIntegration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _integration: QDesignerIntegrationInterface `
    ///
    pub fn setIntegration(self: QDesignerFormEditorInterface, _integration: anytype) void {
        comptime _ = @TypeOf(_integration)._is_QDesignerIntegrationInterface;
        qtc.QDesignerFormEditorInterface_SetIntegration(@ptrCast(self.ptr), @ptrCast(_integration.ptr));
    }

    /// ### DEPRECATED: Use `setSettingsManager` instead
    ///
    pub const SetSettingsManager = setSettingsManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setSettingsManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _settingsManager: QDesignerSettingsInterface `
    ///
    pub fn setSettingsManager(self: QDesignerFormEditorInterface, _settingsManager: anytype) void {
        comptime _ = @TypeOf(_settingsManager)._is_QDesignerSettingsInterface;
        qtc.QDesignerFormEditorInterface_SetSettingsManager(@ptrCast(self.ptr), @ptrCast(_settingsManager.ptr));
    }

    /// ### DEPRECATED: Use `setOptionsPages` instead
    ///
    pub const SetOptionsPages = setOptionsPages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setOptionsPages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _optionsPages: []QDesignerOptionsPageInterface `
    ///
    pub fn setOptionsPages(self: QDesignerFormEditorInterface, _optionsPages: []QDesignerOptionsPageInterface) void {
        const optionsPages_list = qtc.libqt_list{
            .len = _optionsPages.len,
            .data = @ptrCast(_optionsPages.ptr),
        };
        qtc.QDesignerFormEditorInterface_SetOptionsPages(@ptrCast(self.ptr), optionsPages_list);
    }

    /// ### DEPRECATED: Use `pluginInstances` instead
    ///
    pub const PluginInstances = pluginInstances;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#pluginInstances)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pluginInstances(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QDesignerFormEditorInterface_PluginInstances(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDesignerFormEditorInterface.pluginInstances: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `createIcon` instead
    ///
    pub const CreateIcon = createIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#createIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn createIcon(name: []const u8) QIcon {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDesignerFormEditorInterface_CreateIcon(name_str) };
    }

    /// ### DEPRECATED: Use `setFormManager` instead
    ///
    pub const SetFormManager = setFormManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _formWindowManager: QDesignerFormWindowManagerInterface `
    ///
    pub fn setFormManager(self: QDesignerFormEditorInterface, _formWindowManager: anytype) void {
        comptime _ = @TypeOf(_formWindowManager)._is_QDesignerFormWindowManagerInterface;
        qtc.QDesignerFormEditorInterface_SetFormManager(@ptrCast(self.ptr), @ptrCast(_formWindowManager.ptr));
    }

    /// ### DEPRECATED: Use `onSetFormManager` instead
    ///
    pub const OnSetFormManager = onSetFormManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, formWindowManager: QDesignerFormWindowManagerInterface) callconv(.c) void `
    ///
    pub fn onSetFormManager(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerFormWindowManagerInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetFormManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFormManager` instead
    ///
    pub const SuperSetFormManager = superSetFormManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _formWindowManager: QDesignerFormWindowManagerInterface `
    ///
    pub fn superSetFormManager(self: QDesignerFormEditorInterface, _formWindowManager: anytype) void {
        comptime _ = @TypeOf(_formWindowManager)._is_QDesignerFormWindowManagerInterface;
        qtc.QDesignerFormEditorInterface_SuperSetFormManager(@ptrCast(self.ptr), @ptrCast(_formWindowManager.ptr));
    }

    /// ### DEPRECATED: Use `setMetaDataBase` instead
    ///
    pub const SetMetaDataBase = setMetaDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _metaDataBase: QDesignerMetaDataBaseInterface `
    ///
    pub fn setMetaDataBase(self: QDesignerFormEditorInterface, _metaDataBase: anytype) void {
        comptime _ = @TypeOf(_metaDataBase)._is_QDesignerMetaDataBaseInterface;
        qtc.QDesignerFormEditorInterface_SetMetaDataBase(@ptrCast(self.ptr), @ptrCast(_metaDataBase.ptr));
    }

    /// ### DEPRECATED: Use `onSetMetaDataBase` instead
    ///
    pub const OnSetMetaDataBase = onSetMetaDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, metaDataBase: QDesignerMetaDataBaseInterface) callconv(.c) void `
    ///
    pub fn onSetMetaDataBase(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerMetaDataBaseInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetMetaDataBase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMetaDataBase` instead
    ///
    pub const SuperSetMetaDataBase = superSetMetaDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _metaDataBase: QDesignerMetaDataBaseInterface `
    ///
    pub fn superSetMetaDataBase(self: QDesignerFormEditorInterface, _metaDataBase: anytype) void {
        comptime _ = @TypeOf(_metaDataBase)._is_QDesignerMetaDataBaseInterface;
        qtc.QDesignerFormEditorInterface_SuperSetMetaDataBase(@ptrCast(self.ptr), @ptrCast(_metaDataBase.ptr));
    }

    /// ### DEPRECATED: Use `setWidgetDataBase` instead
    ///
    pub const SetWidgetDataBase = setWidgetDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _widgetDataBase: QDesignerWidgetDataBaseInterface `
    ///
    pub fn setWidgetDataBase(self: QDesignerFormEditorInterface, _widgetDataBase: anytype) void {
        comptime _ = @TypeOf(_widgetDataBase)._is_QDesignerWidgetDataBaseInterface;
        qtc.QDesignerFormEditorInterface_SetWidgetDataBase(@ptrCast(self.ptr), @ptrCast(_widgetDataBase.ptr));
    }

    /// ### DEPRECATED: Use `onSetWidgetDataBase` instead
    ///
    pub const OnSetWidgetDataBase = onSetWidgetDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, widgetDataBase: QDesignerWidgetDataBaseInterface) callconv(.c) void `
    ///
    pub fn onSetWidgetDataBase(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerWidgetDataBaseInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetWidgetDataBase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetWidgetDataBase` instead
    ///
    pub const SuperSetWidgetDataBase = superSetWidgetDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _widgetDataBase: QDesignerWidgetDataBaseInterface `
    ///
    pub fn superSetWidgetDataBase(self: QDesignerFormEditorInterface, _widgetDataBase: anytype) void {
        comptime _ = @TypeOf(_widgetDataBase)._is_QDesignerWidgetDataBaseInterface;
        qtc.QDesignerFormEditorInterface_SuperSetWidgetDataBase(@ptrCast(self.ptr), @ptrCast(_widgetDataBase.ptr));
    }

    /// ### DEPRECATED: Use `setPromotion` instead
    ///
    pub const SetPromotion = setPromotion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _promotion: QDesignerPromotionInterface `
    ///
    pub fn setPromotion(self: QDesignerFormEditorInterface, _promotion: anytype) void {
        comptime _ = @TypeOf(_promotion)._is_QDesignerPromotionInterface;
        qtc.QDesignerFormEditorInterface_SetPromotion(@ptrCast(self.ptr), @ptrCast(_promotion.ptr));
    }

    /// ### DEPRECATED: Use `onSetPromotion` instead
    ///
    pub const OnSetPromotion = onSetPromotion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, promotion: QDesignerPromotionInterface) callconv(.c) void `
    ///
    pub fn onSetPromotion(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerPromotionInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetPromotion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPromotion` instead
    ///
    pub const SuperSetPromotion = superSetPromotion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _promotion: QDesignerPromotionInterface `
    ///
    pub fn superSetPromotion(self: QDesignerFormEditorInterface, _promotion: anytype) void {
        comptime _ = @TypeOf(_promotion)._is_QDesignerPromotionInterface;
        qtc.QDesignerFormEditorInterface_SuperSetPromotion(@ptrCast(self.ptr), @ptrCast(_promotion.ptr));
    }

    /// ### DEPRECATED: Use `setWidgetFactory` instead
    ///
    pub const SetWidgetFactory = setWidgetFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _widgetFactory: QDesignerWidgetFactoryInterface `
    ///
    pub fn setWidgetFactory(self: QDesignerFormEditorInterface, _widgetFactory: anytype) void {
        comptime _ = @TypeOf(_widgetFactory)._is_QDesignerWidgetFactoryInterface;
        qtc.QDesignerFormEditorInterface_SetWidgetFactory(@ptrCast(self.ptr), @ptrCast(_widgetFactory.ptr));
    }

    /// ### DEPRECATED: Use `onSetWidgetFactory` instead
    ///
    pub const OnSetWidgetFactory = onSetWidgetFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, widgetFactory: QDesignerWidgetFactoryInterface) callconv(.c) void `
    ///
    pub fn onSetWidgetFactory(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerWidgetFactoryInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetWidgetFactory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetWidgetFactory` instead
    ///
    pub const SuperSetWidgetFactory = superSetWidgetFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _widgetFactory: QDesignerWidgetFactoryInterface `
    ///
    pub fn superSetWidgetFactory(self: QDesignerFormEditorInterface, _widgetFactory: anytype) void {
        comptime _ = @TypeOf(_widgetFactory)._is_QDesignerWidgetFactoryInterface;
        qtc.QDesignerFormEditorInterface_SuperSetWidgetFactory(@ptrCast(self.ptr), @ptrCast(_widgetFactory.ptr));
    }

    /// ### DEPRECATED: Use `setExtensionManager` instead
    ///
    pub const SetExtensionManager = setExtensionManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _extensionManager: QExtensionManager `
    ///
    pub fn setExtensionManager(self: QDesignerFormEditorInterface, _extensionManager: anytype) void {
        comptime _ = @TypeOf(_extensionManager)._is_QExtensionManager;
        qtc.QDesignerFormEditorInterface_SetExtensionManager(@ptrCast(self.ptr), @ptrCast(_extensionManager.ptr));
    }

    /// ### DEPRECATED: Use `onSetExtensionManager` instead
    ///
    pub const OnSetExtensionManager = onSetExtensionManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, extensionManager: QExtensionManager) callconv(.c) void `
    ///
    pub fn onSetExtensionManager(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QExtensionManager) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetExtensionManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetExtensionManager` instead
    ///
    pub const SuperSetExtensionManager = superSetExtensionManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _extensionManager: QExtensionManager `
    ///
    pub fn superSetExtensionManager(self: QDesignerFormEditorInterface, _extensionManager: anytype) void {
        comptime _ = @TypeOf(_extensionManager)._is_QExtensionManager;
        qtc.QDesignerFormEditorInterface_SuperSetExtensionManager(@ptrCast(self.ptr), @ptrCast(_extensionManager.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormEditorInterface.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormEditorInterface.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormEditorInterface.objectName: Memory allocation failed");
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDesignerFormEditorInterface, name: []const u8) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn isWidgetType(self: QDesignerFormEditorInterface) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn isWindowType(self: QDesignerFormEditorInterface) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn isQuickItemType(self: QDesignerFormEditorInterface) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn signalsBlocked(self: QDesignerFormEditorInterface) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDesignerFormEditorInterface, b: bool) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn thread(self: QDesignerFormEditorInterface) QThread {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDesignerFormEditorInterface, _thread: anytype) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDesignerFormEditorInterface, interval: i32) i32 {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDesignerFormEditorInterface, time: i64) i32 {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDesignerFormEditorInterface, id: i32) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDesignerFormEditorInterface, id: i32) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDesignerFormEditorInterface.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDesignerFormEditorInterface, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDesignerFormEditorInterface, filterObj: anytype) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDesignerFormEditorInterface, obj: anytype) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDesignerFormEditorInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn disconnect3(self: QDesignerFormEditorInterface) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDesignerFormEditorInterface, receiver: anytype) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn dumpObjectTree(self: QDesignerFormEditorInterface) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn dumpObjectInfo(self: QDesignerFormEditorInterface) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDesignerFormEditorInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDesignerFormEditorInterface, name: [:0]const u8) QVariant {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerFormEditorInterface.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerFormEditorInterface.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn bindingStorage(self: QDesignerFormEditorInterface) QBindingStorage {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn bindingStorage2(self: QDesignerFormEditorInterface) QBindingStorage {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn destroyed(self: QDesignerFormEditorInterface) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface) callconv(.c) void) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn parent(self: QDesignerFormEditorInterface) QObject {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDesignerFormEditorInterface, classname: [:0]const u8) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn deleteLater(self: QDesignerFormEditorInterface) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDesignerFormEditorInterface, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDesignerFormEditorInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDesignerFormEditorInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDesignerFormEditorInterface, signal: [:0]const u8) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDesignerFormEditorInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDesignerFormEditorInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDesignerFormEditorInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDesignerFormEditorInterface, param1: anytype) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDesignerFormEditorInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormEditorInterface_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDesignerFormEditorInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormEditorInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormEditorInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDesignerFormEditorInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormEditorInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDesignerFormEditorInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormEditorInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormEditorInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDesignerFormEditorInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerFormEditorInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDesignerFormEditorInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerFormEditorInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDesignerFormEditorInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerFormEditorInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDesignerFormEditorInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerFormEditorInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDesignerFormEditorInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerFormEditorInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDesignerFormEditorInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerFormEditorInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDesignerFormEditorInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormEditorInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDesignerFormEditorInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormEditorInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDesignerFormEditorInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormEditorInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDesignerFormEditorInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormEditorInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn sender(self: QDesignerFormEditorInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn superSender(self: QDesignerFormEditorInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDesignerFormEditorInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerFormEditorInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn senderSignalIndex(self: QDesignerFormEditorInterface) i32 {
        return qtc.QDesignerFormEditorInterface_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn superSenderSignalIndex(self: QDesignerFormEditorInterface) i32 {
        return qtc.QDesignerFormEditorInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDesignerFormEditorInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormEditorInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDesignerFormEditorInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormEditorInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDesignerFormEditorInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormEditorInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerFormEditorInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDesignerFormEditorInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormEditorInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDesignerFormEditorInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormEditorInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerFormEditorInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#dtor.QDesignerFormEditorInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn delete(self: QDesignerFormEditorInterface) void {
        qtc.QDesignerFormEditorInterface_Delete(@ptrCast(self.ptr));
    }
};
