const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qreadwritelock_enums = enums;

/// https://doc.qt.io/qt-6/qreadwritelock.html
pub const qreadwritelock = struct {
    /// New constructs a new QReadWriteLock object.
    ///
    ///
    pub fn New() QtC.QReadWriteLock {
        return qtc.QReadWriteLock_new();
    }

    /// New2 constructs a new QReadWriteLock object.
    ///
    /// ``` recursionMode: qreadwritelock_enums.RecursionMode ```
    pub fn New2(recursionMode: i32) QtC.QReadWriteLock {
        return qtc.QReadWriteLock_new2(@intCast(recursionMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#lockForRead)
    ///
    /// ``` self: QtC.QReadWriteLock ```
    pub fn LockForRead(self: ?*anyopaque) void {
        qtc.QReadWriteLock_LockForRead(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
    ///
    /// ``` self: QtC.QReadWriteLock, timeout: i32 ```
    pub fn TryLockForRead(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QReadWriteLock_TryLockForRead(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
    ///
    /// ``` self: QtC.QReadWriteLock ```
    pub fn TryLockForRead2(self: ?*anyopaque) bool {
        return qtc.QReadWriteLock_TryLockForRead2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#lockForWrite)
    ///
    /// ``` self: QtC.QReadWriteLock ```
    pub fn LockForWrite(self: ?*anyopaque) void {
        qtc.QReadWriteLock_LockForWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
    ///
    /// ``` self: QtC.QReadWriteLock, timeout: i32 ```
    pub fn TryLockForWrite(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QReadWriteLock_TryLockForWrite(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
    ///
    /// ``` self: QtC.QReadWriteLock ```
    pub fn TryLockForWrite2(self: ?*anyopaque) bool {
        return qtc.QReadWriteLock_TryLockForWrite2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#unlock)
    ///
    /// ``` self: QtC.QReadWriteLock ```
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QReadWriteLock_Unlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
    ///
    /// ``` self: QtC.QReadWriteLock, timeout: QtC.QDeadlineTimer ```
    pub fn TryLockForRead1(self: ?*anyopaque, timeout: QtC.QDeadlineTimer) bool {
        return qtc.QReadWriteLock_TryLockForRead1(@ptrCast(self), @ptrCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
    ///
    /// ``` self: QtC.QReadWriteLock, timeout: QtC.QDeadlineTimer ```
    pub fn TryLockForWrite1(self: ?*anyopaque, timeout: QtC.QDeadlineTimer) bool {
        return qtc.QReadWriteLock_TryLockForWrite1(@ptrCast(self), @ptrCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#dtor.QReadWriteLock)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QReadWriteLock ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QReadWriteLock_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qreadlocker.html
pub const qreadlocker = struct {
    /// New constructs a new QReadLocker object.
    ///
    /// ``` readWriteLock: QtC.QReadWriteLock ```
    pub fn New(readWriteLock: ?*anyopaque) QtC.QReadLocker {
        return qtc.QReadLocker_new(@ptrCast(readWriteLock));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#unlock)
    ///
    /// ``` self: QtC.QReadLocker ```
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QReadLocker_Unlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#relock)
    ///
    /// ``` self: QtC.QReadLocker ```
    pub fn Relock(self: ?*anyopaque) void {
        qtc.QReadLocker_Relock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#readWriteLock)
    ///
    /// ``` self: QtC.QReadLocker ```
    pub fn ReadWriteLock(self: ?*anyopaque) QtC.QReadWriteLock {
        return qtc.QReadLocker_ReadWriteLock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#dtor.QReadLocker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QReadLocker ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QReadLocker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwritelocker.html
pub const qwritelocker = struct {
    /// New constructs a new QWriteLocker object.
    ///
    /// ``` readWriteLock: QtC.QReadWriteLock ```
    pub fn New(readWriteLock: ?*anyopaque) QtC.QWriteLocker {
        return qtc.QWriteLocker_new(@ptrCast(readWriteLock));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#unlock)
    ///
    /// ``` self: QtC.QWriteLocker ```
    pub fn Unlock(self: ?*anyopaque) void {
        qtc.QWriteLocker_Unlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#relock)
    ///
    /// ``` self: QtC.QWriteLocker ```
    pub fn Relock(self: ?*anyopaque) void {
        qtc.QWriteLocker_Relock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#readWriteLock)
    ///
    /// ``` self: QtC.QWriteLocker ```
    pub fn ReadWriteLock(self: ?*anyopaque) QtC.QReadWriteLock {
        return qtc.QWriteLocker_ReadWriteLock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#dtor.QWriteLocker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWriteLocker ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWriteLocker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qreadwritelock.html#types
pub const enums = struct {
    pub const RecursionMode = enum {
        pub const NonRecursive: i32 = 0;
        pub const Recursive: i32 = 1;
    };
};
