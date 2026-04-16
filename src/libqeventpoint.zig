const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPointF = @import("libqt6").QPointF;
const QPointingDevice = @import("libqt6").QPointingDevice;
const QPointingDeviceUniqueId = @import("libqt6").QPointingDeviceUniqueId;
const QSizeF = @import("libqt6").QSizeF;
const QVector2D = @import("libqt6").QVector2D;
const qeventpoint_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html)
pub const QEventPoint = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QEventPoint,

    pub const _is_QEventPoint = {};

    /// New constructs a new QEventPoint object.
    ///
    pub fn New() QEventPoint {
        return .{ .ptr = qtc.QEventPoint_new() };
    }

    /// New2 constructs a new QEventPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pointId: i32 `
    ///
    /// ` state: qeventpoint_enums.State `
    ///
    /// ` scenePosition: QPointF `
    ///
    /// ` globalPosition: QPointF `
    ///
    pub fn New2(pointId: i32, state: u8, scenePosition: anytype, globalPosition: anytype) QEventPoint {
        comptime _ = @TypeOf(scenePosition)._is_QPointF;
        comptime _ = @TypeOf(globalPosition)._is_QPointF;
        return .{ .ptr = qtc.QEventPoint_new2(@bitCast(pointId), @bitCast(state), @ptrCast(scenePosition.ptr), @ptrCast(globalPosition.ptr)) };
    }

    /// New3 constructs a new QEventPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QEventPoint `
    ///
    pub fn New3(other: anytype) QEventPoint {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        return .{ .ptr = qtc.QEventPoint_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QEventPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id: i32 `
    ///
    pub fn New4(id: i32) QEventPoint {
        return .{ .ptr = qtc.QEventPoint_new4(@bitCast(id)) };
    }

    /// New5 constructs a new QEventPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id: i32 `
    ///
    /// ` device: QPointingDevice `
    ///
    pub fn New5(id: i32, device: anytype) QEventPoint {
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QEventPoint_new5(@bitCast(id), @ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` other: QEventPoint `
    ///
    pub fn OperatorAssign(self: QEventPoint, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        qtc.QEventPoint_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` other: QEventPoint `
    ///
    pub fn OperatorEqual(self: QEventPoint, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        return qtc.QEventPoint_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` other: QEventPoint `
    ///
    pub fn OperatorNotEqual(self: QEventPoint, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        return qtc.QEventPoint_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` other: QEventPoint `
    ///
    pub fn Swap(self: QEventPoint, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        qtc.QEventPoint_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn Position(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_Position(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pressPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn PressPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_PressPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#grabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn GrabPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GrabPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn LastPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn ScenePosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#scenePressPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn ScenePressPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_ScenePressPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#sceneGrabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn SceneGrabPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_SceneGrabPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#sceneLastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn SceneLastPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_SceneLastPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn GlobalPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalPressPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn GlobalPressPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GlobalPressPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalGrabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn GlobalGrabPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GlobalGrabPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalLastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn GlobalLastPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GlobalLastPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn NormalizedPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_NormalizedPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn Pos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn StartPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_StartPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn ScenePos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn StartScenePos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_StartScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn ScreenPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn StartScreenPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_StartScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startNormalizedPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn StartNormalizedPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_StartNormalizedPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn NormalizedPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_NormalizedPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn LastPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn LastScenePos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn LastScreenPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastNormalizedPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn LastNormalizedPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastNormalizedPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#velocity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn Velocity(self: QEventPoint) QVector2D {
        return .{ .ptr = qtc.QEventPoint_Velocity(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ## Returns:
    ///
    /// ` qeventpoint_enums.State `
    ///
    pub fn State(self: QEventPoint) u8 {
        return qtc.QEventPoint_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn Device(self: QEventPoint) QPointingDevice {
        return .{ .ptr = qtc.QEventPoint_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn Id(self: QEventPoint) i32 {
        return qtc.QEventPoint_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn UniqueId(self: QEventPoint) QPointingDeviceUniqueId {
        return .{ .ptr = qtc.QEventPoint_UniqueId(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn Timestamp(self: QEventPoint) usize {
        return qtc.QEventPoint_Timestamp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn LastTimestamp(self: QEventPoint) usize {
        return qtc.QEventPoint_LastTimestamp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pressTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn PressTimestamp(self: QEventPoint) usize {
        return qtc.QEventPoint_PressTimestamp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#timeHeld)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn TimeHeld(self: QEventPoint) f64 {
        return qtc.QEventPoint_TimeHeld(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pressure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn Pressure(self: QEventPoint) f64 {
        return qtc.QEventPoint_Pressure(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn Rotation(self: QEventPoint) f64 {
        return qtc.QEventPoint_Rotation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#ellipseDiameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn EllipseDiameters(self: QEventPoint) QSizeF {
        return .{ .ptr = qtc.QEventPoint_EllipseDiameters(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn IsAccepted(self: QEventPoint) bool {
        return qtc.QEventPoint_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn SetAccepted(self: QEventPoint) void {
        qtc.QEventPoint_SetAccepted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted1(self: QEventPoint, accepted: bool) void {
        qtc.QEventPoint_SetAccepted1(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#dtor.QEventPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QEventPoint `
    ///
    pub fn Delete(self: QEventPoint) void {
        qtc.QEventPoint_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#public-types)
pub const enums = struct {
    pub const State = enum(u8) {
        pub const Unknown: u8 = 0;
        pub const Stationary: u8 = 4;
        pub const Pressed: u8 = 1;
        pub const Updated: u8 = 2;
        pub const Released: u8 = 8;
    };
};
