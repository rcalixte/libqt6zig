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

    /// New constructs a new QDesignerFormEditorPluginInterface object.
    ///
    pub fn New() QDesignerFormEditorPluginInterface {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn IsInitialized(self: QDesignerFormEditorPluginInterface) bool {
        return qtc.QDesignerFormEditorPluginInterface_IsInitialized(@ptrCast(self.ptr));
    }

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
    pub fn OnIsInitialized(self: QDesignerFormEditorPluginInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerFormEditorPluginInterface_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsInitialized` instead
    ///
    pub const QBaseIsInitialized = SuperIsInitialized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn SuperIsInitialized(self: QDesignerFormEditorPluginInterface) bool {
        return qtc.QDesignerFormEditorPluginInterface_SuperIsInitialized(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    pub fn Initialize(self: QDesignerFormEditorPluginInterface, core: anytype) void {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        qtc.QDesignerFormEditorPluginInterface_Initialize(@ptrCast(self.ptr), @ptrCast(core.ptr));
    }

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
    pub fn OnInitialize(self: QDesignerFormEditorPluginInterface, callback: *const fn (QDesignerFormEditorPluginInterface, QDesignerFormEditorInterface) callconv(.c) void) void {
        qtc.QDesignerFormEditorPluginInterface_OnInitialize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitialize` instead
    ///
    pub const QBaseInitialize = SuperInitialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    pub fn SuperInitialize(self: QDesignerFormEditorPluginInterface, core: anytype) void {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        qtc.QDesignerFormEditorPluginInterface_SuperInitialize(@ptrCast(self.ptr), @ptrCast(core.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn Action(self: QDesignerFormEditorPluginInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_Action(@ptrCast(self.ptr)) };
    }

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
    pub fn OnAction(self: QDesignerFormEditorPluginInterface, callback: *const fn () callconv(.c) QAction) void {
        qtc.QDesignerFormEditorPluginInterface_OnAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAction` instead
    ///
    pub const QBaseAction = SuperAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn SuperAction(self: QDesignerFormEditorPluginInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_SuperAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn Core(self: QDesignerFormEditorPluginInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_Core(@ptrCast(self.ptr)) };
    }

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
    pub fn OnCore(self: QDesignerFormEditorPluginInterface, callback: *const fn () callconv(.c) QDesignerFormEditorInterface) void {
        qtc.QDesignerFormEditorPluginInterface_OnCore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCore` instead
    ///
    pub const QBaseCore = SuperCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn SuperCore(self: QDesignerFormEditorPluginInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormEditorPluginInterface_SuperCore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#dtor.QDesignerFormEditorPluginInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerFormEditorPluginInterface `
    ///
    pub fn Delete(self: QDesignerFormEditorPluginInterface) void {
        qtc.QDesignerFormEditorPluginInterface_Delete(@ptrCast(self.ptr));
    }
};
