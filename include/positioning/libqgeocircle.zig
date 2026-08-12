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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoCircle object in C++ memory
    ///
    pub fn new() QGeoCircle {
        return .{ .ptr = qtc.QGeoCircle_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoCircle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _center: QGeoCoordinate `
    ///
    pub fn new2(_center: anytype) QGeoCircle {
        comptime _ = @TypeOf(_center)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoCircle_new2(@ptrCast(_center.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGeoCircle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoCircle `
    ///
    pub fn new3(other: anytype) QGeoCircle {
        comptime _ = @TypeOf(other)._is_QGeoCircle;
        return .{ .ptr = qtc.QGeoCircle_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGeoCircle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn new4(other: anytype) QGeoCircle {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoCircle_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QGeoCircle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _center: QGeoCoordinate `
    ///
    /// ` _radius: f64 `
    ///
    pub fn new5(_center: anytype, _radius: f64) QGeoCircle {
        comptime _ = @TypeOf(_center)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoCircle_new5(@ptrCast(_center.ptr), @bitCast(_radius)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` other: QGeoCircle `
    ///
    pub fn operatorAssign(self: QGeoCircle, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoCircle;
        qtc.QGeoCircle_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setCenter` instead
    ///
    pub const SetCenter = setCenter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` _center: QGeoCoordinate `
    ///
    pub fn setCenter(self: QGeoCircle, _center: anytype) void {
        comptime _ = @TypeOf(_center)._is_QGeoCoordinate;
        qtc.QGeoCircle_SetCenter(@ptrCast(self.ptr), @ptrCast(_center.ptr));
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn center(self: QGeoCircle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCircle_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRadius` instead
    ///
    pub const SetRadius = setRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` _radius: f64 `
    ///
    pub fn setRadius(self: QGeoCircle, _radius: f64) void {
        qtc.QGeoCircle_SetRadius(@ptrCast(self.ptr), @bitCast(_radius));
    }

    /// ### DEPRECATED: Use `radius` instead
    ///
    pub const Radius = radius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#radius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn radius(self: QGeoCircle) f64 {
        return qtc.QGeoCircle_Radius(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(self: QGeoCircle, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoCircle_Translate(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

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
    pub fn translated(self: QGeoCircle, degreesLatitude: f64, degreesLongitude: f64) QGeoCircle {
        return .{ .ptr = qtc.QGeoCircle_Translated(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude)) };
    }

    /// ### DEPRECATED: Use `extendCircle` instead
    ///
    pub const ExtendCircle = extendCircle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#extendCircle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn extendCircle(self: QGeoCircle, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoCircle_ExtendCircle(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QGeoCircle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCircle_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoCircle.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QGeoCircle) i32 {
        return qtc.QGeoShape_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn isValid(self: QGeoCircle) bool {
        return qtc.QGeoShape_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn isEmpty(self: QGeoCircle) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

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
    pub fn contains(self: QGeoCircle, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoShape_Contains(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `boundingGeoRectangle` instead
    ///
    pub const BoundingGeoRectangle = boundingGeoRectangle;

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn boundingGeoRectangle(self: QGeoCircle) QGeoRectangle {
        return .{ .ptr = qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#dtor.QGeoCircle)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoCircle `
    ///
    pub fn delete(self: QGeoCircle) void {
        qtc.QGeoCircle_Delete(@ptrCast(self.ptr));
    }
};
