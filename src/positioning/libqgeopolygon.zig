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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoPolygon object in C++ memory
    ///
    pub fn new() QGeoPolygon {
        return .{ .ptr = qtc.QGeoPolygon_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoPolygon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []QGeoCoordinate `
    ///
    pub fn new2(path: []QGeoCoordinate) QGeoPolygon {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        return .{ .ptr = qtc.QGeoPolygon_new2(path_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGeoPolygon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoPolygon `
    ///
    pub fn new3(other: anytype) QGeoPolygon {
        comptime _ = @TypeOf(other)._is_QGeoPolygon;
        return .{ .ptr = qtc.QGeoPolygon_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGeoPolygon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoShape `
    ///
    pub fn new4(other: anytype) QGeoPolygon {
        comptime _ = @TypeOf(other)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoPolygon_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` other: QGeoPolygon `
    ///
    pub fn operatorAssign(self: QGeoPolygon, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoPolygon;
        qtc.QGeoPolygon_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setPerimeter` instead
    ///
    pub const SetPerimeter = setPerimeter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#setPerimeter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` path: []QGeoCoordinate `
    ///
    pub fn setPerimeter(self: QGeoPolygon, path: []QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoPolygon_SetPerimeter(@ptrCast(self.ptr), path_list);
    }

    /// ### DEPRECATED: Use `perimeter` instead
    ///
    pub const Perimeter = perimeter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#perimeter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn perimeter(self: QGeoPolygon, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoPolygon_Perimeter(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("QGeoPolygon.perimeter: Memory allocation failed");
        const _data_val: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addHole` instead
    ///
    pub const AddHole = addHole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` _holePath: QVariant `
    ///
    pub fn addHole(self: QGeoPolygon, _holePath: anytype) void {
        comptime _ = @TypeOf(_holePath)._is_QVariant;
        qtc.QGeoPolygon_AddHole(@ptrCast(self.ptr), @ptrCast(_holePath.ptr));
    }

    /// ### DEPRECATED: Use `addHole2` instead
    ///
    pub const AddHole2 = addHole2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` _holePath: []QGeoCoordinate `
    ///
    pub fn addHole2(self: QGeoPolygon, _holePath: []QGeoCoordinate) void {
        const holePath_list = qtc.libqt_list{
            .len = _holePath.len,
            .data = @ptrCast(_holePath.ptr),
        };
        qtc.QGeoPolygon_AddHole2(@ptrCast(self.ptr), holePath_list);
    }

    /// ### DEPRECATED: Use `hole` instead
    ///
    pub const Hole = hole;

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
    pub fn hole(self: QGeoPolygon, allocator: std.mem.Allocator, index: isize) []QVariant {
        const _arr: qtc.libqt_list = qtc.QGeoPolygon_Hole(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QGeoPolygon.hole: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `holePath` instead
    ///
    pub const HolePath = holePath;

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
    pub fn holePath(self: QGeoPolygon, allocator: std.mem.Allocator, index: isize) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoPolygon_HolePath(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("QGeoPolygon.holePath: Memory allocation failed");
        const _data_val: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `removeHole` instead
    ///
    pub const RemoveHole = removeHole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeHole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` index: isize `
    ///
    pub fn removeHole(self: QGeoPolygon, index: isize) void {
        qtc.QGeoPolygon_RemoveHole(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `holesCount` instead
    ///
    pub const HolesCount = holesCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#holesCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn holesCount(self: QGeoPolygon) isize {
        return qtc.QGeoPolygon_HolesCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(self: QGeoPolygon, degreesLatitude: f64, degreesLongitude: f64) void {
        qtc.QGeoPolygon_Translate(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

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
    pub fn translated(self: QGeoPolygon, degreesLatitude: f64, degreesLongitude: f64) QGeoPolygon {
        return .{ .ptr = qtc.QGeoPolygon_Translated(@ptrCast(self.ptr), @bitCast(degreesLatitude), @bitCast(degreesLongitude)) };
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn length(self: QGeoPolygon) f64 {
        return qtc.QGeoPolygon_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn size(self: QGeoPolygon) isize {
        return qtc.QGeoPolygon_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addCoordinate` instead
    ///
    pub const AddCoordinate = addCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn addCoordinate(self: QGeoPolygon, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPolygon_AddCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `insertCoordinate` instead
    ///
    pub const InsertCoordinate = insertCoordinate;

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
    pub fn insertCoordinate(self: QGeoPolygon, index: isize, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPolygon_InsertCoordinate(@ptrCast(self.ptr), @bitCast(index), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `replaceCoordinate` instead
    ///
    pub const ReplaceCoordinate = replaceCoordinate;

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
    pub fn replaceCoordinate(self: QGeoPolygon, index: isize, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPolygon_ReplaceCoordinate(@ptrCast(self.ptr), @bitCast(index), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `coordinateAt` instead
    ///
    pub const CoordinateAt = coordinateAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#coordinateAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` index: isize `
    ///
    pub fn coordinateAt(self: QGeoPolygon, index: isize) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoPolygon_CoordinateAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `containsCoordinate` instead
    ///
    pub const ContainsCoordinate = containsCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#containsCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn containsCoordinate(self: QGeoPolygon, coordinate: anytype) bool {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        return qtc.QGeoPolygon_ContainsCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `removeCoordinate` instead
    ///
    pub const RemoveCoordinate = removeCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn removeCoordinate(self: QGeoPolygon, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPolygon_RemoveCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `removeCoordinate2` instead
    ///
    pub const RemoveCoordinate2 = removeCoordinate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` index: isize `
    ///
    pub fn removeCoordinate2(self: QGeoPolygon, index: isize) void {
        qtc.QGeoPolygon_RemoveCoordinate2(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QGeoPolygon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPolygon_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoPolygon.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `length1` instead
    ///
    pub const Length1 = length1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPolygon `
    ///
    /// ` indexFrom: isize `
    ///
    pub fn length1(self: QGeoPolygon, indexFrom: isize) f64 {
        return qtc.QGeoPolygon_Length1(@ptrCast(self.ptr), @bitCast(indexFrom));
    }

    /// ### DEPRECATED: Use `length2` instead
    ///
    pub const Length2 = length2;

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
    pub fn length2(self: QGeoPolygon, indexFrom: isize, indexTo: isize) f64 {
        return qtc.QGeoPolygon_Length2(@ptrCast(self.ptr), @bitCast(indexFrom), @bitCast(indexTo));
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
    /// ` self: QGeoPolygon `
    ///
    /// ## Returns:
    ///
    /// ` qgeoshape_enums.ShapeType `
    ///
    pub fn type0(self: QGeoPolygon) i32 {
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
    /// ` self: QGeoPolygon `
    ///
    pub fn isValid(self: QGeoPolygon) bool {
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
    /// ` self: QGeoPolygon `
    ///
    pub fn isEmpty(self: QGeoPolygon) bool {
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
    /// ` self: QGeoPolygon `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn contains(self: QGeoPolygon, coordinate: anytype) bool {
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
    /// ` self: QGeoPolygon `
    ///
    pub fn boundingGeoRectangle(self: QGeoPolygon) QGeoRectangle {
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
    /// ` self: QGeoPolygon `
    ///
    pub fn center(self: QGeoPolygon) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoShape_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#dtor.QGeoPolygon)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoPolygon `
    ///
    pub fn delete(self: QGeoPolygon) void {
        qtc.QGeoPolygon_Delete(@ptrCast(self.ptr));
    }
};
