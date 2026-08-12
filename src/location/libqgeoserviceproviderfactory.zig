const QtC = @import("qt6zig");
const qtc = @import("qt6c");

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
