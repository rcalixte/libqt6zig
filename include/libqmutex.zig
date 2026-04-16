const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDeadlineTimer = @import("libqt6").QDeadlineTimer;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html)
pub const QBasicMutex = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBasicMutex,

    pub const _is_QBasicMutex = {};

    /// New constructs a new QBasicMutex object.
    ///
    pub fn New() QBasicMutex {
        return .{ .ptr = qtc.QBasicMutex_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicMutex `
    ///
    pub fn Lock(self: QBasicMutex) void {
        qtc.QBasicMutex_Lock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicMutex `
    ///
    pub fn Unlock(self: QBasicMutex) void {
        qtc.QBasicMutex_Unlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicMutex `
    ///
    pub fn TryLock(self: QBasicMutex) bool {
        return qtc.QBasicMutex_TryLock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#try_lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicMutex `
    ///
    pub fn TryLock2(self: QBasicMutex) bool {
        return qtc.QBasicMutex_TryLock2(@ptrCast(self.ptr));
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
    /// ` self: QBasicMutex `
    ///
    pub fn Delete(self: QBasicMutex) void {
        qtc.QBasicMutex_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html)
pub const QMutex = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMutex,

    pub const _is_QMutex = {};
    pub const _is_QBasicMutex = {};

    /// New constructs a new QMutex object.
    ///
    pub fn New() QMutex {
        return .{ .ptr = qtc.QMutex_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#try_lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    pub fn TryLock(self: QMutex) bool {
        return qtc.QMutex_TryLock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryLock2(self: QMutex, timeout: i32) bool {
        return qtc.QMutex_TryLock2(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    /// ` timeout: QDeadlineTimer `
    ///
    pub fn TryLock3(self: QMutex, timeout: anytype) bool {
        comptime _ = @TypeOf(timeout)._is_QDeadlineTimer;
        return qtc.QMutex_TryLock3(@ptrCast(self.ptr), @ptrCast(timeout.ptr));
    }

    /// Inherited from QBasicMutex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    pub fn Lock(self: QMutex) void {
        qtc.QBasicMutex_Lock(@ptrCast(self.ptr));
    }

    /// Inherited from QBasicMutex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    pub fn Unlock(self: QMutex) void {
        qtc.QBasicMutex_Unlock(@ptrCast(self.ptr));
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
    /// ` self: QMutex `
    ///
    pub fn Delete(self: QMutex) void {
        qtc.QMutex_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html)
pub const QRecursiveMutex = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRecursiveMutex,

    pub const _is_QRecursiveMutex = {};

    /// New constructs a new QRecursiveMutex object.
    ///
    pub fn New() QRecursiveMutex {
        return .{ .ptr = qtc.QRecursiveMutex_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    pub fn Lock(self: QRecursiveMutex) void {
        qtc.QRecursiveMutex_Lock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryLock(self: QRecursiveMutex, timeout: i32) bool {
        return qtc.QRecursiveMutex_TryLock(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    pub fn TryLock2(self: QRecursiveMutex) bool {
        return qtc.QRecursiveMutex_TryLock2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    pub fn Unlock(self: QRecursiveMutex) void {
        qtc.QRecursiveMutex_Unlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#try_lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    pub fn TryLock3(self: QRecursiveMutex) bool {
        return qtc.QRecursiveMutex_TryLock3(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    /// ` timer: QDeadlineTimer `
    ///
    pub fn TryLock1(self: QRecursiveMutex, timer: anytype) bool {
        comptime _ = @TypeOf(timer)._is_QDeadlineTimer;
        return qtc.QRecursiveMutex_TryLock1(@ptrCast(self.ptr), @ptrCast(timer.ptr));
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
    /// ` self: QRecursiveMutex `
    ///
    pub fn Delete(self: QRecursiveMutex) void {
        qtc.QRecursiveMutex_Delete(@ptrCast(self.ptr));
    }
};
