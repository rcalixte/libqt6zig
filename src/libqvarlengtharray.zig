const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html)
pub const QVLABaseBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVLABaseBase,

    pub const _is_QVLABaseBase = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#capacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVLABaseBase `
    ///
    pub fn Capacity(self: QVLABaseBase) isize {
        return qtc.QVLABaseBase_Capacity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVLABaseBase `
    ///
    pub fn Size(self: QVLABaseBase) isize {
        return qtc.QVLABaseBase_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVLABaseBase `
    ///
    pub fn Empty(self: QVLABaseBase) bool {
        return qtc.QVLABaseBase_Empty(@ptrCast(self.ptr));
    }
};
