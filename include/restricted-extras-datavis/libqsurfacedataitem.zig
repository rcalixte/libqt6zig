const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVector3D = @import("libqt6").QVector3D;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html)
pub const QSurfaceDataItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSurfaceDataItem,

    pub const _is_QSurfaceDataItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSurfaceDataItem object in C++ memory
    ///
    pub fn new() QSurfaceDataItem {
        return .{ .ptr = qtc.QSurfaceDataItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSurfaceDataItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _position: QVector3D `
    ///
    pub fn new2(_position: anytype) QSurfaceDataItem {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        return .{ .ptr = qtc.QSurfaceDataItem_new2(@ptrCast(_position.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSurfaceDataItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSurfaceDataItem `
    ///
    pub fn new3(other: anytype) QSurfaceDataItem {
        comptime _ = @TypeOf(other)._is_QSurfaceDataItem;
        return .{ .ptr = qtc.QSurfaceDataItem_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceDataItem `
    ///
    /// ` other: QSurfaceDataItem `
    ///
    pub fn operatorAssign(self: QSurfaceDataItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSurfaceDataItem;
        qtc.QSurfaceDataItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceDataItem `
    ///
    /// ` pos: QVector3D `
    ///
    pub fn setPosition(self: QSurfaceDataItem, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QVector3D;
        qtc.QSurfaceDataItem_SetPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceDataItem `
    ///
    pub fn position(self: QSurfaceDataItem) QVector3D {
        return .{ .ptr = qtc.QSurfaceDataItem_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceDataItem `
    ///
    /// ` value: f32 `
    ///
    pub fn setX(self: QSurfaceDataItem, value: f32) void {
        qtc.QSurfaceDataItem_SetX(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceDataItem `
    ///
    /// ` value: f32 `
    ///
    pub fn setY(self: QSurfaceDataItem, value: f32) void {
        qtc.QSurfaceDataItem_SetY(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setZ` instead
    ///
    pub const SetZ = setZ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceDataItem `
    ///
    /// ` value: f32 `
    ///
    pub fn setZ(self: QSurfaceDataItem, value: f32) void {
        qtc.QSurfaceDataItem_SetZ(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceDataItem `
    ///
    pub fn x(self: QSurfaceDataItem) f32 {
        return qtc.QSurfaceDataItem_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceDataItem `
    ///
    pub fn y(self: QSurfaceDataItem) f32 {
        return qtc.QSurfaceDataItem_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `z` instead
    ///
    pub const Z = z;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceDataItem `
    ///
    pub fn z(self: QSurfaceDataItem) f32 {
        return qtc.QSurfaceDataItem_Z(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#dtor.QSurfaceDataItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSurfaceDataItem `
    ///
    pub fn delete(self: QSurfaceDataItem) void {
        qtc.QSurfaceDataItem_Delete(@ptrCast(self.ptr));
    }
};
