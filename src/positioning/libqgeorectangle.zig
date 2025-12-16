const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeoshape_enums = @import("libqgeoshape.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html)
pub const qgeorectangle = struct {
    /// New constructs a new QGeoRectangle object.
    ///
    pub fn New() QtC.QGeoRectangle {
        return qtc.QGeoRectangle_new();
    }

    /// New2 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QtC.QGeoCoordinate `
    ///
    /// ` degreesWidth: f64 `
    ///
    /// ` degreesHeight: f64 `
    ///
    pub fn New2(center: ?*anyopaque, degreesWidth: f64, degreesHeight: f64) QtC.QGeoRectangle {
        return qtc.QGeoRectangle_new2(@ptrCast(center), @floatCast(degreesWidth), @floatCast(degreesHeight));
    }

    /// New3 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topLeft: QtC.QGeoCoordinate `
    ///
    /// ` bottomRight: QtC.QGeoCoordinate `
    ///
    pub fn New3(topLeft: ?*anyopaque, bottomRight: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoRectangle_new3(@ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// New4 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` coordinates: []QtC.QGeoCoordinate `
    ///
    pub fn New4(coordinates: []QtC.QGeoCoordinate) QtC.QGeoRectangle {
        const coordinates_list = qtc.libqt_list{
            .len = coordinates.len,
            .data = @ptrCast(coordinates.ptr),
        };

        return qtc.QGeoRectangle_new4(coordinates_list);
    }

    /// New5 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoRectangle `
    ///
    pub fn New5(other: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoRectangle_new5(@ptrCast(other));
    }

    /// New6 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoShape `
    ///
    pub fn New6(other: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoRectangle_new6(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` other: QtC.QGeoRectangle `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoRectangle_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` topLeft: QtC.QGeoCoordinate `
    ///
    pub fn SetTopLeft(self: ?*anyopaque, topLeft: ?*anyopaque) void {
        qtc.QGeoRectangle_SetTopLeft(@ptrCast(self), @ptrCast(topLeft));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn TopLeft(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoRectangle_TopLeft(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` topRight: QtC.QGeoCoordinate `
    ///
    pub fn SetTopRight(self: ?*anyopaque, topRight: ?*anyopaque) void {
        qtc.QGeoRectangle_SetTopRight(@ptrCast(self), @ptrCast(topRight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#topRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn TopRight(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoRectangle_TopRight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` bottomLeft: QtC.QGeoCoordinate `
    ///
    pub fn SetBottomLeft(self: ?*anyopaque, bottomLeft: ?*anyopaque) void {
        qtc.QGeoRectangle_SetBottomLeft(@ptrCast(self), @ptrCast(bottomLeft));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#bottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn BottomLeft(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoRectangle_BottomLeft(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` bottomRight: QtC.QGeoCoordinate `
    ///
    pub fn SetBottomRight(self: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QGeoRectangle_SetBottomRight(@ptrCast(self), @ptrCast(bottomRight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn BottomRight(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoRectangle_BottomRight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` center: QtC.QGeoCoordinate `
    ///
    pub fn SetCenter(self: ?*anyopaque, center: ?*anyopaque) void {
        qtc.QGeoRectangle_SetCenter(@ptrCast(self), @ptrCast(center));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn Center(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoRectangle_Center(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` degreesWidth: f64 `
    ///
    pub fn SetWidth(self: ?*anyopaque, degreesWidth: f64) void {
        qtc.QGeoRectangle_SetWidth(@ptrCast(self), @floatCast(degreesWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QGeoRectangle_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` degreesHeight: f64 `
    ///
    pub fn SetHeight(self: ?*anyopaque, degreesHeight: f64) void {
        qtc.QGeoRectangle_SetHeight(@ptrCast(self), @floatCast(degreesHeight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QGeoRectangle_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` rectangle: QtC.QGeoRectangle `
    ///
    pub fn Contains(self: ?*anyopaque, rectangle: ?*anyopaque) bool {
        return qtc.QGeoRectangle_Contains(@ptrCast(self), @ptrCast(rectangle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` rectangle: QtC.QGeoRectangle `
    ///
    pub fn Intersects(self: ?*anyopaque, rectangle: ?*anyopaque) bool {
        return qtc.QGeoRectangle_Intersects(@ptrCast(self), @ptrCast(rectangle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translate(self: ?*anyopaque, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoRectangle_Translate(@ptrCast(self), @floatCast(degreesLatitude), @floatCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translated(self: ?*anyopaque, degreesLatitude: f64, degreesLongitude: f64) QtC.QGeoRectangle {
        return qtc.QGeoRectangle_Translated(@ptrCast(self), @floatCast(degreesLatitude), @floatCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#extendRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn ExtendRectangle(self: ?*anyopaque, coordinate: ?*anyopaque) void {
        qtc.QGeoRectangle_ExtendRectangle(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` rectangle: QtC.QGeoRectangle `
    ///
    pub fn United(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoRectangle_United(@ptrCast(self), @ptrCast(rectangle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` rectangle: QtC.QGeoRectangle `
    ///
    pub fn OperatorBitwiseOr(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoRectangle_OperatorBitwiseOr(@ptrCast(self), @ptrCast(rectangle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` rectangle: QtC.QGeoRectangle `
    ///
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, rectangle: ?*anyopaque) void {
        qtc.QGeoRectangle_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(rectangle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoRectangle_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeorectangle.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
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
    /// ` self: QtC.QGeoRectangle `
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
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn BoundingGeoRectangle(self: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#dtor.QGeoRectangle)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoRectangle `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoRectangle_Delete(@ptrCast(self));
    }
};
