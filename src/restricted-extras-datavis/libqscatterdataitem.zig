const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QQuaternion = @import("libqt6").QQuaternion;
const QVector3D = @import("libqt6").QVector3D;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html)
pub const QScatterDataItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScatterDataItem,

    pub const _is_QScatterDataItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QScatterDataItem object in C++ memory
    ///
    pub fn new() QScatterDataItem {
        return .{ .ptr = qtc.QScatterDataItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QScatterDataItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _position: QVector3D `
    ///
    pub fn new2(_position: anytype) QScatterDataItem {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        return .{ .ptr = qtc.QScatterDataItem_new2(@ptrCast(_position.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QScatterDataItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _position: QVector3D `
    ///
    /// ` _rotation: QQuaternion `
    ///
    pub fn new3(_position: anytype, _rotation: anytype) QScatterDataItem {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        comptime _ = @TypeOf(_rotation)._is_QQuaternion;
        return .{ .ptr = qtc.QScatterDataItem_new3(@ptrCast(_position.ptr), @ptrCast(_rotation.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QScatterDataItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QScatterDataItem `
    ///
    pub fn new4(other: anytype) QScatterDataItem {
        comptime _ = @TypeOf(other)._is_QScatterDataItem;
        return .{ .ptr = qtc.QScatterDataItem_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    /// ` other: QScatterDataItem `
    ///
    pub fn operatorAssign(self: QScatterDataItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QScatterDataItem;
        qtc.QScatterDataItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    /// ` pos: QVector3D `
    ///
    pub fn setPosition(self: QScatterDataItem, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QVector3D;
        qtc.QScatterDataItem_SetPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    pub fn position(self: QScatterDataItem) QVector3D {
        return .{ .ptr = qtc.QScatterDataItem_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    /// ` rot: QQuaternion `
    ///
    pub fn setRotation(self: QScatterDataItem, rot: anytype) void {
        comptime _ = @TypeOf(rot)._is_QQuaternion;
        qtc.QScatterDataItem_SetRotation(@ptrCast(self.ptr), @ptrCast(rot.ptr));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    pub fn rotation(self: QScatterDataItem) QQuaternion {
        return .{ .ptr = qtc.QScatterDataItem_Rotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    /// ` value: f32 `
    ///
    pub fn setX(self: QScatterDataItem, value: f32) void {
        qtc.QScatterDataItem_SetX(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    /// ` value: f32 `
    ///
    pub fn setY(self: QScatterDataItem, value: f32) void {
        qtc.QScatterDataItem_SetY(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setZ` instead
    ///
    pub const SetZ = setZ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    /// ` value: f32 `
    ///
    pub fn setZ(self: QScatterDataItem, value: f32) void {
        qtc.QScatterDataItem_SetZ(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    pub fn x(self: QScatterDataItem) f32 {
        return qtc.QScatterDataItem_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    pub fn y(self: QScatterDataItem) f32 {
        return qtc.QScatterDataItem_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `z` instead
    ///
    pub const Z = z;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterDataItem `
    ///
    pub fn z(self: QScatterDataItem) f32 {
        return qtc.QScatterDataItem_Z(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#dtor.QScatterDataItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QScatterDataItem `
    ///
    pub fn delete(self: QScatterDataItem) void {
        qtc.QScatterDataItem_Delete(@ptrCast(self.ptr));
    }
};
