const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qeventpoint_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html)
pub const qeventpoint = struct {
    /// New constructs a new QEventPoint object.
    ///
    pub fn New() QtC.QEventPoint {
        return qtc.QEventPoint_new();
    }

    /// New2 constructs a new QEventPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pointId: i32 `
    ///
    /// ` state: qeventpoint_enums.State `
    ///
    /// ` scenePosition: QtC.QPointF `
    ///
    /// ` globalPosition: QtC.QPointF `
    ///
    pub fn New2(pointId: i32, state: u8, scenePosition: ?*anyopaque, globalPosition: ?*anyopaque) QtC.QEventPoint {
        return qtc.QEventPoint_new2(@intCast(pointId), @intCast(state), @ptrCast(scenePosition), @ptrCast(globalPosition));
    }

    /// New3 constructs a new QEventPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QEventPoint `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QEventPoint {
        return qtc.QEventPoint_new3(@ptrCast(other));
    }

    /// New4 constructs a new QEventPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id: i32 `
    ///
    pub fn New4(id: i32) QtC.QEventPoint {
        return qtc.QEventPoint_new4(@intCast(id));
    }

    /// New5 constructs a new QEventPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id: i32 `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New5(id: i32, device: ?*anyopaque) QtC.QEventPoint {
        return qtc.QEventPoint_new5(@intCast(id), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    /// ` other: QtC.QEventPoint `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QEventPoint_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    /// ` other: QtC.QEventPoint `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QEventPoint_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    /// ` other: QtC.QEventPoint `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QEventPoint_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    /// ` other: QtC.QEventPoint `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QEventPoint_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pressPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn PressPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_PressPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#grabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn GrabPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GrabPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn LastPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_ScenePosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#scenePressPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn ScenePressPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_ScenePressPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#sceneGrabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn SceneGrabPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_SceneGrabPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#sceneLastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn SceneLastPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_SceneLastPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GlobalPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalPressPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn GlobalPressPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GlobalPressPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalGrabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn GlobalGrabPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GlobalGrabPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalLastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn GlobalLastPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GlobalLastPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn NormalizedPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_NormalizedPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn StartPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_StartPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_ScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn StartScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_StartScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_ScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn StartScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_StartScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startNormalizedPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn StartNormalizedPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_StartNormalizedPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn NormalizedPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_NormalizedPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn LastPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn LastScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn LastScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastNormalizedPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn LastNormalizedPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastNormalizedPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#velocity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn Velocity(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QEventPoint_Velocity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    /// ## Returns:
    ///
    /// ` qeventpoint_enums.State `
    ///
    pub fn State(self: ?*anyopaque) u8 {
        return qtc.QEventPoint_State(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QEventPoint_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.QEventPoint_Id(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn UniqueId(self: ?*anyopaque) QtC.QPointingDeviceUniqueId {
        return qtc.QEventPoint_UniqueId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QEventPoint_Timestamp(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn LastTimestamp(self: ?*anyopaque) u64 {
        return qtc.QEventPoint_LastTimestamp(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pressTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn PressTimestamp(self: ?*anyopaque) u64 {
        return qtc.QEventPoint_PressTimestamp(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#timeHeld)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn TimeHeld(self: ?*anyopaque) f64 {
        return qtc.QEventPoint_TimeHeld(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pressure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn Pressure(self: ?*anyopaque) f64 {
        return qtc.QEventPoint_Pressure(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn Rotation(self: ?*anyopaque) f64 {
        return qtc.QEventPoint_Rotation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#ellipseDiameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn EllipseDiameters(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QEventPoint_EllipseDiameters(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEventPoint_IsAccepted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn SetAccepted(self: ?*anyopaque) void {
        qtc.QEventPoint_SetAccepted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEventPoint `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted1(self: ?*anyopaque, accepted: bool) void {
        qtc.QEventPoint_SetAccepted1(@ptrCast(self), accepted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#dtor.QEventPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QEventPoint `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QEventPoint_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#public-types)
pub const enums = struct {
    pub const State = enum {
        pub const Unknown: u8 = 0;
        pub const Stationary: u8 = 4;
        pub const Pressed: u8 = 1;
        pub const Updated: u8 = 2;
        pub const Released: u8 = 8;
    };
};
