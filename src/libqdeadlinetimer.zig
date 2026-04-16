const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdeadlinetimer_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)
pub const QDeadlineTimer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDeadlineTimer,

    pub const _is_QDeadlineTimer = {};

    /// New constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn New(other: anytype) QDeadlineTimer {
        comptime _ = @TypeOf(other)._is_QDeadlineTimer;
        return .{ .ptr = qtc.QDeadlineTimer_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QDeadlineTimer object and invalidates the source QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn New2(other: anytype) QDeadlineTimer {
        comptime _ = @TypeOf(other)._is_QDeadlineTimer;
        return .{ .ptr = qtc.QDeadlineTimer_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QDeadlineTimer object.
    ///
    pub fn New3() QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new3() };
    }

    /// New4 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` type_: qnamespace_enums.TimerType `
    ///
    pub fn New4(type_: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new4(@bitCast(type_)) };
    }

    /// New5 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qdeadlinetimer_enums.ForeverConstant `
    ///
    pub fn New5(param1: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new5(@bitCast(param1)) };
    }

    /// New6 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    pub fn New6(msecs: i64) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new6(@bitCast(msecs)) };
    }

    /// New7 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDeadlineTimer `
    ///
    pub fn New7(param1: anytype) QDeadlineTimer {
        comptime _ = @TypeOf(param1)._is_QDeadlineTimer;
        return .{ .ptr = qtc.QDeadlineTimer_new7(@ptrCast(param1.ptr)) };
    }

    /// New8 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qdeadlinetimer_enums.ForeverConstant `
    ///
    /// ` type_: qnamespace_enums.TimerType `
    ///
    pub fn New8(param1: i32, type_: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new8(@bitCast(param1), @bitCast(type_)) };
    }

    /// New9 constructs a new QDeadlineTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn New9(msecs: i64, typeVal: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new9(@bitCast(msecs), @bitCast(typeVal)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn CopyAssign(self: QDeadlineTimer, other: QDeadlineTimer) void {
        qtc.QDeadlineTimer_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn MoveAssign(self: QDeadlineTimer, other: QDeadlineTimer) void {
        qtc.QDeadlineTimer_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn Swap(self: QDeadlineTimer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDeadlineTimer;
        qtc.QDeadlineTimer_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#isForever)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn IsForever(self: QDeadlineTimer) bool {
        return qtc.QDeadlineTimer_IsForever(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#hasExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn HasExpired(self: QDeadlineTimer) bool {
        return qtc.QDeadlineTimer_HasExpired(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#timerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimerType `
    ///
    pub fn TimerType(self: QDeadlineTimer) i32 {
        return qtc.QDeadlineTimer_TimerType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setTimerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn SetTimerType(self: QDeadlineTimer, typeVal: i32) void {
        qtc.QDeadlineTimer_SetTimerType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn RemainingTime(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_RemainingTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeNSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn RemainingTimeNSecs(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_RemainingTimeNSecs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn SetRemainingTime(self: QDeadlineTimer, msecs: i64) void {
        qtc.QDeadlineTimer_SetRemainingTime(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    pub fn SetPreciseRemainingTime(self: QDeadlineTimer, secs: i64) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn Deadline(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_Deadline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadlineNSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn DeadlineNSecs(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_DeadlineNSecs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn SetDeadline(self: QDeadlineTimer, msecs: i64) void {
        qtc.QDeadlineTimer_SetDeadline(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    pub fn SetPreciseDeadline(self: QDeadlineTimer, secs: i64) void {
        qtc.QDeadlineTimer_SetPreciseDeadline(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#addNSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` dt: QDeadlineTimer `
    ///
    /// ` nsecs: i64 `
    ///
    pub fn AddNSecs(dt: anytype, nsecs: i64) QDeadlineTimer {
        comptime _ = @TypeOf(dt)._is_QDeadlineTimer;
        return .{ .ptr = qtc.QDeadlineTimer_AddNSecs(@ptrCast(dt.ptr), @bitCast(nsecs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
    ///
    pub fn Current() QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_Current() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn OperatorPlusAssign(self: QDeadlineTimer, msecs: i64) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn OperatorMinusAssign(self: QDeadlineTimer, msecs: i64) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeAsDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ## Returns:
    ///
    /// ` i64 of nanoseconds `
    ///
    pub fn RemainingTimeAsDuration(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_RemainingTimeAsDuration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn SetRemainingTime2(self: QDeadlineTimer, msecs: i64, typeVal: i32) void {
        qtc.QDeadlineTimer_SetRemainingTime2(@ptrCast(self.ptr), @bitCast(msecs), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    /// ` nsecs: i64 `
    ///
    pub fn SetPreciseRemainingTime2(self: QDeadlineTimer, secs: i64, nsecs: i64) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime2(@ptrCast(self.ptr), @bitCast(secs), @bitCast(nsecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    /// ` nsecs: i64 `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn SetPreciseRemainingTime3(self: QDeadlineTimer, secs: i64, nsecs: i64, typeVal: i32) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime3(@ptrCast(self.ptr), @bitCast(secs), @bitCast(nsecs), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn SetDeadline2(self: QDeadlineTimer, msecs: i64, timerType: i32) void {
        qtc.QDeadlineTimer_SetDeadline2(@ptrCast(self.ptr), @bitCast(msecs), @bitCast(timerType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    /// ` nsecs: i64 `
    ///
    pub fn SetPreciseDeadline2(self: QDeadlineTimer, secs: i64, nsecs: i64) void {
        qtc.QDeadlineTimer_SetPreciseDeadline2(@ptrCast(self.ptr), @bitCast(secs), @bitCast(nsecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    /// ` nsecs: i64 `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn SetPreciseDeadline3(self: QDeadlineTimer, secs: i64, nsecs: i64, typeVal: i32) void {
        qtc.QDeadlineTimer_SetPreciseDeadline3(@ptrCast(self.ptr), @bitCast(secs), @bitCast(nsecs), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
    ///
    /// ## Parameter(s):
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn Current1(timerType: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_Current1(@bitCast(timerType)) };
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
    /// ` self: QDeadlineTimer `
    ///
    pub fn Delete(self: QDeadlineTimer) void {
        qtc.QDeadlineTimer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#public-types)
pub const enums = struct {
    pub const ForeverConstant = enum(i32) {
        pub const Forever: i32 = 0;
    };
};
