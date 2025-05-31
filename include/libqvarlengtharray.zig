const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qvlabasebase.html
pub const qvlabasebase = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qvlabasebase.html#capacity)
    ///
    /// ``` self: QtC.QVLABaseBase ```
    pub fn Capacity(self: ?*anyopaque) i64 {
        return qtc.QVLABaseBase_Capacity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvlabasebase.html#size)
    ///
    /// ``` self: QtC.QVLABaseBase ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QVLABaseBase_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvlabasebase.html#empty)
    ///
    /// ``` self: QtC.QVLABaseBase ```
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QVLABaseBase_Empty(@ptrCast(self));
    }
};
