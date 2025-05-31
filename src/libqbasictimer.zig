const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// https://doc.qt.io/qt-6/qbasictimer.html
pub const qbasictimer = struct {
    /// New constructs a new QBasicTimer object.
    ///
    ///
    pub fn New() QtC.QBasicTimer {
        return qtc.QBasicTimer_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#swap)
    ///
    /// ``` self: QtC.QBasicTimer, other: QtC.QBasicTimer ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBasicTimer_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#isActive)
    ///
    /// ``` self: QtC.QBasicTimer ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QBasicTimer_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#timerId)
    ///
    /// ``` self: QtC.QBasicTimer ```
    pub fn TimerId(self: ?*anyopaque) i32 {
        return qtc.QBasicTimer_TimerId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ``` self: QtC.QBasicTimer, msec: i32, obj: QtC.QObject ```
    pub fn Start(self: ?*anyopaque, msec: i32, obj: ?*anyopaque) void {
        qtc.QBasicTimer_Start(@ptrCast(self), @intCast(msec), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ``` self: QtC.QBasicTimer, msec: i32, timerType: qnamespace_enums.TimerType, obj: QtC.QObject ```
    pub fn Start2(self: ?*anyopaque, msec: i32, timerType: i64, obj: ?*anyopaque) void {
        qtc.QBasicTimer_Start2(@ptrCast(self), @intCast(msec), @intCast(timerType), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#stop)
    ///
    /// ``` self: QtC.QBasicTimer ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QBasicTimer_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#dtor.QBasicTimer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QBasicTimer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBasicTimer_Delete(@ptrCast(self));
    }
};
