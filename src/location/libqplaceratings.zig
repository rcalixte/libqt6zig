const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html)
pub const QPlaceRatings = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceRatings,

    pub const _is_QPlaceRatings = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceRatings object in C++ memory
    ///
    pub fn new() QPlaceRatings {
        return .{ .ptr = qtc.QPlaceRatings_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceRatings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceRatings `
    ///
    pub fn new2(other: anytype) QPlaceRatings {
        comptime _ = @TypeOf(other)._is_QPlaceRatings;
        return .{ .ptr = qtc.QPlaceRatings_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` other: QPlaceRatings `
    ///
    pub fn operatorAssign(self: QPlaceRatings, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceRatings;
        qtc.QPlaceRatings_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` other: QPlaceRatings `
    ///
    pub fn swap(self: QPlaceRatings, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceRatings;
        qtc.QPlaceRatings_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `average` instead
    ///
    pub const Average = average;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#average)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn average(self: QPlaceRatings) f64 {
        return qtc.QPlaceRatings_Average(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAverage` instead
    ///
    pub const SetAverage = setAverage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setAverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` _average: f64 `
    ///
    pub fn setAverage(self: QPlaceRatings, _average: f64) void {
        qtc.QPlaceRatings_SetAverage(@ptrCast(self.ptr), @bitCast(_average));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn count(self: QPlaceRatings) i32 {
        return qtc.QPlaceRatings_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCount` instead
    ///
    pub const SetCount = setCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` _count: i32 `
    ///
    pub fn setCount(self: QPlaceRatings, _count: i32) void {
        qtc.QPlaceRatings_SetCount(@ptrCast(self.ptr), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `maximum` instead
    ///
    pub const Maximum = maximum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#maximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn maximum(self: QPlaceRatings) f64 {
        return qtc.QPlaceRatings_Maximum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximum` instead
    ///
    pub const SetMaximum = setMaximum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` max: f64 `
    ///
    pub fn setMaximum(self: QPlaceRatings, max: f64) void {
        qtc.QPlaceRatings_SetMaximum(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn isEmpty(self: QPlaceRatings) bool {
        return qtc.QPlaceRatings_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#dtor.QPlaceRatings)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn delete(self: QPlaceRatings) void {
        qtc.QPlaceRatings_Delete(@ptrCast(self.ptr));
    }
};
