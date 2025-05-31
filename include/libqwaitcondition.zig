const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qwaitcondition.html
pub const qwaitcondition = struct {
    /// New constructs a new QWaitCondition object.
    ///
    ///
    pub fn New() QtC.QWaitCondition {
        return qtc.QWaitCondition_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ``` self: QtC.QWaitCondition, lockedMutex: QtC.QMutex ```
    pub fn Wait(self: ?*anyopaque, lockedMutex: ?*anyopaque) bool {
        return qtc.QWaitCondition_Wait(@ptrCast(self), @ptrCast(lockedMutex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ``` self: QtC.QWaitCondition, lockedMutex: QtC.QMutex, time: u64 ```
    pub fn Wait2(self: ?*anyopaque, lockedMutex: ?*anyopaque, time: u64) bool {
        return qtc.QWaitCondition_Wait2(@ptrCast(self), @ptrCast(lockedMutex), @intCast(time));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ``` self: QtC.QWaitCondition, lockedReadWriteLock: QtC.QReadWriteLock ```
    pub fn WaitWithLockedReadWriteLock(self: ?*anyopaque, lockedReadWriteLock: ?*anyopaque) bool {
        return qtc.QWaitCondition_WaitWithLockedReadWriteLock(@ptrCast(self), @ptrCast(lockedReadWriteLock));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ``` self: QtC.QWaitCondition, lockedReadWriteLock: QtC.QReadWriteLock, time: u64 ```
    pub fn Wait3(self: ?*anyopaque, lockedReadWriteLock: ?*anyopaque, time: u64) bool {
        return qtc.QWaitCondition_Wait3(@ptrCast(self), @ptrCast(lockedReadWriteLock), @intCast(time));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wakeOne)
    ///
    /// ``` self: QtC.QWaitCondition ```
    pub fn WakeOne(self: ?*anyopaque) void {
        qtc.QWaitCondition_WakeOne(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wakeAll)
    ///
    /// ``` self: QtC.QWaitCondition ```
    pub fn WakeAll(self: ?*anyopaque) void {
        qtc.QWaitCondition_WakeAll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#notify_one)
    ///
    /// ``` self: QtC.QWaitCondition ```
    pub fn NotifyOne(self: ?*anyopaque) void {
        qtc.QWaitCondition_NotifyOne(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#notify_all)
    ///
    /// ``` self: QtC.QWaitCondition ```
    pub fn NotifyAll(self: ?*anyopaque) void {
        qtc.QWaitCondition_NotifyAll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ``` self: QtC.QWaitCondition, lockedMutex: QtC.QMutex, deadline: QtC.QDeadlineTimer ```
    pub fn Wait22(self: ?*anyopaque, lockedMutex: ?*anyopaque, deadline: QtC.QDeadlineTimer) bool {
        return qtc.QWaitCondition_Wait22(@ptrCast(self), @ptrCast(lockedMutex), @ptrCast(deadline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ``` self: QtC.QWaitCondition, lockedReadWriteLock: QtC.QReadWriteLock, deadline: QtC.QDeadlineTimer ```
    pub fn Wait23(self: ?*anyopaque, lockedReadWriteLock: ?*anyopaque, deadline: QtC.QDeadlineTimer) bool {
        return qtc.QWaitCondition_Wait23(@ptrCast(self), @ptrCast(lockedReadWriteLock), @ptrCast(deadline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#dtor.QWaitCondition)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWaitCondition ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWaitCondition_Delete(@ptrCast(self));
    }
};
