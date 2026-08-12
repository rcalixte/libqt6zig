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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoPath object in C++ memory
    ///
    pub fn new() QGeoPath {
        return .{ .ptr = qtc.QGeoPath_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []QGeoCoordinate `
    ///
    pub fn new2(_path: []QGeoCoordinate) QGeoPath {
        const path_list = qtc.libqt_list{
            .len = _path.len,
            .data = @ptrCast(_path.ptr),
        };
        return .{ .ptr = qtc.QGeoPath_new2(path_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGeoPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoPath `
    ///
    pub fn new3(other: anytype) QGeoPath {
        comptime _ = @TypeOf(other)._is_QGeoPath;
        return .{ .ptr = qtc.QGeoPath_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGeoPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn new4(other: anytype) QGeoPath {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoPath_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QGeoPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []QGeoCoordinate `
    ///
    /// ` _width: *const f64 `
    ///
    pub fn new5(_path: []QGeoCoordinate, _width: *const f64) QGeoPath {
        const path_list = qtc.libqt_list{
            .len = _path.len,
            .data = @ptrCast(_path.ptr),
        };
        return .{ .ptr = qtc.QGeoPath_new5(path_list, @ptrCast(_width)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` other: QGeoPath `
    ///
    pub fn operatorAssign(self: QGeoPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoPath;
        qtc.QGeoPath_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` _path: []QGeoCoordinate `
    ///
    pub fn setPath(self: QGeoPath, _path: []QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = _path.len,
            .data = @ptrCast(_path.ptr),
        };
        qtc.QGeoPath_SetPath(@ptrCast(self.ptr), path_list);
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QGeoPath, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoPath_Path(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("QGeoPath.path: Memory allocation failed");
        const _data_val: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clearPath` instead
    ///
    pub const ClearPath = clearPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#clearPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn clearPath(self: QGeoPath) void {
        qtc.QGeoPath_ClearPath(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVariantPath` instead
    ///
    pub const SetVariantPath = setVariantPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setVariantPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` _path: []QVariant `
    ///
    pub fn setVariantPath(self: QGeoPath, _path: []QVariant) void {
        const path_list = qtc.libqt_list{
            .len = _path.len,
            .data = @ptrCast(_path.ptr),
        };
        qtc.QGeoPath_SetVariantPath(@ptrCast(self.ptr), path_list);
    }

    /// ### DEPRECATED: Use `variantPath` instead
    ///
    pub const VariantPath = variantPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#variantPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn variantPath(self: QGeoPath, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QGeoPath_VariantPath(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QGeoPath.variantPath: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` _width: *const f64 `
    ///
    pub fn setWidth(self: QGeoPath, _width: *const f64) void {
        qtc.QGeoPath_SetWidth(@ptrCast(self.ptr), @ptrCast(_width));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn width(self: QGeoPath) f64 {
        return qtc.QGeoPath_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(self: QGeoPath, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoPath_Translate(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

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
    pub fn translated(self: QGeoPath, degreesLatitude: f64, degreesLongitude: f64) QGeoPath {
        return .{ .ptr = qtc.QGeoPath_Translated(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude)) };
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn length(self: QGeoPath) f64 {
        return qtc.QGeoPath_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn size(self: QGeoPath) isize {
        return qtc.QGeoPath_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addCoordinate` instead
    ///
    pub const AddCoordinate = addCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#addCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn addCoordinate(self: QGeoPath, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPath_AddCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `insertCoordinate` instead
    ///
    pub const InsertCoordinate = insertCoordinate;

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
    pub fn insertCoordinate(self: QGeoPath, index: isize, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPath_InsertCoordinate(@ptrCast(self.ptr), @bitCast(index), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `replaceCoordinate` instead
    ///
    pub const ReplaceCoordinate = replaceCoordinate;

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
    pub fn replaceCoordinate(self: QGeoPath, index: isize, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPath_ReplaceCoordinate(@ptrCast(self.ptr), @bitCast(index), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `coordinateAt` instead
    ///
    pub const CoordinateAt = coordinateAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#coordinateAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` index: isize `
    ///
    pub fn coordinateAt(self: QGeoPath, index: isize) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoPath_CoordinateAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `containsCoordinate` instead
    ///
    pub const ContainsCoordinate = containsCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#containsCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn containsCoordinate(self: QGeoPath, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoPath_ContainsCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `removeCoordinate` instead
    ///
    pub const RemoveCoordinate = removeCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn removeCoordinate(self: QGeoPath, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPath_RemoveCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `removeCoordinate2` instead
    ///
    pub const RemoveCoordinate2 = removeCoordinate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` index: isize `
    ///
    pub fn removeCoordinate2(self: QGeoPath, index: isize) void {
        qtc.QGeoPath_RemoveCoordinate2(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QGeoPath, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPath_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoPath.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `length1` instead
    ///
    pub const Length1 = length1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    /// ` indexFrom: isize `
    ///
    pub fn length1(self: QGeoPath, indexFrom: isize) f64 {
        return qtc.QGeoPath_Length1(@ptrCast(self.ptr), @bitCast(indexFrom));
    }

    /// ### DEPRECATED: Use `length2` instead
    ///
    pub const Length2 = length2;

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
    pub fn length2(self: QGeoPath, indexFrom: isize, indexTo: isize) f64 {
        return qtc.QGeoPath_Length2(@ptrCast(self.ptr), @bitCast(indexFrom), @bitCast(indexTo));
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
    /// ` self: QGeoPath `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn type0(self: QGeoPath) i32 {
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
    /// ` self: QGeoPath `
    ///
    pub fn isValid(self: QGeoPath) bool {
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
    /// ` self: QGeoPath `
    ///
    pub fn isEmpty(self: QGeoPath) bool {
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
    /// ` self: QGeoPath `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn contains(self: QGeoPath, coordinate: anytype) bool {
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
    /// ` self: QGeoPath `
    ///
    pub fn boundingGeoRectangle(self: QGeoPath) QGeoRectangle {
        return .{ .ptr = qtc.QGeoShape_BoundingGeoRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// Inherited from QGeoShape
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPath `
    ///
    pub fn center(self: QGeoPath) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoShape_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#dtor.QGeoPath)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoPath `
    ///
    pub fn delete(self: QGeoPath) void {
        qtc.QGeoPath_Delete(@ptrCast(self.ptr));
    }
};
