const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html)
pub const qbasictimer = struct {
    /// New constructs a new QBasicTimer object.
    ///
    pub fn New() QtC.QBasicTimer {
        return qtc.QBasicTimer_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    /// ` other: QtC.QBasicTimer `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBasicTimer_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QBasicTimer_IsActive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#timerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    pub fn TimerId(self: ?*anyopaque) i32 {
        return qtc.QBasicTimer_TimerId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimerId `
    ///
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.QBasicTimer_Id(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    /// ` msec: i32 `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn Start(self: ?*anyopaque, msec: i32, obj: ?*anyopaque) void {
        qtc.QBasicTimer_Start(@ptrCast(self), @bitCast(msec), @ptrCast(obj));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    /// ` msec: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn Start2(self: ?*anyopaque, msec: i32, timerType: i32, obj: ?*anyopaque) void {
        qtc.QBasicTimer_Start2(@ptrCast(self), @bitCast(msec), @bitCast(timerType), @ptrCast(obj));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn Start3(self: ?*anyopaque, duration: i64, obj: ?*anyopaque) void {
        qtc.QBasicTimer_Start3(@ptrCast(self), @bitCast(duration), @ptrCast(obj));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn Start4(self: ?*anyopaque, duration: i64, timerType: i32, obj: ?*anyopaque) void {
        qtc.QBasicTimer_Start4(@ptrCast(self), @bitCast(duration), @bitCast(timerType), @ptrCast(obj));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QBasicTimer_Stop(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#dtor.QBasicTimer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBasicTimer `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBasicTimer_Delete(@ptrCast(self));
    }
};
