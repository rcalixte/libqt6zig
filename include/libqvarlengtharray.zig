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

    /// ### DEPRECATED: Use `capacity` instead
    ///
    pub const Capacity = capacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#capacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVLABaseBase `
    ///
    pub fn capacity(self: QVLABaseBase) isize {
        return qtc.QVLABaseBase_Capacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVLABaseBase `
    ///
    pub fn size(self: QVLABaseBase) isize {
        return qtc.QVLABaseBase_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `empty` instead
    ///
    pub const Empty = empty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVLABaseBase `
    ///
    pub fn empty(self: QVLABaseBase) bool {
        return qtc.QVLABaseBase_Empty(@ptrCast(self.ptr));
    }
};
