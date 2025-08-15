const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qelapsedtimer_enums = enums;

/// https://doc.qt.io/qt-6/qelapsedtimer.html
pub const qelapsedtimer = struct {
    /// New constructs a new QElapsedTimer object.
    ///
    /// ``` other: QtC.QElapsedTimer ```
    pub fn New(other: ?*anyopaque) QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new(@ptrCast(other));
    }

    /// New2 constructs a new QElapsedTimer object and invalidates the source QElapsedTimer object.
    ///
    /// ``` other: QtC.QElapsedTimer ```
    pub fn New2(other: ?*anyopaque) QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new2(@ptrCast(other));
    }

    /// New3 constructs a new QElapsedTimer object.
    ///
    ///
    pub fn New3() QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QElapsedTimer, other: QtC.QElapsedTimer ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QElapsedTimer_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QElapsedTimer, other: QtC.QElapsedTimer ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QElapsedTimer_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#clockType)
    ///
    ///
    ///
    /// Returns: ``` qelapsedtimer_enums.ClockType ```
    pub fn ClockType() i64 {
        return qtc.QElapsedTimer_ClockType();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#isMonotonic)
    ///
    ///
    pub fn IsMonotonic() bool {
        return qtc.QElapsedTimer_IsMonotonic();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#start)
    ///
    /// ``` self: QtC.QElapsedTimer ```
    pub fn Start(self: ?*anyopaque) void {
        qtc.QElapsedTimer_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#restart)
    ///
    /// ``` self: QtC.QElapsedTimer ```
    pub fn Restart(self: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_Restart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#invalidate)
    ///
    /// ``` self: QtC.QElapsedTimer ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QElapsedTimer_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#isValid)
    ///
    /// ``` self: QtC.QElapsedTimer ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QElapsedTimer_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#nsecsElapsed)
    ///
    /// ``` self: QtC.QElapsedTimer ```
    pub fn NsecsElapsed(self: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_NsecsElapsed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#elapsed)
    ///
    /// ``` self: QtC.QElapsedTimer ```
    pub fn Elapsed(self: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_Elapsed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#hasExpired)
    ///
    /// ``` self: QtC.QElapsedTimer, timeout: i64 ```
    pub fn HasExpired(self: ?*anyopaque, timeout: i64) bool {
        return qtc.QElapsedTimer_HasExpired(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsSinceReference)
    ///
    /// ``` self: QtC.QElapsedTimer ```
    pub fn MsecsSinceReference(self: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_MsecsSinceReference(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsTo)
    ///
    /// ``` self: QtC.QElapsedTimer, other: QtC.QElapsedTimer ```
    pub fn MsecsTo(self: ?*anyopaque, other: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_MsecsTo(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#secsTo)
    ///
    /// ``` self: QtC.QElapsedTimer, other: QtC.QElapsedTimer ```
    pub fn SecsTo(self: ?*anyopaque, other: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_SecsTo(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#dtor.QElapsedTimer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QElapsedTimer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QElapsedTimer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qelapsedtimer.html#types
pub const enums = struct {
    pub const ClockType = enum {
        pub const SystemTime: i32 = 0;
        pub const MonotonicClock: i32 = 1;
        pub const MachAbsoluteTime: i32 = 2;
        pub const PerformanceCounter: i32 = 3;
    };
};
