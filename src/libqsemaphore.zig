const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDeadlineTimer = @import("libqt6").QDeadlineTimer;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html)
pub const QSemaphore = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSemaphore,

    pub const _is_QSemaphore = {};

    /// New constructs a new QSemaphore object.
    ///
    pub fn New() QSemaphore {
        return .{ .ptr = qtc.QSemaphore_new() };
    }

    /// New2 constructs a new QSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` n: i32 `
    ///
    pub fn New2(n: i32) QSemaphore {
        return .{ .ptr = qtc.QSemaphore_new2(@bitCast(n)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn Acquire(self: QSemaphore) void {
        qtc.QSemaphore_Acquire(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn TryAcquire(self: QSemaphore) bool {
        return qtc.QSemaphore_TryAcquire(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryAcquire2(self: QSemaphore, n: i32, timeout: i32) bool {
        return qtc.QSemaphore_TryAcquire2(@ptrCast(self.ptr), @bitCast(n), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    /// ` timeout: QDeadlineTimer `
    ///
    pub fn TryAcquire3(self: QSemaphore, n: i32, timeout: anytype) bool {
        comptime _ = @TypeOf(timeout)._is_QDeadlineTimer;
        return qtc.QSemaphore_TryAcquire3(@ptrCast(self.ptr), @bitCast(n), @ptrCast(timeout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn Release(self: QSemaphore) void {
        qtc.QSemaphore_Release(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#available)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn Available(self: QSemaphore) i32 {
        return qtc.QSemaphore_Available(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#try_acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn TryAcquire4(self: QSemaphore) bool {
        return qtc.QSemaphore_TryAcquire4(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn Acquire1(self: QSemaphore, n: i32) void {
        qtc.QSemaphore_Acquire1(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn TryAcquire1(self: QSemaphore, n: i32) bool {
        return qtc.QSemaphore_TryAcquire1(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn Release1(self: QSemaphore, n: i32) void {
        qtc.QSemaphore_Release1(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#dtor.QSemaphore)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSemaphore `
    ///
    pub fn Delete(self: QSemaphore) void {
        qtc.QSemaphore_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html)
pub const QSemaphoreReleaser = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSemaphoreReleaser,

    pub const _is_QSemaphoreReleaser = {};

    /// New constructs a new QSemaphoreReleaser object.
    ///
    pub fn New() QSemaphoreReleaser {
        return .{ .ptr = qtc.QSemaphoreReleaser_new() };
    }

    /// New2 constructs a new QSemaphoreReleaser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QSemaphore `
    ///
    pub fn New2(sem: anytype) QSemaphoreReleaser {
        comptime _ = @TypeOf(sem)._is_QSemaphore;
        return .{ .ptr = qtc.QSemaphoreReleaser_new2(@ptrCast(sem.ptr)) };
    }

    /// New3 constructs a new QSemaphoreReleaser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QSemaphore `
    ///
    pub fn New3(sem: anytype) QSemaphoreReleaser {
        comptime _ = @TypeOf(sem)._is_QSemaphore;
        return .{ .ptr = qtc.QSemaphoreReleaser_new3(@ptrCast(sem.ptr)) };
    }

    /// New4 constructs a new QSemaphoreReleaser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn New4(sem: anytype, n: i32) QSemaphoreReleaser {
        comptime _ = @TypeOf(sem)._is_QSemaphore;
        return .{ .ptr = qtc.QSemaphoreReleaser_new4(@ptrCast(sem.ptr), @bitCast(n)) };
    }

    /// New5 constructs a new QSemaphoreReleaser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn New5(sem: anytype, n: i32) QSemaphoreReleaser {
        comptime _ = @TypeOf(sem)._is_QSemaphore;
        return .{ .ptr = qtc.QSemaphoreReleaser_new5(@ptrCast(sem.ptr), @bitCast(n)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphoreReleaser `
    ///
    /// ` other: QSemaphoreReleaser `
    ///
    pub fn Swap(self: QSemaphoreReleaser, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSemaphoreReleaser;
        qtc.QSemaphoreReleaser_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#semaphore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphoreReleaser `
    ///
    pub fn Semaphore(self: QSemaphoreReleaser) QSemaphore {
        return .{ .ptr = qtc.QSemaphoreReleaser_Semaphore(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphoreReleaser `
    ///
    pub fn Cancel(self: QSemaphoreReleaser) QSemaphore {
        return .{ .ptr = qtc.QSemaphoreReleaser_Cancel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#dtor.QSemaphoreReleaser)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSemaphoreReleaser `
    ///
    pub fn Delete(self: QSemaphoreReleaser) void {
        qtc.QSemaphoreReleaser_Delete(@ptrCast(self.ptr));
    }
};
