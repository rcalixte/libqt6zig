const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qbasicmutex.html
pub const qbasicmutex = struct {
    /// New constructs a new QBasicMutex object.
    ///
    ///
    pub fn New() QtC.QBasicMutex {
        return qtc.QBasicMutex_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
    ///
    /// ``` self: QtC.QBasicMutex ```
    pub fn Lock(self: ?*anyopaque) void {
        qtc.QBasicMutex_Lock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
    ///
    /// ``` self: QtC.QBasicMutex ```
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QBasicMutex_Unlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#tryLock)
    ///
    /// ``` self: QtC.QBasicMutex ```
    pub fn TryLock(self: ?*anyopaque) bool {
        return qtc.QBasicMutex_TryLock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#try_lock)
    ///
    /// ``` self: QtC.QBasicMutex ```
    pub fn TryLock2(self: ?*anyopaque) bool {
        return qtc.QBasicMutex_TryLock2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#dtor.QBasicMutex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QBasicMutex ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBasicMutex_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmutex.html
pub const qmutex = struct {
    /// New constructs a new QMutex object.
    ///
    ///
    pub fn New() QtC.QMutex {
        return qtc.QMutex_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#try_lock)
    ///
    /// ``` self: QtC.QMutex ```
    pub fn TryLock(self: ?*anyopaque) bool {
        return qtc.QMutex_TryLock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#tryLock)
    ///
    /// ``` self: QtC.QMutex, timeout: i32 ```
    pub fn TryLockWithTimeout(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QMutex_TryLockWithTimeout(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#tryLock)
    ///
    /// ``` self: QtC.QMutex, timeout: QtC.QDeadlineTimer ```
    pub fn TryLock2(self: ?*anyopaque, timeout: QtC.QDeadlineTimer) bool {
        return qtc.QMutex_TryLock2(@ptrCast(self), @ptrCast(timeout));
    }

    /// Inherited from QBasicMutex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
    ///
    /// ``` self: QtC.QMutex ```
    pub fn Lock(self: ?*anyopaque) void {
        qtc.QBasicMutex_Lock(@ptrCast(self));
    }

    /// Inherited from QBasicMutex
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
    ///
    /// ``` self: QtC.QMutex ```
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QBasicMutex_Unlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#dtor.QMutex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMutex ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMutex_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qrecursivemutex.html
pub const qrecursivemutex = struct {
    /// New constructs a new QRecursiveMutex object.
    ///
    ///
    pub fn New() QtC.QRecursiveMutex {
        return qtc.QRecursiveMutex_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#lock)
    ///
    /// ``` self: QtC.QRecursiveMutex ```
    pub fn Lock(self: ?*anyopaque) void {
        qtc.QRecursiveMutex_Lock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ``` self: QtC.QRecursiveMutex, timeout: i32 ```
    pub fn TryLock(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QRecursiveMutex_TryLock(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ``` self: QtC.QRecursiveMutex ```
    pub fn TryLock2(self: ?*anyopaque) bool {
        return qtc.QRecursiveMutex_TryLock2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#unlock)
    ///
    /// ``` self: QtC.QRecursiveMutex ```
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QRecursiveMutex_Unlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#try_lock)
    ///
    /// ``` self: QtC.QRecursiveMutex ```
    pub fn TryLock3(self: ?*anyopaque) bool {
        return qtc.QRecursiveMutex_TryLock3(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ``` self: QtC.QRecursiveMutex, timer: QtC.QDeadlineTimer ```
    pub fn TryLock1(self: ?*anyopaque, timer: QtC.QDeadlineTimer) bool {
        return qtc.QRecursiveMutex_TryLock1(@ptrCast(self), @ptrCast(timer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#dtor.QRecursiveMutex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRecursiveMutex ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRecursiveMutex_Delete(@ptrCast(self));
    }
};
