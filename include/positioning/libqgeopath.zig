const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeoshape_enums = @import("libqgeoshape.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html)
pub const qgeopath = struct {
    /// New constructs a new QGeoPath object.
    ///
    pub fn New() QtC.QGeoPath {
        return qtc.QGeoPath_new();
    }

    /// New2 constructs a new QGeoPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []QtC.QGeoCoordinate `
    ///
    pub fn New2(path: []QtC.QGeoCoordinate) QtC.QGeoPath {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };

        return qtc.QGeoPath_new2(path_list);
    }

    /// New3 constructs a new QGeoPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoPath `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QGeoPath {
        return qtc.QGeoPath_new3(@ptrCast(other));
    }

    /// New4 constructs a new QGeoPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoShape `
    ///
    pub fn New4(other: ?*anyopaque) QtC.QGeoPath {
        return qtc.QGeoPath_new4(@ptrCast(other));
    }

    /// New5 constructs a new QGeoPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []QtC.QGeoCoordinate `
    ///
    /// ` width: *const f64 `
    ///
    pub fn New5(path: []QtC.QGeoCoordinate, width: *const f64) QtC.QGeoPath {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };

        return qtc.QGeoPath_new5(path_list, @ptrCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` other: QtC.QGeoPath `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoPath_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` path: []QtC.QGeoCoordinate `
    ///
    pub fn SetPath(self: ?*anyopaque, path: []QtC.QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoPath_SetPath(@ptrCast(self), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoPath_Path(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoCoordinate, _arr.len) catch @panic("qgeopath.Path: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#clearPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    pub fn ClearPath(self: ?*anyopaque) void {
        qtc.QGeoPath_ClearPath(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setVariantPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` path: []QtC.QVariant `
    ///
    pub fn SetVariantPath(self: ?*anyopaque, path: []QtC.QVariant) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoPath_SetVariantPath(@ptrCast(self), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#variantPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VariantPath(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QVariant {
        const _arr: qtc.libqt_list = qtc.QGeoPath_VariantPath(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("qgeopath.VariantPath: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` width: *const f64 `
    ///
    pub fn SetWidth(self: ?*anyopaque, width: *const f64) void {
        qtc.QGeoPath_SetWidth(@ptrCast(self), @ptrCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QGeoPath_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translate(self: ?*anyopaque, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoPath_Translate(@ptrCast(self), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` degreesLatitude: f64 `
    ///
    /// ` degreesLongitude: f64 `
    ///
    pub fn Translated(self: ?*anyopaque, degreesLatitude: f64, degreesLongitude: f64) QtC.QGeoPath {
        return qtc.QGeoPath_Translated(@ptrCast(self), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    pub fn Length(self: ?*anyopaque) f64 {
        return qtc.QGeoPath_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QGeoPath_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#addCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn AddCoordinate(self: ?*anyopaque, coordinate: ?*anyopaque) void {
        qtc.QGeoPath_AddCoordinate(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#insertCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` index: i64 `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn InsertCoordinate(self: ?*anyopaque, index: i64, coordinate: ?*anyopaque) void {
        qtc.QGeoPath_InsertCoordinate(@ptrCast(self), @bitCast(index), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#replaceCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` index: i64 `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn ReplaceCoordinate(self: ?*anyopaque, index: i64, coordinate: ?*anyopaque) void {
        qtc.QGeoPath_ReplaceCoordinate(@ptrCast(self), @bitCast(index), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#coordinateAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` index: i64 `
    ///
    pub fn CoordinateAt(self: ?*anyopaque, index: i64) QtC.QGeoCoordinate {
        return qtc.QGeoPath_CoordinateAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#containsCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn ContainsCoordinate(self: ?*anyopaque, coordinate: ?*anyopaque) bool {
        return qtc.QGeoPath_ContainsCoordinate(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn RemoveCoordinate(self: ?*anyopaque, coordinate: ?*anyopaque) void {
        qtc.QGeoPath_RemoveCoordinate(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` index: i64 `
    ///
    pub fn RemoveCoordinate2(self: ?*anyopaque, index: i64) void {
        qtc.QGeoPath_RemoveCoordinate2(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPath_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeopath.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` indexFrom: i64 `
    ///
    pub fn Length1(self: ?*anyopaque, indexFrom: i64) f64 {
        return qtc.QGeoPath_Length1(@ptrCast(self), @bitCast(indexFrom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
    ///
    /// ` indexFrom: i64 `
    ///
    /// ` indexTo: i64 `
    ///
    pub fn Length2(self: ?*anyopaque, indexFrom: i64, indexTo: i64) f64 {
        return qtc.QGeoPath_Length2(@ptrCast(self), @bitCast(indexFrom), @bitCast(indexTo));
    }

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPath `
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
    /// ` self: QtC.QGeoPath `
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
    /// ` self: QtC.QGeoPath `
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
    /// ` self: QtC.QGeoPath `
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
    /// ` self: QtC.QGeoPath `
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
    /// ` self: QtC.QGeoPath `
    ///
    pub fn Center(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoShape_Center(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#dtor.QGeoPath)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoPath `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoPath_Delete(@ptrCast(self));
    }
};
