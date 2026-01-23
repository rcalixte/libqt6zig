const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html)
pub const qdesignerformeditorinterface = struct {
    /// New constructs a new QDesignerFormEditorInterface object.
    ///
    pub fn New() QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerFormEditorInterface_new();
    }

    /// New2 constructs a new QDesignerFormEditorInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerFormEditorInterface_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDesignerFormEditorInterface_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormEditorInterface_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormEditorInterface_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerFormEditorInterface_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormEditorInterface_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformeditorinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#extensionManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn ExtensionManager(self: ?*anyopaque) QtC.QExtensionManager {
        return qtc.QDesignerFormEditorInterface_ExtensionManager(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#topLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn TopLevel(self: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerFormEditorInterface_TopLevel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn WidgetBox(self: ?*anyopaque) QtC.QDesignerWidgetBoxInterface {
        return qtc.QDesignerFormEditorInterface_WidgetBox(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#propertyEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn PropertyEditor(self: ?*anyopaque) QtC.QDesignerPropertyEditorInterface {
        return qtc.QDesignerFormEditorInterface_PropertyEditor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#objectInspector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn ObjectInspector(self: ?*anyopaque) QtC.QDesignerObjectInspectorInterface {
        return qtc.QDesignerFormEditorInterface_ObjectInspector(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#formWindowManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn FormWindowManager(self: ?*anyopaque) QtC.QDesignerFormWindowManagerInterface {
        return qtc.QDesignerFormEditorInterface_FormWindowManager(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn WidgetDataBase(self: ?*anyopaque) QtC.QDesignerWidgetDataBaseInterface {
        return qtc.QDesignerFormEditorInterface_WidgetDataBase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#metaDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn MetaDataBase(self: ?*anyopaque) QtC.QDesignerMetaDataBaseInterface {
        return qtc.QDesignerFormEditorInterface_MetaDataBase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#promotion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn Promotion(self: ?*anyopaque) QtC.QDesignerPromotionInterface {
        return qtc.QDesignerFormEditorInterface_Promotion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn WidgetFactory(self: ?*anyopaque) QtC.QDesignerWidgetFactoryInterface {
        return qtc.QDesignerFormEditorInterface_WidgetFactory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#actionEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn ActionEditor(self: ?*anyopaque) QtC.QDesignerActionEditorInterface {
        return qtc.QDesignerFormEditorInterface_ActionEditor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#integration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn Integration(self: ?*anyopaque) QtC.QDesignerIntegrationInterface {
        return qtc.QDesignerFormEditorInterface_Integration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#settingsManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn SettingsManager(self: ?*anyopaque) QtC.QDesignerSettingsInterface {
        return qtc.QDesignerFormEditorInterface_SettingsManager(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#resourceLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResourceLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerFormEditorInterface_ResourceLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformeditorinterface.ResourceLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#optionsPages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OptionsPages(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDesignerOptionsPageInterface {
        const _arr: qtc.libqt_list = qtc.QDesignerFormEditorInterface_OptionsPages(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDesignerOptionsPageInterface, _arr.len) catch @panic("qdesignerformeditorinterface.OptionsPages: Memory allocation failed");
        const _data: [*]QtC.QDesignerOptionsPageInterface = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` topLevel: QtC.QWidget `
    ///
    pub fn SetTopLevel(self: ?*anyopaque, topLevel: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetTopLevel(@ptrCast(self), @ptrCast(topLevel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` widgetBox: QtC.QDesignerWidgetBoxInterface `
    ///
    pub fn SetWidgetBox(self: ?*anyopaque, widgetBox: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetWidgetBox(@ptrCast(self), @ptrCast(widgetBox));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPropertyEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` propertyEditor: QtC.QDesignerPropertyEditorInterface `
    ///
    pub fn SetPropertyEditor(self: ?*anyopaque, propertyEditor: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetPropertyEditor(@ptrCast(self), @ptrCast(propertyEditor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setObjectInspector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` objectInspector: QtC.QDesignerObjectInspectorInterface `
    ///
    pub fn SetObjectInspector(self: ?*anyopaque, objectInspector: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetObjectInspector(@ptrCast(self), @ptrCast(objectInspector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setActionEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` actionEditor: QtC.QDesignerActionEditorInterface `
    ///
    pub fn SetActionEditor(self: ?*anyopaque, actionEditor: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetActionEditor(@ptrCast(self), @ptrCast(actionEditor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setIntegration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` integration: QtC.QDesignerIntegrationInterface `
    ///
    pub fn SetIntegration(self: ?*anyopaque, integration: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetIntegration(@ptrCast(self), @ptrCast(integration));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setSettingsManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` settingsManager: QtC.QDesignerSettingsInterface `
    ///
    pub fn SetSettingsManager(self: ?*anyopaque, settingsManager: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetSettingsManager(@ptrCast(self), @ptrCast(settingsManager));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setOptionsPages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` optionsPages: []QtC.QDesignerOptionsPageInterface `
    ///
    pub fn SetOptionsPages(self: ?*anyopaque, optionsPages: []?*anyopaque) void {
        const optionsPages_list = qtc.libqt_list{
            .len = optionsPages.len,
            .data = @ptrCast(optionsPages.ptr),
        };
        qtc.QDesignerFormEditorInterface_SetOptionsPages(@ptrCast(self), optionsPages_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#pluginInstances)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginInstances(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QDesignerFormEditorInterface_PluginInstances(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdesignerformeditorinterface.PluginInstances: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#createIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateIcon(name: []const u8) QtC.QIcon {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerFormEditorInterface_CreateIcon(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` formWindowManager: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SetFormManager(self: ?*anyopaque, formWindowManager: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetFormManager(@ptrCast(self), @ptrCast(formWindowManager));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, formWindowManager: QtC.QDesignerFormWindowManagerInterface) callconv(.c) void `
    ///
    pub fn OnSetFormManager(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetFormManager(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` formWindowManager: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn QBaseSetFormManager(self: ?*anyopaque, formWindowManager: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseSetFormManager(@ptrCast(self), @ptrCast(formWindowManager));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` metaDataBase: QtC.QDesignerMetaDataBaseInterface `
    ///
    pub fn SetMetaDataBase(self: ?*anyopaque, metaDataBase: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetMetaDataBase(@ptrCast(self), @ptrCast(metaDataBase));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, metaDataBase: QtC.QDesignerMetaDataBaseInterface) callconv(.c) void `
    ///
    pub fn OnSetMetaDataBase(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetMetaDataBase(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` metaDataBase: QtC.QDesignerMetaDataBaseInterface `
    ///
    pub fn QBaseSetMetaDataBase(self: ?*anyopaque, metaDataBase: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseSetMetaDataBase(@ptrCast(self), @ptrCast(metaDataBase));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` widgetDataBase: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn SetWidgetDataBase(self: ?*anyopaque, widgetDataBase: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetWidgetDataBase(@ptrCast(self), @ptrCast(widgetDataBase));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, widgetDataBase: QtC.QDesignerWidgetDataBaseInterface) callconv(.c) void `
    ///
    pub fn OnSetWidgetDataBase(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetWidgetDataBase(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` widgetDataBase: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn QBaseSetWidgetDataBase(self: ?*anyopaque, widgetDataBase: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseSetWidgetDataBase(@ptrCast(self), @ptrCast(widgetDataBase));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` promotion: QtC.QDesignerPromotionInterface `
    ///
    pub fn SetPromotion(self: ?*anyopaque, promotion: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetPromotion(@ptrCast(self), @ptrCast(promotion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, promotion: QtC.QDesignerPromotionInterface) callconv(.c) void `
    ///
    pub fn OnSetPromotion(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetPromotion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` promotion: QtC.QDesignerPromotionInterface `
    ///
    pub fn QBaseSetPromotion(self: ?*anyopaque, promotion: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseSetPromotion(@ptrCast(self), @ptrCast(promotion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` widgetFactory: QtC.QDesignerWidgetFactoryInterface `
    ///
    pub fn SetWidgetFactory(self: ?*anyopaque, widgetFactory: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetWidgetFactory(@ptrCast(self), @ptrCast(widgetFactory));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, widgetFactory: QtC.QDesignerWidgetFactoryInterface) callconv(.c) void `
    ///
    pub fn OnSetWidgetFactory(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetWidgetFactory(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` widgetFactory: QtC.QDesignerWidgetFactoryInterface `
    ///
    pub fn QBaseSetWidgetFactory(self: ?*anyopaque, widgetFactory: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseSetWidgetFactory(@ptrCast(self), @ptrCast(widgetFactory));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` extensionManager: QtC.QExtensionManager `
    ///
    pub fn SetExtensionManager(self: ?*anyopaque, extensionManager: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_SetExtensionManager(@ptrCast(self), @ptrCast(extensionManager));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, extensionManager: QtC.QExtensionManager) callconv(.c) void `
    ///
    pub fn OnSetExtensionManager(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnSetExtensionManager(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` extensionManager: QtC.QExtensionManager `
    ///
    pub fn QBaseSetExtensionManager(self: ?*anyopaque, extensionManager: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseSetExtensionManager(@ptrCast(self), @ptrCast(extensionManager));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformeditorinterface.Tr2: Memory allocation failed");
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
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdesignerformeditorinterface.Children: Memory allocation failed");
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface) callconv(.c) void `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, param1: QtC.QObject) callconv(.c) void `
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
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerFormEditorInterface_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerFormEditorInterface_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerFormEditorInterface_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerFormEditorInterface_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerFormEditorInterface_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerFormEditorInterface_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorInterface_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerFormEditorInterface_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerFormEditorInterface_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QDesignerFormEditorInterface_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormEditorInterface_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormEditorInterface_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormEditorInterface_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormEditorInterface_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormEditorInterface_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerFormEditorInterface_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerFormEditorInterface_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerFormEditorInterface_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerFormEditorInterface_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#dtor.QDesignerFormEditorInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerFormEditorInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerFormEditorInterface_Delete(@ptrCast(self));
    }
};
