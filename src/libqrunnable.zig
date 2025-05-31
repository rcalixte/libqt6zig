const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qrunnable.html
pub const qrunnable = struct {
    /// New constructs a new QRunnable object.
    ///
    ///
    pub fn New() QtC.QRunnable {
        return qtc.QRunnable_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// ``` self: QtC.QRunnable ```
    pub fn Run(self: ?*anyopaque) void {
        qtc.QRunnable_Run(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QRunnable, slot: fn () callconv(.c) void ```
    pub fn OnRun(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QRunnable_OnRun(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#run)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QRunnable ```
    pub fn QBaseRun(self: ?*anyopaque) void {
        qtc.QRunnable_QBaseRun(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#autoDelete)
    ///
    /// ``` self: QtC.QRunnable ```
    pub fn AutoDelete(self: ?*anyopaque) bool {
        return qtc.QRunnable_AutoDelete(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#setAutoDelete)
    ///
    /// ``` self: QtC.QRunnable, autoDelete: bool ```
    pub fn SetAutoDelete(self: ?*anyopaque, autoDelete: bool) void {
        qtc.QRunnable_SetAutoDelete(@ptrCast(self), autoDelete);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#dtor.QRunnable)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRunnable ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRunnable_Delete(@ptrCast(self));
    }
};
