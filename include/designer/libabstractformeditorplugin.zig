const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html)
pub const qdesignerformeditorplugininterface = struct {
    /// New constructs a new QDesignerFormEditorPluginInterface object.
    ///
    pub fn New() QtC.QDesignerFormEditorPluginInterface {
        return qtc.QDesignerFormEditorPluginInterface_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QDesignerFormEditorPluginInterface_IsInitialized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerFormEditorPluginInterface_OnIsInitialized(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    pub fn QBaseIsInitialized(self: ?*anyopaque) bool {
        return qtc.QDesignerFormEditorPluginInterface_QBaseIsInitialized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    pub fn Initialize(self: ?*anyopaque, core: ?*anyopaque) void {
        qtc.QDesignerFormEditorPluginInterface_Initialize(@ptrCast(self), @ptrCast(core));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormEditorPluginInterface, core: QtC.QDesignerFormEditorInterface) callconv(.c) void `
    ///
    pub fn OnInitialize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormEditorPluginInterface_OnInitialize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    pub fn QBaseInitialize(self: ?*anyopaque, core: ?*anyopaque) void {
        qtc.QDesignerFormEditorPluginInterface_QBaseInitialize(@ptrCast(self), @ptrCast(core));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    pub fn Action(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormEditorPluginInterface_Action(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAction `
    ///
    pub fn OnAction(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAction) void {
        qtc.QDesignerFormEditorPluginInterface_OnAction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    pub fn QBaseAction(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormEditorPluginInterface_QBaseAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    pub fn Core(self: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerFormEditorPluginInterface_Core(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDesignerFormEditorInterface `
    ///
    pub fn OnCore(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDesignerFormEditorInterface) void {
        qtc.QDesignerFormEditorPluginInterface_OnCore(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    pub fn QBaseCore(self: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerFormEditorPluginInterface_QBaseCore(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#dtor.QDesignerFormEditorPluginInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerFormEditorPluginInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerFormEditorPluginInterface_Delete(@ptrCast(self));
    }
};
