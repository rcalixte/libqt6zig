const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/threads-qobject.html
pub const Threading = struct {
    /// Direct execution in caller's thread (not thread-safe)
    ///
    /// This executes the callback immediately in the current
    /// thread which is not necessarily the main thread.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn ExecNow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_ExecNow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Auto execution in main thread (thread-safe)
    ///
    /// If the signal is in the same thread as the receiver,
    /// this will be the same as `ExecNow`.
    ///
    /// If the signal is in a different thread, this will
    /// be the same as `Async`.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn Exec(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_Exec(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Unique auto execution in main thread (thread-safe)
    ///
    /// This runs the callback only if it does not duplicate
    /// the signal emission.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn ExecUnique(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_ExecUnique(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Single-shot execution in main thread (thread-safe)
    ///
    /// This runs the callback only once.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn ExecOnce(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_ExecOnce(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback in the main Qt thread.
    /// You should use this whenever you need to
    /// access the main Qt GUI from a non-GUI thread.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn Async(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_Async(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Unique non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only if it does not duplicate
    /// the signal emission.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn AsyncUnique(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_AsyncUnique(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Single-shot non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn AsyncOnce(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_AsyncOnce(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Unique single-shot non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once if it does not duplicate
    /// the signal emission.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn AsyncUniqueOnce(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_AsyncUniqueOnce(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback in the main Qt thread.
    /// You should use this whenever you need to access
    /// the main Qt GUI from a non-GUI thread in a
    /// synchronous manner.
    ///
    /// Be careful with this, as it will block the main
    /// thread until the callback is finished. This has
    /// the risk of freezing the GUI or even causing
    /// potential deadlocks. If the slot function in the
    /// receiver tries to send a signal back to the
    /// emitting thread using a `BlockingQueuedConnection`,
    /// a deadlock can occur.
    ///
    /// This should only be used when you absolutely
    /// need to ensure synchronous execution of the
    /// callback.
    ///
    /// This is not recommended for most cases.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn Sync(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_Sync(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Unique blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only if it does not duplicate
    /// the signal emission. All of the cautions from `Sync`
    /// apply here as well.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn SyncUnique(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_SyncUnique(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Single-shot blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once. All of the cautions from
    /// `Sync` apply here as well.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn SyncOnce(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_SyncOnce(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Unique single-shot blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once if it does not duplicate
    /// the signal emission. All of the cautions from `Sync` apply here
    /// as well.
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ``` self: ?*anyopaque, callback: *const fn (self: ?*anyopaque) callconv(.c) void ```
    pub fn SyncUniqueOnce(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_SyncUniqueOnce(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }
};
