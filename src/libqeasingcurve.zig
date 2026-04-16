const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPointF = @import("libqt6").QPointF;
const qeasingcurve_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html)
pub const QEasingCurve = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QEasingCurve,

    pub const _is_QEasingCurve = {};

    /// New constructs a new QEasingCurve object.
    ///
    pub fn New() QEasingCurve {
        return .{ .ptr = qtc.QEasingCurve_new() };
    }

    /// New2 constructs a new QEasingCurve object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QEasingCurve `
    ///
    pub fn New2(other: anytype) QEasingCurve {
        comptime _ = @TypeOf(other)._is_QEasingCurve;
        return .{ .ptr = qtc.QEasingCurve_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QEasingCurve object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qeasingcurve_enums.Type `
    ///
    pub fn New3(typeVal: i32) QEasingCurve {
        return .{ .ptr = qtc.QEasingCurve_new3(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` other: QEasingCurve `
    ///
    pub fn OperatorAssign(self: QEasingCurve, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QEasingCurve;
        qtc.QEasingCurve_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` other: QEasingCurve `
    ///
    pub fn Swap(self: QEasingCurve, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QEasingCurve;
        qtc.QEasingCurve_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#amplitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    pub fn Amplitude(self: QEasingCurve) f64 {
        return qtc.QEasingCurve_Amplitude(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#setAmplitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` amplitude: f64 `
    ///
    pub fn SetAmplitude(self: QEasingCurve, amplitude: f64) void {
        qtc.QEasingCurve_SetAmplitude(@ptrCast(self.ptr), @bitCast(amplitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#period)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    pub fn Period(self: QEasingCurve) f64 {
        return qtc.QEasingCurve_Period(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#setPeriod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` period: f64 `
    ///
    pub fn SetPeriod(self: QEasingCurve, period: f64) void {
        qtc.QEasingCurve_SetPeriod(@ptrCast(self.ptr), @bitCast(period));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#overshoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    pub fn Overshoot(self: QEasingCurve) f64 {
        return qtc.QEasingCurve_Overshoot(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#setOvershoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` overshoot: f64 `
    ///
    pub fn SetOvershoot(self: QEasingCurve, overshoot: f64) void {
        qtc.QEasingCurve_SetOvershoot(@ptrCast(self.ptr), @bitCast(overshoot));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#addCubicBezierSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` c1: QPointF `
    ///
    /// ` c2: QPointF `
    ///
    /// ` endPoint: QPointF `
    ///
    pub fn AddCubicBezierSegment(self: QEasingCurve, c1: anytype, c2: anytype, endPoint: anytype) void {
        comptime _ = @TypeOf(c1)._is_QPointF;
        comptime _ = @TypeOf(c2)._is_QPointF;
        comptime _ = @TypeOf(endPoint)._is_QPointF;
        qtc.QEasingCurve_AddCubicBezierSegment(@ptrCast(self.ptr), @ptrCast(c1.ptr), @ptrCast(c2.ptr), @ptrCast(endPoint.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#addTCBSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` nextPoint: QPointF `
    ///
    /// ` t: f64 `
    ///
    /// ` c: f64 `
    ///
    /// ` b: f64 `
    ///
    pub fn AddTCBSegment(self: QEasingCurve, nextPoint: anytype, t: f64, c: f64, b: f64) void {
        comptime _ = @TypeOf(nextPoint)._is_QPointF;
        qtc.QEasingCurve_AddTCBSegment(@ptrCast(self.ptr), @ptrCast(nextPoint.ptr), @bitCast(t), @bitCast(c), @bitCast(b));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#toCubicSpline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCubicSpline(self: QEasingCurve, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QEasingCurve_ToCubicSpline(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qeasingcurve.ToCubicSpline: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ## Returns:
    ///
    /// ` qeasingcurve_enums.Type `
    ///
    pub fn Type(self: QEasingCurve) i32 {
        return qtc.QEasingCurve_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` typeVal: qeasingcurve_enums.Type `
    ///
    pub fn SetType(self: QEasingCurve, typeVal: i32) void {
        qtc.QEasingCurve_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#setCustomType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` func: *const fn (funcparam1: f64) callconv(.c) f64 `
    ///
    pub fn SetCustomType(self: QEasingCurve, func: *const fn (f64) callconv(.c) f64) void {
        qtc.QEasingCurve_SetCustomType(@ptrCast(self.ptr), @bitCast(@intFromPtr(func)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#customType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: f64) callconv(.c) f64 `
    ///
    pub fn CustomType(self: QEasingCurve) ?*const fn (f64) callconv(.c) f64 {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QEasingCurve_CustomType(@ptrCast(self.ptr)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#valueForProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEasingCurve `
    ///
    /// ` progress: f64 `
    ///
    pub fn ValueForProgress(self: QEasingCurve, progress: f64) f64 {
        return qtc.QEasingCurve_ValueForProgress(@ptrCast(self.ptr), @bitCast(progress));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#dtor.QEasingCurve)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QEasingCurve `
    ///
    pub fn Delete(self: QEasingCurve) void {
        qtc.QEasingCurve_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qeasingcurve.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const Linear: i32 = 0;
        pub const InQuad: i32 = 1;
        pub const OutQuad: i32 = 2;
        pub const InOutQuad: i32 = 3;
        pub const OutInQuad: i32 = 4;
        pub const InCubic: i32 = 5;
        pub const OutCubic: i32 = 6;
        pub const InOutCubic: i32 = 7;
        pub const OutInCubic: i32 = 8;
        pub const InQuart: i32 = 9;
        pub const OutQuart: i32 = 10;
        pub const InOutQuart: i32 = 11;
        pub const OutInQuart: i32 = 12;
        pub const InQuint: i32 = 13;
        pub const OutQuint: i32 = 14;
        pub const InOutQuint: i32 = 15;
        pub const OutInQuint: i32 = 16;
        pub const InSine: i32 = 17;
        pub const OutSine: i32 = 18;
        pub const InOutSine: i32 = 19;
        pub const OutInSine: i32 = 20;
        pub const InExpo: i32 = 21;
        pub const OutExpo: i32 = 22;
        pub const InOutExpo: i32 = 23;
        pub const OutInExpo: i32 = 24;
        pub const InCirc: i32 = 25;
        pub const OutCirc: i32 = 26;
        pub const InOutCirc: i32 = 27;
        pub const OutInCirc: i32 = 28;
        pub const InElastic: i32 = 29;
        pub const OutElastic: i32 = 30;
        pub const InOutElastic: i32 = 31;
        pub const OutInElastic: i32 = 32;
        pub const InBack: i32 = 33;
        pub const OutBack: i32 = 34;
        pub const InOutBack: i32 = 35;
        pub const OutInBack: i32 = 36;
        pub const InBounce: i32 = 37;
        pub const OutBounce: i32 = 38;
        pub const InOutBounce: i32 = 39;
        pub const OutInBounce: i32 = 40;
        pub const InCurve: i32 = 41;
        pub const OutCurve: i32 = 42;
        pub const SineCurve: i32 = 43;
        pub const CosineCurve: i32 = 44;
        pub const BezierSpline: i32 = 45;
        pub const TCBSpline: i32 = 46;
        pub const Custom: i32 = 47;
        pub const NCurveTypes: i32 = 48;
    };
};
