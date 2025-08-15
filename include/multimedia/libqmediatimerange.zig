const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qmediatimerange.html
pub const qmediatimerange = struct {
    /// New constructs a new QMediaTimeRange object.
    ///
    ///
    pub fn New() QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_new();
    }

    /// New2 constructs a new QMediaTimeRange object.
    ///
    /// ``` start: i64, end: i64 ```
    pub fn New2(start: i64, end: i64) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_new2(@intCast(start), @intCast(end));
    }

    /// New3 constructs a new QMediaTimeRange object.
    ///
    /// ``` param1: QtC.QMediaTimeRange__Interval ```
    pub fn New3(param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_new3(@ptrCast(param1));
    }

    /// New4 constructs a new QMediaTimeRange object.
    ///
    /// ``` range: QtC.QMediaTimeRange ```
    pub fn New4(range: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_new4(@ptrCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
    ///
    /// ``` self: QtC.QMediaTimeRange, param1: QtC.QMediaTimeRange ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMediaTimeRange_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#swap)
    ///
    /// ``` self: QtC.QMediaTimeRange, other: QtC.QMediaTimeRange ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaTimeRange_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#detach)
    ///
    /// ``` self: QtC.QMediaTimeRange ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QMediaTimeRange_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
    ///
    /// ``` self: QtC.QMediaTimeRange, param1: QtC.QMediaTimeRange__Interval ```
    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMediaTimeRange_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#earliestTime)
    ///
    /// ``` self: QtC.QMediaTimeRange ```
    pub fn EarliestTime(self: ?*anyopaque) i64 {
        return qtc.QMediaTimeRange_EarliestTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#latestTime)
    ///
    /// ``` self: QtC.QMediaTimeRange ```
    pub fn LatestTime(self: ?*anyopaque) i64 {
        return qtc.QMediaTimeRange_LatestTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#intervals)
    ///
    /// ``` self: QtC.QMediaTimeRange, allocator: std.mem.Allocator ```
    pub fn Intervals(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QMediaTimeRange__Interval {
        const _arr: qtc.libqt_list = qtc.QMediaTimeRange_Intervals(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QMediaTimeRange__Interval, _arr.len) catch @panic("qmediatimerange.Intervals: Memory allocation failed");
        const _data: [*]QtC.QMediaTimeRange__Interval = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#isEmpty)
    ///
    /// ``` self: QtC.QMediaTimeRange ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QMediaTimeRange_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#isContinuous)
    ///
    /// ``` self: QtC.QMediaTimeRange ```
    pub fn IsContinuous(self: ?*anyopaque) bool {
        return qtc.QMediaTimeRange_IsContinuous(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#contains)
    ///
    /// ``` self: QtC.QMediaTimeRange, time: i64 ```
    pub fn Contains(self: ?*anyopaque, time: i64) bool {
        return qtc.QMediaTimeRange_Contains(@ptrCast(self), @intCast(time));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
    ///
    /// ``` self: QtC.QMediaTimeRange, start: i64, end: i64 ```
    pub fn AddInterval(self: ?*anyopaque, start: i64, end: i64) void {
        qtc.QMediaTimeRange_AddInterval(@ptrCast(self), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
    ///
    /// ``` self: QtC.QMediaTimeRange, interval: QtC.QMediaTimeRange__Interval ```
    pub fn AddInterval2(self: ?*anyopaque, interval: ?*anyopaque) void {
        qtc.QMediaTimeRange_AddInterval2(@ptrCast(self), @ptrCast(interval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#addTimeRange)
    ///
    /// ``` self: QtC.QMediaTimeRange, param1: QtC.QMediaTimeRange ```
    pub fn AddTimeRange(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMediaTimeRange_AddTimeRange(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
    ///
    /// ``` self: QtC.QMediaTimeRange, start: i64, end: i64 ```
    pub fn RemoveInterval(self: ?*anyopaque, start: i64, end: i64) void {
        qtc.QMediaTimeRange_RemoveInterval(@ptrCast(self), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
    ///
    /// ``` self: QtC.QMediaTimeRange, interval: QtC.QMediaTimeRange__Interval ```
    pub fn RemoveInterval2(self: ?*anyopaque, interval: ?*anyopaque) void {
        qtc.QMediaTimeRange_RemoveInterval2(@ptrCast(self), @ptrCast(interval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#removeTimeRange)
    ///
    /// ``` self: QtC.QMediaTimeRange, param1: QtC.QMediaTimeRange ```
    pub fn RemoveTimeRange(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMediaTimeRange_RemoveTimeRange(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
    ///
    /// ``` self: QtC.QMediaTimeRange, param1: QtC.QMediaTimeRange ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_OperatorPlusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
    ///
    /// ``` self: QtC.QMediaTimeRange, param1: QtC.QMediaTimeRange__Interval ```
    pub fn OperatorPlusAssign2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_OperatorPlusAssign2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
    ///
    /// ``` self: QtC.QMediaTimeRange, param1: QtC.QMediaTimeRange ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_OperatorMinusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
    ///
    /// ``` self: QtC.QMediaTimeRange, param1: QtC.QMediaTimeRange__Interval ```
    pub fn OperatorMinusAssign2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_OperatorMinusAssign2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#clear)
    ///
    /// ``` self: QtC.QMediaTimeRange ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QMediaTimeRange_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#dtor.QMediaTimeRange)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMediaTimeRange ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaTimeRange_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmediatimerange-interval.html
pub const qmediatimerange__interval = struct {
    /// New constructs a new QMediaTimeRange::Interval object.
    ///
    /// ``` other: QtC.QMediaTimeRange__Interval ```
    pub fn New(other: ?*anyopaque) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new(@ptrCast(other));
    }

    /// New2 constructs a new QMediaTimeRange::Interval object and invalidates the source QMediaTimeRange::Interval object.
    ///
    /// ``` other: QtC.QMediaTimeRange__Interval ```
    pub fn New2(other: ?*anyopaque) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMediaTimeRange::Interval object.
    ///
    ///
    pub fn New3() QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new3();
    }

    /// New4 constructs a new QMediaTimeRange::Interval object.
    ///
    /// ``` start: i64, end: i64 ```
    pub fn New4(start: i64, end: i64) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new4(@intCast(start), @intCast(end));
    }

    /// New5 constructs a new QMediaTimeRange::Interval object.
    ///
    /// ``` param1: QtC.QMediaTimeRange__Interval ```
    pub fn New5(param1: ?*anyopaque) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMediaTimeRange__Interval, other: QtC.QMediaTimeRange__Interval ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaTimeRange__Interval_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMediaTimeRange__Interval, other: QtC.QMediaTimeRange__Interval ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaTimeRange__Interval_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange-interval.html#start)
    ///
    /// ``` self: QtC.QMediaTimeRange__Interval ```
    pub fn Start(self: ?*anyopaque) i64 {
        return qtc.QMediaTimeRange__Interval_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange-interval.html#end)
    ///
    /// ``` self: QtC.QMediaTimeRange__Interval ```
    pub fn End(self: ?*anyopaque) i64 {
        return qtc.QMediaTimeRange__Interval_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange-interval.html#contains)
    ///
    /// ``` self: QtC.QMediaTimeRange__Interval, time: i64 ```
    pub fn Contains(self: ?*anyopaque, time: i64) bool {
        return qtc.QMediaTimeRange__Interval_Contains(@ptrCast(self), @intCast(time));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange-interval.html#isNormal)
    ///
    /// ``` self: QtC.QMediaTimeRange__Interval ```
    pub fn IsNormal(self: ?*anyopaque) bool {
        return qtc.QMediaTimeRange__Interval_IsNormal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange-interval.html#normalized)
    ///
    /// ``` self: QtC.QMediaTimeRange__Interval ```
    pub fn Normalized(self: ?*anyopaque) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_Normalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange-interval.html#translated)
    ///
    /// ``` self: QtC.QMediaTimeRange__Interval, offset: i64 ```
    pub fn Translated(self: ?*anyopaque, offset: i64) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_Translated(@ptrCast(self), @intCast(offset));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMediaTimeRange__Interval ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaTimeRange__Interval_Delete(@ptrCast(self));
    }
};
