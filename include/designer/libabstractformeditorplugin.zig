const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html)
pub const QDesignerFormEditorPluginInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerFormEditorPluginInterface,

    pub const _is_QDesignerFormEditorPluginInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerFormEditorPluginInterface object in C++ memory
    ///
    pub fn new() QDesignerFormEditorPluginInterface {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_new() };
    }

    /// ### DEPRECATED: Use `isInitialized` instead
    ///
    pub const IsInitialized = isInitialized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn isInitialized(self: QDesignerFormEditorPluginInterface) bool {
        return qtc.QDesignerFormEditorPluginInterface_IsInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsInitialized` instead
    ///
    pub const OnIsInitialized = onIsInitialized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsInitialized(self: QDesignerFormEditorPluginInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerFormEditorPluginInterface_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsInitialized` instead
    ///
    pub const SuperIsInitialized = superIsInitialized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn superIsInitialized(self: QDesignerFormEditorPluginInterface) bool {
        return qtc.QDesignerFormEditorPluginInterface_SuperIsInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `initialize` instead
    ///
    pub const Initialize = initialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    /// ` _core: QDesignerFormEditorInterface `
    ///
    pub fn initialize(self: QDesignerFormEditorPluginInterface, _core: anytype) void {
        comptime _ = @TypeOf(_core)._is_QDesignerFormEditorInterface;
        qtc.QDesignerFormEditorPluginInterface_Initialize(@ptrCast(self.ptr), @ptrCast(_core.ptr));
    }

    /// ### DEPRECATED: Use `onInitialize` instead
    ///
    pub const OnInitialize = onInitialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormEditorPluginInterface, core: QDesignerFormEditorInterface) callconv(.c) void `
    ///
    pub fn onInitialize(self: QDesignerFormEditorPluginInterface, callback: *const fn (QDesignerFormEditorPluginInterface, QDesignerFormEditorInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorPluginInterface_OnInitialize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitialize` instead
    ///
    pub const SuperInitialize = superInitialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    /// ` _core: QDesignerFormEditorInterface `
    ///
    pub fn superInitialize(self: QDesignerFormEditorPluginInterface, _core: anytype) void {
        comptime _ = @TypeOf(_core)._is_QDesignerFormEditorInterface;
        qtc.QDesignerFormEditorPluginInterface_SuperInitialize(@ptrCast(self.ptr), @ptrCast(_core.ptr));
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn action(self: QDesignerFormEditorPluginInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_Action(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAction` instead
    ///
    pub const OnAction = onAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QAction `
    ///
    pub fn onAction(self: QDesignerFormEditorPluginInterface, callback: *const fn () callconv(.c) QAction) void {
        qtc.QDesignerFormEditorPluginInterface_OnAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAction` instead
    ///
    pub const SuperAction = superAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn superAction(self: QDesignerFormEditorPluginInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_SuperAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `core` instead
    ///
    pub const Core = core;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn core(self: QDesignerFormEditorPluginInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCore` instead
    ///
    pub const OnCore = onCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QDesignerFormEditorInterface `
    ///
    pub fn onCore(self: QDesignerFormEditorPluginInterface, callback: *const fn () callconv(.c) QDesignerFormEditorInterface) void {
        qtc.QDesignerFormEditorPluginInterface_OnCore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCore` instead
    ///
    pub const SuperCore = superCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn superCore(self: QDesignerFormEditorPluginInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_SuperCore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#dtor.QDesignerFormEditorPluginInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn delete(self: QDesignerFormEditorPluginInterface) void {
        qtc.QDesignerFormEditorPluginInterface_Delete(@ptrCast(self.ptr));
    }
};
