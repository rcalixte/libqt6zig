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

    /// New constructs a new QElapsedTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn New(other: anytype) QElapsedTimer {
        comptime _ = @TypeOf(other)._is_QElapsedTimer;
        return .{ .ptr = qtc.QElapsedTimer_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QElapsedTimer object and invalidates the source QElapsedTimer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn New2(other: anytype) QElapsedTimer {
        comptime _ = @TypeOf(other)._is_QElapsedTimer;
        return .{ .ptr = qtc.QElapsedTimer_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QElapsedTimer object.
    ///
    pub fn New3() QElapsedTimer {
        return .{ .ptr = qtc.QElapsedTimer_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn CopyAssign(self: QElapsedTimer, other: QElapsedTimer) void {
        qtc.QElapsedTimer_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn MoveAssign(self: QElapsedTimer, other: QElapsedTimer) void {
        qtc.QElapsedTimer_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
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
    /// ` self: QElapsedTimer `
    ///
    pub fn Start(self: QElapsedTimer) void {
        qtc.QElapsedTimer_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#restart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn Restart(self: QElapsedTimer) i64 {
        return qtc.QElapsedTimer_Restart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn Invalidate(self: QElapsedTimer) void {
        qtc.QElapsedTimer_Invalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn IsValid(self: QElapsedTimer) bool {
        return qtc.QElapsedTimer_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#nsecsElapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn NsecsElapsed(self: QElapsedTimer) i64 {
        return qtc.QElapsedTimer_NsecsElapsed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#elapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn Elapsed(self: QElapsedTimer) i64 {
        return qtc.QElapsedTimer_Elapsed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#hasExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` timeout: i64 `
    ///
    pub fn HasExpired(self: QElapsedTimer, timeout: i64) bool {
        return qtc.QElapsedTimer_HasExpired(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsSinceReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn MsecsSinceReference(self: QElapsedTimer) i64 {
        return qtc.QElapsedTimer_MsecsSinceReference(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn MsecsTo(self: QElapsedTimer, other: anytype) i64 {
        comptime _ = @TypeOf(other)._is_QElapsedTimer;
        return qtc.QElapsedTimer_MsecsTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#secsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QElapsedTimer `
    ///
    /// ` other: QElapsedTimer `
    ///
    pub fn SecsTo(self: QElapsedTimer, other: anytype) i64 {
        comptime _ = @TypeOf(other)._is_QElapsedTimer;
        return qtc.QElapsedTimer_SecsTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#dtor.QElapsedTimer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QElapsedTimer `
    ///
    pub fn Delete(self: QElapsedTimer) void {
        qtc.QElapsedTimer_Delete(@ptrCast(self.ptr));
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
