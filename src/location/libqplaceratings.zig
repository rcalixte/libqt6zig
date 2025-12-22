const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html)
pub const qplaceratings = struct {
    /// New constructs a new QPlaceRatings object.
    ///
    pub fn New() QtC.QPlaceRatings {
        return qtc.QPlaceRatings_new();
    }

    /// New2 constructs a new QPlaceRatings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceRatings `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceRatings {
        return qtc.QPlaceRatings_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    /// ` other: QtC.QPlaceRatings `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceRatings_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    /// ` other: QtC.QPlaceRatings `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceRatings_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#average)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    pub fn Average(self: ?*anyopaque) f64 {
        return qtc.QPlaceRatings_Average(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setAverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    /// ` average: f64 `
    ///
    pub fn SetAverage(self: ?*anyopaque, average: f64) void {
        qtc.QPlaceRatings_SetAverage(@ptrCast(self), @floatCast(average));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QPlaceRatings_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    /// ` count: i32 `
    ///
    pub fn SetCount(self: ?*anyopaque, count: i32) void {
        qtc.QPlaceRatings_SetCount(@ptrCast(self), @intCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#maximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    pub fn Maximum(self: ?*anyopaque) f64 {
        return qtc.QPlaceRatings_Maximum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    /// ` max: f64 `
    ///
    pub fn SetMaximum(self: ?*anyopaque, max: f64) void {
        qtc.QPlaceRatings_SetMaximum(@ptrCast(self), @floatCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPlaceRatings_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#dtor.QPlaceRatings)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceRatings `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceRatings_Delete(@ptrCast(self));
    }
};
