const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html)
pub const QMediaTimeRange = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMediaTimeRange,

    pub const _is_QMediaTimeRange = {};

    /// New constructs a new QMediaTimeRange object.
    ///
    pub fn New() QMediaTimeRange {
        return .{ .ptr = qtc.QMediaTimeRange_new() };
    }

    /// New2 constructs a new QMediaTimeRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` start: i64 `
    ///
    /// ` end: i64 `
    ///
    pub fn New2(start: i64, end: i64) QMediaTimeRange {
        return .{ .ptr = qtc.QMediaTimeRange_new2(@bitCast(start), @bitCast(end)) };
    }

    /// New3 constructs a new QMediaTimeRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn New3(param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange_new3(@ptrCast(param1.ptr)) };
    }

    /// New4 constructs a new QMediaTimeRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` range: QMediaTimeRange `
    ///
    pub fn New4(range: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(range)._is_QMediaTimeRange;
        return .{ .ptr = qtc.QMediaTimeRange_new4(@ptrCast(range.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn OperatorAssign(self: QMediaTimeRange, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        qtc.QMediaTimeRange_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` other: QMediaTimeRange `
    ///
    pub fn Swap(self: QMediaTimeRange, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMediaTimeRange;
        qtc.QMediaTimeRange_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn Detach(self: QMediaTimeRange) void {
        qtc.QMediaTimeRange_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn OperatorAssign2(self: QMediaTimeRange, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        qtc.QMediaTimeRange_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#earliestTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn EarliestTime(self: QMediaTimeRange) i64 {
        return qtc.QMediaTimeRange_EarliestTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#latestTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn LatestTime(self: QMediaTimeRange) i64 {
        return qtc.QMediaTimeRange_LatestTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#intervals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Intervals(self: QMediaTimeRange, allocator: std.mem.Allocator) []QMediaTimeRange__Interval {
        const _arr: qtc.libqt_list = qtc.QMediaTimeRange_Intervals(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMediaTimeRange__Interval, _arr.len) catch @panic("qmediatimerange.Intervals: Memory allocation failed");
        const _data: [*]QtC.QMediaTimeRange__Interval = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn IsEmpty(self: QMediaTimeRange) bool {
        return qtc.QMediaTimeRange_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#isContinuous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn IsContinuous(self: QMediaTimeRange) bool {
        return qtc.QMediaTimeRange_IsContinuous(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` time: i64 `
    ///
    pub fn Contains(self: QMediaTimeRange, time: i64) bool {
        return qtc.QMediaTimeRange_Contains(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` start: i64 `
    ///
    /// ` end: i64 `
    ///
    pub fn AddInterval(self: QMediaTimeRange, start: i64, end: i64) void {
        qtc.QMediaTimeRange_AddInterval(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` interval: QMediaTimeRange__Interval `
    ///
    pub fn AddInterval2(self: QMediaTimeRange, interval: anytype) void {
        comptime _ = @TypeOf(interval)._is_QMediaTimeRange__Interval;
        qtc.QMediaTimeRange_AddInterval2(@ptrCast(self.ptr), @ptrCast(interval.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn AddTimeRange(self: QMediaTimeRange, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        qtc.QMediaTimeRange_AddTimeRange(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` start: i64 `
    ///
    /// ` end: i64 `
    ///
    pub fn RemoveInterval(self: QMediaTimeRange, start: i64, end: i64) void {
        qtc.QMediaTimeRange_RemoveInterval(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` interval: QMediaTimeRange__Interval `
    ///
    pub fn RemoveInterval2(self: QMediaTimeRange, interval: anytype) void {
        comptime _ = @TypeOf(interval)._is_QMediaTimeRange__Interval;
        qtc.QMediaTimeRange_RemoveInterval2(@ptrCast(self.ptr), @ptrCast(interval.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn RemoveTimeRange(self: QMediaTimeRange, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        qtc.QMediaTimeRange_RemoveTimeRange(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn OperatorPlusAssign(self: QMediaTimeRange, param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        return .{ .ptr = qtc.QMediaTimeRange_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn OperatorPlusAssign2(self: QMediaTimeRange, param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange_OperatorPlusAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn OperatorMinusAssign(self: QMediaTimeRange, param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        return .{ .ptr = qtc.QMediaTimeRange_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn OperatorMinusAssign2(self: QMediaTimeRange, param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange_OperatorMinusAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn Clear(self: QMediaTimeRange) void {
        qtc.QMediaTimeRange_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#dtor.QMediaTimeRange)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn Delete(self: QMediaTimeRange) void {
        qtc.QMediaTimeRange_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html)
pub const QMediaTimeRange__Interval = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMediaTimeRange__Interval,

    pub const _is_QMediaTimeRange__Interval = {};

    /// New constructs a new QMediaTimeRange::Interval object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMediaTimeRange__Interval `
    ///
    pub fn New(other: anytype) QMediaTimeRange__Interval {
        comptime _ = @TypeOf(other)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMediaTimeRange::Interval object and invalidates the source QMediaTimeRange::Interval object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMediaTimeRange__Interval `
    ///
    pub fn New2(other: anytype) QMediaTimeRange__Interval {
        comptime _ = @TypeOf(other)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMediaTimeRange::Interval object.
    ///
    pub fn New3() QMediaTimeRange__Interval {
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new3() };
    }

    /// New4 constructs a new QMediaTimeRange::Interval object.
    ///
    /// ## Parameter(s):
    ///
    /// ` start: i64 `
    ///
    /// ` end: i64 `
    ///
    pub fn New4(start: i64, end: i64) QMediaTimeRange__Interval {
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new4(@bitCast(start), @bitCast(end)) };
    }

    /// New5 constructs a new QMediaTimeRange::Interval object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn New5(param1: anytype) QMediaTimeRange__Interval {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new5(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    /// ` other: QMediaTimeRange__Interval `
    ///
    pub fn CopyAssign(self: QMediaTimeRange__Interval, other: QMediaTimeRange__Interval) void {
        qtc.QMediaTimeRange__Interval_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    /// ` other: QMediaTimeRange__Interval `
    ///
    pub fn MoveAssign(self: QMediaTimeRange__Interval, other: QMediaTimeRange__Interval) void {
        qtc.QMediaTimeRange__Interval_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn Start(self: QMediaTimeRange__Interval) i64 {
        return qtc.QMediaTimeRange__Interval_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn End(self: QMediaTimeRange__Interval) i64 {
        return qtc.QMediaTimeRange__Interval_End(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    /// ` time: i64 `
    ///
    pub fn Contains(self: QMediaTimeRange__Interval, time: i64) bool {
        return qtc.QMediaTimeRange__Interval_Contains(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#isNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn IsNormal(self: QMediaTimeRange__Interval) bool {
        return qtc.QMediaTimeRange__Interval_IsNormal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn Normalized(self: QMediaTimeRange__Interval) QMediaTimeRange__Interval {
        return .{ .ptr = qtc.QMediaTimeRange__Interval_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    /// ` offset: i64 `
    ///
    pub fn Translated(self: QMediaTimeRange__Interval, offset: i64) QMediaTimeRange__Interval {
        return .{ .ptr = qtc.QMediaTimeRange__Interval_Translated(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn Delete(self: QMediaTimeRange__Interval) void {
        qtc.QMediaTimeRange__Interval_Delete(@ptrCast(self.ptr));
    }
};
