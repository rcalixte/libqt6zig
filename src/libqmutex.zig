const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html)
pub const qbasicmutex = struct {
    /// New constructs a new QBasicMutex object.
    ///
    pub fn New() QtC.QBasicMutex {
        return qtc.QBasicMutex_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicMutex `
    ///
    pub fn Lock(self: ?*anyopaque) void {
        qtc.QBasicMutex_Lock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicMutex `
    ///
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QBasicMutex_Unlock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicMutex `
    ///
    pub fn TryLock(self: ?*anyopaque) bool {
        return qtc.QBasicMutex_TryLock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#try_lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicMutex `
    ///
    pub fn TryLock2(self: ?*anyopaque) bool {
        return qtc.QBasicMutex_TryLock2(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#dtor.QBasicMutex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBasicMutex `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBasicMutex_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html)
pub const qmutex = struct {
    /// New constructs a new QMutex object.
    ///
    pub fn New() QtC.QMutex {
        return qtc.QMutex_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#try_lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMutex `
    ///
    pub fn TryLock(self: ?*anyopaque) bool {
        return qtc.QMutex_TryLock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMutex `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryLock2(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QMutex_TryLock2(@ptrCast(self), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMutex `
    ///
    /// ` timeout: QtC.QDeadlineTimer `
    ///
    pub fn TryLock3(self: ?*anyopaque, timeout: QtC.QDeadlineTimer) bool {
        return qtc.QMutex_TryLock3(@ptrCast(self), @ptrCast(timeout));
    }

    /// Inherited from QBasicMutex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMutex `
    ///
    pub fn Lock(self: ?*anyopaque) void {
        qtc.QBasicMutex_Lock(@ptrCast(self));
    }

    /// Inherited from QBasicMutex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMutex `
    ///
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QBasicMutex_Unlock(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#dtor.QMutex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMutex `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QMutex_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html)
pub const qrecursivemutex = struct {
    /// New constructs a new QRecursiveMutex object.
    ///
    pub fn New() QtC.QRecursiveMutex {
        return qtc.QRecursiveMutex_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRecursiveMutex `
    ///
    pub fn Lock(self: ?*anyopaque) void {
        qtc.QRecursiveMutex_Lock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRecursiveMutex `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryLock(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QRecursiveMutex_TryLock(@ptrCast(self), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRecursiveMutex `
    ///
    pub fn TryLock2(self: ?*anyopaque) bool {
        return qtc.QRecursiveMutex_TryLock2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRecursiveMutex `
    ///
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QRecursiveMutex_Unlock(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#try_lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRecursiveMutex `
    ///
    pub fn TryLock3(self: ?*anyopaque) bool {
        return qtc.QRecursiveMutex_TryLock3(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRecursiveMutex `
    ///
    /// ` timer: QtC.QDeadlineTimer `
    ///
    pub fn TryLock1(self: ?*anyopaque, timer: QtC.QDeadlineTimer) bool {
        return qtc.QRecursiveMutex_TryLock1(@ptrCast(self), @ptrCast(timer));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#dtor.QRecursiveMutex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QRecursiveMutex `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QRecursiveMutex_Delete(@ptrCast(self));
    }
};
