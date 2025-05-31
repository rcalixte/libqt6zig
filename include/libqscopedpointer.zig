const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html
pub const qscopedpointerpoddeleter = struct {
    /// New constructs a new QScopedPointerPodDeleter object.
    ///
    /// ``` other: QtC.QScopedPointerPodDeleter ```
    pub fn New(other: ?*anyopaque) QtC.QScopedPointerPodDeleter {
        return qtc.QScopedPointerPodDeleter_new(@ptrCast(other));
    }

    /// New2 constructs a new QScopedPointerPodDeleter object and invalidates the source QScopedPointerPodDeleter object.
    ///
    /// ``` other: QtC.QScopedPointerPodDeleter ```
    pub fn New2(other: ?*anyopaque) QtC.QScopedPointerPodDeleter {
        return qtc.QScopedPointerPodDeleter_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QScopedPointerPodDeleter, other: QtC.QScopedPointerPodDeleter ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QScopedPointerPodDeleter, other: QtC.QScopedPointerPodDeleter ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#cleanup)
    ///
    /// ``` pointer: ?*anyopaque ```
    pub fn Cleanup(pointer: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_Cleanup(pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#operator())
    ///
    /// ``` self: QtC.QScopedPointerPodDeleter, pointer: ?*anyopaque ```
    pub fn OperatorCall(self: ?*anyopaque, pointer: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_OperatorCall(@ptrCast(self), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#dtor.QScopedPointerPodDeleter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QScopedPointerPodDeleter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScopedPointerPodDeleter_Delete(@ptrCast(self));
    }
};
