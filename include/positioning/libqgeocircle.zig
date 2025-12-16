const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeoshape_enums = @import("libqgeoshape.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)
pub const qgeocircle = struct {
    /// New constructs a new QGeoCircle object.
    ///
    pub fn New() QtC.QGeoCircle {
        return qtc.QGeoCircle_new();
    }

    /// New2 constructs a new QGeoCircle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QtC.QGeoCoordinate `
    ///
    pub fn New2(center: ?*anyopaque) QtC.QGeoCircle {
        return qtc.QGeoCircle_new2(@ptrCast(center));
    }

    /// New3 constructs a new QGeoCircle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoCircle `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QGeoCircle {
        return qtc.QGeoCircle_new3(@ptrCast(other));
    }

    /// New4 constructs a new QGeoCircle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoShape `
    ///
    pub fn New4(other: ?*anyopaque) QtC.QGeoCircle {
        return qtc.QGeoCircle_new4(@ptrCast(other));
    }

    /// New5 constructs a new QGeoCircle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QtC.QGeoCoordinate `
    ///
    /// ` radius: f64 `
    ///
    pub fn New5(center: ?*anyopaque, radius: f64) QtC.QGeoCircle {
        return qtc.QGeoCircle_new5(@ptrCast(center), @floatCast(radius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    /// ` other: QtC.QGeoCircle `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoCircle_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    /// ` center: QtC.QGeoCoordinate `
    ///
    pub fn SetCenter(self: ?*anyopaque, center: ?*anyopaque) void {
        qtc.QGeoCircle_SetCenter(@ptrCast(self), @ptrCast(center));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    pub fn Center(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoCircle_Center(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    /// ` radius: f64 `
    ///
    pub fn SetRadius(self: ?*anyopaque, radius: f64) void {
        qtc.QGeoCircle_SetRadius(@ptrCast(self), @floatCast(radius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#radius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    pub fn Radius(self: ?*anyopaque) f64 {
        return qtc.QGeoCircle_Radius(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translate(self: ?*anyopaque, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoCircle_Translate(@ptrCast(self), @floatCast(degreesLatitude), @floatCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translated(self: ?*anyopaque, degreesLatitude: f64, degreesLongitude: f64) QtC.QGeoCircle {
        return qtc.QGeoCircle_Translated(@ptrCast(self), @floatCast(degreesLatitude), @floatCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#extendCircle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn ExtendCircle(self: ?*anyopaque, coordinate: ?*anyopaque) void {
        qtc.QGeoCircle_ExtendCircle(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCircle_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocircle.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QGeoShape_Type(@ptrCast(self));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QGeoShape_IsValid(@ptrCast(self));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn Contains(self: ?*anyopaque, coordinate: ?*anyopaque) bool {
        return qtc.QGeoShape_Contains(@ptrCast(self), @ptrCast(coordinate));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    pub fn BoundingGeoRectangle(self: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#dtor.QGeoCircle)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoCircle `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoCircle_Delete(@ptrCast(self));
    }
};
