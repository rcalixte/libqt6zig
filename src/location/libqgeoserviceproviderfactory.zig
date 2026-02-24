const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html)
pub const qgeoserviceproviderfactory = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoServiceProviderFactory `
    ///
    /// ` param1: QtC.QGeoServiceProviderFactory `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGeoServiceProviderFactory_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#dtor.QGeoServiceProviderFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoServiceProviderFactory `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGeoServiceProviderFactory_Delete(@ptrCast(self));
    }
};
