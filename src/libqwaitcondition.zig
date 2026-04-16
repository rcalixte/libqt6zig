const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDeadlineTimer = @import("libqt6").QDeadlineTimer;
const QMutex = @import("libqt6").QMutex;
const QReadWriteLock = @import("libqt6").QReadWriteLock;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html)
pub const QWaitCondition = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWaitCondition,

    pub const _is_QWaitCondition = {};

    /// New constructs a new QWaitCondition object.
    ///
    pub fn New() QWaitCondition {
        return .{ .ptr = qtc.QWaitCondition_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    /// ` lockedMutex: QMutex `
    ///
    pub fn Wait(self: QWaitCondition, lockedMutex: anytype) bool {
        comptime _ = @TypeOf(lockedMutex)._is_QMutex;
        return qtc.QWaitCondition_Wait(@ptrCast(self.ptr), @ptrCast(lockedMutex.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    /// ` lockedMutex: QMutex `
    ///
    /// ` time: usize `
    ///
    pub fn Wait2(self: QWaitCondition, lockedMutex: anytype, time: usize) bool {
        comptime _ = @TypeOf(lockedMutex)._is_QMutex;
        return qtc.QWaitCondition_Wait2(@ptrCast(self.ptr), @ptrCast(lockedMutex.ptr), @bitCast(time));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    /// ` lockedReadWriteLock: QReadWriteLock `
    ///
    pub fn Wait3(self: QWaitCondition, lockedReadWriteLock: anytype) bool {
        comptime _ = @TypeOf(lockedReadWriteLock)._is_QReadWriteLock;
        return qtc.QWaitCondition_Wait3(@ptrCast(self.ptr), @ptrCast(lockedReadWriteLock.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    /// ` lockedReadWriteLock: QReadWriteLock `
    ///
    /// ` time: usize `
    ///
    pub fn Wait4(self: QWaitCondition, lockedReadWriteLock: anytype, time: usize) bool {
        comptime _ = @TypeOf(lockedReadWriteLock)._is_QReadWriteLock;
        return qtc.QWaitCondition_Wait4(@ptrCast(self.ptr), @ptrCast(lockedReadWriteLock.ptr), @bitCast(time));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wakeOne)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn WakeOne(self: QWaitCondition) void {
        qtc.QWaitCondition_WakeOne(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wakeAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn WakeAll(self: QWaitCondition) void {
        qtc.QWaitCondition_WakeAll(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#notify_one)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn NotifyOne(self: QWaitCondition) void {
        qtc.QWaitCondition_NotifyOne(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#notify_all)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn NotifyAll(self: QWaitCondition) void {
        qtc.QWaitCondition_NotifyAll(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    /// ` lockedMutex: QMutex `
    ///
    /// ` deadline: QDeadlineTimer `
    ///
    pub fn Wait22(self: QWaitCondition, lockedMutex: anytype, deadline: anytype) bool {
        comptime _ = @TypeOf(lockedMutex)._is_QMutex;
        comptime _ = @TypeOf(deadline)._is_QDeadlineTimer;
        return qtc.QWaitCondition_Wait22(@ptrCast(self.ptr), @ptrCast(lockedMutex.ptr), @ptrCast(deadline.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    /// ` lockedReadWriteLock: QReadWriteLock `
    ///
    /// ` deadline: QDeadlineTimer `
    ///
    pub fn Wait23(self: QWaitCondition, lockedReadWriteLock: anytype, deadline: anytype) bool {
        comptime _ = @TypeOf(lockedReadWriteLock)._is_QReadWriteLock;
        comptime _ = @TypeOf(deadline)._is_QDeadlineTimer;
        return qtc.QWaitCondition_Wait23(@ptrCast(self.ptr), @ptrCast(lockedReadWriteLock.ptr), @ptrCast(deadline.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#dtor.QWaitCondition)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn Delete(self: QWaitCondition) void {
        qtc.QWaitCondition_Delete(@ptrCast(self.ptr));
    }
};
