const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
pub const Threading = struct {
    /// Direct execution in caller's thread (not thread-safe)
    ///
    /// This executes the callback immediately in the current
    /// thread which is not necessarily the main thread.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn ExecNow(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_ExecNow(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Auto execution in main thread (thread-safe)
    ///
    /// If the signal is in the same thread as the receiver,
    /// this will be the same as `ExecNow`.
    ///
    /// If the signal is in a different thread, this will
    /// be the same as `Async`.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn Exec(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_Exec(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Unique auto execution in main thread (thread-safe)
    ///
    /// This runs the callback only if it does not duplicate
    /// the signal emission.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn ExecUnique(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_ExecUnique(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Single-shot execution in main thread (thread-safe)
    ///
    /// This runs the callback only once.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn ExecOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_ExecOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback in the main Qt thread.
    /// You should use this whenever you need to
    /// access the main Qt GUI from a non-GUI thread.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn Async(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_Async(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Unique non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only if it does not duplicate
    /// the signal emission.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn AsyncUnique(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_AsyncUnique(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Single-shot non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn AsyncOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_AsyncOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Unique single-shot non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once if it does not duplicate
    /// the signal emission.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn AsyncUniqueOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_AsyncUniqueOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn Sync(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_Sync(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Unique blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only if it does not duplicate
    /// the signal emission. All of the cautions from `Sync`
    /// apply here as well.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn SyncUnique(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_SyncUnique(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Single-shot blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once. All of the cautions from
    /// `Sync` apply here as well.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn SyncOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_SyncOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// Unique single-shot blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once if it does not duplicate
    /// the signal emission. All of the cautions from `Sync` apply here
    /// as well.
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/threads-qobject.html)
    ///
    /// ## Parameters:
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` callback: *const fn (context: ?*anyopaque) callconv(.c) void `
    ///
    pub fn SyncUniqueOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_SyncUniqueOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }
};
