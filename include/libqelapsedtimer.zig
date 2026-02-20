const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qelapsedtimer_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html)
pub const qelapsedtimer = struct {
    /// New constructs a new QElapsedTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QElapsedTimer `
    ///
    pub fn New(other: ?*anyopaque) QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new(@ptrCast(other));
    }

    /// New2 constructs a new QElapsedTimer object and invalidates the source QElapsedTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QElapsedTimer `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new2(@ptrCast(other));
    }

    /// New3 constructs a new QElapsedTimer object.
    ///
    pub fn New3() QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    /// ` other: QtC.QElapsedTimer `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QElapsedTimer_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    /// ` other: QtC.QElapsedTimer `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QElapsedTimer_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#clockType)
    ///
    /// ## Returns:
    ///
    /// ` qelapsedtimer_enums.ClockType `
    ///
    pub fn ClockType() i32 {
        return qtc.QElapsedTimer_ClockType();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#isMonotonic)
    ///
    pub fn IsMonotonic() bool {
        return qtc.QElapsedTimer_IsMonotonic();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    pub fn Start(self: ?*anyopaque) void {
        qtc.QElapsedTimer_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#restart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    pub fn Restart(self: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_Restart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QElapsedTimer_Invalidate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QElapsedTimer_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#nsecsElapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    pub fn NsecsElapsed(self: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_NsecsElapsed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#elapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    pub fn Elapsed(self: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_Elapsed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#hasExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    /// ` timeout: i64 `
    ///
    pub fn HasExpired(self: ?*anyopaque, timeout: i64) bool {
        return qtc.QElapsedTimer_HasExpired(@ptrCast(self), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsSinceReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    pub fn MsecsSinceReference(self: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_MsecsSinceReference(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    /// ` other: QtC.QElapsedTimer `
    ///
    pub fn MsecsTo(self: ?*anyopaque, other: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_MsecsTo(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#secsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    /// ` other: QtC.QElapsedTimer `
    ///
    pub fn SecsTo(self: ?*anyopaque, other: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_SecsTo(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#dtor.QElapsedTimer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QElapsedTimer `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QElapsedTimer_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#public-types)
pub const enums = struct {
    pub const ClockType = enum(i32) {
        pub const SystemTime: i32 = 0;
        pub const MonotonicClock: i32 = 1;
        pub const MachAbsoluteTime: i32 = 2;
        pub const PerformanceCounter: i32 = 3;
    };
};
