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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBasicTimer object in C++ memory
    ///
    pub fn new() QBasicTimer {
        return .{ .ptr = qtc.QBasicTimer_new() };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    /// ` other: QBasicTimer `
    ///
    pub fn swap(self: QBasicTimer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBasicTimer;
        qtc.QBasicTimer_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    pub fn isActive(self: QBasicTimer) bool {
        return qtc.QBasicTimer_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timerId` instead
    ///
    pub const TimerId = timerId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#timerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    pub fn timerId(self: QBasicTimer) i32 {
        return qtc.QBasicTimer_TimerId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

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
    pub fn id(self: QBasicTimer) i32 {
        return qtc.QBasicTimer_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

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
    pub fn start(self: QBasicTimer, msec: i32, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QBasicTimer_Start(@ptrCast(self.ptr), @bitCast(msec), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `start2` instead
    ///
    pub const Start2 = start2;

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
    pub fn start2(self: QBasicTimer, msec: i32, timerType: i32, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QBasicTimer_Start2(@ptrCast(self.ptr), @bitCast(msec), @bitCast(timerType), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `start3` instead
    ///
    pub const Start3 = start3;

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
    pub fn start3(self: QBasicTimer, duration: i64, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QBasicTimer_Start3(@ptrCast(self.ptr), @bitCast(duration), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `start4` instead
    ///
    pub const Start4 = start4;

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
    pub fn start4(self: QBasicTimer, duration: i64, timerType: i32, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QBasicTimer_Start4(@ptrCast(self.ptr), @bitCast(duration), @bitCast(timerType), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBasicTimer `
    ///
    pub fn stop(self: QBasicTimer) void {
        qtc.QBasicTimer_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbasictimer.html#dtor.QBasicTimer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBasicTimer `
    ///
    pub fn delete(self: QBasicTimer) void {
        qtc.QBasicTimer_Delete(@ptrCast(self.ptr));
    }
};
