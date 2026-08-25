const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qelapsedtimer_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html)
pub const QElapsedTimer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QElapsedTimer,

    pub const _is_QElapsedTimer = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QElapsedTimer object in C++ memory
    ///
    pub fn new() QElapsedTimer {
        return .{ .ptr = qtc.QElapsedTimer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QElapsedTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn new2(other: anytype) QElapsedTimer {
        comptime _ = @TypeOf(other)._is_QElapsedTimer;
        return .{ .ptr = qtc.QElapsedTimer_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QElapsedTimer object and invalidate the source QElapsedTimer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn new3(other: anytype) QElapsedTimer {
        comptime _ = @TypeOf(other)._is_QElapsedTimer;
        return .{ .ptr = qtc.QElapsedTimer_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn copyAssign(self: QElapsedTimer, other: QElapsedTimer) void {
        qtc.QElapsedTimer_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn moveAssign(self: QElapsedTimer, other: QElapsedTimer) void {
        qtc.QElapsedTimer_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `clockType` instead
    ///
    pub const ClockType = clockType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#clockType)
    ///
    /// ## Returns:
    ///
    /// ` qelapsedtimer_enums.ClockType `
    ///
    pub fn clockType() i32 {
        return qtc.QElapsedTimer_ClockType();
    }

    /// ### DEPRECATED: Use `isMonotonic` instead
    ///
    pub const IsMonotonic = isMonotonic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#isMonotonic)
    ///
    pub fn isMonotonic() bool {
        return qtc.QElapsedTimer_IsMonotonic();
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn start(self: QElapsedTimer) void {
        qtc.QElapsedTimer_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `restart` instead
    ///
    pub const Restart = restart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#restart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn restart(self: QElapsedTimer) i64 {
        return qtc.QElapsedTimer_Restart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn invalidate(self: QElapsedTimer) void {
        qtc.QElapsedTimer_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn isValid(self: QElapsedTimer) bool {
        return qtc.QElapsedTimer_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nsecsElapsed` instead
    ///
    pub const NsecsElapsed = nsecsElapsed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#nsecsElapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn nsecsElapsed(self: QElapsedTimer) i64 {
        return qtc.QElapsedTimer_NsecsElapsed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `elapsed` instead
    ///
    pub const Elapsed = elapsed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#elapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn elapsed(self: QElapsedTimer) i64 {
        return qtc.QElapsedTimer_Elapsed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasExpired` instead
    ///
    pub const HasExpired = hasExpired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#hasExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` timeout: i64 `
    ///
    pub fn hasExpired(self: QElapsedTimer, timeout: i64) bool {
        return qtc.QElapsedTimer_HasExpired(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `msecsSinceReference` instead
    ///
    pub const MsecsSinceReference = msecsSinceReference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsSinceReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn msecsSinceReference(self: QElapsedTimer) i64 {
        return qtc.QElapsedTimer_MsecsSinceReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `msecsTo` instead
    ///
    pub const MsecsTo = msecsTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn msecsTo(self: QElapsedTimer, other: anytype) i64 {
        comptime _ = @TypeOf(other)._is_QElapsedTimer;
        return qtc.QElapsedTimer_MsecsTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `secsTo` instead
    ///
    pub const SecsTo = secsTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#secsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn secsTo(self: QElapsedTimer, other: anytype) i64 {
        comptime _ = @TypeOf(other)._is_QElapsedTimer;
        return qtc.QElapsedTimer_SecsTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#dtor.QElapsedTimer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn delete(self: QElapsedTimer) void {
        qtc.QElapsedTimer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#public-types)
pub const enums = struct {
    pub const ClockType = enum {
        pub const SystemTime: i32 = 0;
        pub const MonotonicClock: i32 = 1;
        pub const MachAbsoluteTime: i32 = 2;
        pub const PerformanceCounter: i32 = 3;
    };
};
