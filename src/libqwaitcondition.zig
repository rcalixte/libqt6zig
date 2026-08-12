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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWaitCondition object in C++ memory
    ///
    pub fn new() QWaitCondition {
        return .{ .ptr = qtc.QWaitCondition_new() };
    }

    /// ### DEPRECATED: Use `wait` instead
    ///
    pub const Wait = wait;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    /// ` lockedMutex: QMutex `
    ///
    pub fn wait(self: QWaitCondition, lockedMutex: anytype) bool {
        comptime _ = @TypeOf(lockedMutex)._is_QMutex;
        return qtc.QWaitCondition_Wait(@ptrCast(self.ptr), @ptrCast(lockedMutex.ptr));
    }

    /// ### DEPRECATED: Use `wait2` instead
    ///
    pub const Wait2 = wait2;

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
    pub fn wait2(self: QWaitCondition, lockedMutex: anytype, time: usize) bool {
        comptime _ = @TypeOf(lockedMutex)._is_QMutex;
        return qtc.QWaitCondition_Wait2(@ptrCast(self.ptr), @ptrCast(lockedMutex.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `wait3` instead
    ///
    pub const Wait3 = wait3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    /// ` lockedReadWriteLock: QReadWriteLock `
    ///
    pub fn wait3(self: QWaitCondition, lockedReadWriteLock: anytype) bool {
        comptime _ = @TypeOf(lockedReadWriteLock)._is_QReadWriteLock;
        return qtc.QWaitCondition_Wait3(@ptrCast(self.ptr), @ptrCast(lockedReadWriteLock.ptr));
    }

    /// ### DEPRECATED: Use `wait4` instead
    ///
    pub const Wait4 = wait4;

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
    pub fn wait4(self: QWaitCondition, lockedReadWriteLock: anytype, time: usize) bool {
        comptime _ = @TypeOf(lockedReadWriteLock)._is_QReadWriteLock;
        return qtc.QWaitCondition_Wait4(@ptrCast(self.ptr), @ptrCast(lockedReadWriteLock.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `wakeOne` instead
    ///
    pub const WakeOne = wakeOne;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wakeOne)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn wakeOne(self: QWaitCondition) void {
        qtc.QWaitCondition_WakeOne(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wakeAll` instead
    ///
    pub const WakeAll = wakeAll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wakeAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn wakeAll(self: QWaitCondition) void {
        qtc.QWaitCondition_WakeAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `notifyOne` instead
    ///
    pub const NotifyOne = notifyOne;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#notify_one)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn notifyOne(self: QWaitCondition) void {
        qtc.QWaitCondition_NotifyOne(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `notifyAll` instead
    ///
    pub const NotifyAll = notifyAll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#notify_all)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn notifyAll(self: QWaitCondition) void {
        qtc.QWaitCondition_NotifyAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wait22` instead
    ///
    pub const Wait22 = wait22;

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
    pub fn wait22(self: QWaitCondition, lockedMutex: anytype, deadline: anytype) bool {
        comptime _ = @TypeOf(lockedMutex)._is_QMutex;
        comptime _ = @TypeOf(deadline)._is_QDeadlineTimer;
        return qtc.QWaitCondition_Wait22(@ptrCast(self.ptr), @ptrCast(lockedMutex.ptr), @ptrCast(deadline.ptr));
    }

    /// ### DEPRECATED: Use `wait23` instead
    ///
    pub const Wait23 = wait23;

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
    pub fn wait23(self: QWaitCondition, lockedReadWriteLock: anytype, deadline: anytype) bool {
        comptime _ = @TypeOf(lockedReadWriteLock)._is_QReadWriteLock;
        comptime _ = @TypeOf(deadline)._is_QDeadlineTimer;
        return qtc.QWaitCondition_Wait23(@ptrCast(self.ptr), @ptrCast(lockedReadWriteLock.ptr), @ptrCast(deadline.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#dtor.QWaitCondition)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWaitCondition `
    ///
    pub fn delete(self: QWaitCondition) void {
        qtc.QWaitCondition_Delete(@ptrCast(self.ptr));
    }
};
