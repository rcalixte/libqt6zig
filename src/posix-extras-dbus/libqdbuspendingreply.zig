const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qdbuspendingreplybase.html
pub const qdbuspendingreplybase = struct {
    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#operator-eq)
    ///
    /// ``` self: QtC.QDBusPendingReplyBase, other: QtC.QDBusPendingCall ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusPendingCall_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#swap)
    ///
    /// ``` self: QtC.QDBusPendingReplyBase, other: QtC.QDBusPendingCall ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusPendingCall_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#isFinished)
    ///
    /// ``` self: QtC.QDBusPendingReplyBase ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.QDBusPendingCall_IsFinished(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#waitForFinished)
    ///
    /// ``` self: QtC.QDBusPendingReplyBase ```
    pub fn WaitForFinished(self: ?*anyopaque) void {
        qtc.QDBusPendingCall_WaitForFinished(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#isError)
    ///
    /// ``` self: QtC.QDBusPendingReplyBase ```
    pub fn IsError(self: ?*anyopaque) bool {
        return qtc.QDBusPendingCall_IsError(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#isValid)
    ///
    /// ``` self: QtC.QDBusPendingReplyBase ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QDBusPendingCall_IsValid(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#error)
    ///
    /// ``` self: QtC.QDBusPendingReplyBase ```
    pub fn Error(self: ?*anyopaque) QtC.QDBusError {
        return qtc.QDBusPendingCall_Error(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#reply)
    ///
    /// ``` self: QtC.QDBusPendingReplyBase ```
    pub fn Reply(self: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusPendingCall_Reply(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromError)
    ///
    /// ``` errorVal: QtC.QDBusError ```
    pub fn FromError(errorVal: ?*anyopaque) QtC.QDBusPendingCall {
        return qtc.QDBusPendingCall_FromError(@ptrCast(errorVal));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromCompletedCall)
    ///
    /// ``` message: QtC.QDBusMessage ```
    pub fn FromCompletedCall(message: ?*anyopaque) QtC.QDBusPendingCall {
        return qtc.QDBusPendingCall_FromCompletedCall(@ptrCast(message));
    }
};
