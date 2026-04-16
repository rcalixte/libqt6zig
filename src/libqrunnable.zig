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

    /// New constructs a new QRunnable object.
    ///
    pub fn New() QRunnable {
        return .{ .ptr = qtc.QRunnable_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRunnable `
    ///
    pub fn Run(self: QRunnable) void {
        qtc.QRunnable_Run(@ptrCast(self.ptr));
    }

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
    pub fn OnRun(self: QRunnable, callback: *const fn () callconv(.c) void) void {
        qtc.QRunnable_OnRun(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRun` instead
    ///
    pub const QBaseRun = SuperRun;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRunnable `
    ///
    pub fn SuperRun(self: QRunnable) void {
        qtc.QRunnable_SuperRun(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#autoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRunnable `
    ///
    pub fn AutoDelete(self: QRunnable) bool {
        return qtc.QRunnable_AutoDelete(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRunnable `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDelete(self: QRunnable, autoDelete: bool) void {
        qtc.QRunnable_SetAutoDelete(@ptrCast(self.ptr), autoDelete);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#dtor.QRunnable)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRunnable `
    ///
    pub fn Delete(self: QRunnable) void {
        qtc.QRunnable_Delete(@ptrCast(self.ptr));
    }
};
