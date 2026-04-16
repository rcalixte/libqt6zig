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

    /// New constructs a new QGeoShape object.
    ///
    pub fn New() QGeoShape {
        return .{ .ptr = qtc.QGeoShape_new() };
    }

    /// New2 constructs a new QGeoShape object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn New2(other: anytype) QGeoShape {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoShape_new2(@ptrCast(other.ptr)) };
    }

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
    pub fn Type(self: QGeoShape) i32 {
        return qtc.QGeoShape_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    pub fn IsValid(self: QGeoShape) bool {
        return qtc.QGeoShape_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    pub fn IsEmpty(self: QGeoShape) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn Contains(self: QGeoShape, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoShape_Contains(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    pub fn BoundingGeoRectangle(self: QGeoShape) QGeoRectangle {
        return .{ .ptr = qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    pub fn Center(self: QGeoShape) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoShape_Center(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    /// ` other: QGeoShape `
    ///
    pub fn OperatorAssign(self: QGeoShape, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        qtc.QGeoShape_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoShape `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QGeoShape, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoShape_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoshape.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#dtor.QGeoShape)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoShape `
    ///
    pub fn Delete(self: QGeoShape) void {
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
