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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QEventPoint object in C++ memory
    ///
    pub fn new() QEventPoint {
        return .{ .ptr = qtc.QEventPoint_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QEventPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pointId: i32 `
    ///
    /// ` _state: qeventpoint_enums.State `
    ///
    /// ` _scenePosition: QPointF `
    ///
    /// ` _globalPosition: QPointF `
    ///
    pub fn new2(pointId: i32, _state: u8, _scenePosition: anytype, _globalPosition: anytype) QEventPoint {
        comptime _ = @TypeOf(_scenePosition)._is_QPointF;
        comptime _ = @TypeOf(_globalPosition)._is_QPointF;
        return .{ .ptr = qtc.QEventPoint_new2(@bitCast(pointId), @bitCast(_state), @ptrCast(_scenePosition.ptr), @ptrCast(_globalPosition.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QEventPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QEventPoint `
    ///
    pub fn new3(other: anytype) QEventPoint {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        return .{ .ptr = qtc.QEventPoint_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QEventPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _id: i32 `
    ///
    pub fn new4(_id: i32) QEventPoint {
        return .{ .ptr = qtc.QEventPoint_new4(@bitCast(_id)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QEventPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _id: i32 `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new5(_id: i32, _device: anytype) QEventPoint {
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QEventPoint_new5(@bitCast(_id), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` other: QEventPoint `
    ///
    pub fn operatorAssign(self: QEventPoint, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        qtc.QEventPoint_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` other: QEventPoint `
    ///
    pub fn operatorEqual(self: QEventPoint, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        return qtc.QEventPoint_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` other: QEventPoint `
    ///
    pub fn operatorNotEqual(self: QEventPoint, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        return qtc.QEventPoint_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` other: QEventPoint `
    ///
    pub fn swap(self: QEventPoint, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QEventPoint;
        qtc.QEventPoint_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn position(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pressPosition` instead
    ///
    pub const PressPosition = pressPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pressPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn pressPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_PressPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `grabPosition` instead
    ///
    pub const GrabPosition = grabPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#grabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn grabPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GrabPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastPosition` instead
    ///
    pub const LastPosition = lastPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn lastPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePosition` instead
    ///
    pub const ScenePosition = scenePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn scenePosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePressPosition` instead
    ///
    pub const ScenePressPosition = scenePressPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#scenePressPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn scenePressPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_ScenePressPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sceneGrabPosition` instead
    ///
    pub const SceneGrabPosition = sceneGrabPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#sceneGrabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn sceneGrabPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_SceneGrabPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sceneLastPosition` instead
    ///
    pub const SceneLastPosition = sceneLastPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#sceneLastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn sceneLastPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_SceneLastPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPosition` instead
    ///
    pub const GlobalPosition = globalPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn globalPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPressPosition` instead
    ///
    pub const GlobalPressPosition = globalPressPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalPressPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn globalPressPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GlobalPressPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalGrabPosition` instead
    ///
    pub const GlobalGrabPosition = globalGrabPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalGrabPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn globalGrabPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GlobalGrabPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalLastPosition` instead
    ///
    pub const GlobalLastPosition = globalLastPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#globalLastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn globalLastPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_GlobalLastPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalizedPosition` instead
    ///
    pub const NormalizedPosition = normalizedPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn normalizedPosition(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_NormalizedPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn pos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `startPos` instead
    ///
    pub const StartPos = startPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn startPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_StartPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn scenePos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `startScenePos` instead
    ///
    pub const StartScenePos = startScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn startScenePos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_StartScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn screenPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `startScreenPos` instead
    ///
    pub const StartScreenPos = startScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn startScreenPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_StartScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `startNormalizedPos` instead
    ///
    pub const StartNormalizedPos = startNormalizedPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#startNormalizedPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn startNormalizedPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_StartNormalizedPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalizedPos` instead
    ///
    pub const NormalizedPos = normalizedPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn normalizedPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_NormalizedPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastPos` instead
    ///
    pub const LastPos = lastPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn lastPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastScenePos` instead
    ///
    pub const LastScenePos = lastScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn lastScenePos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastScreenPos` instead
    ///
    pub const LastScreenPos = lastScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn lastScreenPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastNormalizedPos` instead
    ///
    pub const LastNormalizedPos = lastNormalizedPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastNormalizedPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn lastNormalizedPos(self: QEventPoint) QPointF {
        return .{ .ptr = qtc.QEventPoint_LastNormalizedPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `velocity` instead
    ///
    pub const Velocity = velocity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#velocity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn velocity(self: QEventPoint) QVector2D {
        return .{ .ptr = qtc.QEventPoint_Velocity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QEventPoint) u8 {
        return qtc.QEventPoint_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn device(self: QEventPoint) QPointingDevice {
        return .{ .ptr = qtc.QEventPoint_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn id(self: QEventPoint) i32 {
        return qtc.QEventPoint_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn uniqueId(self: QEventPoint) QPointingDeviceUniqueId {
        return .{ .ptr = qtc.QEventPoint_UniqueId(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn timestamp(self: QEventPoint) usize {
        return qtc.QEventPoint_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastTimestamp` instead
    ///
    pub const LastTimestamp = lastTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#lastTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn lastTimestamp(self: QEventPoint) usize {
        return qtc.QEventPoint_LastTimestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pressTimestamp` instead
    ///
    pub const PressTimestamp = pressTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pressTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn pressTimestamp(self: QEventPoint) usize {
        return qtc.QEventPoint_PressTimestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timeHeld` instead
    ///
    pub const TimeHeld = timeHeld;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#timeHeld)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn timeHeld(self: QEventPoint) f64 {
        return qtc.QEventPoint_TimeHeld(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pressure` instead
    ///
    pub const Pressure = pressure;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#pressure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn pressure(self: QEventPoint) f64 {
        return qtc.QEventPoint_Pressure(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn rotation(self: QEventPoint) f64 {
        return qtc.QEventPoint_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ellipseDiameters` instead
    ///
    pub const EllipseDiameters = ellipseDiameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#ellipseDiameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn ellipseDiameters(self: QEventPoint) QSizeF {
        return .{ .ptr = qtc.QEventPoint_EllipseDiameters(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn isAccepted(self: QEventPoint) bool {
        return qtc.QEventPoint_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    pub fn setAccepted(self: QEventPoint) void {
        qtc.QEventPoint_SetAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAccepted1` instead
    ///
    pub const SetAccepted1 = setAccepted1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEventPoint `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted1(self: QEventPoint, accepted: bool) void {
        qtc.QEventPoint_SetAccepted1(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventpoint.html#dtor.QEventPoint)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QEventPoint `
    ///
    pub fn delete(self: QEventPoint) void {
        qtc.QEventPoint_Delete(@ptrCast(self.ptr));
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
