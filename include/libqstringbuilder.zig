const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qabstractconcatenable.html
pub const qabstractconcatenable = struct {
    /// New constructs a new QAbstractConcatenable object.
    ///
    /// ``` other: QtC.QAbstractConcatenable ```
    pub fn New(other: ?*anyopaque) QtC.QAbstractConcatenable {
        return qtc.QAbstractConcatenable_new(@ptrCast(other));
    }

    /// New2 constructs a new QAbstractConcatenable object and invalidates the source QAbstractConcatenable object.
    ///
    /// ``` other: QtC.QAbstractConcatenable ```
    pub fn New2(other: ?*anyopaque) QtC.QAbstractConcatenable {
        return qtc.QAbstractConcatenable_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QAbstractConcatenable, other: QtC.QAbstractConcatenable ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractConcatenable_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QAbstractConcatenable, other: QtC.QAbstractConcatenable ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractConcatenable_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractconcatenable.html#dtor.QAbstractConcatenable)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractConcatenable ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractConcatenable_Delete(@ptrCast(self));
    }
};
