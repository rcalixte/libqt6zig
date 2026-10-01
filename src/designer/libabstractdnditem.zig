const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html)
pub const QDesignerDnDItemInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerDnDItemInterface,

    pub const _is_QDesignerDnDItemInterface = {};

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#dtor.QDesignerDnDItemInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerDnDItemInterface `
    ///
    pub fn delete(self: QDesignerDnDItemInterface) void {
        qtc.QDesignerDnDItemInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/abstractdnditem.html#public-types)
pub const enums = struct {
    pub const DropType = enum {
        pub const MoveDrop: i32 = 0;
        pub const CopyDrop: i32 = 1;
    };
};
