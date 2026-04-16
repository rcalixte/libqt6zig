const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoShape = @import("libqt6").QGeoShape;
const qgeoshape_enums = @import("libqgeoshape.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html)
pub const QGeoRectangle = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoRectangle,

    pub const _is_QGeoRectangle = {};
    pub const _is_QGeoShape = {};

    /// New constructs a new QGeoRectangle object.
    ///
    pub fn New() QGeoRectangle {
        return .{ .ptr = qtc.QGeoRectangle_new() };
    }

    /// New2 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QGeoCoordinate `
    ///
    /// ` degreesWidth: f64 `
    ///
    /// ` degreesHeight: f64 `
    ///
    pub fn New2(center: anytype, degreesWidth: f64, degreesHeight: f64) QGeoRectangle {
        comptime _ = @TypeOf(center)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRectangle_new2(@ptrCast(center.ptr), @bitCast(degreesWidth), @bitCast(degreesHeight)) };
    }

    /// New3 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topLeft: QGeoCoordinate `
    ///
    /// ` bottomRight: QGeoCoordinate `
    ///
    pub fn New3(topLeft: anytype, bottomRight: anytype) QGeoRectangle {
        comptime _ = @TypeOf(topLeft)._is_QGeoCoordinate;
        comptime _ = @TypeOf(bottomRight)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRectangle_new3(@ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr)) };
    }

    /// New4 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` coordinates: []QGeoCoordinate `
    ///
    pub fn New4(coordinates: []QGeoCoordinate) QGeoRectangle {
        const coordinates_list = qtc.libqt_list{
            .len = coordinates.len,
            .data = @ptrCast(coordinates.ptr),
        };
        return .{ .ptr = qtc.QGeoRectangle_new4(coordinates_list) };
    }

    /// New5 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoRectangle `
    ///
    pub fn New5(other: anytype) QGeoRectangle {
        comptime _ = @TypeOf(other)._is_QGeoRectangle;
        return .{ .ptr = qtc.QGeoRectangle_new5(@ptrCast(other.ptr)) };
    }

    /// New6 constructs a new QGeoRectangle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn New6(other: anytype) QGeoRectangle {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoRectangle_new6(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` other: QGeoRectangle `
    ///
    pub fn OperatorAssign(self: QGeoRectangle, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRectangle;
        qtc.QGeoRectangle_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` topLeft: QGeoCoordinate `
    ///
    pub fn SetTopLeft(self: QGeoRectangle, topLeft: anytype) void {
        comptime _ = @TypeOf(topLeft)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetTopLeft(@ptrCast(self.ptr), @ptrCast(topLeft.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn TopLeft(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_TopLeft(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` topRight: QGeoCoordinate `
    ///
    pub fn SetTopRight(self: QGeoRectangle, topRight: anytype) void {
        comptime _ = @TypeOf(topRight)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetTopRight(@ptrCast(self.ptr), @ptrCast(topRight.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#topRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn TopRight(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_TopRight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` bottomLeft: QGeoCoordinate `
    ///
    pub fn SetBottomLeft(self: QGeoRectangle, bottomLeft: anytype) void {
        comptime _ = @TypeOf(bottomLeft)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetBottomLeft(@ptrCast(self.ptr), @ptrCast(bottomLeft.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#bottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn BottomLeft(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_BottomLeft(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` bottomRight: QGeoCoordinate `
    ///
    pub fn SetBottomRight(self: QGeoRectangle, bottomRight: anytype) void {
        comptime _ = @TypeOf(bottomRight)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetBottomRight(@ptrCast(self.ptr), @ptrCast(bottomRight.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn BottomRight(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_BottomRight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` center: QGeoCoordinate `
    ///
    pub fn SetCenter(self: QGeoRectangle, center: anytype) void {
        comptime _ = @TypeOf(center)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetCenter(@ptrCast(self.ptr), @ptrCast(center.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn Center(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_Center(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` degreesWidth: f64 `
    ///
    pub fn SetWidth(self: QGeoRectangle, degreesWidth: f64) void {
        qtc.QGeoRectangle_SetWidth(@ptrCast(self.ptr), @bitCast(degreesWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn Width(self: QGeoRectangle) f64 {
        return qtc.QGeoRectangle_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` degreesHeight: f64 `
    ///
    pub fn SetHeight(self: QGeoRectangle, degreesHeight: f64) void {
        qtc.QGeoRectangle_SetHeight(@ptrCast(self.ptr), @bitCast(degreesHeight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn Height(self: QGeoRectangle) f64 {
        return qtc.QGeoRectangle_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn Contains(self: QGeoRectangle, rectangle: anytype) bool {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        return qtc.QGeoRectangle_Contains(@ptrCast(self.ptr), @ptrCast(rectangle.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn Intersects(self: QGeoRectangle, rectangle: anytype) bool {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        return qtc.QGeoRectangle_Intersects(@ptrCast(self.ptr), @ptrCast(rectangle.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translate(self: QGeoRectangle, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoRectangle_Translate(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translated(self: QGeoRectangle, degreesLatitude: f64, degreesLongitude: f64) QGeoRectangle {
        return .{ .ptr = qtc.QGeoRectangle_Translated(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#extendRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn ExtendRectangle(self: QGeoRectangle, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoRectangle_ExtendRectangle(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn United(self: QGeoRectangle, rectangle: anytype) QGeoRectangle {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        return .{ .ptr = qtc.QGeoRectangle_United(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn OperatorBitwiseOr(self: QGeoRectangle, rectangle: anytype) QGeoRectangle {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        return .{ .ptr = qtc.QGeoRectangle_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn OperatorBitwiseOrAssign(self: QGeoRectangle, rectangle: anytype) void {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        qtc.QGeoRectangle_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(rectangle.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QGeoRectangle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoRectangle_ToString(@ptrCast(self.ptr));
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
    /// ` self: QGeoRectangle `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn Type(self: QGeoRectangle) i32 {
        return qtc.QGeoShape_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn IsValid(self: QGeoRectangle) bool {
        return qtc.QGeoShape_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn IsEmpty(self: QGeoRectangle) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn BoundingGeoRectangle(self: QGeoRectangle) QGeoRectangle {
        return .{ .ptr = qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#dtor.QGeoRectangle)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn Delete(self: QGeoRectangle) void {
        qtc.QGeoRectangle_Delete(@ptrCast(self.ptr));
    }
};
