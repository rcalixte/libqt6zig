const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html)
pub const QRunnable = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRunnable,

    pub const _is_QRunnable = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRunnable object in C++ memory
    ///
    pub fn new() QRunnable {
        return .{ .ptr = qtc.QRunnable_new() };
    }

    /// ### DEPRECATED: Use `run` instead
    ///
    pub const Run = run;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRunnable `
    ///
    pub fn run(self: QRunnable) void {
        qtc.QRunnable_Run(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRun` instead
    ///
    pub const OnRun = onRun;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QRunnable `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRun(self: QRunnable, callback: *const fn () callconv(.c) void) void {
        qtc.QRunnable_OnRun(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRun` instead
    ///
    pub const SuperRun = superRun;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRunnable `
    ///
    pub fn superRun(self: QRunnable) void {
        qtc.QRunnable_SuperRun(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoDelete` instead
    ///
    pub const AutoDelete = autoDelete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#autoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRunnable `
    ///
    pub fn autoDelete(self: QRunnable) bool {
        return qtc.QRunnable_AutoDelete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDelete` instead
    ///
    pub const SetAutoDelete = setAutoDelete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRunnable `
    ///
    /// ` _autoDelete: bool `
    ///
    pub fn setAutoDelete(self: QRunnable, _autoDelete: bool) void {
        qtc.QRunnable_SetAutoDelete(@ptrCast(self.ptr), _autoDelete);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#dtor.QRunnable)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRunnable `
    ///
    pub fn delete(self: QRunnable) void {
        qtc.QRunnable_Delete(@ptrCast(self.ptr));
    }
};
