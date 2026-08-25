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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDeadlineTimer object in C++ memory
    ///
    pub fn new() QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDeadlineTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn new2(other: anytype) QDeadlineTimer {
        comptime _ = @TypeOf(other)._is_QDeadlineTimer;
        return .{ .ptr = qtc.QDeadlineTimer_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDeadlineTimer object and invalidate the source QDeadlineTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn new3(other: anytype) QDeadlineTimer {
        comptime _ = @TypeOf(other)._is_QDeadlineTimer;
        return .{ .ptr = qtc.QDeadlineTimer_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDeadlineTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` type_: qnamespace_enums.TimerType `
    ///
    pub fn new4(type_: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new4(@bitCast(type_)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QDeadlineTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qdeadlinetimer_enums.ForeverConstant `
    ///
    pub fn new5(param1: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new5(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QDeadlineTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    pub fn new6(msecs: i64) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new6(@bitCast(msecs)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QDeadlineTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDeadlineTimer `
    ///
    pub fn new7(param1: anytype) QDeadlineTimer {
        comptime _ = @TypeOf(param1)._is_QDeadlineTimer;
        return .{ .ptr = qtc.QDeadlineTimer_new7(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QDeadlineTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qdeadlinetimer_enums.ForeverConstant `
    ///
    /// ` type_: qnamespace_enums.TimerType `
    ///
    pub fn new8(param1: i32, type_: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new8(@bitCast(param1), @bitCast(type_)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QDeadlineTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn new9(msecs: i64, typeVal: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_new9(@bitCast(msecs), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn copyAssign(self: QDeadlineTimer, other: QDeadlineTimer) void {
        qtc.QDeadlineTimer_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn moveAssign(self: QDeadlineTimer, other: QDeadlineTimer) void {
        qtc.QDeadlineTimer_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` other: QDeadlineTimer `
    ///
    pub fn swap(self: QDeadlineTimer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDeadlineTimer;
        qtc.QDeadlineTimer_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isForever` instead
    ///
    pub const IsForever = isForever;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#isForever)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn isForever(self: QDeadlineTimer) bool {
        return qtc.QDeadlineTimer_IsForever(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasExpired` instead
    ///
    pub const HasExpired = hasExpired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#hasExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn hasExpired(self: QDeadlineTimer) bool {
        return qtc.QDeadlineTimer_HasExpired(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timerType` instead
    ///
    pub const TimerType = timerType;

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
    pub fn timerType(self: QDeadlineTimer) i32 {
        return qtc.QDeadlineTimer_TimerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimerType` instead
    ///
    pub const SetTimerType = setTimerType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setTimerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` typeVal: qnamespace_enums.TimerType `
    ///
    pub fn setTimerType(self: QDeadlineTimer, typeVal: i32) void {
        qtc.QDeadlineTimer_SetTimerType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `remainingTime` instead
    ///
    pub const RemainingTime = remainingTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn remainingTime(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_RemainingTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `remainingTimeNSecs` instead
    ///
    pub const RemainingTimeNSecs = remainingTimeNSecs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeNSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn remainingTimeNSecs(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_RemainingTimeNSecs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRemainingTime` instead
    ///
    pub const SetRemainingTime = setRemainingTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn setRemainingTime(self: QDeadlineTimer, msecs: i64) void {
        qtc.QDeadlineTimer_SetRemainingTime(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `setPreciseRemainingTime` instead
    ///
    pub const SetPreciseRemainingTime = setPreciseRemainingTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    pub fn setPreciseRemainingTime(self: QDeadlineTimer, secs: i64) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### DEPRECATED: Use `deadline` instead
    ///
    pub const Deadline = deadline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn deadline(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_Deadline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deadlineNSecs` instead
    ///
    pub const DeadlineNSecs = deadlineNSecs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadlineNSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn deadlineNSecs(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_DeadlineNSecs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDeadline` instead
    ///
    pub const SetDeadline = setDeadline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn setDeadline(self: QDeadlineTimer, msecs: i64) void {
        qtc.QDeadlineTimer_SetDeadline(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `setPreciseDeadline` instead
    ///
    pub const SetPreciseDeadline = setPreciseDeadline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` secs: i64 `
    ///
    pub fn setPreciseDeadline(self: QDeadlineTimer, secs: i64) void {
        qtc.QDeadlineTimer_SetPreciseDeadline(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### DEPRECATED: Use `addNSecs` instead
    ///
    pub const AddNSecs = addNSecs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#addNSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` dt: QDeadlineTimer `
    ///
    /// ` nsecs: i64 `
    ///
    pub fn addNSecs(dt: anytype, nsecs: i64) QDeadlineTimer {
        comptime _ = @TypeOf(dt)._is_QDeadlineTimer;
        return .{ .ptr = qtc.QDeadlineTimer_AddNSecs(@ptrCast(dt.ptr), @bitCast(nsecs)) };
    }

    /// ### DEPRECATED: Use `current` instead
    ///
    pub const Current = current;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
    ///
    pub fn current() QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_Current() };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn operatorPlusAssign(self: QDeadlineTimer, msecs: i64) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    pub fn operatorMinusAssign(self: QDeadlineTimer, msecs: i64) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### DEPRECATED: Use `remainingTimeAsDuration` instead
    ///
    pub const RemainingTimeAsDuration = remainingTimeAsDuration;

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
    pub fn remainingTimeAsDuration(self: QDeadlineTimer) i64 {
        return qtc.QDeadlineTimer_RemainingTimeAsDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRemainingTime2` instead
    ///
    pub const SetRemainingTime2 = setRemainingTime2;

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
    pub fn setRemainingTime2(self: QDeadlineTimer, msecs: i64, typeVal: i32) void {
        qtc.QDeadlineTimer_SetRemainingTime2(@ptrCast(self.ptr), @bitCast(msecs), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setPreciseRemainingTime2` instead
    ///
    pub const SetPreciseRemainingTime2 = setPreciseRemainingTime2;

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
    pub fn setPreciseRemainingTime2(self: QDeadlineTimer, secs: i64, nsecs: i64) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime2(@ptrCast(self.ptr), @bitCast(secs), @bitCast(nsecs));
    }

    /// ### DEPRECATED: Use `setPreciseRemainingTime3` instead
    ///
    pub const SetPreciseRemainingTime3 = setPreciseRemainingTime3;

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
    pub fn setPreciseRemainingTime3(self: QDeadlineTimer, secs: i64, nsecs: i64, typeVal: i32) void {
        qtc.QDeadlineTimer_SetPreciseRemainingTime3(@ptrCast(self.ptr), @bitCast(secs), @bitCast(nsecs), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setDeadline2` instead
    ///
    pub const SetDeadline2 = setDeadline2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDeadlineTimer `
    ///
    /// ` msecs: i64 `
    ///
    /// ` _timerType: qnamespace_enums.TimerType `
    ///
    pub fn setDeadline2(self: QDeadlineTimer, msecs: i64, _timerType: i32) void {
        qtc.QDeadlineTimer_SetDeadline2(@ptrCast(self.ptr), @bitCast(msecs), @bitCast(_timerType));
    }

    /// ### DEPRECATED: Use `setPreciseDeadline2` instead
    ///
    pub const SetPreciseDeadline2 = setPreciseDeadline2;

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
    pub fn setPreciseDeadline2(self: QDeadlineTimer, secs: i64, nsecs: i64) void {
        qtc.QDeadlineTimer_SetPreciseDeadline2(@ptrCast(self.ptr), @bitCast(secs), @bitCast(nsecs));
    }

    /// ### DEPRECATED: Use `setPreciseDeadline3` instead
    ///
    pub const SetPreciseDeadline3 = setPreciseDeadline3;

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
    pub fn setPreciseDeadline3(self: QDeadlineTimer, secs: i64, nsecs: i64, typeVal: i32) void {
        qtc.QDeadlineTimer_SetPreciseDeadline3(@ptrCast(self.ptr), @bitCast(secs), @bitCast(nsecs), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `current1` instead
    ///
    pub const Current1 = current1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
    ///
    /// ## Parameter(s):
    ///
    /// ` _timerType: qnamespace_enums.TimerType `
    ///
    pub fn current1(_timerType: i32) QDeadlineTimer {
        return .{ .ptr = qtc.QDeadlineTimer_Current1(@bitCast(_timerType)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#dtor.QDeadlineTimer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDeadlineTimer `
    ///
    pub fn delete(self: QDeadlineTimer) void {
        qtc.QDeadlineTimer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#public-types)
pub const enums = struct {
    pub const ForeverConstant = enum {
        pub const Forever: i32 = 0;
    };
};
