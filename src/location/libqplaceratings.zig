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

    /// New constructs a new QPlaceRatings object.
    ///
    pub fn New() QPlaceRatings {
        return .{ .ptr = qtc.QPlaceRatings_new() };
    }

    /// New2 constructs a new QPlaceRatings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceRatings `
    ///
    pub fn New2(other: anytype) QPlaceRatings {
        comptime _ = @TypeOf(other)._is_QPlaceRatings;
        return .{ .ptr = qtc.QPlaceRatings_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` other: QPlaceRatings `
    ///
    pub fn OperatorAssign(self: QPlaceRatings, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceRatings;
        qtc.QPlaceRatings_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` other: QPlaceRatings `
    ///
    pub fn Swap(self: QPlaceRatings, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceRatings;
        qtc.QPlaceRatings_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#average)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn Average(self: QPlaceRatings) f64 {
        return qtc.QPlaceRatings_Average(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setAverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` average: f64 `
    ///
    pub fn SetAverage(self: QPlaceRatings, average: f64) void {
        qtc.QPlaceRatings_SetAverage(@ptrCast(self.ptr), @bitCast(average));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn Count(self: QPlaceRatings) i32 {
        return qtc.QPlaceRatings_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` count: i32 `
    ///
    pub fn SetCount(self: QPlaceRatings, count: i32) void {
        qtc.QPlaceRatings_SetCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#maximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn Maximum(self: QPlaceRatings) f64 {
        return qtc.QPlaceRatings_Maximum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    /// ` max: f64 `
    ///
    pub fn SetMaximum(self: QPlaceRatings, max: f64) void {
        qtc.QPlaceRatings_SetMaximum(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn IsEmpty(self: QPlaceRatings) bool {
        return qtc.QPlaceRatings_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#dtor.QPlaceRatings)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceRatings `
    ///
    pub fn Delete(self: QPlaceRatings) void {
        qtc.QPlaceRatings_Delete(@ptrCast(self.ptr));
    }
};
