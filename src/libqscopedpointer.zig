const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html)
pub const QScopedPointerPodDeleter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScopedPointerPodDeleter,

    pub const _is_QScopedPointerPodDeleter = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QScopedPointerPodDeleter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QScopedPointerPodDeleter `
    ///
    pub fn new(other: anytype) QScopedPointerPodDeleter {
        comptime _ = @TypeOf(other)._is_QScopedPointerPodDeleter;
        return .{ .ptr = qtc.QScopedPointerPodDeleter_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QScopedPointerPodDeleter object and invalidate the source QScopedPointerPodDeleter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QScopedPointerPodDeleter `
    ///
    pub fn new2(other: anytype) QScopedPointerPodDeleter {
        comptime _ = @TypeOf(other)._is_QScopedPointerPodDeleter;
        return .{ .ptr = qtc.QScopedPointerPodDeleter_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QScopedPointerPodDeleter `
    ///
    /// ` other: QScopedPointerPodDeleter `
    ///
    pub fn copyAssign(self: QScopedPointerPodDeleter, other: QScopedPointerPodDeleter) void {
        qtc.QScopedPointerPodDeleter_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QScopedPointerPodDeleter `
    ///
    /// ` other: QScopedPointerPodDeleter `
    ///
    pub fn moveAssign(self: QScopedPointerPodDeleter, other: QScopedPointerPodDeleter) void {
        qtc.QScopedPointerPodDeleter_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `cleanup` instead
    ///
    pub const Cleanup = cleanup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#cleanup)
    ///
    /// ## Parameter(s):
    ///
    /// ` pointer: ?*anyopaque `
    ///
    pub fn cleanup(pointer: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_Cleanup(@ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `operatorCall` instead
    ///
    pub const OperatorCall = operatorCall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScopedPointerPodDeleter `
    ///
    /// ` pointer: ?*anyopaque `
    ///
    pub fn operatorCall(self: QScopedPointerPodDeleter, pointer: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_OperatorCall(@ptrCast(self.ptr), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#dtor.QScopedPointerPodDeleter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QScopedPointerPodDeleter `
    ///
    pub fn delete(self: QScopedPointerPodDeleter) void {
        qtc.QScopedPointerPodDeleter_Delete(@ptrCast(self.ptr));
    }
};
