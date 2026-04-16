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

    /// New constructs a new QScopedPointerPodDeleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QScopedPointerPodDeleter `
    ///
    pub fn New(other: anytype) QScopedPointerPodDeleter {
        comptime _ = @TypeOf(other)._is_QScopedPointerPodDeleter;
        return .{ .ptr = qtc.QScopedPointerPodDeleter_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QScopedPointerPodDeleter object and invalidates the source QScopedPointerPodDeleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QScopedPointerPodDeleter `
    ///
    pub fn New2(other: anytype) QScopedPointerPodDeleter {
        comptime _ = @TypeOf(other)._is_QScopedPointerPodDeleter;
        return .{ .ptr = qtc.QScopedPointerPodDeleter_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QScopedPointerPodDeleter `
    ///
    /// ` other: QScopedPointerPodDeleter `
    ///
    pub fn CopyAssign(self: QScopedPointerPodDeleter, other: QScopedPointerPodDeleter) void {
        qtc.QScopedPointerPodDeleter_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QScopedPointerPodDeleter `
    ///
    /// ` other: QScopedPointerPodDeleter `
    ///
    pub fn MoveAssign(self: QScopedPointerPodDeleter, other: QScopedPointerPodDeleter) void {
        qtc.QScopedPointerPodDeleter_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#cleanup)
    ///
    /// ## Parameter(s):
    ///
    /// ` pointer: ?*anyopaque `
    ///
    pub fn Cleanup(pointer: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_Cleanup(@ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScopedPointerPodDeleter `
    ///
    /// ` pointer: ?*anyopaque `
    ///
    pub fn OperatorCall(self: QScopedPointerPodDeleter, pointer: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_OperatorCall(@ptrCast(self.ptr), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#dtor.QScopedPointerPodDeleter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QScopedPointerPodDeleter `
    ///
    pub fn Delete(self: QScopedPointerPodDeleter) void {
        qtc.QScopedPointerPodDeleter_Delete(@ptrCast(self.ptr));
    }
};
