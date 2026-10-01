const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html)
pub const QGeoPositionInfoSourceFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoPositionInfoSourceFactory,

    pub const _is_QGeoPositionInfoSourceFactory = {};

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSourceFactory `
    ///
    /// ` param1: QGeoPositionInfoSourceFactory `
    ///
    pub fn operatorAssign(self: QGeoPositionInfoSourceFactory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QGeoPositionInfoSourceFactory;
        qtc.QGeoPositionInfoSourceFactory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#dtor.QGeoPositionInfoSourceFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoPositionInfoSourceFactory `
    ///
    pub fn delete(self: QGeoPositionInfoSourceFactory) void {
        qtc.QGeoPositionInfoSourceFactory_Delete(@ptrCast(self.ptr));
    }
};
