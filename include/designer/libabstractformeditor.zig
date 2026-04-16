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

    /// New constructs a new QDesignerFormEditorInterface object.
    ///
    pub fn New() QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_new() };
    }

    /// New2 constructs a new QDesignerFormEditorInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QDesignerFormEditorInterface {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerFormEditorInterface_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn MetaObject(self: QDesignerFormEditorInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QDesignerFormEditorInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerFormEditorInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn SuperMetaObject(self: QDesignerFormEditorInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDesignerFormEditorInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormEditorInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDesignerFormEditorInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormEditorInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QDesignerFormEditorInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormEditorInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerFormEditorInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QDesignerFormEditorInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormEditorInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformeditorinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#extensionManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn ExtensionManager(self: QDesignerFormEditorInterface) QExtensionManager {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_ExtensionManager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#topLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn TopLevel(self: QDesignerFormEditorInterface) QWidget {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_TopLevel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn WidgetBox(self: QDesignerFormEditorInterface) QDesignerWidgetBoxInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_WidgetBox(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#propertyEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn PropertyEditor(self: QDesignerFormEditorInterface) QDesignerPropertyEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_PropertyEditor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#objectInspector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn ObjectInspector(self: QDesignerFormEditorInterface) QDesignerObjectInspectorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_ObjectInspector(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#formWindowManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn FormWindowManager(self: QDesignerFormEditorInterface) QDesignerFormWindowManagerInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_FormWindowManager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn WidgetDataBase(self: QDesignerFormEditorInterface) QDesignerWidgetDataBaseInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_WidgetDataBase(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#metaDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn MetaDataBase(self: QDesignerFormEditorInterface) QDesignerMetaDataBaseInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_MetaDataBase(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#promotion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn Promotion(self: QDesignerFormEditorInterface) QDesignerPromotionInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_Promotion(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn WidgetFactory(self: QDesignerFormEditorInterface) QDesignerWidgetFactoryInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_WidgetFactory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#actionEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn ActionEditor(self: QDesignerFormEditorInterface) QDesignerActionEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_ActionEditor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#integration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn Integration(self: QDesignerFormEditorInterface) QDesignerIntegrationInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_Integration(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#settingsManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn SettingsManager(self: QDesignerFormEditorInterface) QDesignerSettingsInterface {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_SettingsManager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#resourceLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResourceLocation(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerFormEditorInterface_ResourceLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformeditorinterface.ResourceLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#optionsPages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OptionsPages(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []QDesignerOptionsPageInterface {
        const _arr: qtc.libqt_list = qtc.QDesignerFormEditorInterface_OptionsPages(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerOptionsPageInterface, _arr.len) catch @panic("qdesignerformeditorinterface.OptionsPages: Memory allocation failed");
        const _data: [*]QtC.QDesignerOptionsPageInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` topLevel: QWidget `
    ///
    pub fn SetTopLevel(self: QDesignerFormEditorInterface, topLevel: anytype) void {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        qtc.QDesignerFormEditorInterface_SetTopLevel(@ptrCast(self.ptr), @ptrCast(topLevel.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` widgetBox: QDesignerWidgetBoxInterface `
    ///
    pub fn SetWidgetBox(self: QDesignerFormEditorInterface, widgetBox: anytype) void {
        comptime _ = @TypeOf(widgetBox)._is_QDesignerWidgetBoxInterface;
        qtc.QDesignerFormEditorInterface_SetWidgetBox(@ptrCast(self.ptr), @ptrCast(widgetBox.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPropertyEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` propertyEditor: QDesignerPropertyEditorInterface `
    ///
    pub fn SetPropertyEditor(self: QDesignerFormEditorInterface, propertyEditor: anytype) void {
        comptime _ = @TypeOf(propertyEditor)._is_QDesignerPropertyEditorInterface;
        qtc.QDesignerFormEditorInterface_SetPropertyEditor(@ptrCast(self.ptr), @ptrCast(propertyEditor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setObjectInspector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` objectInspector: QDesignerObjectInspectorInterface `
    ///
    pub fn SetObjectInspector(self: QDesignerFormEditorInterface, objectInspector: anytype) void {
        comptime _ = @TypeOf(objectInspector)._is_QDesignerObjectInspectorInterface;
        qtc.QDesignerFormEditorInterface_SetObjectInspector(@ptrCast(self.ptr), @ptrCast(objectInspector.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setActionEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` actionEditor: QDesignerActionEditorInterface `
    ///
    pub fn SetActionEditor(self: QDesignerFormEditorInterface, actionEditor: anytype) void {
        comptime _ = @TypeOf(actionEditor)._is_QDesignerActionEditorInterface;
        qtc.QDesignerFormEditorInterface_SetActionEditor(@ptrCast(self.ptr), @ptrCast(actionEditor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setIntegration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` integration: QDesignerIntegrationInterface `
    ///
    pub fn SetIntegration(self: QDesignerFormEditorInterface, integration: anytype) void {
        comptime _ = @TypeOf(integration)._is_QDesignerIntegrationInterface;
        qtc.QDesignerFormEditorInterface_SetIntegration(@ptrCast(self.ptr), @ptrCast(integration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setSettingsManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` settingsManager: QDesignerSettingsInterface `
    ///
    pub fn SetSettingsManager(self: QDesignerFormEditorInterface, settingsManager: anytype) void {
        comptime _ = @TypeOf(settingsManager)._is_QDesignerSettingsInterface;
        qtc.QDesignerFormEditorInterface_SetSettingsManager(@ptrCast(self.ptr), @ptrCast(settingsManager.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setOptionsPages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` optionsPages: []QDesignerOptionsPageInterface `
    ///
    pub fn SetOptionsPages(self: QDesignerFormEditorInterface, optionsPages: []QDesignerOptionsPageInterface) void {
        const optionsPages_list = qtc.libqt_list{
            .len = optionsPages.len,
            .data = @ptrCast(optionsPages.ptr),
        };
        qtc.QDesignerFormEditorInterface_SetOptionsPages(@ptrCast(self.ptr), optionsPages_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#pluginInstances)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginInstances(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QDesignerFormEditorInterface_PluginInstances(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdesignerformeditorinterface.PluginInstances: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#createIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateIcon(name: []const u8) QIcon {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDesignerFormEditorInterface_CreateIcon(name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` formWindowManager: QDesignerFormWindowManagerInterface `
    ///
    pub fn SetFormManager(self: QDesignerFormEditorInterface, formWindowManager: anytype) void {
        comptime _ = @TypeOf(formWindowManager)._is_QDesignerFormWindowManagerInterface;
        qtc.QDesignerFormEditorInterface_SetFormManager(@ptrCast(self.ptr), @ptrCast(formWindowManager.ptr));
    }

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
    pub fn OnSetFormManager(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerFormWindowManagerInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetFormManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFormManager` instead
    ///
    pub const QBaseSetFormManager = SuperSetFormManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` formWindowManager: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperSetFormManager(self: QDesignerFormEditorInterface, formWindowManager: anytype) void {
        comptime _ = @TypeOf(formWindowManager)._is_QDesignerFormWindowManagerInterface;
        qtc.QDesignerFormEditorInterface_SuperSetFormManager(@ptrCast(self.ptr), @ptrCast(formWindowManager.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` metaDataBase: QDesignerMetaDataBaseInterface `
    ///
    pub fn SetMetaDataBase(self: QDesignerFormEditorInterface, metaDataBase: anytype) void {
        comptime _ = @TypeOf(metaDataBase)._is_QDesignerMetaDataBaseInterface;
        qtc.QDesignerFormEditorInterface_SetMetaDataBase(@ptrCast(self.ptr), @ptrCast(metaDataBase.ptr));
    }

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
    pub fn OnSetMetaDataBase(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerMetaDataBaseInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetMetaDataBase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMetaDataBase` instead
    ///
    pub const QBaseSetMetaDataBase = SuperSetMetaDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` metaDataBase: QDesignerMetaDataBaseInterface `
    ///
    pub fn SuperSetMetaDataBase(self: QDesignerFormEditorInterface, metaDataBase: anytype) void {
        comptime _ = @TypeOf(metaDataBase)._is_QDesignerMetaDataBaseInterface;
        qtc.QDesignerFormEditorInterface_SuperSetMetaDataBase(@ptrCast(self.ptr), @ptrCast(metaDataBase.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` widgetDataBase: QDesignerWidgetDataBaseInterface `
    ///
    pub fn SetWidgetDataBase(self: QDesignerFormEditorInterface, widgetDataBase: anytype) void {
        comptime _ = @TypeOf(widgetDataBase)._is_QDesignerWidgetDataBaseInterface;
        qtc.QDesignerFormEditorInterface_SetWidgetDataBase(@ptrCast(self.ptr), @ptrCast(widgetDataBase.ptr));
    }

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
    pub fn OnSetWidgetDataBase(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerWidgetDataBaseInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetWidgetDataBase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetWidgetDataBase` instead
    ///
    pub const QBaseSetWidgetDataBase = SuperSetWidgetDataBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` widgetDataBase: QDesignerWidgetDataBaseInterface `
    ///
    pub fn SuperSetWidgetDataBase(self: QDesignerFormEditorInterface, widgetDataBase: anytype) void {
        comptime _ = @TypeOf(widgetDataBase)._is_QDesignerWidgetDataBaseInterface;
        qtc.QDesignerFormEditorInterface_SuperSetWidgetDataBase(@ptrCast(self.ptr), @ptrCast(widgetDataBase.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` promotion: QDesignerPromotionInterface `
    ///
    pub fn SetPromotion(self: QDesignerFormEditorInterface, promotion: anytype) void {
        comptime _ = @TypeOf(promotion)._is_QDesignerPromotionInterface;
        qtc.QDesignerFormEditorInterface_SetPromotion(@ptrCast(self.ptr), @ptrCast(promotion.ptr));
    }

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
    pub fn OnSetPromotion(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerPromotionInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetPromotion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPromotion` instead
    ///
    pub const QBaseSetPromotion = SuperSetPromotion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` promotion: QDesignerPromotionInterface `
    ///
    pub fn SuperSetPromotion(self: QDesignerFormEditorInterface, promotion: anytype) void {
        comptime _ = @TypeOf(promotion)._is_QDesignerPromotionInterface;
        qtc.QDesignerFormEditorInterface_SuperSetPromotion(@ptrCast(self.ptr), @ptrCast(promotion.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` widgetFactory: QDesignerWidgetFactoryInterface `
    ///
    pub fn SetWidgetFactory(self: QDesignerFormEditorInterface, widgetFactory: anytype) void {
        comptime _ = @TypeOf(widgetFactory)._is_QDesignerWidgetFactoryInterface;
        qtc.QDesignerFormEditorInterface_SetWidgetFactory(@ptrCast(self.ptr), @ptrCast(widgetFactory.ptr));
    }

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
    pub fn OnSetWidgetFactory(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QDesignerWidgetFactoryInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetWidgetFactory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetWidgetFactory` instead
    ///
    pub const QBaseSetWidgetFactory = SuperSetWidgetFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` widgetFactory: QDesignerWidgetFactoryInterface `
    ///
    pub fn SuperSetWidgetFactory(self: QDesignerFormEditorInterface, widgetFactory: anytype) void {
        comptime _ = @TypeOf(widgetFactory)._is_QDesignerWidgetFactoryInterface;
        qtc.QDesignerFormEditorInterface_SuperSetWidgetFactory(@ptrCast(self.ptr), @ptrCast(widgetFactory.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` extensionManager: QExtensionManager `
    ///
    pub fn SetExtensionManager(self: QDesignerFormEditorInterface, extensionManager: anytype) void {
        comptime _ = @TypeOf(extensionManager)._is_QExtensionManager;
        qtc.QDesignerFormEditorInterface_SetExtensionManager(@ptrCast(self.ptr), @ptrCast(extensionManager.ptr));
    }

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
    pub fn OnSetExtensionManager(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QExtensionManager) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetExtensionManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetExtensionManager` instead
    ///
    pub const QBaseSetExtensionManager = SuperSetExtensionManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` extensionManager: QExtensionManager `
    ///
    pub fn SuperSetExtensionManager(self: QDesignerFormEditorInterface, extensionManager: anytype) void {
        comptime _ = @TypeOf(extensionManager)._is_QExtensionManager;
        qtc.QDesignerFormEditorInterface_SuperSetExtensionManager(@ptrCast(self.ptr), @ptrCast(extensionManager.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformeditorinterface.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformeditorinterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformeditorinterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QDesignerFormEditorInterface, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn IsWidgetType(self: QDesignerFormEditorInterface) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn IsWindowType(self: QDesignerFormEditorInterface) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn IsQuickItemType(self: QDesignerFormEditorInterface) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn SignalsBlocked(self: QDesignerFormEditorInterface) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QDesignerFormEditorInterface, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn Thread(self: QDesignerFormEditorInterface) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDesignerFormEditorInterface, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QDesignerFormEditorInterface, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QDesignerFormEditorInterface, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QDesignerFormEditorInterface, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QDesignerFormEditorInterface, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdesignerformeditorinterface.Children: Memory allocation failed");
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDesignerFormEditorInterface, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QDesignerFormEditorInterface, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QDesignerFormEditorInterface, obj: anytype) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDesignerFormEditorInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn Disconnect3(self: QDesignerFormEditorInterface) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QDesignerFormEditorInterface, receiver: anytype) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn DumpObjectTree(self: QDesignerFormEditorInterface) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn DumpObjectInfo(self: QDesignerFormEditorInterface) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QDesignerFormEditorInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDesignerFormEditorInterface, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QDesignerFormEditorInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignerformeditorinterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerformeditorinterface.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn BindingStorage(self: QDesignerFormEditorInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn BindingStorage2(self: QDesignerFormEditorInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn Destroyed(self: QDesignerFormEditorInterface) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn Parent(self: QDesignerFormEditorInterface) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QDesignerFormEditorInterface, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn DeleteLater(self: QDesignerFormEditorInterface) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QDesignerFormEditorInterface, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QDesignerFormEditorInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDesignerFormEditorInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDesignerFormEditorInterface, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QDesignerFormEditorInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDesignerFormEditorInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDesignerFormEditorInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDesignerFormEditorInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QObject) callconv(.c) void) void {
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDesignerFormEditorInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerFormEditorInterface_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDesignerFormEditorInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerFormEditorInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormEditorInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDesignerFormEditorInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerFormEditorInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDesignerFormEditorInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerFormEditorInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormEditorInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDesignerFormEditorInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerFormEditorInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDesignerFormEditorInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerFormEditorInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDesignerFormEditorInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerFormEditorInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDesignerFormEditorInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerFormEditorInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDesignerFormEditorInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerFormEditorInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDesignerFormEditorInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerFormEditorInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QDesignerFormEditorInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormEditorInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDesignerFormEditorInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormEditorInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QDesignerFormEditorInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormEditorInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDesignerFormEditorInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormEditorInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QDesignerFormEditorInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn SuperSender(self: QDesignerFormEditorInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormEditorInterface_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QDesignerFormEditorInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerFormEditorInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QDesignerFormEditorInterface) i32 {
        return qtc.QDesignerFormEditorInterface_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn SuperSenderSignalIndex(self: QDesignerFormEditorInterface) i32 {
        return qtc.QDesignerFormEditorInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QDesignerFormEditorInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormEditorInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QDesignerFormEditorInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormEditorInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDesignerFormEditorInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormEditorInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerFormEditorInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QDesignerFormEditorInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormEditorInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormEditorInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDesignerFormEditorInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormEditorInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerFormEditorInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QDesignerFormEditorInterface, callback: *const fn (QDesignerFormEditorInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#dtor.QDesignerFormEditorInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerFormEditorInterface `
    ///
    pub fn Delete(self: QDesignerFormEditorInterface) void {
        qtc.QDesignerFormEditorInterface_Delete(@ptrCast(self.ptr));
    }
};
