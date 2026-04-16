const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionGroup = @import("libqt6").QActionGroup;
const QDir = @import("libqt6").QDir;
const QIODevice = @import("libqt6").QIODevice;
const QLayout = @import("libqt6").QLayout;
const QMetaEnum = @import("libqt6").QMetaEnum;
const QObject = @import("libqt6").QObject;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html)
pub const QAbstractFormBuilder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractFormBuilder,

    pub const _is_QAbstractFormBuilder = {};

    /// New constructs a new QAbstractFormBuilder object.
    ///
    pub fn New() QAbstractFormBuilder {
        return .{ .ptr = qtc.QAbstractFormBuilder_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    pub fn WorkingDirectory(self: QAbstractFormBuilder) QDir {
        return .{ .ptr = qtc.QAbstractFormBuilder_WorkingDirectory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` directory: QDir `
    ///
    pub fn SetWorkingDirectory(self: QAbstractFormBuilder, directory: anytype) void {
        comptime _ = @TypeOf(directory)._is_QDir;
        qtc.QAbstractFormBuilder_SetWorkingDirectory(@ptrCast(self.ptr), @ptrCast(directory.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn Load(self: QAbstractFormBuilder, dev: anytype, parentWidget: anytype) QWidget {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QAbstractFormBuilder_Load(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(parentWidget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QAbstractFormBuilder, dev: QIODevice, parentWidget: QWidget) callconv(.c) QWidget `
    ///
    pub fn OnLoad(self: QAbstractFormBuilder, callback: *const fn (QAbstractFormBuilder, QIODevice, QWidget) callconv(.c) QWidget) void {
        qtc.QAbstractFormBuilder_OnLoad(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn SuperLoad(self: QAbstractFormBuilder, dev: anytype, parentWidget: anytype) QWidget {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QAbstractFormBuilder_SuperLoad(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(parentWidget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Save(self: QAbstractFormBuilder, dev: anytype, widget: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractFormBuilder_Save(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QAbstractFormBuilder, dev: QIODevice, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnSave(self: QAbstractFormBuilder, callback: *const fn (QAbstractFormBuilder, QIODevice, QWidget) callconv(.c) void) void {
        qtc.QAbstractFormBuilder_OnSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSave(self: QAbstractFormBuilder, dev: anytype, widget: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractFormBuilder_SuperSave(@ptrCast(self.ptr), @ptrCast(dev.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QAbstractFormBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractFormBuilder_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractformbuilder.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` action: QAction `
    ///
    pub fn AddMenuAction(self: QAbstractFormBuilder, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QAbstractFormBuilder_AddMenuAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QAbstractFormBuilder, action: QAction) callconv(.c) void `
    ///
    pub fn OnAddMenuAction(self: QAbstractFormBuilder, callback: *const fn (QAbstractFormBuilder, QAction) callconv(.c) void) void {
        qtc.QAbstractFormBuilder_OnAddMenuAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperAddMenuAction(self: QAbstractFormBuilder, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QAbstractFormBuilder_SuperAddMenuAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` o: QObject `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn ApplyPropertyInternally(self: QAbstractFormBuilder, o: anytype, propertyName: []const u8, value: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QAbstractFormBuilder_ApplyPropertyInternally(@ptrCast(self.ptr), @ptrCast(o.ptr), propertyName_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QAbstractFormBuilder, o: QObject, propertyName: [*:0]const u8, value: QVariant) callconv(.c) bool `
    ///
    pub fn OnApplyPropertyInternally(self: QAbstractFormBuilder, callback: *const fn (QAbstractFormBuilder, QObject, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QAbstractFormBuilder_OnApplyPropertyInternally(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` o: QObject `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperApplyPropertyInternally(self: QAbstractFormBuilder, o: anytype, propertyName: []const u8, value: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QAbstractFormBuilder_SuperApplyPropertyInternally(@ptrCast(self.ptr), @ptrCast(o.ptr), propertyName_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` widgetName: []const u8 `
    ///
    /// ` parentWidget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateWidget(self: QAbstractFormBuilder, widgetName: []const u8, parentWidget: anytype, name: []const u8) QWidget {
        const widgetName_str = qtc.libqt_string{
            .len = widgetName.len,
            .data = widgetName.ptr,
        };
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAbstractFormBuilder_CreateWidget(@ptrCast(self.ptr), widgetName_str, @ptrCast(parentWidget.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QAbstractFormBuilder, widgetName: [*:0]const u8, parentWidget: QWidget, name: [*:0]const u8) callconv(.c) QWidget `
    ///
    pub fn OnCreateWidget(self: QAbstractFormBuilder, callback: *const fn (QAbstractFormBuilder, [*:0]const u8, QWidget, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.QAbstractFormBuilder_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` widgetName: []const u8 `
    ///
    /// ` parentWidget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateWidget(self: QAbstractFormBuilder, widgetName: []const u8, parentWidget: anytype, name: []const u8) QWidget {
        const widgetName_str = qtc.libqt_string{
            .len = widgetName.len,
            .data = widgetName.ptr,
        };
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAbstractFormBuilder_SuperCreateWidget(@ptrCast(self.ptr), widgetName_str, @ptrCast(parentWidget.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` layoutName: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateLayout(self: QAbstractFormBuilder, layoutName: []const u8, parent: anytype, name: []const u8) QLayout {
        const layoutName_str = qtc.libqt_string{
            .len = layoutName.len,
            .data = layoutName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAbstractFormBuilder_CreateLayout(@ptrCast(self.ptr), layoutName_str, @ptrCast(parent.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QAbstractFormBuilder, layoutName: [*:0]const u8, parent: QObject, name: [*:0]const u8) callconv(.c) QLayout `
    ///
    pub fn OnCreateLayout(self: QAbstractFormBuilder, callback: *const fn (QAbstractFormBuilder, [*:0]const u8, QObject, [*:0]const u8) callconv(.c) QLayout) void {
        qtc.QAbstractFormBuilder_OnCreateLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` layoutName: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateLayout(self: QAbstractFormBuilder, layoutName: []const u8, parent: anytype, name: []const u8) QLayout {
        const layoutName_str = qtc.libqt_string{
            .len = layoutName.len,
            .data = layoutName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAbstractFormBuilder_SuperCreateLayout(@ptrCast(self.ptr), layoutName_str, @ptrCast(parent.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateAction(self: QAbstractFormBuilder, parent: anytype, name: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAbstractFormBuilder_CreateAction(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QAbstractFormBuilder, parent: QObject, name: [*:0]const u8) callconv(.c) QAction `
    ///
    pub fn OnCreateAction(self: QAbstractFormBuilder, callback: *const fn (QAbstractFormBuilder, QObject, [*:0]const u8) callconv(.c) QAction) void {
        qtc.QAbstractFormBuilder_OnCreateAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateAction(self: QAbstractFormBuilder, parent: anytype, name: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAbstractFormBuilder_SuperCreateAction(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateActionGroup(self: QAbstractFormBuilder, parent: anytype, name: []const u8) QActionGroup {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAbstractFormBuilder_CreateActionGroup(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QAbstractFormBuilder, parent: QObject, name: [*:0]const u8) callconv(.c) QActionGroup `
    ///
    pub fn OnCreateActionGroup(self: QAbstractFormBuilder, callback: *const fn (QAbstractFormBuilder, QObject, [*:0]const u8) callconv(.c) QActionGroup) void {
        qtc.QAbstractFormBuilder_OnCreateActionGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` parent: QObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperCreateActionGroup(self: QAbstractFormBuilder, parent: anytype, name: []const u8) QActionGroup {
        comptime _ = @TypeOf(parent)._is_QObject;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAbstractFormBuilder_SuperCreateActionGroup(@ptrCast(self.ptr), @ptrCast(parent.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` obj: QObject `
    ///
    /// ` prop: []const u8 `
    ///
    pub fn CheckProperty(self: QAbstractFormBuilder, obj: anytype, prop: []const u8) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const prop_str = qtc.libqt_string{
            .len = prop.len,
            .data = prop.ptr,
        };
        return qtc.QAbstractFormBuilder_CheckProperty(@ptrCast(self.ptr), @ptrCast(obj.ptr), prop_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn (self: QAbstractFormBuilder, obj: QObject, prop: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnCheckProperty(self: QAbstractFormBuilder, callback: *const fn (QAbstractFormBuilder, QObject, [*:0]const u8) callconv(.c) bool) void {
        qtc.QAbstractFormBuilder_OnCheckProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` obj: QObject `
    ///
    /// ` prop: []const u8 `
    ///
    pub fn SuperCheckProperty(self: QAbstractFormBuilder, obj: anytype, prop: []const u8) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const prop_str = qtc.libqt_string{
            .len = prop.len,
            .data = prop.ptr,
        };
        return qtc.QAbstractFormBuilder_SuperCheckProperty(@ptrCast(self.ptr), @ptrCast(obj.ptr), prop_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    pub fn Reset(self: QAbstractFormBuilder) void {
        qtc.QAbstractFormBuilder_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: QAbstractFormBuilder, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractFormBuilder_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    pub fn SuperReset(self: QAbstractFormBuilder) void {
        qtc.QAbstractFormBuilder_SuperReset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    pub fn ToolBarAreaMetaEnum(self: QAbstractFormBuilder) QMetaEnum {
        return .{ .ptr = qtc.QAbstractFormBuilder_ToolBarAreaMetaEnum(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFormBuilder `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaEnum `
    ///
    pub fn OnToolBarAreaMetaEnum(self: QAbstractFormBuilder, callback: *const fn () callconv(.c) QMetaEnum) void {
        qtc.QAbstractFormBuilder_OnToolBarAreaMetaEnum(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractFormBuilder `
    ///
    pub fn SuperToolBarAreaMetaEnum(self: QAbstractFormBuilder) QMetaEnum {
        return .{ .ptr = qtc.QAbstractFormBuilder_SuperToolBarAreaMetaEnum(@ptrCast(self.ptr)) };
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
    /// ` self: QAbstractFormBuilder `
    ///
    pub fn Delete(self: QAbstractFormBuilder) void {
        qtc.QAbstractFormBuilder_Delete(@ptrCast(self.ptr));
    }
};
