const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeoshape_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html)
pub const qgeoshape = struct {
    /// New constructs a new QGeoShape object.
    ///
    pub fn New() QtC.QGeoShape {
        return qtc.QGeoShape_new();
    }

    /// New2 constructs a new QGeoShape object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoShape `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QGeoShape {
        return qtc.QGeoShape_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoShape `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QGeoShape_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoShape `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QGeoShape_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoShape `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoShape `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn Contains(self: ?*anyopaque, coordinate: ?*anyopaque) bool {
        return qtc.QGeoShape_Contains(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoShape `
    ///
    pub fn BoundingGeoRectangle(self: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoShape `
    ///
    pub fn Center(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoShape_Center(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoShape `
    ///
    /// ` other: QtC.QGeoShape `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoShape_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoShape `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoShape_ToString(@ptrCast(self));
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
    /// ` self: QtC.QGeoShape `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGeoShape_Delete(@ptrCast(self));
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
