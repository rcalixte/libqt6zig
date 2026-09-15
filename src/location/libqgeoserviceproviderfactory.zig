const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QQmlEngine = @import("libqt6").QQmlEngine;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html)
pub const QGeoServiceProviderFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoServiceProviderFactory,

    pub const _is_QGeoServiceProviderFactory = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoServiceProviderFactory object in C++ memory
    ///
    pub fn new() QGeoServiceProviderFactory {
        return .{ .ptr = qtc.QGeoServiceProviderFactory_new() };
    }

    /// ### DEPRECATED: Use `setQmlEngine` instead
    ///
    pub const SetQmlEngine = setQmlEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#setQmlEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoServiceProviderFactory `
    ///
    /// ` engine: QQmlEngine `
    ///
    pub fn setQmlEngine(self: QGeoServiceProviderFactory, engine: anytype) void {
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        qtc.QGeoServiceProviderFactory_SetQmlEngine(@ptrCast(self.ptr), @ptrCast(engine.ptr));
    }

    /// ### DEPRECATED: Use `onSetQmlEngine` instead
    ///
    pub const OnSetQmlEngine = onSetQmlEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#setQmlEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoServiceProviderFactory `
    ///
    /// ` callback: *const fn (self: QGeoServiceProviderFactory, engine: QQmlEngine) callconv(.c) void `
    ///
    pub fn onSetQmlEngine(self: QGeoServiceProviderFactory, callback: *const fn (QGeoServiceProviderFactory, QQmlEngine) callconv(.c) void) void {
        qtc.QGeoServiceProviderFactory_OnSetQmlEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetQmlEngine` instead
    ///
    pub const SuperSetQmlEngine = superSetQmlEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#setQmlEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoServiceProviderFactory `
    ///
    /// ` engine: QQmlEngine `
    ///
    pub fn superSetQmlEngine(self: QGeoServiceProviderFactory, engine: anytype) void {
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        qtc.QGeoServiceProviderFactory_SuperSetQmlEngine(@ptrCast(self.ptr), @ptrCast(engine.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoServiceProviderFactory `
    ///
    /// ` param1: QGeoServiceProviderFactory `
    ///
    pub fn operatorAssign(self: QGeoServiceProviderFactory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QGeoServiceProviderFactory;
        qtc.QGeoServiceProviderFactory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#dtor.QGeoServiceProviderFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoServiceProviderFactory `
    ///
    pub fn delete(self: QGeoServiceProviderFactory) void {
        qtc.QGeoServiceProviderFactory_Delete(@ptrCast(self.ptr));
    }
};
