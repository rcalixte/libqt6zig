const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingreplybase.html)
pub const qdbuspendingreplybase = struct {
    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusPendingReplyBase `
    ///
    /// ` other: QtC.QDBusPendingCall `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusPendingCall_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusPendingReplyBase `
    ///
    /// ` other: QtC.QDBusPendingCall `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusPendingCall_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusPendingReplyBase `
    ///
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.QDBusPendingCall_IsFinished(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusPendingReplyBase `
    ///
    pub fn WaitForFinished(self: ?*anyopaque) void {
        qtc.QDBusPendingCall_WaitForFinished(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusPendingReplyBase `
    ///
    pub fn IsError(self: ?*anyopaque) bool {
        return qtc.QDBusPendingCall_IsError(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusPendingReplyBase `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QDBusPendingCall_IsValid(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusPendingReplyBase `
    ///
    pub fn Error(self: ?*anyopaque) QtC.QDBusError {
        return qtc.QDBusPendingCall_Error(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#reply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusPendingReplyBase `
    ///
    pub fn Reply(self: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusPendingCall_Reply(@ptrCast(self));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromError)
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: QtC.QDBusError `
    ///
    pub fn FromError(errorVal: ?*anyopaque) QtC.QDBusPendingCall {
        return qtc.QDBusPendingCall_FromError(@ptrCast(errorVal));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromCompletedCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` message: QtC.QDBusMessage `
    ///
    pub fn FromCompletedCall(message: ?*anyopaque) QtC.QDBusPendingCall {
        return qtc.QDBusPendingCall_FromCompletedCall(@ptrCast(message));
    }
};
