const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeoshape_enums = @import("libqgeoshape.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html)
pub const qgeopolygon = struct {
    /// New constructs a new QGeoPolygon object.
    ///
    pub fn New() QtC.QGeoPolygon {
        return qtc.QGeoPolygon_new();
    }

    /// New2 constructs a new QGeoPolygon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []QtC.QGeoCoordinate `
    ///
    pub fn New2(path: []QtC.QGeoCoordinate) QtC.QGeoPolygon {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };

        return qtc.QGeoPolygon_new2(path_list);
    }

    /// New3 constructs a new QGeoPolygon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoPolygon `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QGeoPolygon {
        return qtc.QGeoPolygon_new3(@ptrCast(other));
    }

    /// New4 constructs a new QGeoPolygon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoShape `
    ///
    pub fn New4(other: ?*anyopaque) QtC.QGeoPolygon {
        return qtc.QGeoPolygon_new4(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` other: QtC.QGeoPolygon `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoPolygon_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#setPerimeter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` path: []QtC.QGeoCoordinate `
    ///
    pub fn SetPerimeter(self: ?*anyopaque, path: []QtC.QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoPolygon_SetPerimeter(@ptrCast(self), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#perimeter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Perimeter(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoPolygon_Perimeter(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoCoordinate, _arr.len) catch @panic("qgeopolygon.Perimeter: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` holePath: QtC.QVariant `
    ///
    pub fn AddHole(self: ?*anyopaque, holePath: ?*anyopaque) void {
        qtc.QGeoPolygon_AddHole(@ptrCast(self), @ptrCast(holePath));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` holePath: []QtC.QGeoCoordinate `
    ///
    pub fn AddHole2(self: ?*anyopaque, holePath: []QtC.QGeoCoordinate) void {
        const holePath_list = qtc.libqt_list{
            .len = holePath.len,
            .data = @ptrCast(holePath.ptr),
        };
        qtc.QGeoPolygon_AddHole2(@ptrCast(self), holePath_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#hole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` index: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Hole(self: ?*anyopaque, index: i64, allocator: std.mem.Allocator) []QtC.QVariant {
        const _arr: qtc.libqt_list = qtc.QGeoPolygon_Hole(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("qgeopolygon.Hole: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#holePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` index: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HolePath(self: ?*anyopaque, index: i64, allocator: std.mem.Allocator) []QtC.QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoPolygon_HolePath(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoCoordinate, _arr.len) catch @panic("qgeopolygon.HolePath: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeHole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` index: i64 `
    ///
    pub fn RemoveHole(self: ?*anyopaque, index: i64) void {
        qtc.QGeoPolygon_RemoveHole(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#holesCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    pub fn HolesCount(self: ?*anyopaque) i64 {
        return qtc.QGeoPolygon_HolesCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translate(self: ?*anyopaque, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoPolygon_Translate(@ptrCast(self), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translated(self: ?*anyopaque, degreesLatitude: f64, degreesLongitude: f64) QtC.QGeoPolygon {
        return qtc.QGeoPolygon_Translated(@ptrCast(self), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    pub fn Length(self: ?*anyopaque) f64 {
        return qtc.QGeoPolygon_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QGeoPolygon_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn AddCoordinate(self: ?*anyopaque, coordinate: ?*anyopaque) void {
        qtc.QGeoPolygon_AddCoordinate(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#insertCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` index: i64 `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn InsertCoordinate(self: ?*anyopaque, index: i64, coordinate: ?*anyopaque) void {
        qtc.QGeoPolygon_InsertCoordinate(@ptrCast(self), @bitCast(index), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#replaceCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` index: i64 `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn ReplaceCoordinate(self: ?*anyopaque, index: i64, coordinate: ?*anyopaque) void {
        qtc.QGeoPolygon_ReplaceCoordinate(@ptrCast(self), @bitCast(index), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#coordinateAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` index: i64 `
    ///
    pub fn CoordinateAt(self: ?*anyopaque, index: i64) QtC.QGeoCoordinate {
        return qtc.QGeoPolygon_CoordinateAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#containsCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn ContainsCoordinate(self: ?*anyopaque, coordinate: ?*anyopaque) bool {
        return qtc.QGeoPolygon_ContainsCoordinate(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn RemoveCoordinate(self: ?*anyopaque, coordinate: ?*anyopaque) void {
        qtc.QGeoPolygon_RemoveCoordinate(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` index: i64 `
    ///
    pub fn RemoveCoordinate2(self: ?*anyopaque, index: i64) void {
        qtc.QGeoPolygon_RemoveCoordinate2(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPolygon_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeopolygon.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` indexFrom: i64 `
    ///
    pub fn Length1(self: ?*anyopaque, indexFrom: i64) f64 {
        return qtc.QGeoPolygon_Length1(@ptrCast(self), @bitCast(indexFrom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    /// ` indexFrom: i64 `
    ///
    /// ` indexTo: i64 `
    ///
    pub fn Length2(self: ?*anyopaque, indexFrom: i64, indexTo: i64) f64 {
        return qtc.QGeoPolygon_Length2(@ptrCast(self), @bitCast(indexFrom), @bitCast(indexTo));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
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
    /// ` self: QtC.QGeoPolygon `
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
    /// ` self: QtC.QGeoPolygon `
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
    /// ` self: QtC.QGeoPolygon `
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
    /// ` self: QtC.QGeoPolygon `
    ///
    pub fn BoundingGeoRectangle(self: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    pub fn Center(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoShape_Center(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#dtor.QGeoPolygon)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoPolygon `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGeoPolygon_Delete(@ptrCast(self));
    }
};
