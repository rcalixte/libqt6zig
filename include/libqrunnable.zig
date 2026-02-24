const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html)
pub const qrunnable = struct {
    /// New constructs a new QRunnable object.
    ///
    pub fn New() QtC.QRunnable {
        return qtc.QRunnable_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRunnable `
    ///
    pub fn Run(self: ?*anyopaque) void {
        qtc.QRunnable_Run(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QRunnable `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRun(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QRunnable_OnRun(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QRunnable `
    ///
    pub fn SuperRun(self: ?*anyopaque) void {
        qtc.QRunnable_SuperRun(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#autoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRunnable `
    ///
    pub fn AutoDelete(self: ?*anyopaque) bool {
        return qtc.QRunnable_AutoDelete(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRunnable `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDelete(self: ?*anyopaque, autoDelete: bool) void {
        qtc.QRunnable_SetAutoDelete(@ptrCast(self), autoDelete);
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
    /// ` self: QtC.QRunnable `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QRunnable_Delete(@ptrCast(self));
    }
};
