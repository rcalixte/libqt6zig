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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoRectangle object in C++ memory
    ///
    pub fn new() QGeoRectangle {
        return .{ .ptr = qtc.QGeoRectangle_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoRectangle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _center: QGeoCoordinate `
    ///
    /// ` degreesWidth: f64 `
    ///
    /// ` degreesHeight: f64 `
    ///
    pub fn new2(_center: anytype, degreesWidth: f64, degreesHeight: f64) QGeoRectangle {
        comptime _ = @TypeOf(_center)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRectangle_new2(@ptrCast(_center.ptr), @bitCast(degreesWidth), @bitCast(degreesHeight)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGeoRectangle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _topLeft: QGeoCoordinate `
    ///
    /// ` _bottomRight: QGeoCoordinate `
    ///
    pub fn new3(_topLeft: anytype, _bottomRight: anytype) QGeoRectangle {
        comptime _ = @TypeOf(_topLeft)._is_QGeoCoordinate;
        comptime _ = @TypeOf(_bottomRight)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRectangle_new3(@ptrCast(_topLeft.ptr), @ptrCast(_bottomRight.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGeoRectangle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` coordinates: []QGeoCoordinate `
    ///
    pub fn new4(coordinates: []QGeoCoordinate) QGeoRectangle {
        const coordinates_list = qtc.libqt_list{
            .len = coordinates.len,
            .data = @ptrCast(coordinates.ptr),
        };
        return .{ .ptr = qtc.QGeoRectangle_new4(coordinates_list) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QGeoRectangle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoRectangle `
    ///
    pub fn new5(other: anytype) QGeoRectangle {
        comptime _ = @TypeOf(other)._is_QGeoRectangle;
        return .{ .ptr = qtc.QGeoRectangle_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QGeoRectangle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn new6(other: anytype) QGeoRectangle {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoRectangle_new6(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` other: QGeoRectangle `
    ///
    pub fn operatorAssign(self: QGeoRectangle, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRectangle;
        qtc.QGeoRectangle_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setTopLeft` instead
    ///
    pub const SetTopLeft = setTopLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` _topLeft: QGeoCoordinate `
    ///
    pub fn setTopLeft(self: QGeoRectangle, _topLeft: anytype) void {
        comptime _ = @TypeOf(_topLeft)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetTopLeft(@ptrCast(self.ptr), @ptrCast(_topLeft.ptr));
    }

    /// ### DEPRECATED: Use `topLeft` instead
    ///
    pub const TopLeft = topLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn topLeft(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_TopLeft(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTopRight` instead
    ///
    pub const SetTopRight = setTopRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` _topRight: QGeoCoordinate `
    ///
    pub fn setTopRight(self: QGeoRectangle, _topRight: anytype) void {
        comptime _ = @TypeOf(_topRight)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetTopRight(@ptrCast(self.ptr), @ptrCast(_topRight.ptr));
    }

    /// ### DEPRECATED: Use `topRight` instead
    ///
    pub const TopRight = topRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#topRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn topRight(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_TopRight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBottomLeft` instead
    ///
    pub const SetBottomLeft = setBottomLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` _bottomLeft: QGeoCoordinate `
    ///
    pub fn setBottomLeft(self: QGeoRectangle, _bottomLeft: anytype) void {
        comptime _ = @TypeOf(_bottomLeft)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetBottomLeft(@ptrCast(self.ptr), @ptrCast(_bottomLeft.ptr));
    }

    /// ### DEPRECATED: Use `bottomLeft` instead
    ///
    pub const BottomLeft = bottomLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#bottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn bottomLeft(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_BottomLeft(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBottomRight` instead
    ///
    pub const SetBottomRight = setBottomRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` _bottomRight: QGeoCoordinate `
    ///
    pub fn setBottomRight(self: QGeoRectangle, _bottomRight: anytype) void {
        comptime _ = @TypeOf(_bottomRight)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetBottomRight(@ptrCast(self.ptr), @ptrCast(_bottomRight.ptr));
    }

    /// ### DEPRECATED: Use `bottomRight` instead
    ///
    pub const BottomRight = bottomRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn bottomRight(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_BottomRight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCenter` instead
    ///
    pub const SetCenter = setCenter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` _center: QGeoCoordinate `
    ///
    pub fn setCenter(self: QGeoRectangle, _center: anytype) void {
        comptime _ = @TypeOf(_center)._is_QGeoCoordinate;
        qtc.QGeoRectangle_SetCenter(@ptrCast(self.ptr), @ptrCast(_center.ptr));
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn center(self: QGeoRectangle) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoRectangle_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` degreesWidth: f64 `
    ///
    pub fn setWidth(self: QGeoRectangle, degreesWidth: f64) void {
        qtc.QGeoRectangle_SetWidth(@ptrCast(self.ptr), @bitCast(degreesWidth));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn width(self: QGeoRectangle) f64 {
        return qtc.QGeoRectangle_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` degreesHeight: f64 `
    ///
    pub fn setHeight(self: QGeoRectangle, degreesHeight: f64) void {
        qtc.QGeoRectangle_SetHeight(@ptrCast(self.ptr), @bitCast(degreesHeight));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn height(self: QGeoRectangle) f64 {
        return qtc.QGeoRectangle_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn contains(self: QGeoRectangle, rectangle: anytype) bool {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        return qtc.QGeoRectangle_Contains(@ptrCast(self.ptr), @ptrCast(rectangle.ptr));
    }

    /// ### DEPRECATED: Use `intersects` instead
    ///
    pub const Intersects = intersects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn intersects(self: QGeoRectangle, rectangle: anytype) bool {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        return qtc.QGeoRectangle_Intersects(@ptrCast(self.ptr), @ptrCast(rectangle.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(self: QGeoRectangle, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoRectangle_Translate(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

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
    pub fn translated(self: QGeoRectangle, degreesLatitude: f64, degreesLongitude: f64) QGeoRectangle {
        return .{ .ptr = qtc.QGeoRectangle_Translated(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude)) };
    }

    /// ### DEPRECATED: Use `extendRectangle` instead
    ///
    pub const ExtendRectangle = extendRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#extendRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn extendRectangle(self: QGeoRectangle, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoRectangle_ExtendRectangle(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `united` instead
    ///
    pub const United = united;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn united(self: QGeoRectangle, rectangle: anytype) QGeoRectangle {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        return .{ .ptr = qtc.QGeoRectangle_United(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseOr` instead
    ///
    pub const OperatorBitwiseOr = operatorBitwiseOr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn operatorBitwiseOr(self: QGeoRectangle, rectangle: anytype) QGeoRectangle {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        return .{ .ptr = qtc.QGeoRectangle_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseOrAssign` instead
    ///
    pub const OperatorBitwiseOrAssign = operatorBitwiseOrAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` rectangle: QGeoRectangle `
    ///
    pub fn operatorBitwiseOrAssign(self: QGeoRectangle, rectangle: anytype) void {
        comptime _ = @TypeOf(rectangle)._is_QGeoRectangle;
        qtc.QGeoRectangle_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(rectangle.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRectangle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QGeoRectangle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoRectangle_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRectangle.toString: Memory allocation failed");
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
    /// ` self: QGeoRectangle `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn type0(self: QGeoRectangle) i32 {
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
    /// ` self: QGeoRectangle `
    ///
    pub fn isValid(self: QGeoRectangle) bool {
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
    /// ` self: QGeoRectangle `
    ///
    pub fn isEmpty(self: QGeoRectangle) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QGeoRectangle `
    ///
    pub fn boundingGeoRectangle(self: QGeoRectangle) QGeoRectangle {
        return .{ .ptr = qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#dtor.QGeoRectangle)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRectangle `
    ///
    pub fn delete(self: QGeoRectangle) void {
        qtc.QGeoRectangle_Delete(@ptrCast(self.ptr));
    }
};
