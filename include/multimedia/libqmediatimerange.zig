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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMediaTimeRange object in C++ memory
    ///
    pub fn new() QMediaTimeRange {
        return .{ .ptr = qtc.QMediaTimeRange_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMediaTimeRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` start: i64 `
    ///
    /// ` end: i64 `
    ///
    pub fn new2(start: i64, end: i64) QMediaTimeRange {
        return .{ .ptr = qtc.QMediaTimeRange_new2(@bitCast(start), @bitCast(end)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMediaTimeRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn new3(param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMediaTimeRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` range: QMediaTimeRange `
    ///
    pub fn new4(range: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(range)._is_QMediaTimeRange;
        return .{ .ptr = qtc.QMediaTimeRange_new4(@ptrCast(range.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn operatorAssign(self: QMediaTimeRange, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        qtc.QMediaTimeRange_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` other: QMediaTimeRange `
    ///
    pub fn swap(self: QMediaTimeRange, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMediaTimeRange;
        qtc.QMediaTimeRange_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn detach(self: QMediaTimeRange) void {
        qtc.QMediaTimeRange_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn operatorAssign2(self: QMediaTimeRange, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        qtc.QMediaTimeRange_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `earliestTime` instead
    ///
    pub const EarliestTime = earliestTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#earliestTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn earliestTime(self: QMediaTimeRange) i64 {
        return qtc.QMediaTimeRange_EarliestTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `latestTime` instead
    ///
    pub const LatestTime = latestTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#latestTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn latestTime(self: QMediaTimeRange) i64 {
        return qtc.QMediaTimeRange_LatestTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `intervals` instead
    ///
    pub const Intervals = intervals;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#intervals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn intervals(self: QMediaTimeRange, allocator: std.mem.Allocator) []QMediaTimeRange__Interval {
        const _arr: qtc.libqt_list = qtc.QMediaTimeRange_Intervals(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMediaTimeRange__Interval, _arr.len) catch @panic("QMediaTimeRange.intervals: Memory allocation failed");
        const _data_val: [*]QtC.QMediaTimeRange__Interval = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn isEmpty(self: QMediaTimeRange) bool {
        return qtc.QMediaTimeRange_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isContinuous` instead
    ///
    pub const IsContinuous = isContinuous;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#isContinuous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn isContinuous(self: QMediaTimeRange) bool {
        return qtc.QMediaTimeRange_IsContinuous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` time: i64 `
    ///
    pub fn contains(self: QMediaTimeRange, time: i64) bool {
        return qtc.QMediaTimeRange_Contains(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `addInterval` instead
    ///
    pub const AddInterval = addInterval;

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
    pub fn addInterval(self: QMediaTimeRange, start: i64, end: i64) void {
        qtc.QMediaTimeRange_AddInterval(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `addInterval2` instead
    ///
    pub const AddInterval2 = addInterval2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` interval: QMediaTimeRange__Interval `
    ///
    pub fn addInterval2(self: QMediaTimeRange, interval: anytype) void {
        comptime _ = @TypeOf(interval)._is_QMediaTimeRange__Interval;
        qtc.QMediaTimeRange_AddInterval2(@ptrCast(self.ptr), @ptrCast(interval.ptr));
    }

    /// ### DEPRECATED: Use `addTimeRange` instead
    ///
    pub const AddTimeRange = addTimeRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn addTimeRange(self: QMediaTimeRange, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        qtc.QMediaTimeRange_AddTimeRange(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `removeInterval` instead
    ///
    pub const RemoveInterval = removeInterval;

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
    pub fn removeInterval(self: QMediaTimeRange, start: i64, end: i64) void {
        qtc.QMediaTimeRange_RemoveInterval(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `removeInterval2` instead
    ///
    pub const RemoveInterval2 = removeInterval2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` interval: QMediaTimeRange__Interval `
    ///
    pub fn removeInterval2(self: QMediaTimeRange, interval: anytype) void {
        comptime _ = @TypeOf(interval)._is_QMediaTimeRange__Interval;
        qtc.QMediaTimeRange_RemoveInterval2(@ptrCast(self.ptr), @ptrCast(interval.ptr));
    }

    /// ### DEPRECATED: Use `removeTimeRange` instead
    ///
    pub const RemoveTimeRange = removeTimeRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn removeTimeRange(self: QMediaTimeRange, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        qtc.QMediaTimeRange_RemoveTimeRange(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn operatorPlusAssign(self: QMediaTimeRange, param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        return .{ .ptr = qtc.QMediaTimeRange_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign2` instead
    ///
    pub const OperatorPlusAssign2 = operatorPlusAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn operatorPlusAssign2(self: QMediaTimeRange, param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange_OperatorPlusAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange `
    ///
    pub fn operatorMinusAssign(self: QMediaTimeRange, param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange;
        return .{ .ptr = qtc.QMediaTimeRange_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign2` instead
    ///
    pub const OperatorMinusAssign2 = operatorMinusAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn operatorMinusAssign2(self: QMediaTimeRange, param1: anytype) QMediaTimeRange {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange_OperatorMinusAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn clear(self: QMediaTimeRange) void {
        qtc.QMediaTimeRange_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#dtor.QMediaTimeRange)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaTimeRange `
    ///
    pub fn delete(self: QMediaTimeRange) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMediaTimeRange::Interval object in C++ memory
    ///
    pub fn new() QMediaTimeRange__Interval {
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMediaTimeRange::Interval object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMediaTimeRange__Interval `
    ///
    pub fn new2(other: anytype) QMediaTimeRange__Interval {
        comptime _ = @TypeOf(other)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMediaTimeRange::Interval object and invalidate the source QMediaTimeRange::Interval object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMediaTimeRange__Interval `
    ///
    pub fn new3(other: anytype) QMediaTimeRange__Interval {
        comptime _ = @TypeOf(other)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMediaTimeRange::Interval object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _start: i64 `
    ///
    /// ` _end: i64 `
    ///
    pub fn new4(_start: i64, _end: i64) QMediaTimeRange__Interval {
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new4(@bitCast(_start), @bitCast(_end)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QMediaTimeRange::Interval object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMediaTimeRange__Interval `
    ///
    pub fn new5(param1: anytype) QMediaTimeRange__Interval {
        comptime _ = @TypeOf(param1)._is_QMediaTimeRange__Interval;
        return .{ .ptr = qtc.QMediaTimeRange__Interval_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    /// ` other: QMediaTimeRange__Interval `
    ///
    pub fn copyAssign(self: QMediaTimeRange__Interval, other: QMediaTimeRange__Interval) void {
        qtc.QMediaTimeRange__Interval_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    /// ` other: QMediaTimeRange__Interval `
    ///
    pub fn moveAssign(self: QMediaTimeRange__Interval, other: QMediaTimeRange__Interval) void {
        qtc.QMediaTimeRange__Interval_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn start(self: QMediaTimeRange__Interval) i64 {
        return qtc.QMediaTimeRange__Interval_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn end(self: QMediaTimeRange__Interval) i64 {
        return qtc.QMediaTimeRange__Interval_End(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    /// ` time: i64 `
    ///
    pub fn contains(self: QMediaTimeRange__Interval, time: i64) bool {
        return qtc.QMediaTimeRange__Interval_Contains(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `isNormal` instead
    ///
    pub const IsNormal = isNormal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#isNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn isNormal(self: QMediaTimeRange__Interval) bool {
        return qtc.QMediaTimeRange__Interval_IsNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalized` instead
    ///
    pub const Normalized = normalized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn normalized(self: QMediaTimeRange__Interval) QMediaTimeRange__Interval {
        return .{ .ptr = qtc.QMediaTimeRange__Interval_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    /// ` offset: i64 `
    ///
    pub fn translated(self: QMediaTimeRange__Interval, offset: i64) QMediaTimeRange__Interval {
        return .{ .ptr = qtc.QMediaTimeRange__Interval_Translated(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaTimeRange__Interval `
    ///
    pub fn delete(self: QMediaTimeRange__Interval) void {
        qtc.QMediaTimeRange__Interval_Delete(@ptrCast(self.ptr));
    }
};
