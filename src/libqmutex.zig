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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBasicMutex object in C++ memory
    ///
    pub fn new() QBasicMutex {
        return .{ .ptr = qtc.QBasicMutex_new() };
    }

    /// ### DEPRECATED: Use `lock` instead
    ///
    pub const Lock = lock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicMutex `
    ///
    pub fn lock(self: QBasicMutex) void {
        qtc.QBasicMutex_Lock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unlock` instead
    ///
    pub const Unlock = unlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicMutex `
    ///
    pub fn unlock(self: QBasicMutex) void {
        qtc.QBasicMutex_Unlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLock` instead
    ///
    pub const TryLock = tryLock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicMutex `
    ///
    pub fn tryLock(self: QBasicMutex) bool {
        return qtc.QBasicMutex_TryLock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLock2` instead
    ///
    pub const TryLock2 = tryLock2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#try_lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicMutex `
    ///
    pub fn tryLock2(self: QBasicMutex) bool {
        return qtc.QBasicMutex_TryLock2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#dtor.QBasicMutex)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBasicMutex `
    ///
    pub fn delete(self: QBasicMutex) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMutex object in C++ memory
    ///
    pub fn new() QMutex {
        return .{ .ptr = qtc.QMutex_new() };
    }

    /// ### DEPRECATED: Use `tryLock` instead
    ///
    pub const TryLock = tryLock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#try_lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    pub fn tryLock(self: QMutex) bool {
        return qtc.QMutex_TryLock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLock2` instead
    ///
    pub const TryLock2 = tryLock2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    /// ` timeout: i32 `
    ///
    pub fn tryLock2(self: QMutex, timeout: i32) bool {
        return qtc.QMutex_TryLock2(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `tryLock3` instead
    ///
    pub const TryLock3 = tryLock3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    /// ` timeout: QDeadlineTimer `
    ///
    pub fn tryLock3(self: QMutex, timeout: anytype) bool {
        comptime _ = @TypeOf(timeout)._is_QDeadlineTimer;
        return qtc.QMutex_TryLock3(@ptrCast(self.ptr), @ptrCast(timeout.ptr));
    }

    /// ### DEPRECATED: Use `lock` instead
    ///
    pub const Lock = lock;

    /// Inherited from QBasicMutex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    pub fn lock(self: QMutex) void {
        qtc.QBasicMutex_Lock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unlock` instead
    ///
    pub const Unlock = unlock;

    /// Inherited from QBasicMutex
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMutex `
    ///
    pub fn unlock(self: QMutex) void {
        qtc.QBasicMutex_Unlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmutex.html#dtor.QMutex)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMutex `
    ///
    pub fn delete(self: QMutex) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRecursiveMutex object in C++ memory
    ///
    pub fn new() QRecursiveMutex {
        return .{ .ptr = qtc.QRecursiveMutex_new() };
    }

    /// ### DEPRECATED: Use `lock` instead
    ///
    pub const Lock = lock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    pub fn lock(self: QRecursiveMutex) void {
        qtc.QRecursiveMutex_Lock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLock` instead
    ///
    pub const TryLock = tryLock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    /// ` timeout: i32 `
    ///
    pub fn tryLock(self: QRecursiveMutex, timeout: i32) bool {
        return qtc.QRecursiveMutex_TryLock(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `tryLock2` instead
    ///
    pub const TryLock2 = tryLock2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    pub fn tryLock2(self: QRecursiveMutex) bool {
        return qtc.QRecursiveMutex_TryLock2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unlock` instead
    ///
    pub const Unlock = unlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    pub fn unlock(self: QRecursiveMutex) void {
        qtc.QRecursiveMutex_Unlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLock3` instead
    ///
    pub const TryLock3 = tryLock3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#try_lock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    pub fn tryLock3(self: QRecursiveMutex) bool {
        return qtc.QRecursiveMutex_TryLock3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLock1` instead
    ///
    pub const TryLock1 = tryLock1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRecursiveMutex `
    ///
    /// ` timer: QDeadlineTimer `
    ///
    pub fn tryLock1(self: QRecursiveMutex, timer: anytype) bool {
        comptime _ = @TypeOf(timer)._is_QDeadlineTimer;
        return qtc.QRecursiveMutex_TryLock1(@ptrCast(self.ptr), @ptrCast(timer.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrecursivemutex.html#dtor.QRecursiveMutex)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRecursiveMutex `
    ///
    pub fn delete(self: QRecursiveMutex) void {
        qtc.QRecursiveMutex_Delete(@ptrCast(self.ptr));
    }
};
