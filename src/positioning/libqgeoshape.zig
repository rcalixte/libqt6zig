const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoRectangle = @import("libqt6").QGeoRectangle;
const qgeoshape_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html)
pub const QGeoShape = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoShape,

    pub const _is_QGeoShape = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoShape object in C++ memory
    ///
    pub fn new() QGeoShape {
        return .{ .ptr = qtc.QGeoShape_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoShape object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn new2(other: anytype) QGeoShape {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoShape_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn type0(self: QGeoShape) i32 {
        return qtc.QGeoShape_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    pub fn isValid(self: QGeoShape) bool {
        return qtc.QGeoShape_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    pub fn isEmpty(self: QGeoShape) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn contains(self: QGeoShape, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoShape_Contains(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `boundingGeoRectangle` instead
    ///
    pub const BoundingGeoRectangle = boundingGeoRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    pub fn boundingGeoRectangle(self: QGeoShape) QGeoRectangle {
        return .{ .ptr = qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    pub fn center(self: QGeoShape) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoShape_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    /// ` other: QGeoShape `
    ///
    pub fn operatorAssign(self: QGeoShape, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        qtc.QGeoShape_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QGeoShape, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoShape_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoShape.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#dtor.QGeoShape)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoShape `
    ///
    pub fn delete(self: QGeoShape) void {
        qtc.QGeoShape_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#public-types)
pub const enums = struct {
    pub const ShapeType = enum(i32) {
        pub const UnknownType: i32 = 0;
        pub const RectangleType: i32 = 1;
        pub const CircleType: i32 = 2;
        pub const PathType: i32 = 3;
        pub const PolygonType: i32 = 4;
    };
};
