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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QReadWriteLock object in C++ memory
    ///
    pub fn new() QReadWriteLock {
        return .{ .ptr = qtc.QReadWriteLock_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QReadWriteLock object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` recursionMode: qreadwritelock_enums.RecursionMode `
    ///
    pub fn new2(recursionMode: i32) QReadWriteLock {
        return .{ .ptr = qtc.QReadWriteLock_new2(@bitCast(recursionMode)) };
    }

    /// ### DEPRECATED: Use `lockForRead` instead
    ///
    pub const LockForRead = lockForRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#lockForRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn lockForRead(self: QReadWriteLock) void {
        qtc.QReadWriteLock_LockForRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLockForRead` instead
    ///
    pub const TryLockForRead = tryLockForRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    /// ` timeout: i32 `
    ///
    pub fn tryLockForRead(self: QReadWriteLock, timeout: i32) bool {
        return qtc.QReadWriteLock_TryLockForRead(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `tryLockForRead2` instead
    ///
    pub const TryLockForRead2 = tryLockForRead2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn tryLockForRead2(self: QReadWriteLock) bool {
        return qtc.QReadWriteLock_TryLockForRead2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lockForWrite` instead
    ///
    pub const LockForWrite = lockForWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#lockForWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn lockForWrite(self: QReadWriteLock) void {
        qtc.QReadWriteLock_LockForWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLockForWrite` instead
    ///
    pub const TryLockForWrite = tryLockForWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    /// ` timeout: i32 `
    ///
    pub fn tryLockForWrite(self: QReadWriteLock, timeout: i32) bool {
        return qtc.QReadWriteLock_TryLockForWrite(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `tryLockForWrite2` instead
    ///
    pub const TryLockForWrite2 = tryLockForWrite2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn tryLockForWrite2(self: QReadWriteLock) bool {
        return qtc.QReadWriteLock_TryLockForWrite2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unlock` instead
    ///
    pub const Unlock = unlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn unlock(self: QReadWriteLock) void {
        qtc.QReadWriteLock_Unlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tryLockForRead1` instead
    ///
    pub const TryLockForRead1 = tryLockForRead1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    /// ` timeout: QDeadlineTimer `
    ///
    pub fn tryLockForRead1(self: QReadWriteLock, timeout: anytype) bool {
        comptime _ = @TypeOf(timeout)._is_QDeadlineTimer;
        return qtc.QReadWriteLock_TryLockForRead1(@ptrCast(self.ptr), @ptrCast(timeout.ptr));
    }

    /// ### DEPRECATED: Use `tryLockForWrite1` instead
    ///
    pub const TryLockForWrite1 = tryLockForWrite1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadWriteLock `
    ///
    /// ` timeout: QDeadlineTimer `
    ///
    pub fn tryLockForWrite1(self: QReadWriteLock, timeout: anytype) bool {
        comptime _ = @TypeOf(timeout)._is_QDeadlineTimer;
        return qtc.QReadWriteLock_TryLockForWrite1(@ptrCast(self.ptr), @ptrCast(timeout.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadwritelock.html#dtor.QReadWriteLock)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QReadWriteLock `
    ///
    pub fn delete(self: QReadWriteLock) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QReadLocker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _readWriteLock: QReadWriteLock `
    ///
    pub fn new(_readWriteLock: anytype) QReadLocker {
        comptime _ = @TypeOf(_readWriteLock)._is_QReadWriteLock;
        return .{ .ptr = qtc.QReadLocker_new(@ptrCast(_readWriteLock.ptr)) };
    }

    /// ### DEPRECATED: Use `unlock` instead
    ///
    pub const Unlock = unlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadLocker `
    ///
    pub fn unlock(self: QReadLocker) void {
        qtc.QReadLocker_Unlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `relock` instead
    ///
    pub const Relock = relock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html#relock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadLocker `
    ///
    pub fn relock(self: QReadLocker) void {
        qtc.QReadLocker_Relock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readWriteLock` instead
    ///
    pub const ReadWriteLock = readWriteLock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html#readWriteLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QReadLocker `
    ///
    pub fn readWriteLock(self: QReadLocker) QReadWriteLock {
        return .{ .ptr = qtc.QReadLocker_ReadWriteLock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qreadlocker.html#dtor.QReadLocker)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QReadLocker `
    ///
    pub fn delete(self: QReadLocker) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWriteLocker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _readWriteLock: QReadWriteLock `
    ///
    pub fn new(_readWriteLock: anytype) QWriteLocker {
        comptime _ = @TypeOf(_readWriteLock)._is_QReadWriteLock;
        return .{ .ptr = qtc.QWriteLocker_new(@ptrCast(_readWriteLock.ptr)) };
    }

    /// ### DEPRECATED: Use `unlock` instead
    ///
    pub const Unlock = unlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html#unlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWriteLocker `
    ///
    pub fn unlock(self: QWriteLocker) void {
        qtc.QWriteLocker_Unlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `relock` instead
    ///
    pub const Relock = relock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html#relock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWriteLocker `
    ///
    pub fn relock(self: QWriteLocker) void {
        qtc.QWriteLocker_Relock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readWriteLock` instead
    ///
    pub const ReadWriteLock = readWriteLock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html#readWriteLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWriteLocker `
    ///
    pub fn readWriteLock(self: QWriteLocker) QReadWriteLock {
        return .{ .ptr = qtc.QWriteLocker_ReadWriteLock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwritelocker.html#dtor.QWriteLocker)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWriteLocker `
    ///
    pub fn delete(self: QWriteLocker) void {
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
