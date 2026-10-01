const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html)
pub const QFactoryInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFactoryInterface,

    pub const _is_QFactoryInterface = {};

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html#dtor.QFactoryInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFactoryInterface `
    ///
    pub fn delete(self: QFactoryInterface) void {
        qtc.QFactoryInterface_Delete(@ptrCast(self.ptr));
    }
};
