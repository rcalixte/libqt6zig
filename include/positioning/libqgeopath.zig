const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoRectangle = @import("libqt6").QGeoRectangle;
const QGeoShape = @import("libqt6").QGeoShape;
const QVariant = @import("libqt6").QVariant;
const qgeoshape_enums = @import("libqgeoshape.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html)
pub const QGeoPath = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoPath,

    pub const _is_QGeoPath = {};
    pub const _is_QGeoShape = {};

    /// New constructs a new QGeoPath object.
    ///
    pub fn New() QGeoPath {
        return .{ .ptr = qtc.QGeoPath_new() };
    }

    /// New2 constructs a new QGeoPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []QGeoCoordinate `
    ///
    pub fn New2(path: []QGeoCoordinate) QGeoPath {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        return .{ .ptr = qtc.QGeoPath_new2(path_list) };
    }

    /// New3 constructs a new QGeoPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoPath `
    ///
    pub fn New3(other: anytype) QGeoPath {
        comptime _ = @TypeOf(other)._is_QGeoPath;
        return .{ .ptr = qtc.QGeoPath_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QGeoPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn New4(other: anytype) QGeoPath {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoPath_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QGeoPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []QGeoCoordinate `
    ///
    /// ` width: *const f64 `
    ///
    pub fn New5(path: []QGeoCoordinate, width: *const f64) QGeoPath {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        return .{ .ptr = qtc.QGeoPath_new5(path_list, @ptrCast(width)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` other: QGeoPath `
    ///
    pub fn OperatorAssign(self: QGeoPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoPath;
        qtc.QGeoPath_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` path: []QGeoCoordinate `
    ///
    pub fn SetPath(self: QGeoPath, path: []QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoPath_SetPath(@ptrCast(self.ptr), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QGeoPath, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoPath_Path(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("qgeopath.Path: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#clearPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn ClearPath(self: QGeoPath) void {
        qtc.QGeoPath_ClearPath(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setVariantPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` path: []QVariant `
    ///
    pub fn SetVariantPath(self: QGeoPath, path: []QVariant) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoPath_SetVariantPath(@ptrCast(self.ptr), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#variantPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VariantPath(self: QGeoPath, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QGeoPath_VariantPath(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("qgeopath.VariantPath: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` width: *const f64 `
    ///
    pub fn SetWidth(self: QGeoPath, width: *const f64) void {
        qtc.QGeoPath_SetWidth(@ptrCast(self.ptr), @ptrCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn Width(self: QGeoPath) f64 {
        return qtc.QGeoPath_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translate(self: QGeoPath, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoPath_Translate(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translated(self: QGeoPath, degreesLatitude: f64, degreesLongitude: f64) QGeoPath {
        return .{ .ptr = qtc.QGeoPath_Translated(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn Length(self: QGeoPath) f64 {
        return qtc.QGeoPath_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn Size(self: QGeoPath) isize {
        return qtc.QGeoPath_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#addCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn AddCoordinate(self: QGeoPath, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPath_AddCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#insertCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` index: isize `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn InsertCoordinate(self: QGeoPath, index: isize, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPath_InsertCoordinate(@ptrCast(self.ptr), @bitCast(index), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#replaceCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` index: isize `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn ReplaceCoordinate(self: QGeoPath, index: isize, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPath_ReplaceCoordinate(@ptrCast(self.ptr), @bitCast(index), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#coordinateAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` index: isize `
    ///
    pub fn CoordinateAt(self: QGeoPath, index: isize) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoPath_CoordinateAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#containsCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn ContainsCoordinate(self: QGeoPath, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoPath_ContainsCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn RemoveCoordinate(self: QGeoPath, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPath_RemoveCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` index: isize `
    ///
    pub fn RemoveCoordinate2(self: QGeoPath, index: isize) void {
        qtc.QGeoPath_RemoveCoordinate2(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QGeoPath, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPath_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeopath.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` indexFrom: isize `
    ///
    pub fn Length1(self: QGeoPath, indexFrom: isize) f64 {
        return qtc.QGeoPath_Length1(@ptrCast(self.ptr), @bitCast(indexFrom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` indexFrom: isize `
    ///
    /// ` indexTo: isize `
    ///
    pub fn Length2(self: QGeoPath, indexFrom: isize, indexTo: isize) f64 {
        return qtc.QGeoPath_Length2(@ptrCast(self.ptr), @bitCast(indexFrom), @bitCast(indexTo));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn Type(self: QGeoPath) i32 {
        return qtc.QGeoShape_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn IsValid(self: QGeoPath) bool {
        return qtc.QGeoShape_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn IsEmpty(self: QGeoPath) bool {
        return qtc.QGeoShape_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn Contains(self: QGeoPath, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoShape_Contains(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn BoundingGeoRectangle(self: QGeoPath) QGeoRectangle {
        return .{ .ptr = qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn Center(self: QGeoPath) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoShape_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#dtor.QGeoPath)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoPath `
    ///
    pub fn Delete(self: QGeoPath) void {
        qtc.QGeoPath_Delete(@ptrCast(self.ptr));
    }
};
