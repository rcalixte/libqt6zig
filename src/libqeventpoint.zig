const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qeventpoint_enums = enums;

/// https://doc.qt.io/qt-6/qeventpoint.html
pub const qeventpoint = struct {
    /// New constructs a new QEventPoint object.
    ///
    ///
    pub fn New() QtC.QEventPoint {
        return qtc.QEventPoint_new();
    }

    /// New2 constructs a new QEventPoint object.
    ///
    /// ``` pointId: i32, state: qeventpoint_enums.State, scenePosition: QtC.QPointF, globalPosition: QtC.QPointF ```
    pub fn New2(pointId: i32, state: u8, scenePosition: ?*anyopaque, globalPosition: ?*anyopaque) QtC.QEventPoint {
        return qtc.QEventPoint_new2(@intCast(pointId), @intCast(state), @ptrCast(scenePosition), @ptrCast(globalPosition));
    }

    /// New3 constructs a new QEventPoint object.
    ///
    /// ``` other: QtC.QEventPoint ```
    pub fn New3(other: ?*anyopaque) QtC.QEventPoint {
        return qtc.QEventPoint_new3(@ptrCast(other));
    }

    /// New4 constructs a new QEventPoint object.
    ///
    /// ``` id: i32 ```
    pub fn New4(id: i32) QtC.QEventPoint {
        return qtc.QEventPoint_new4(@intCast(id));
    }

    /// New5 constructs a new QEventPoint object.
    ///
    /// ``` id: i32, device: QtC.QPointingDevice ```
    pub fn New5(id: i32, device: ?*anyopaque) QtC.QEventPoint {
        return qtc.QEventPoint_new5(@intCast(id), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq)
    ///
    /// ``` self: QtC.QEventPoint, other: QtC.QEventPoint ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QEventPoint_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QEventPoint, other: QtC.QEventPoint ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QEventPoint_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#operator-not-eq)
    ///
    /// ``` self: QtC.QEventPoint, other: QtC.QEventPoint ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QEventPoint_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#swap)
    ///
    /// ``` self: QtC.QEventPoint, other: QtC.QEventPoint ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QEventPoint_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#position)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pressPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn PressPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_PressPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#grabPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn GrabPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GrabPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn LastPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#scenePosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_ScenePosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#scenePressPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn ScenePressPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_ScenePressPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#sceneGrabPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn SceneGrabPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_SceneGrabPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#sceneLastPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn SceneLastPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_SceneLastPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GlobalPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalPressPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn GlobalPressPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GlobalPressPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalGrabPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn GlobalGrabPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GlobalGrabPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalLastPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn GlobalLastPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_GlobalLastPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPosition)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn NormalizedPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_NormalizedPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startPos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn StartPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_StartPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#scenePos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_ScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startScenePos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn StartScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_StartScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#screenPos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_ScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startScreenPos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn StartScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_StartScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startNormalizedPos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn StartNormalizedPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_StartNormalizedPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn NormalizedPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_NormalizedPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastPos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn LastPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastScenePos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn LastScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastScreenPos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn LastScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastNormalizedPos)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn LastNormalizedPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEventPoint_LastNormalizedPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#velocity)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn Velocity(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QEventPoint_Velocity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#state)
    ///
    /// ``` self: QtC.QEventPoint ```
    ///
    /// Returns: ``` qeventpoint_enums.State ```
    pub fn State(self: ?*anyopaque) u8 {
        return qtc.QEventPoint_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#device)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn Device(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QEventPoint_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#id)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.QEventPoint_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#uniqueId)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn UniqueId(self: ?*anyopaque) QtC.QPointingDeviceUniqueId {
        return qtc.QEventPoint_UniqueId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#timestamp)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QEventPoint_Timestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastTimestamp)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn LastTimestamp(self: ?*anyopaque) u64 {
        return qtc.QEventPoint_LastTimestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pressTimestamp)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn PressTimestamp(self: ?*anyopaque) u64 {
        return qtc.QEventPoint_PressTimestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#timeHeld)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn TimeHeld(self: ?*anyopaque) f64 {
        return qtc.QEventPoint_TimeHeld(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pressure)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn Pressure(self: ?*anyopaque) f64 {
        return qtc.QEventPoint_Pressure(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#rotation)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn Rotation(self: ?*anyopaque) f64 {
        return qtc.QEventPoint_Rotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#ellipseDiameters)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn EllipseDiameters(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QEventPoint_EllipseDiameters(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#isAccepted)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEventPoint_IsAccepted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn SetAccepted(self: ?*anyopaque) void {
        qtc.QEventPoint_SetAccepted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
    ///
    /// ``` self: QtC.QEventPoint, accepted: bool ```
    pub fn SetAccepted1(self: ?*anyopaque, accepted: bool) void {
        qtc.QEventPoint_SetAccepted1(@ptrCast(self), accepted);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#dtor.QEventPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QEventPoint ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QEventPoint_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qeventpoint.html#types
pub const enums = struct {
    pub const State = enum {
        pub const Unknown: u8 = 0;
        pub const Stationary: u8 = 4;
        pub const Pressed: u8 = 1;
        pub const Updated: u8 = 2;
        pub const Released: u8 = 8;
    };
};
