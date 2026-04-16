const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html)
pub const QBasicTimer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBasicTimer,

    pub const _is_QBasicTimer = {};

    /// New constructs a new QBasicTimer object.
    ///
    pub fn New() QBasicTimer {
        return .{ .ptr = qtc.QBasicTimer_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    /// ` other: QBasicTimer `
    ///
    pub fn Swap(self: QBasicTimer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBasicTimer;
        qtc.QBasicTimer_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    pub fn IsActive(self: QBasicTimer) bool {
        return qtc.QBasicTimer_IsActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#timerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    pub fn TimerId(self: QBasicTimer) i32 {
        return qtc.QBasicTimer_TimerId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimerId `
    ///
    pub fn Id(self: QBasicTimer) i32 {
        return qtc.QBasicTimer_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    /// ` msec: i32 `
    ///
    /// ` obj: QObject `
    ///
    pub fn Start(self: QBasicTimer, msec: i32, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QBasicTimer_Start(@ptrCast(self.ptr), @bitCast(msec), @ptrCast(obj.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    /// ` msec: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    /// ` obj: QObject `
    ///
    pub fn Start2(self: QBasicTimer, msec: i32, timerType: i32, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QBasicTimer_Start2(@ptrCast(self.ptr), @bitCast(msec), @bitCast(timerType), @ptrCast(obj.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    /// ` obj: QObject `
    ///
    pub fn Start3(self: QBasicTimer, duration: i64, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QBasicTimer_Start3(@ptrCast(self.ptr), @bitCast(duration), @ptrCast(obj.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    /// ` obj: QObject `
    ///
    pub fn Start4(self: QBasicTimer, duration: i64, timerType: i32, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QBasicTimer_Start4(@ptrCast(self.ptr), @bitCast(duration), @bitCast(timerType), @ptrCast(obj.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    pub fn Stop(self: QBasicTimer) void {
        qtc.QBasicTimer_Stop(@ptrCast(self.ptr));
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
    /// ` self: QBasicTimer `
    ///
    pub fn Delete(self: QBasicTimer) void {
        qtc.QBasicTimer_Delete(@ptrCast(self.ptr));
    }
};
