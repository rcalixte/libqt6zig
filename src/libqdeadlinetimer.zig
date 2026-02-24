const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdeadlinetimer_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)
pub const qdeadlinetimer = struct {
    /// New constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QDeadlineTimer `
    ///
    pub fn New(other: ?*anyopaque) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new(@ptrCast(other));
    }

    /// New2 constructs a new QDeadlineTimer object and invalidates the source QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QDeadlineTimer `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new2(@ptrCast(other));
    }

    /// New3 constructs a new QDeadlineTimer object.
    ///
    pub fn New3() QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new3();
    }

    /// New4 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` type_: qnamespace_enums.TimerType `
    ///
    pub fn New4(type_: i32) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new4(@bitCast(type_));
    }

    /// New5 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qdeadlinetimer_enums.ForeverConstant `
    ///
    pub fn New5(param1: i32) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new5(@bitCast(param1));
    }

    /// New6 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    pub fn New6(msecs: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new6(@bitCast(msecs));
    }

    /// New7 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QDeadlineTimer `
    ///
    pub fn New7(param1: ?*anyopaque) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new7(@ptrCast(param1));
    }

    /// New8 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qdeadlinetimer_enums.ForeverConstant `
    ///
    /// ` type_: qnamespace_enums.TimerType `
    ///
    pub fn New8(param1: i32, type_: i32) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new8(@bitCast(param1), @bitCast(type_));
    }

    /// New9 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn New9(msecs: i64, typeVal: i32) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_new9(@bitCast(msecs), @bitCast(typeVal));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` other: QtC.QDeadlineTimer `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDeadlineTimer_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` other: QtC.QDeadlineTimer `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDeadlineTimer_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` other: QtC.QDeadlineTimer `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDeadlineTimer_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#isForever)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    pub fn IsForever(self: ?*anyopaque) bool {
        return qtc.QDeadlineTimer_IsForever(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#hasExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    pub fn HasExpired(self: ?*anyopaque) bool {
        return qtc.QDeadlineTimer_HasExpired(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#timerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimerType `
    ///
    pub fn TimerType(self: ?*anyopaque) i32 {
        return qtc.QDeadlineTimer_TimerType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setTimerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn SetTimerType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QDeadlineTimer_SetTimerType(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    pub fn RemainingTime(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_RemainingTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeNSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    pub fn RemainingTimeNSecs(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_RemainingTimeNSecs(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn SetRemainingTime(self: ?*anyopaque, msecs: i64) void {
        qtc.QDeadlineTimer_SetRemainingTime(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    pub fn SetPreciseRemainingTime(self: ?*anyopaque, secs: i64) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime(@ptrCast(self), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    pub fn Deadline(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_Deadline(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadlineNSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    pub fn DeadlineNSecs(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_DeadlineNSecs(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn SetDeadline(self: ?*anyopaque, msecs: i64) void {
        qtc.QDeadlineTimer_SetDeadline(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    pub fn SetPreciseDeadline(self: ?*anyopaque, secs: i64) void {
        qtc.QDeadlineTimer_SetPreciseDeadline(@ptrCast(self), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#addNSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` dt: QtC.QDeadlineTimer `
    ///
    /// ` nsecs: i64 `
    ///
    pub fn AddNSecs(dt: QtC.QDeadlineTimer, nsecs: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_AddNSecs(@ptrCast(dt), @bitCast(nsecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
    ///
    pub fn Current() QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_Current();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, msecs: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_OperatorPlusAssign(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, msecs: i64) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_OperatorMinusAssign(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeAsDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ## Returns:
    ///
    /// ` i64 of nanoseconds `
    ///
    pub fn RemainingTimeAsDuration(self: ?*anyopaque) i64 {
        return qtc.QDeadlineTimer_RemainingTimeAsDuration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn SetRemainingTime2(self: ?*anyopaque, msecs: i64, typeVal: i32) void {
        qtc.QDeadlineTimer_SetRemainingTime2(@ptrCast(self), @bitCast(msecs), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    /// ` nsecs: i64 `
    ///
    pub fn SetPreciseRemainingTime2(self: ?*anyopaque, secs: i64, nsecs: i64) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime2(@ptrCast(self), @bitCast(secs), @bitCast(nsecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    /// ` nsecs: i64 `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn SetPreciseRemainingTime3(self: ?*anyopaque, secs: i64, nsecs: i64, typeVal: i32) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime3(@ptrCast(self), @bitCast(secs), @bitCast(nsecs), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn SetDeadline2(self: ?*anyopaque, msecs: i64, timerType: i32) void {
        qtc.QDeadlineTimer_SetDeadline2(@ptrCast(self), @bitCast(msecs), @bitCast(timerType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    /// ` nsecs: i64 `
    ///
    pub fn SetPreciseDeadline2(self: ?*anyopaque, secs: i64, nsecs: i64) void {
        qtc.QDeadlineTimer_SetPreciseDeadline2(@ptrCast(self), @bitCast(secs), @bitCast(nsecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    /// ` nsecs: i64 `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn SetPreciseDeadline3(self: ?*anyopaque, secs: i64, nsecs: i64, typeVal: i32) void {
        qtc.QDeadlineTimer_SetPreciseDeadline3(@ptrCast(self), @bitCast(secs), @bitCast(nsecs), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
    ///
    /// ## Parameter(s):
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn Current1(timerType: i32) QtC.QDeadlineTimer {
        return qtc.QDeadlineTimer_Current1(@bitCast(timerType));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#dtor.QDeadlineTimer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDeadlineTimer `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDeadlineTimer_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#public-types)
pub const enums = struct {
    pub const ForeverConstant = enum(i32) {
        pub const Forever: i32 = 0;
    };
};
