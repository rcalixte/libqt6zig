const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html)
pub const qsemaphore = struct {
    /// New constructs a new QSemaphore object.
    ///
    pub fn New() QtC.QSemaphore {
        return qtc.QSemaphore_new();
    }

    /// New2 constructs a new QSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` n: i32 `
    ///
    pub fn New2(n: i32) QtC.QSemaphore {
        return qtc.QSemaphore_new2(@bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    pub fn Acquire(self: ?*anyopaque) void {
        qtc.QSemaphore_Acquire(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    pub fn TryAcquire(self: ?*anyopaque) bool {
        return qtc.QSemaphore_TryAcquire(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    /// ` n: i32 `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryAcquire2(self: ?*anyopaque, n: i32, timeout: i32) bool {
        return qtc.QSemaphore_TryAcquire2(@ptrCast(self), @bitCast(n), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    /// ` n: i32 `
    ///
    /// ` timeout: QtC.QDeadlineTimer `
    ///
    pub fn TryAcquire3(self: ?*anyopaque, n: i32, timeout: QtC.QDeadlineTimer) bool {
        return qtc.QSemaphore_TryAcquire3(@ptrCast(self), @bitCast(n), @ptrCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    pub fn Release(self: ?*anyopaque) void {
        qtc.QSemaphore_Release(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#available)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    pub fn Available(self: ?*anyopaque) i32 {
        return qtc.QSemaphore_Available(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#try_acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    pub fn TryAcquire4(self: ?*anyopaque) bool {
        return qtc.QSemaphore_TryAcquire4(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn Acquire1(self: ?*anyopaque, n: i32) void {
        qtc.QSemaphore_Acquire1(@ptrCast(self), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn TryAcquire1(self: ?*anyopaque, n: i32) bool {
        return qtc.QSemaphore_TryAcquire1(@ptrCast(self), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn Release1(self: ?*anyopaque, n: i32) void {
        qtc.QSemaphore_Release1(@ptrCast(self), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphore.html#dtor.QSemaphore)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSemaphore `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSemaphore_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html)
pub const qsemaphorereleaser = struct {
    /// New constructs a new QSemaphoreReleaser object.
    ///
    pub fn New() QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new();
    }

    /// New2 constructs a new QSemaphoreReleaser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QtC.QSemaphore `
    ///
    pub fn New2(sem: ?*anyopaque) QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new2(@ptrCast(sem));
    }

    /// New3 constructs a new QSemaphoreReleaser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QtC.QSemaphore `
    ///
    pub fn New3(sem: ?*anyopaque) QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new3(@ptrCast(sem));
    }

    /// New4 constructs a new QSemaphoreReleaser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QtC.QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn New4(sem: ?*anyopaque, n: i32) QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new4(@ptrCast(sem), @bitCast(n));
    }

    /// New5 constructs a new QSemaphoreReleaser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sem: QtC.QSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn New5(sem: ?*anyopaque, n: i32) QtC.QSemaphoreReleaser {
        return qtc.QSemaphoreReleaser_new5(@ptrCast(sem), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphoreReleaser `
    ///
    /// ` other: QtC.QSemaphoreReleaser `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSemaphoreReleaser_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#semaphore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphoreReleaser `
    ///
    pub fn Semaphore(self: ?*anyopaque) QtC.QSemaphore {
        return qtc.QSemaphoreReleaser_Semaphore(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSemaphoreReleaser `
    ///
    pub fn Cancel(self: ?*anyopaque) QtC.QSemaphore {
        return qtc.QSemaphoreReleaser_Cancel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsemaphorereleaser.html#dtor.QSemaphoreReleaser)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSemaphoreReleaser `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSemaphoreReleaser_Delete(@ptrCast(self));
    }
};
