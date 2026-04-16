const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoRectangle = @import("libqt6").QGeoRectangle;
const QGeoShape = @import("libqt6").QGeoShape;
const QVariant = @import("libqt6").QVariant;
const qgeoshape_enums = @import("libqgeoshape.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html)
pub const QGeoPolygon = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoPolygon,

    pub const _is_QGeoPolygon = {};
    pub const _is_QGeoShape = {};

    /// New constructs a new QGeoPolygon object.
    ///
    pub fn New() QGeoPolygon {
        return .{ .ptr = qtc.QGeoPolygon_new() };
    }

    /// New2 constructs a new QGeoPolygon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []QGeoCoordinate `
    ///
    pub fn New2(path: []QGeoCoordinate) QGeoPolygon {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        return .{ .ptr = qtc.QGeoPolygon_new2(path_list) };
    }

    /// New3 constructs a new QGeoPolygon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoPolygon `
    ///
    pub fn New3(other: anytype) QGeoPolygon {
        comptime _ = @TypeOf(other)._is_QGeoPolygon;
        return .{ .ptr = qtc.QGeoPolygon_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QGeoPolygon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn New4(other: anytype) QGeoPolygon {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoPolygon_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` other: QGeoPolygon `
    ///
    pub fn OperatorAssign(self: QGeoPolygon, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoPolygon;
        qtc.QGeoPolygon_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#setPerimeter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` path: []QGeoCoordinate `
    ///
    pub fn SetPerimeter(self: QGeoPolygon, path: []QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoPolygon_SetPerimeter(@ptrCast(self.ptr), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#perimeter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Perimeter(self: QGeoPolygon, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoPolygon_Perimeter(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("qgeopolygon.Perimeter: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` holePath: QVariant `
    ///
    pub fn AddHole(self: QGeoPolygon, holePath: anytype) void {
        comptime _ = @TypeOf(holePath)._is_QVariant;
        qtc.QGeoPolygon_AddHole(@ptrCast(self.ptr), @ptrCast(holePath.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` holePath: []QGeoCoordinate `
    ///
    pub fn AddHole2(self: QGeoPolygon, holePath: []QGeoCoordinate) void {
        const holePath_list = qtc.libqt_list{
            .len = holePath.len,
            .data = @ptrCast(holePath.ptr),
        };
        qtc.QGeoPolygon_AddHole2(@ptrCast(self.ptr), holePath_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#hole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: isize `
    ///
    pub fn Hole(self: QGeoPolygon, allocator: std.mem.Allocator, index: isize) []QVariant {
        const _arr: qtc.libqt_list = qtc.QGeoPolygon_Hole(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("qgeopolygon.Hole: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#holePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: isize `
    ///
    pub fn HolePath(self: QGeoPolygon, allocator: std.mem.Allocator, index: isize) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoPolygon_HolePath(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("qgeopolygon.HolePath: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeHole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` index: isize `
    ///
    pub fn RemoveHole(self: QGeoPolygon, index: isize) void {
        qtc.QGeoPolygon_RemoveHole(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#holesCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn HolesCount(self: QGeoPolygon) isize {
        return qtc.QGeoPolygon_HolesCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translate(self: QGeoPolygon, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoPolygon_Translate(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translated(self: QGeoPolygon, degreesLatitude: f64, degreesLongitude: f64) QGeoPolygon {
        return .{ .ptr = qtc.QGeoPolygon_Translated(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn Length(self: QGeoPolygon) f64 {
        return qtc.QGeoPolygon_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn Size(self: QGeoPolygon) isize {
        return qtc.QGeoPolygon_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn AddCoordinate(self: QGeoPolygon, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPolygon_AddCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#insertCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` index: isize `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn InsertCoordinate(self: QGeoPolygon, index: isize, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPolygon_InsertCoordinate(@ptrCast(self.ptr), @bitCast(index), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#replaceCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` index: isize `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn ReplaceCoordinate(self: QGeoPolygon, index: isize, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPolygon_ReplaceCoordinate(@ptrCast(self.ptr), @bitCast(index), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#coordinateAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` index: isize `
    ///
    pub fn CoordinateAt(self: QGeoPolygon, index: isize) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoPolygon_CoordinateAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#containsCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn ContainsCoordinate(self: QGeoPolygon, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoPolygon_ContainsCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn RemoveCoordinate(self: QGeoPolygon, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPolygon_RemoveCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` index: isize `
    ///
    pub fn RemoveCoordinate2(self: QGeoPolygon, index: isize) void {
        qtc.QGeoPolygon_RemoveCoordinate2(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QGeoPolygon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPolygon_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeopolygon.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` indexFrom: isize `
    ///
    pub fn Length1(self: QGeoPolygon, indexFrom: isize) f64 {
        return qtc.QGeoPolygon_Length1(@ptrCast(self.ptr), @bitCast(indexFrom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` indexFrom: isize `
    ///
    /// ` indexTo: isize `
    ///
    pub fn Length2(self: QGeoPolygon, indexFrom: isize, indexTo: isize) f64 {
        return qtc.QGeoPolygon_Length2(@ptrCast(self.ptr), @bitCast(indexFrom), @bitCast(indexTo));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn Type(self: QGeoPolygon) i32 {
        return qtc.QGeoShape_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn IsValid(self: QGeoPolygon) bool {
        return qtc.QGeoShape_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn IsEmpty(self: QGeoPolygon) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn Contains(self: QGeoPolygon, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoShape_Contains(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn BoundingGeoRectangle(self: QGeoPolygon) QGeoRectangle {
        return .{ .ptr = qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn Center(self: QGeoPolygon) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoShape_Center(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoPolygon `
    ///
    pub fn Delete(self: QGeoPolygon) void {
        qtc.QGeoPolygon_Delete(@ptrCast(self.ptr));
    }
};
