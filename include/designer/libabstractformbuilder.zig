const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html)
pub const qabstractformbuilder = struct {
    /// New constructs a new QAbstractFormBuilder object.
    ///
    pub fn New() QtC.QAbstractFormBuilder {
        return qtc.QAbstractFormBuilder_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    pub fn WorkingDirectory(self: ?*anyopaque) QtC.QDir {
        return qtc.QAbstractFormBuilder_WorkingDirectory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` directory: QtC.QDir `
    ///
    pub fn SetWorkingDirectory(self: ?*anyopaque, directory: ?*anyopaque) void {
        qtc.QAbstractFormBuilder_SetWorkingDirectory(@ptrCast(self), @ptrCast(directory));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    pub fn Load(self: ?*anyopaque, dev: ?*anyopaque, parentWidget: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractFormBuilder_Load(@ptrCast(self), @ptrCast(dev), @ptrCast(parentWidget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractFormBuilder, dev: QtC.QIODevice, parentWidget: QtC.QWidget) callconv(.c) QtC.QWidget `
    ///
    pub fn OnLoad(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QAbstractFormBuilder_OnLoad(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoad` instead
    ///
    pub const QBaseLoad = SuperLoad;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    pub fn SuperLoad(self: ?*anyopaque, dev: ?*anyopaque, parentWidget: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractFormBuilder_SuperLoad(@ptrCast(self), @ptrCast(dev), @ptrCast(parentWidget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn Save(self: ?*anyopaque, dev: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractFormBuilder_Save(@ptrCast(self), @ptrCast(dev), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractFormBuilder, dev: QtC.QIODevice, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnSave(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractFormBuilder_OnSave(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSave` instead
    ///
    pub const QBaseSave = SuperSave;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperSave(self: ?*anyopaque, dev: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractFormBuilder_SuperSave(@ptrCast(self), @ptrCast(dev), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractFormBuilder_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractformbuilder.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn AddMenuAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QAbstractFormBuilder_AddMenuAction(@ptrCast(self), @ptrCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractFormBuilder, action: QtC.QAction) callconv(.c) void `
    ///
    pub fn OnAddMenuAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractFormBuilder_OnAddMenuAction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddMenuAction` instead
    ///
    pub const QBaseAddMenuAction = SuperAddMenuAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn SuperAddMenuAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QAbstractFormBuilder_SuperAddMenuAction(@ptrCast(self), @ptrCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
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
        return qtc.QAbstractFormBuilder_ApplyPropertyInternally(@ptrCast(self), @ptrCast(o), propertyName_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractFormBuilder, o: QtC.QObject, propertyName: [*:0]const u8, value: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnApplyPropertyInternally(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractFormBuilder_OnApplyPropertyInternally(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperApplyPropertyInternally` instead
    ///
    pub const QBaseApplyPropertyInternally = SuperApplyPropertyInternally;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` o: QtC.QObject `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperApplyPropertyInternally(self: ?*anyopaque, o: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) bool {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QAbstractFormBuilder_SuperApplyPropertyInternally(@ptrCast(self), @ptrCast(o), propertyName_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
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
        return qtc.QAbstractFormBuilder_CreateWidget(@ptrCast(self), widgetName_str, @ptrCast(parentWidget), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractFormBuilder, widgetName: [*:0]const u8, parentWidget: QtC.QWidget, name: [*:0]const u8) callconv(.c) QtC.QWidget `
    ///
    pub fn OnCreateWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QWidget) void {
        qtc.QAbstractFormBuilder_OnCreateWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateWidget` instead
    ///
    pub const QBaseCreateWidget = SuperCreateWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` widgetName: []const u8 `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateWidget(self: ?*anyopaque, widgetName: []const u8, parentWidget: ?*anyopaque, name: []const u8) QtC.QWidget {
        const widgetName_str = qtc.libqt_string{
            .len = widgetName.len,
            .data = widgetName.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QAbstractFormBuilder_SuperCreateWidget(@ptrCast(self), widgetName_str, @ptrCast(parentWidget), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
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
        return qtc.QAbstractFormBuilder_CreateLayout(@ptrCast(self), layoutName_str, @ptrCast(parent), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractFormBuilder, layoutName: [*:0]const u8, parent: QtC.QObject, name: [*:0]const u8) callconv(.c) QtC.QLayout `
    ///
    pub fn OnCreateLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QLayout) void {
        qtc.QAbstractFormBuilder_OnCreateLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateLayout` instead
    ///
    pub const QBaseCreateLayout = SuperCreateLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` layoutName: []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateLayout(self: ?*anyopaque, layoutName: []const u8, parent: ?*anyopaque, name: []const u8) QtC.QLayout {
        const layoutName_str = qtc.libqt_string{
            .len = layoutName.len,
            .data = layoutName.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QAbstractFormBuilder_SuperCreateLayout(@ptrCast(self), layoutName_str, @ptrCast(parent), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
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
        return qtc.QAbstractFormBuilder_CreateAction(@ptrCast(self), @ptrCast(parent), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractFormBuilder, parent: QtC.QObject, name: [*:0]const u8) callconv(.c) QtC.QAction `
    ///
    pub fn OnCreateAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QAction) void {
        qtc.QAbstractFormBuilder_OnCreateAction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateAction` instead
    ///
    pub const QBaseCreateAction = SuperCreateAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateAction(self: ?*anyopaque, parent: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QAbstractFormBuilder_SuperCreateAction(@ptrCast(self), @ptrCast(parent), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
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
        return qtc.QAbstractFormBuilder_CreateActionGroup(@ptrCast(self), @ptrCast(parent), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractFormBuilder, parent: QtC.QObject, name: [*:0]const u8) callconv(.c) QtC.QActionGroup `
    ///
    pub fn OnCreateActionGroup(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QActionGroup) void {
        qtc.QAbstractFormBuilder_OnCreateActionGroup(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateActionGroup` instead
    ///
    pub const QBaseCreateActionGroup = SuperCreateActionGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateActionGroup(self: ?*anyopaque, parent: ?*anyopaque, name: []const u8) QtC.QActionGroup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QAbstractFormBuilder_SuperCreateActionGroup(@ptrCast(self), @ptrCast(parent), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
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
        return qtc.QAbstractFormBuilder_CheckProperty(@ptrCast(self), @ptrCast(obj), prop_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QtC.QAbstractFormBuilder, obj: QtC.QObject, prop: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnCheckProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QAbstractFormBuilder_OnCheckProperty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCheckProperty` instead
    ///
    pub const QBaseCheckProperty = SuperCheckProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` prop: []const u8 `
    ///
    pub fn SuperCheckProperty(self: ?*anyopaque, obj: ?*anyopaque, prop: []const u8) bool {
        const prop_str = qtc.libqt_string{
            .len = prop.len,
            .data = prop.ptr,
        };
        return qtc.QAbstractFormBuilder_SuperCheckProperty(@ptrCast(self), @ptrCast(obj), prop_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QAbstractFormBuilder_Reset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractFormBuilder_OnReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    pub fn SuperReset(self: ?*anyopaque) void {
        qtc.QAbstractFormBuilder_SuperReset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    pub fn ToolBarAreaMetaEnum(self: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QAbstractFormBuilder_ToolBarAreaMetaEnum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaEnum `
    ///
    pub fn OnToolBarAreaMetaEnum(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaEnum) void {
        qtc.QAbstractFormBuilder_OnToolBarAreaMetaEnum(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperToolBarAreaMetaEnum` instead
    ///
    pub const QBaseToolBarAreaMetaEnum = SuperToolBarAreaMetaEnum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    pub fn SuperToolBarAreaMetaEnum(self: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QAbstractFormBuilder_SuperToolBarAreaMetaEnum(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#dtor.QAbstractFormBuilder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAbstractFormBuilder `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QAbstractFormBuilder_Delete(@ptrCast(self));
    }
};
