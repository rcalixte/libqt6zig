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
