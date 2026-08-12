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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSemaphore object in C++ memory
    ///
    pub fn new() QSemaphore {
        return .{ .ptr = qtc.QSemaphore_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSemaphore object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` n: i32 `
    ///
    pub fn new2(n: i32) QSemaphore {
        return .{ .ptr = qtc.QSemaphore_new2(@bitCast(n)) };
    }

    /// ### DEPRECATED: Use `acquire` instead
    ///
    pub const Acquire = acquire;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn acquire(self: QSemaphore) void {
        qtc.QSemaphore_Acquire(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryAcquire` instead
    ///
    pub const TryAcquire = tryAcquire;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn tryAcquire(self: QSemaphore) bool {
        return qtc.QSemaphore_TryAcquire(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryAcquire2` instead
    ///
    pub const TryAcquire2 = tryAcquire2;

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
    pub fn tryAcquire2(self: QSemaphore, n: i32, timeout: i32) bool {
        return qtc.QSemaphore_TryAcquire2(@ptrCast(self.ptr), @bitCast(n), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `tryAcquire3` instead
    ///
    pub const TryAcquire3 = tryAcquire3;

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
    pub fn tryAcquire3(self: QSemaphore, n: i32, timeout: anytype) bool {
        comptime _ = @TypeOf(timeout)._is_QDeadlineTimer;
        return qtc.QSemaphore_TryAcquire3(@ptrCast(self.ptr), @bitCast(n), @ptrCast(timeout.ptr));
    }

    /// ### DEPRECATED: Use `release` instead
    ///
    pub const Release = release;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn release(self: QSemaphore) void {
        qtc.QSemaphore_Release(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `available` instead
    ///
    pub const Available = available;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#available)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn available(self: QSemaphore) i32 {
        return qtc.QSemaphore_Available(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryAcquire4` instead
    ///
    pub const TryAcquire4 = tryAcquire4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#try_acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    pub fn tryAcquire4(self: QSemaphore) bool {
        return qtc.QSemaphore_TryAcquire4(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `acquire1` instead
    ///
    pub const Acquire1 = acquire1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn acquire1(self: QSemaphore, n: i32) void {
        qtc.QSemaphore_Acquire1(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### DEPRECATED: Use `tryAcquire1` instead
    ///
    pub const TryAcquire1 = tryAcquire1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn tryAcquire1(self: QSemaphore, n: i32) bool {
        return qtc.QSemaphore_TryAcquire1(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### DEPRECATED: Use `release1` instead
    ///
    pub const Release1 = release1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn release1(self: QSemaphore, n: i32) void {
        qtc.QSemaphore_Release1(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#dtor.QSemaphore)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSemaphore `
    ///
    pub fn delete(self: QSemaphore) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSemaphoreReleaser object in C++ memory
    ///
    pub fn new() QSemaphoreReleaser {
        return .{ .ptr = qtc.QSemaphoreReleaser_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSemaphoreReleaser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QSemaphore `
    ///
    pub fn new2(sem: anytype) QSemaphoreReleaser {
        comptime _ = @TypeOf(sem)._is_QSemaphore;
        return .{ .ptr = qtc.QSemaphoreReleaser_new2(@ptrCast(sem.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSemaphoreReleaser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QSemaphore `
    ///
    pub fn new3(sem: anytype) QSemaphoreReleaser {
        comptime _ = @TypeOf(sem)._is_QSemaphore;
        return .{ .ptr = qtc.QSemaphoreReleaser_new3(@ptrCast(sem.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSemaphoreReleaser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn new4(sem: anytype, n: i32) QSemaphoreReleaser {
        comptime _ = @TypeOf(sem)._is_QSemaphore;
        return .{ .ptr = qtc.QSemaphoreReleaser_new4(@ptrCast(sem.ptr), @bitCast(n)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSemaphoreReleaser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn new5(sem: anytype, n: i32) QSemaphoreReleaser {
        comptime _ = @TypeOf(sem)._is_QSemaphore;
        return .{ .ptr = qtc.QSemaphoreReleaser_new5(@ptrCast(sem.ptr), @bitCast(n)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphoreReleaser `
    ///
    /// ` other: QSemaphoreReleaser `
    ///
    pub fn swap(self: QSemaphoreReleaser, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSemaphoreReleaser;
        qtc.QSemaphoreReleaser_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `semaphore` instead
    ///
    pub const Semaphore = semaphore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#semaphore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphoreReleaser `
    ///
    pub fn semaphore(self: QSemaphoreReleaser) QSemaphore {
        return .{ .ptr = qtc.QSemaphoreReleaser_Semaphore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cancel` instead
    ///
    pub const Cancel = cancel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSemaphoreReleaser `
    ///
    pub fn cancel(self: QSemaphoreReleaser) QSemaphore {
        return .{ .ptr = qtc.QSemaphoreReleaser_Cancel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#dtor.QSemaphoreReleaser)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSemaphoreReleaser `
    ///
    pub fn delete(self: QSemaphoreReleaser) void {
        qtc.QSemaphoreReleaser_Delete(@ptrCast(self.ptr));
    }
};
