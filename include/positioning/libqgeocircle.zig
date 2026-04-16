const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoRectangle = @import("libqt6").QGeoRectangle;
const QGeoShape = @import("libqt6").QGeoShape;
const qgeoshape_enums = @import("libqgeoshape.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)
pub const QGeoCircle = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoCircle,

    pub const _is_QGeoCircle = {};
    pub const _is_QGeoShape = {};

    /// New constructs a new QGeoCircle object.
    ///
    pub fn New() QGeoCircle {
        return .{ .ptr = qtc.QGeoCircle_new() };
    }

    /// New2 constructs a new QGeoCircle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QGeoCoordinate `
    ///
    pub fn New2(center: anytype) QGeoCircle {
        comptime _ = @TypeOf(center)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoCircle_new2(@ptrCast(center.ptr)) };
    }

    /// New3 constructs a new QGeoCircle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoCircle `
    ///
    pub fn New3(other: anytype) QGeoCircle {
        comptime _ = @TypeOf(other)._is_QGeoCircle;
        return .{ .ptr = qtc.QGeoCircle_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QGeoCircle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn New4(other: anytype) QGeoCircle {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoCircle_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QGeoCircle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QGeoCoordinate `
    ///
    /// ` radius: f64 `
    ///
    pub fn New5(center: anytype, radius: f64) QGeoCircle {
        comptime _ = @TypeOf(center)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoCircle_new5(@ptrCast(center.ptr), @bitCast(radius)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` other: QGeoCircle `
    ///
    pub fn OperatorAssign(self: QGeoCircle, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoCircle;
        qtc.QGeoCircle_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` center: QGeoCoordinate `
    ///
    pub fn SetCenter(self: QGeoCircle, center: anytype) void {
        comptime _ = @TypeOf(center)._is_QGeoCoordinate;
        qtc.QGeoCircle_SetCenter(@ptrCast(self.ptr), @ptrCast(center.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn Center(self: QGeoCircle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCircle_Center(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` radius: f64 `
    ///
    pub fn SetRadius(self: QGeoCircle, radius: f64) void {
        qtc.QGeoCircle_SetRadius(@ptrCast(self.ptr), @bitCast(radius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#radius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn Radius(self: QGeoCircle) f64 {
        return qtc.QGeoCircle_Radius(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translate(self: QGeoCircle, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoCircle_Translate(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translated(self: QGeoCircle, degreesLatitude: f64, degreesLongitude: f64) QGeoCircle {
        return .{ .ptr = qtc.QGeoCircle_Translated(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#extendCircle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn ExtendCircle(self: QGeoCircle, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoCircle_ExtendCircle(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QGeoCircle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCircle_ToString(@ptrCast(self.ptr));
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
    /// ` self: QGeoCircle `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn Type(self: QGeoCircle) i32 {
        return qtc.QGeoShape_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn IsValid(self: QGeoCircle) bool {
        return qtc.QGeoShape_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn IsEmpty(self: QGeoCircle) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn Contains(self: QGeoCircle, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoShape_Contains(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn BoundingGeoRectangle(self: QGeoCircle) QGeoRectangle {
        return .{ .ptr = qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#dtor.QGeoCircle)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn Delete(self: QGeoCircle) void {
        qtc.QGeoCircle_Delete(@ptrCast(self.ptr));
    }
};
