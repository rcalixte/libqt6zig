const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSurfaceFormat = @import("libqt6").QSurfaceFormat;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html)
pub const QQuick3D = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuick3D,

    pub const _is_QQuick3D = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuick3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3D `
    ///
    pub fn new(other: anytype) QQuick3D {
        comptime _ = @TypeOf(other)._is_QQuick3D;
        return .{ .ptr = qtc.QQuick3D_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuick3D object and invalidate the source QQuick3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3D `
    ///
    pub fn new2(other: anytype) QQuick3D {
        comptime _ = @TypeOf(other)._is_QQuick3D;
        return .{ .ptr = qtc.QQuick3D_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3D `
    ///
    /// ` other: QQuick3D `
    ///
    pub fn copyAssign(self: QQuick3D, other: QQuick3D) void {
        qtc.QQuick3D_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3D `
    ///
    /// ` other: QQuick3D `
    ///
    pub fn moveAssign(self: QQuick3D, other: QQuick3D) void {
        qtc.QQuick3D_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `idealSurfaceFormat` instead
    ///
    pub const IdealSurfaceFormat = idealSurfaceFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html#idealSurfaceFormat)
    ///
    pub fn idealSurfaceFormat() QSurfaceFormat {
        return .{ .ptr = qtc.QQuick3D_IdealSurfaceFormat() };
    }

    /// ### DEPRECATED: Use `idealSurfaceFormat1` instead
    ///
    pub const IdealSurfaceFormat1 = idealSurfaceFormat1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html#idealSurfaceFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` samples: i32 `
    ///
    pub fn idealSurfaceFormat1(samples: i32) QSurfaceFormat {
        return .{ .ptr = qtc.QQuick3D_IdealSurfaceFormat1(@bitCast(samples)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html#dtor.QQuick3D)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuick3D `
    ///
    pub fn delete(self: QQuick3D) void {
        qtc.QQuick3D_Delete(@ptrCast(self.ptr));
    }
};
