const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdeadlinetimer_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// https://doc.qt.io/qt-6/qdeadlinetimer.html
pub const qdeadlinetimer = struct {
    /// New constructs a new QDeadlineTimer object.
    ///
    /// ``` other: QtC.QDeadlineTimer ```
    pub fn New(other: ?*anyopaque) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new(@ptrCast(other));
    }

    /// New2 constructs a new QDeadlineTimer object and invalidates the source QDeadlineTimer object.
    ///
    /// ``` other: QtC.QDeadlineTimer ```
    pub fn New2(other: ?*anyopaque) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new2(@ptrCast(other));
    }

    /// New3 constructs a new QDeadlineTimer object.
    ///
    ///
    pub fn New3() QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new3();
    }

    /// New4 constructs a new QDeadlineTimer object.
    ///
    /// ``` param1: qdeadlinetimer_enums.ForeverConstant ```
    pub fn New4(param1: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new4(@intCast(param1));
    }

    /// New5 constructs a new QDeadlineTimer object.
    ///
    /// ``` msecs: i64 ```
    pub fn New5(msecs: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new5(@intCast(msecs));
    }

    /// New6 constructs a new QDeadlineTimer object.
    ///
    /// ``` param1: QtC.QDeadlineTimer ```
    pub fn New6(param1: ?*anyopaque) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new6(@ptrCast(param1));
    }

    /// New7 constructs a new QDeadlineTimer object.
    ///
    /// ``` type_: qnamespace_enums.TimerType ```
    pub fn New7(type_: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new7(@intCast(type_));
    }

    /// New8 constructs a new QDeadlineTimer object.
    ///
    /// ``` param1: qdeadlinetimer_enums.ForeverConstant, type_: qnamespace_enums.TimerType ```
    pub fn New8(param1: i64, type_: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new8(@intCast(param1), @intCast(type_));
    }

    /// New9 constructs a new QDeadlineTimer object.
    ///
    /// ``` msecs: i64, typeVal: qnamespace_enums.TimerType ```
    pub fn New9(msecs: i64, typeVal: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new9(@intCast(msecs), @intCast(typeVal));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QDeadlineTimer, other: QtC.QDeadlineTimer ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDeadlineTimer_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QDeadlineTimer, other: QtC.QDeadlineTimer ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDeadlineTimer_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#swap)
    ///
    /// ``` self: QtC.QDeadlineTimer, other: QtC.QDeadlineTimer ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDeadlineTimer_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#isForever)
    ///
    /// ``` self: QtC.QDeadlineTimer ```
    pub fn IsForever(self: ?*anyopaque) bool {
        return qtc.QDeadlineTimer_IsForever(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#hasExpired)
    ///
    /// ``` self: QtC.QDeadlineTimer ```
    pub fn HasExpired(self: ?*anyopaque) bool {
        return qtc.QDeadlineTimer_HasExpired(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#timerType)
    ///
    /// ``` self: QtC.QDeadlineTimer ```
    pub fn TimerType(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_TimerType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setTimerType)
    ///
    /// ``` self: QtC.QDeadlineTimer, typeVal: qnamespace_enums.TimerType ```
    pub fn SetTimerType(self: ?*anyopaque, typeVal: i64) void {
        qtc.QDeadlineTimer_SetTimerType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTime)
    ///
    /// ``` self: QtC.QDeadlineTimer ```
    pub fn RemainingTime(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_RemainingTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeNSecs)
    ///
    /// ``` self: QtC.QDeadlineTimer ```
    pub fn RemainingTimeNSecs(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_RemainingTimeNSecs(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
    ///
    /// ``` self: QtC.QDeadlineTimer, msecs: i64 ```
    pub fn SetRemainingTime(self: ?*anyopaque, msecs: i64) void {
        qtc.QDeadlineTimer_SetRemainingTime(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ``` self: QtC.QDeadlineTimer, secs: i64 ```
    pub fn SetPreciseRemainingTime(self: ?*anyopaque, secs: i64) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime(@ptrCast(self), @intCast(secs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadline)
    ///
    /// ``` self: QtC.QDeadlineTimer ```
    pub fn Deadline(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_Deadline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadlineNSecs)
    ///
    /// ``` self: QtC.QDeadlineTimer ```
    pub fn DeadlineNSecs(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_DeadlineNSecs(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
    ///
    /// ``` self: QtC.QDeadlineTimer, msecs: i64 ```
    pub fn SetDeadline(self: ?*anyopaque, msecs: i64) void {
        qtc.QDeadlineTimer_SetDeadline(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ``` self: QtC.QDeadlineTimer, secs: i64 ```
    pub fn SetPreciseDeadline(self: ?*anyopaque, secs: i64) void {
        qtc.QDeadlineTimer_SetPreciseDeadline(@ptrCast(self), @intCast(secs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#addNSecs)
    ///
    /// ``` dt: QtC.QDeadlineTimer, nsecs: i64 ```
    pub fn AddNSecs(dt: QtC.QDeadlineTimer, nsecs: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_AddNSecs(@ptrCast(dt), @intCast(nsecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
    ///
    ///
    pub fn Current() QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_Current();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator+=)
    ///
    /// ``` self: QtC.QDeadlineTimer, msecs: i64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, msecs: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_OperatorPlusAssign(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator-=)
    ///
    /// ``` self: QtC.QDeadlineTimer, msecs: i64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, msecs: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_OperatorMinusAssign(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator=)
    ///
    /// ``` self: QtC.QDeadlineTimer, param1: QtC.QDeadlineTimer ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDeadlineTimer_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
    ///
    /// ``` self: QtC.QDeadlineTimer, msecs: i64, typeVal: qnamespace_enums.TimerType ```
    pub fn SetRemainingTime2(self: ?*anyopaque, msecs: i64, typeVal: i64) void {
        qtc.QDeadlineTimer_SetRemainingTime2(@ptrCast(self), @intCast(msecs), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ``` self: QtC.QDeadlineTimer, secs: i64, nsecs: i64 ```
    pub fn SetPreciseRemainingTime2(self: ?*anyopaque, secs: i64, nsecs: i64) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime2(@ptrCast(self), @intCast(secs), @intCast(nsecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ``` self: QtC.QDeadlineTimer, secs: i64, nsecs: i64, typeVal: qnamespace_enums.TimerType ```
    pub fn SetPreciseRemainingTime3(self: ?*anyopaque, secs: i64, nsecs: i64, typeVal: i64) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime3(@ptrCast(self), @intCast(secs), @intCast(nsecs), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
    ///
    /// ``` self: QtC.QDeadlineTimer, msecs: i64, timerType: qnamespace_enums.TimerType ```
    pub fn SetDeadline2(self: ?*anyopaque, msecs: i64, timerType: i64) void {
        qtc.QDeadlineTimer_SetDeadline2(@ptrCast(self), @intCast(msecs), @intCast(timerType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ``` self: QtC.QDeadlineTimer, secs: i64, nsecs: i64 ```
    pub fn SetPreciseDeadline2(self: ?*anyopaque, secs: i64, nsecs: i64) void {
        qtc.QDeadlineTimer_SetPreciseDeadline2(@ptrCast(self), @intCast(secs), @intCast(nsecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ``` self: QtC.QDeadlineTimer, secs: i64, nsecs: i64, typeVal: qnamespace_enums.TimerType ```
    pub fn SetPreciseDeadline3(self: ?*anyopaque, secs: i64, nsecs: i64, typeVal: i64) void {
        qtc.QDeadlineTimer_SetPreciseDeadline3(@ptrCast(self), @intCast(secs), @intCast(nsecs), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
    ///
    /// ``` timerType: qnamespace_enums.TimerType ```
    pub fn Current1(timerType: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_Current1(@intCast(timerType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#dtor.QDeadlineTimer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDeadlineTimer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDeadlineTimer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdeadlinetimer.html#types
pub const enums = struct {
    pub const ForeverConstant = enum {
        pub const Forever: i32 = 0;
    };
};
