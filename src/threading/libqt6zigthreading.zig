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
    pub fn execNow(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_ExecNow(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `execNow` instead
    ///
    pub const ExecNow = execNow;

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
    pub fn exec(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_Exec(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

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
    pub fn execUnique(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_ExecUnique(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `execUnique` instead
    ///
    pub const ExecUnique = execUnique;

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
    pub fn execOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_ExecOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `execOnce` instead
    ///
    pub const ExecOnce = execOnce;

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
    pub fn async(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_Async(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `async` instead
    ///
    pub const Async = async;

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
    pub fn asyncUnique(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_AsyncUnique(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `asyncUnique` instead
    ///
    pub const AsyncUnique = asyncUnique;

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
    pub fn asyncOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_AsyncOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `asyncOnce` instead
    ///
    pub const AsyncOnce = asyncOnce;

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
    pub fn asyncUniqueOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_AsyncUniqueOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `asyncUniqueOnce` instead
    ///
    pub const AsyncUniqueOnce = asyncUniqueOnce;

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
    pub fn sync(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_Sync(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sync` instead
    ///
    pub const Sync = sync;

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
    pub fn syncUnique(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_SyncUnique(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `syncUnique` instead
    ///
    pub const SyncUnique = syncUnique;

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
    pub fn syncOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_SyncOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `syncOnce` instead
    ///
    pub const SyncOnce = syncOnce;

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
    pub fn syncUniqueOnce(context: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Threading_SyncUniqueOnce(@ptrCast(context), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `syncUniqueOnce` instead
    ///
    pub const SyncUniqueOnce = syncUniqueOnce;
};
