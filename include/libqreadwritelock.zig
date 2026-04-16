const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDeadlineTimer = @import("libqt6").QDeadlineTimer;
const qreadwritelock_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html)
pub const QReadWriteLock = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QReadWriteLock,

    pub const _is_QReadWriteLock = {};

    /// New constructs a new QReadWriteLock object.
    ///
    pub fn New() QReadWriteLock {
        return .{ .ptr = qtc.QReadWriteLock_new() };
    }

    /// New2 constructs a new QReadWriteLock object.
    ///
    /// ## Parameter(s):
    ///
    /// ` recursionMode: qreadwritelock_enums.RecursionMode `
    ///
    pub fn New2(recursionMode: i32) QReadWriteLock {
        return .{ .ptr = qtc.QReadWriteLock_new2(@bitCast(recursionMode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#lockForRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn LockForRead(self: QReadWriteLock) void {
        qtc.QReadWriteLock_LockForRead(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryLockForRead(self: QReadWriteLock, timeout: i32) bool {
        return qtc.QReadWriteLock_TryLockForRead(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn TryLockForRead2(self: QReadWriteLock) bool {
        return qtc.QReadWriteLock_TryLockForRead2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#lockForWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn LockForWrite(self: QReadWriteLock) void {
        qtc.QReadWriteLock_LockForWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    /// ` timeout: i32 `
    ///
    pub fn TryLockForWrite(self: QReadWriteLock, timeout: i32) bool {
        return qtc.QReadWriteLock_TryLockForWrite(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn TryLockForWrite2(self: QReadWriteLock) bool {
        return qtc.QReadWriteLock_TryLockForWrite2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn Unlock(self: QReadWriteLock) void {
        qtc.QReadWriteLock_Unlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    /// ` timeout: QDeadlineTimer `
    ///
    pub fn TryLockForRead1(self: QReadWriteLock, timeout: anytype) bool {
        comptime _ = @TypeOf(timeout)._is_QDeadlineTimer;
        return qtc.QReadWriteLock_TryLockForRead1(@ptrCast(self.ptr), @ptrCast(timeout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    /// ` timeout: QDeadlineTimer `
    ///
    pub fn TryLockForWrite1(self: QReadWriteLock, timeout: anytype) bool {
        comptime _ = @TypeOf(timeout)._is_QDeadlineTimer;
        return qtc.QReadWriteLock_TryLockForWrite1(@ptrCast(self.ptr), @ptrCast(timeout.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#dtor.QReadWriteLock)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn Delete(self: QReadWriteLock) void {
        qtc.QReadWriteLock_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html)
pub const QReadLocker = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QReadLocker,

    pub const _is_QReadLocker = {};

    /// New constructs a new QReadLocker object.
    ///
    /// ## Parameter(s):
    ///
    /// ` readWriteLock: QReadWriteLock `
    ///
    pub fn New(readWriteLock: anytype) QReadLocker {
        comptime _ = @TypeOf(readWriteLock)._is_QReadWriteLock;
        return .{ .ptr = qtc.QReadLocker_new(@ptrCast(readWriteLock.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadLocker `
    ///
    pub fn Unlock(self: QReadLocker) void {
        qtc.QReadLocker_Unlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html#relock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadLocker `
    ///
    pub fn Relock(self: QReadLocker) void {
        qtc.QReadLocker_Relock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html#readWriteLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadLocker `
    ///
    pub fn ReadWriteLock(self: QReadLocker) QReadWriteLock {
        return .{ .ptr = qtc.QReadLocker_ReadWriteLock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html#dtor.QReadLocker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QReadLocker `
    ///
    pub fn Delete(self: QReadLocker) void {
        qtc.QReadLocker_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html)
pub const QWriteLocker = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWriteLocker,

    pub const _is_QWriteLocker = {};

    /// New constructs a new QWriteLocker object.
    ///
    /// ## Parameter(s):
    ///
    /// ` readWriteLock: QReadWriteLock `
    ///
    pub fn New(readWriteLock: anytype) QWriteLocker {
        comptime _ = @TypeOf(readWriteLock)._is_QReadWriteLock;
        return .{ .ptr = qtc.QWriteLocker_new(@ptrCast(readWriteLock.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWriteLocker `
    ///
    pub fn Unlock(self: QWriteLocker) void {
        qtc.QWriteLocker_Unlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html#relock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWriteLocker `
    ///
    pub fn Relock(self: QWriteLocker) void {
        qtc.QWriteLocker_Relock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html#readWriteLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWriteLocker `
    ///
    pub fn ReadWriteLock(self: QWriteLocker) QReadWriteLock {
        return .{ .ptr = qtc.QWriteLocker_ReadWriteLock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html#dtor.QWriteLocker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWriteLocker `
    ///
    pub fn Delete(self: QWriteLocker) void {
        qtc.QWriteLocker_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#public-types)
pub const enums = struct {
    pub const RecursionMode = enum(i32) {
        pub const NonRecursive: i32 = 0;
        pub const Recursive: i32 = 1;
    };
};
