const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qevent_enums = enums;
const qinputdevice_enums = @import("libqinputdevice.zig").enums;
const qkeysequence_enums = @import("libqkeysequence.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpointingdevice_enums = @import("libqpointingdevice.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qinputevent.html
pub const qinputevent = struct {
    /// New constructs a new QInputEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, m_dev: QtC.QInputDevice ```
    pub fn New(typeVal: i64, m_dev: ?*anyopaque) QtC.QInputEvent {
        return qtc.QInputEvent_new(@intCast(typeVal), @ptrCast(m_dev));
    }

    /// New2 constructs a new QInputEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, m_dev: QtC.QInputDevice, modifiers: i32 ```
    pub fn New2(typeVal: i64, m_dev: ?*anyopaque, modifiers: i64) QtC.QInputEvent {
        return qtc.QInputEvent_new2(@intCast(typeVal), @ptrCast(m_dev), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QInputEvent {
        return qtc.QInputEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QInputEvent, slot: fn () callconv(.c) QtC.QInputEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QInputEvent) void {
        qtc.QInputEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QInputEvent {
        return qtc.QInputEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QInputEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QInputEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QInputEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QInputEvent, slot: fn (self: QtC.QInputEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QInputEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QInputEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QInputEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QInputEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QInputEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QInputEvent, slot: fn (self: QtC.QInputEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QInputEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#dtor.QInputEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QInputEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpointerevent.html
pub const qpointerevent = struct {
    /// New constructs a new QPointerEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, dev: QtC.QPointingDevice ```
    pub fn New(typeVal: i64, dev: ?*anyopaque) QtC.QPointerEvent {
        return qtc.QPointerEvent_new(@intCast(typeVal), @ptrCast(dev));
    }

    /// New2 constructs a new QPointerEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, dev: QtC.QPointingDevice, modifiers: i32 ```
    pub fn New2(typeVal: i64, dev: ?*anyopaque, modifiers: i64) QtC.QPointerEvent {
        return qtc.QPointerEvent_new2(@intCast(typeVal), @ptrCast(dev), @intCast(modifiers));
    }

    /// New3 constructs a new QPointerEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, dev: QtC.QPointingDevice, modifiers: i32, points: []QtC.QEventPoint ```
    pub fn New3(typeVal: i64, dev: ?*anyopaque, modifiers: i64, points: []QtC.QEventPoint) QtC.QPointerEvent {
        const points_list = qtc.struct_libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };

        return qtc.QPointerEvent_new3(@intCast(typeVal), @ptrCast(dev), @intCast(modifiers), points_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QPointerEvent {
        return qtc.QPointerEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPointerEvent, slot: fn () callconv(.c) QtC.QPointerEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPointerEvent) void {
        qtc.QPointerEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QPointerEvent {
        return qtc.QPointerEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QPointerEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QPointerEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPointerEvent, slot: fn (self: QtC.QPointerEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPointerEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QPointerEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ``` self: QtC.QPointerEvent, i: i64 ```
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ``` self: QtC.QPointerEvent, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qpointerevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ``` self: QtC.QPointerEvent, id: i32 ```
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_IsBeginEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPointerEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsBeginEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsBeginEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPointerEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsUpdateEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsUpdateEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_IsEndEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPointerEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsEndEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsEndEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// ``` self: QtC.QPointerEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPointerEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPointerEvent, slot: fn (self: QtC.QPointerEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPointerEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPointerEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ``` self: QtC.QPointerEvent, point: QtC.QEventPoint ```
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ``` self: QtC.QPointerEvent, point: QtC.QEventPoint, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ``` self: QtC.QPointerEvent, point: QtC.QEventPoint ```
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ``` self: QtC.QPointerEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ``` self: QtC.QPointerEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QPointerEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#dtor.QPointerEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPointerEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPointerEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsinglepointevent.html
pub const qsinglepointevent = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#clone)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QSinglePointEvent {
        return qtc.QSinglePointEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Button(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QSinglePointEvent_IsBeginEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QSinglePointEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QSinglePointEvent_IsEndEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ``` self: QtC.QSinglePointEvent, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QSinglePointEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QPointerEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ``` self: QtC.QSinglePointEvent, i: i64 ```
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ``` self: QtC.QSinglePointEvent, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qsinglepointevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ``` self: QtC.QSinglePointEvent, id: i32 ```
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// ``` self: QtC.QSinglePointEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPointerEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ``` self: QtC.QSinglePointEvent, point: QtC.QEventPoint ```
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ``` self: QtC.QSinglePointEvent, point: QtC.QEventPoint, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ``` self: QtC.QSinglePointEvent, point: QtC.QEventPoint ```
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ``` self: QtC.QSinglePointEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ``` self: QtC.QSinglePointEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QSinglePointEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#dtor.QSinglePointEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSinglePointEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSinglePointEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qenterevent.html
pub const qenterevent = struct {
    /// New constructs a new QEnterEvent object.
    ///
    /// ``` localPos: QtC.QPointF, scenePos: QtC.QPointF, globalPos: QtC.QPointF ```
    pub fn New(localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_new(@ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos));
    }

    /// New2 constructs a new QEnterEvent object.
    ///
    /// ``` localPos: QtC.QPointF, scenePos: QtC.QPointF, globalPos: QtC.QPointF, device: QtC.QPointingDevice ```
    pub fn New2(localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, device: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_new2(@ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QEnterEvent, slot: fn () callconv(.c) QtC.QEnterEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QEnterEvent) void {
        qtc.QEnterEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#pos)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QEnterEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#globalPos)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QEnterEvent_GlobalPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#x)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QEnterEvent_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#y)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QEnterEvent_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#globalX)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QEnterEvent_GlobalX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#globalY)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QEnterEvent_GlobalY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#localPos)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn LocalPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEnterEvent_LocalPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#windowPos)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn WindowPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEnterEvent_WindowPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#screenPos)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEnterEvent_ScreenPos(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Button(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ``` self: QtC.QEnterEvent, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ``` self: QtC.QEnterEvent, i: i64 ```
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ``` self: QtC.QEnterEvent, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qenterevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ``` self: QtC.QEnterEvent, id: i32 ```
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ``` self: QtC.QEnterEvent, point: QtC.QEventPoint ```
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ``` self: QtC.QEnterEvent, point: QtC.QEventPoint, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ``` self: QtC.QEnterEvent, point: QtC.QEventPoint ```
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ``` self: QtC.QEnterEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ``` self: QtC.QEnterEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QEnterEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsBeginEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsBeginEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsUpdateEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsUpdateEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsEndEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsEndEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QEnterEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QEnterEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent, slot: fn (self: QtC.QEnterEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QEnterEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QEnterEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QEnterEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QEnterEvent, slot: fn (self: QtC.QEnterEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QEnterEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#dtor.QEnterEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QEnterEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QEnterEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmouseevent.html
pub const qmouseevent = struct {
    /// New constructs a new QMouseEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, localPos: QtC.QPointF, button: qnamespace_enums.MouseButton, buttons: i32, modifiers: i32 ```
    pub fn New(typeVal: i64, localPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64) QtC.QMouseEvent {
        return qtc.QMouseEvent_new(@intCast(typeVal), @ptrCast(localPos), @intCast(button), @intCast(buttons), @intCast(modifiers));
    }

    /// New2 constructs a new QMouseEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, localPos: QtC.QPointF, globalPos: QtC.QPointF, button: qnamespace_enums.MouseButton, buttons: i32, modifiers: i32 ```
    pub fn New2(typeVal: i64, localPos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64) QtC.QMouseEvent {
        return qtc.QMouseEvent_new2(@intCast(typeVal), @ptrCast(localPos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers));
    }

    /// New3 constructs a new QMouseEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, localPos: QtC.QPointF, scenePos: QtC.QPointF, globalPos: QtC.QPointF, button: qnamespace_enums.MouseButton, buttons: i32, modifiers: i32 ```
    pub fn New3(typeVal: i64, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64) QtC.QMouseEvent {
        return qtc.QMouseEvent_new3(@intCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers));
    }

    /// New4 constructs a new QMouseEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, localPos: QtC.QPointF, scenePos: QtC.QPointF, globalPos: QtC.QPointF, button: qnamespace_enums.MouseButton, buttons: i32, modifiers: i32, source: qnamespace_enums.MouseEventSource ```
    pub fn New4(typeVal: i64, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, source: i64) QtC.QMouseEvent {
        return qtc.QMouseEvent_new4(@intCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @intCast(source));
    }

    /// New5 constructs a new QMouseEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, localPos: QtC.QPointF, button: qnamespace_enums.MouseButton, buttons: i32, modifiers: i32, device: QtC.QPointingDevice ```
    pub fn New5(typeVal: i64, localPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new5(@intCast(typeVal), @ptrCast(localPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @ptrCast(device));
    }

    /// New6 constructs a new QMouseEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, localPos: QtC.QPointF, globalPos: QtC.QPointF, button: qnamespace_enums.MouseButton, buttons: i32, modifiers: i32, device: QtC.QPointingDevice ```
    pub fn New6(typeVal: i64, localPos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new6(@intCast(typeVal), @ptrCast(localPos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @ptrCast(device));
    }

    /// New7 constructs a new QMouseEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, localPos: QtC.QPointF, scenePos: QtC.QPointF, globalPos: QtC.QPointF, button: qnamespace_enums.MouseButton, buttons: i32, modifiers: i32, device: QtC.QPointingDevice ```
    pub fn New7(typeVal: i64, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new7(@intCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @ptrCast(device));
    }

    /// New8 constructs a new QMouseEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, localPos: QtC.QPointF, scenePos: QtC.QPointF, globalPos: QtC.QPointF, button: qnamespace_enums.MouseButton, buttons: i32, modifiers: i32, source: qnamespace_enums.MouseEventSource, device: QtC.QPointingDevice ```
    pub fn New8(typeVal: i64, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, source: i64, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new8(@intCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @intCast(source), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QMouseEvent, slot: fn () callconv(.c) QtC.QMouseEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMouseEvent) void {
        qtc.QMouseEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#pos)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QMouseEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#globalPos)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QMouseEvent_GlobalPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#x)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#y)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#globalX)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_GlobalX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#globalY)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_GlobalY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#localPos)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn LocalPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QMouseEvent_LocalPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#windowPos)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn WindowPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QMouseEvent_WindowPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#screenPos)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QMouseEvent_ScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#source)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Source(self: ?*anyopaque) i64 {
        return qtc.QMouseEvent_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#flags)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return qtc.QMouseEvent_Flags(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Button(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ``` self: QtC.QMouseEvent, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ``` self: QtC.QMouseEvent, i: i64 ```
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ``` self: QtC.QMouseEvent, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qmouseevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ``` self: QtC.QMouseEvent, id: i32 ```
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ``` self: QtC.QMouseEvent, point: QtC.QEventPoint ```
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ``` self: QtC.QMouseEvent, point: QtC.QEventPoint, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ``` self: QtC.QMouseEvent, point: QtC.QEventPoint ```
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ``` self: QtC.QMouseEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ``` self: QtC.QMouseEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QMouseEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsBeginEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsBeginEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsUpdateEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsUpdateEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsEndEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsEndEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QMouseEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QMouseEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent, slot: fn (self: QtC.QMouseEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QMouseEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QMouseEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QMouseEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMouseEvent, slot: fn (self: QtC.QMouseEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMouseEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#dtor.QMouseEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMouseEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMouseEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhoverevent.html
pub const qhoverevent = struct {
    /// New constructs a new QHoverEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, scenePos: QtC.QPointF, globalPos: QtC.QPointF, oldPos: QtC.QPointF ```
    pub fn New(typeVal: i64, scenePos: ?*anyopaque, globalPos: ?*anyopaque, oldPos: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new(@intCast(typeVal), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(oldPos));
    }

    /// New2 constructs a new QHoverEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, pos: QtC.QPointF, oldPos: QtC.QPointF ```
    pub fn New2(typeVal: i64, pos: ?*anyopaque, oldPos: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new2(@intCast(typeVal), @ptrCast(pos), @ptrCast(oldPos));
    }

    /// New3 constructs a new QHoverEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, scenePos: QtC.QPointF, globalPos: QtC.QPointF, oldPos: QtC.QPointF, modifiers: i32 ```
    pub fn New3(typeVal: i64, scenePos: ?*anyopaque, globalPos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i64) QtC.QHoverEvent {
        return qtc.QHoverEvent_new3(@intCast(typeVal), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(oldPos), @intCast(modifiers));
    }

    /// New4 constructs a new QHoverEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, scenePos: QtC.QPointF, globalPos: QtC.QPointF, oldPos: QtC.QPointF, modifiers: i32, device: QtC.QPointingDevice ```
    pub fn New4(typeVal: i64, scenePos: ?*anyopaque, globalPos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i64, device: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new4(@intCast(typeVal), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(oldPos), @intCast(modifiers), @ptrCast(device));
    }

    /// New5 constructs a new QHoverEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, pos: QtC.QPointF, oldPos: QtC.QPointF, modifiers: i32 ```
    pub fn New5(typeVal: i64, pos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i64) QtC.QHoverEvent {
        return qtc.QHoverEvent_new5(@intCast(typeVal), @ptrCast(pos), @ptrCast(oldPos), @intCast(modifiers));
    }

    /// New6 constructs a new QHoverEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, pos: QtC.QPointF, oldPos: QtC.QPointF, modifiers: i32, device: QtC.QPointingDevice ```
    pub fn New6(typeVal: i64, pos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i64, device: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new6(@intCast(typeVal), @ptrCast(pos), @ptrCast(oldPos), @intCast(modifiers), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHoverEvent, slot: fn () callconv(.c) QtC.QHoverEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QHoverEvent) void {
        qtc.QHoverEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#pos)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QHoverEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#posF)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QHoverEvent_PosF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHoverEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsUpdateEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsUpdateEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#oldPos)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn OldPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QHoverEvent_OldPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#oldPosF)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn OldPosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QHoverEvent_OldPosF(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Button(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ``` self: QtC.QHoverEvent, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ``` self: QtC.QHoverEvent, i: i64 ```
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ``` self: QtC.QHoverEvent, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qhoverevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ``` self: QtC.QHoverEvent, id: i32 ```
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ``` self: QtC.QHoverEvent, point: QtC.QEventPoint ```
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ``` self: QtC.QHoverEvent, point: QtC.QEventPoint, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ``` self: QtC.QHoverEvent, point: QtC.QEventPoint ```
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ``` self: QtC.QHoverEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ``` self: QtC.QHoverEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QHoverEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsBeginEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsBeginEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsEndEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsEndEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QHoverEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QHoverEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent, slot: fn (self: QtC.QHoverEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QHoverEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHoverEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHoverEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHoverEvent, slot: fn (self: QtC.QHoverEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QHoverEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#dtor.QHoverEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHoverEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHoverEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwheelevent.html
pub const qwheelevent = struct {
    /// New constructs a new QWheelEvent object.
    ///
    /// ``` pos: QtC.QPointF, globalPos: QtC.QPointF, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i32, modifiers: i32, phase: qnamespace_enums.ScrollPhase, inverted: bool ```
    pub fn New(pos: ?*anyopaque, globalPos: ?*anyopaque, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i64, modifiers: i64, phase: i64, inverted: bool) QtC.QWheelEvent {
        return qtc.QWheelEvent_new(@ptrCast(pos), @ptrCast(globalPos), @ptrCast(pixelDelta), @ptrCast(angleDelta), @intCast(buttons), @intCast(modifiers), @intCast(phase), inverted);
    }

    /// New2 constructs a new QWheelEvent object.
    ///
    /// ``` pos: QtC.QPointF, globalPos: QtC.QPointF, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i32, modifiers: i32, phase: qnamespace_enums.ScrollPhase, inverted: bool, source: qnamespace_enums.MouseEventSource ```
    pub fn New2(pos: ?*anyopaque, globalPos: ?*anyopaque, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i64, modifiers: i64, phase: i64, inverted: bool, source: i64) QtC.QWheelEvent {
        return qtc.QWheelEvent_new2(@ptrCast(pos), @ptrCast(globalPos), @ptrCast(pixelDelta), @ptrCast(angleDelta), @intCast(buttons), @intCast(modifiers), @intCast(phase), inverted, @intCast(source));
    }

    /// New3 constructs a new QWheelEvent object.
    ///
    /// ``` pos: QtC.QPointF, globalPos: QtC.QPointF, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i32, modifiers: i32, phase: qnamespace_enums.ScrollPhase, inverted: bool, source: qnamespace_enums.MouseEventSource, device: QtC.QPointingDevice ```
    pub fn New3(pos: ?*anyopaque, globalPos: ?*anyopaque, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i64, modifiers: i64, phase: i64, inverted: bool, source: i64, device: ?*anyopaque) QtC.QWheelEvent {
        return qtc.QWheelEvent_new3(@ptrCast(pos), @ptrCast(globalPos), @ptrCast(pixelDelta), @ptrCast(angleDelta), @intCast(buttons), @intCast(modifiers), @intCast(phase), inverted, @intCast(source), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QWheelEvent {
        return qtc.QWheelEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWheelEvent, slot: fn () callconv(.c) QtC.QWheelEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWheelEvent) void {
        qtc.QWheelEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QWheelEvent {
        return qtc.QWheelEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#pixelDelta)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn PixelDelta(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWheelEvent_PixelDelta(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#angleDelta)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn AngleDelta(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWheelEvent_AngleDelta(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#phase)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Phase(self: ?*anyopaque) i64 {
        return qtc.QWheelEvent_Phase(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#inverted)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Inverted(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_Inverted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isInverted)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn IsInverted(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_IsInverted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#hasPixelDelta)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn HasPixelDelta(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_HasPixelDelta(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_IsBeginEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWheelEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsBeginEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsBeginEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWheelEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsUpdateEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsUpdateEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_IsEndEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWheelEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsEndEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsEndEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#source)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Source(self: ?*anyopaque) i64 {
        return qtc.QWheelEvent_Source(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Button(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ``` self: QtC.QWheelEvent, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ``` self: QtC.QWheelEvent, i: i64 ```
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ``` self: QtC.QWheelEvent, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qwheelevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ``` self: QtC.QWheelEvent, id: i32 ```
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ``` self: QtC.QWheelEvent, point: QtC.QEventPoint ```
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ``` self: QtC.QWheelEvent, point: QtC.QEventPoint, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ``` self: QtC.QWheelEvent, point: QtC.QEventPoint ```
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ``` self: QtC.QWheelEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ``` self: QtC.QWheelEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QWheelEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWheelEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QWheelEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWheelEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QWheelEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWheelEvent, slot: fn (self: QtC.QWheelEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QWheelEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWheelEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWheelEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWheelEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWheelEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWheelEvent, slot: fn (self: QtC.QWheelEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWheelEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#dtor.QWheelEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWheelEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWheelEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtabletevent.html
pub const qtabletevent = struct {
    /// New constructs a new QTabletEvent object.
    ///
    /// ``` t: qevent_enums.Type, device: QtC.QPointingDevice, pos: QtC.QPointF, globalPos: QtC.QPointF, pressure: f64, xTilt: f32, yTilt: f32, tangentialPressure: f32, rotation: f64, z: f32, keyState: i32, button: qnamespace_enums.MouseButton, buttons: i32 ```
    pub fn New(t: i64, device: ?*anyopaque, pos: ?*anyopaque, globalPos: ?*anyopaque, pressure: f64, xTilt: f32, yTilt: f32, tangentialPressure: f32, rotation: f64, z: f32, keyState: i64, button: i64, buttons: i64) QtC.QTabletEvent {
        return qtc.QTabletEvent_new(@intCast(t), @ptrCast(device), @ptrCast(pos), @ptrCast(globalPos), @floatCast(pressure), @floatCast(xTilt), @floatCast(yTilt), @floatCast(tangentialPressure), @floatCast(rotation), @floatCast(z), @intCast(keyState), @intCast(button), @intCast(buttons));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QTabletEvent {
        return qtc.QTabletEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTabletEvent, slot: fn () callconv(.c) QtC.QTabletEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTabletEvent) void {
        qtc.QTabletEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QTabletEvent {
        return qtc.QTabletEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#pos)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QTabletEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#globalPos)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QTabletEvent_GlobalPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#posF)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QTabletEvent_PosF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#globalPosF)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn GlobalPosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QTabletEvent_GlobalPosF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#x)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QTabletEvent_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#y)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QTabletEvent_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#globalX)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QTabletEvent_GlobalX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#globalY)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QTabletEvent_GlobalY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalX)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn HiResGlobalX(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_HiResGlobalX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalY)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn HiResGlobalY(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_HiResGlobalY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#uniqueId)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn UniqueId(self: ?*anyopaque) i64 {
        return qtc.QTabletEvent_UniqueId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#pressure)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Pressure(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_Pressure(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#rotation)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Rotation(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_Rotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#z)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Z(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_Z(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#tangentialPressure)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn TangentialPressure(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_TangentialPressure(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#xTilt)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn XTilt(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_XTilt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#yTilt)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn YTilt(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_YTilt(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Button(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ``` self: QtC.QTabletEvent, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ``` self: QtC.QTabletEvent, i: i64 ```
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ``` self: QtC.QTabletEvent, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qtabletevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ``` self: QtC.QTabletEvent, id: i32 ```
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ``` self: QtC.QTabletEvent, point: QtC.QEventPoint ```
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ``` self: QtC.QTabletEvent, point: QtC.QEventPoint, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ``` self: QtC.QTabletEvent, point: QtC.QEventPoint ```
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ``` self: QtC.QTabletEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ``` self: QtC.QTabletEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QTabletEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsBeginEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsBeginEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsUpdateEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsUpdateEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsEndEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsEndEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QTabletEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QTabletEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent, slot: fn (self: QtC.QTabletEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QTabletEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTabletEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTabletEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTabletEvent, slot: fn (self: QtC.QTabletEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTabletEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#dtor.QTabletEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTabletEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTabletEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnativegestureevent.html
pub const qnativegestureevent = struct {
    /// New constructs a new QNativeGestureEvent object.
    ///
    /// ``` typeVal: qnamespace_enums.NativeGestureType, dev: QtC.QPointingDevice, localPos: QtC.QPointF, scenePos: QtC.QPointF, globalPos: QtC.QPointF, value: f64, sequenceId: u64, intArgument: u64 ```
    pub fn New(typeVal: i64, dev: ?*anyopaque, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, value: f64, sequenceId: u64, intArgument: u64) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_new(@intCast(typeVal), @ptrCast(dev), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @floatCast(value), @intCast(sequenceId), @intCast(intArgument));
    }

    /// New2 constructs a new QNativeGestureEvent object.
    ///
    /// ``` typeVal: qnamespace_enums.NativeGestureType, dev: QtC.QPointingDevice, fingerCount: i32, localPos: QtC.QPointF, scenePos: QtC.QPointF, globalPos: QtC.QPointF, value: f64, delta: QtC.QPointF ```
    pub fn New2(typeVal: i64, dev: ?*anyopaque, fingerCount: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, value: f64, delta: ?*anyopaque) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_new2(@intCast(typeVal), @ptrCast(dev), @intCast(fingerCount), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @floatCast(value), @ptrCast(delta));
    }

    /// New3 constructs a new QNativeGestureEvent object.
    ///
    /// ``` typeVal: qnamespace_enums.NativeGestureType, dev: QtC.QPointingDevice, fingerCount: i32, localPos: QtC.QPointF, scenePos: QtC.QPointF, globalPos: QtC.QPointF, value: f64, delta: QtC.QPointF, sequenceId: u64 ```
    pub fn New3(typeVal: i64, dev: ?*anyopaque, fingerCount: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, value: f64, delta: ?*anyopaque, sequenceId: u64) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_new3(@intCast(typeVal), @ptrCast(dev), @intCast(fingerCount), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @floatCast(value), @ptrCast(delta), @intCast(sequenceId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QNativeGestureEvent, slot: fn () callconv(.c) QtC.QNativeGestureEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QNativeGestureEvent) void {
        qtc.QNativeGestureEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#gestureType)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn GestureType(self: ?*anyopaque) i64 {
        return qtc.QNativeGestureEvent_GestureType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#fingerCount)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn FingerCount(self: ?*anyopaque) i32 {
        return qtc.QNativeGestureEvent_FingerCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#value)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Value(self: ?*anyopaque) f64 {
        return qtc.QNativeGestureEvent_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#delta)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Delta(self: ?*anyopaque) QtC.QPointF {
        return qtc.QNativeGestureEvent_Delta(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#pos)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QNativeGestureEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#globalPos)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QNativeGestureEvent_GlobalPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#localPos)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn LocalPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QNativeGestureEvent_LocalPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#windowPos)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn WindowPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QNativeGestureEvent_WindowPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#screenPos)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QNativeGestureEvent_ScreenPos(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Button(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ``` self: QtC.QNativeGestureEvent, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ``` self: QtC.QNativeGestureEvent, i: i64 ```
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ``` self: QtC.QNativeGestureEvent, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qnativegestureevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ``` self: QtC.QNativeGestureEvent, id: i32 ```
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ``` self: QtC.QNativeGestureEvent, point: QtC.QEventPoint ```
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ``` self: QtC.QNativeGestureEvent, point: QtC.QEventPoint, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ``` self: QtC.QNativeGestureEvent, point: QtC.QEventPoint ```
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ``` self: QtC.QNativeGestureEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ``` self: QtC.QNativeGestureEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QNativeGestureEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsBeginEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsBeginEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsUpdateEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsUpdateEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsEndEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsEndEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QNativeGestureEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QNativeGestureEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent, slot: fn (self: QtC.QNativeGestureEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QNativeGestureEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QNativeGestureEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QNativeGestureEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNativeGestureEvent, slot: fn (self: QtC.QNativeGestureEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QNativeGestureEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#dtor.QNativeGestureEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNativeGestureEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNativeGestureEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qkeyevent.html
pub const qkeyevent = struct {
    /// New constructs a new QKeyEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, key: i32, modifiers: i32 ```
    pub fn New(typeVal: i64, key: i32, modifiers: i64) QtC.QKeyEvent {
        return qtc.QKeyEvent_new(@intCast(typeVal), @intCast(key), @intCast(modifiers));
    }

    /// New2 constructs a new QKeyEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32 ```
    pub fn New2(typeVal: i64, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32) QtC.QKeyEvent {
        return qtc.QKeyEvent_new2(@intCast(typeVal), @intCast(key), @intCast(modifiers), @intCast(nativeScanCode), @intCast(nativeVirtualKey), @intCast(nativeModifiers));
    }

    /// New3 constructs a new QKeyEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, key: i32, modifiers: i32, text: []const u8 ```
    pub fn New3(typeVal: i64, key: i32, modifiers: i64, text: []const u8) QtC.QKeyEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new3(@intCast(typeVal), @intCast(key), @intCast(modifiers), text_str);
    }

    /// New4 constructs a new QKeyEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, key: i32, modifiers: i32, text: []const u8, autorep: bool ```
    pub fn New4(typeVal: i64, key: i32, modifiers: i64, text: []const u8, autorep: bool) QtC.QKeyEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new4(@intCast(typeVal), @intCast(key), @intCast(modifiers), text_str, autorep);
    }

    /// New5 constructs a new QKeyEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, key: i32, modifiers: i32, text: []const u8, autorep: bool, count: u16 ```
    pub fn New5(typeVal: i64, key: i32, modifiers: i64, text: []const u8, autorep: bool, count: u16) QtC.QKeyEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new5(@intCast(typeVal), @intCast(key), @intCast(modifiers), text_str, autorep, @intCast(count));
    }

    /// New6 constructs a new QKeyEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8 ```
    pub fn New6(typeVal: i64, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8) QtC.QKeyEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new6(@intCast(typeVal), @intCast(key), @intCast(modifiers), @intCast(nativeScanCode), @intCast(nativeVirtualKey), @intCast(nativeModifiers), text_str);
    }

    /// New7 constructs a new QKeyEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool ```
    pub fn New7(typeVal: i64, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool) QtC.QKeyEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new7(@intCast(typeVal), @intCast(key), @intCast(modifiers), @intCast(nativeScanCode), @intCast(nativeVirtualKey), @intCast(nativeModifiers), text_str, autorep);
    }

    /// New8 constructs a new QKeyEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16 ```
    pub fn New8(typeVal: i64, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16) QtC.QKeyEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new8(@intCast(typeVal), @intCast(key), @intCast(modifiers), @intCast(nativeScanCode), @intCast(nativeVirtualKey), @intCast(nativeModifiers), text_str, autorep, @intCast(count));
    }

    /// New9 constructs a new QKeyEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16, device: QtC.QInputDevice ```
    pub fn New9(typeVal: i64, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16, device: ?*anyopaque) QtC.QKeyEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new9(@intCast(typeVal), @intCast(key), @intCast(modifiers), @intCast(nativeScanCode), @intCast(nativeVirtualKey), @intCast(nativeModifiers), text_str, autorep, @intCast(count), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QKeyEvent {
        return qtc.QKeyEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QKeyEvent, slot: fn () callconv(.c) QtC.QKeyEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QKeyEvent) void {
        qtc.QKeyEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QKeyEvent {
        return qtc.QKeyEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#key)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Key(self: ?*anyopaque) i32 {
        return qtc.QKeyEvent_Key(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#matches)
    ///
    /// ``` self: QtC.QKeyEvent, key: qkeysequence_enums.StandardKey ```
    pub fn Matches(self: ?*anyopaque, key: i64) bool {
        return qtc.QKeyEvent_Matches(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#modifiers)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QKeyEvent_Modifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#keyCombination)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn KeyCombination(self: ?*anyopaque) QtC.QKeyCombination {
        return qtc.QKeyEvent_KeyCombination(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#text)
    ///
    /// ``` self: QtC.QKeyEvent, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QKeyEvent_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeyevent.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#isAutoRepeat)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn IsAutoRepeat(self: ?*anyopaque) bool {
        return qtc.QKeyEvent_IsAutoRepeat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#count)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QKeyEvent_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#nativeScanCode)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn NativeScanCode(self: ?*anyopaque) u32 {
        return qtc.QKeyEvent_NativeScanCode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#nativeVirtualKey)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn NativeVirtualKey(self: ?*anyopaque) u32 {
        return qtc.QKeyEvent_NativeVirtualKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#nativeModifiers)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn NativeModifiers(self: ?*anyopaque) u32 {
        return qtc.QKeyEvent_NativeModifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QKeyEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QKeyEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QKeyEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QKeyEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QKeyEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QKeyEvent, slot: fn (self: QtC.QKeyEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QKeyEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QKeyEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QKeyEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QKeyEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QKeyEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QKeyEvent, slot: fn (self: QtC.QKeyEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QKeyEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#dtor.QKeyEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QKeyEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QKeyEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfocusevent.html
pub const qfocusevent = struct {
    /// New constructs a new QFocusEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type ```
    pub fn New(typeVal: i64) QtC.QFocusEvent {
        return qtc.QFocusEvent_new(@intCast(typeVal));
    }

    /// New2 constructs a new QFocusEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, reason: qnamespace_enums.FocusReason ```
    pub fn New2(typeVal: i64, reason: i64) QtC.QFocusEvent {
        return qtc.QFocusEvent_new2(@intCast(typeVal), @intCast(reason));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QFocusEvent {
        return qtc.QFocusEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFocusEvent, slot: fn () callconv(.c) QtC.QFocusEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QFocusEvent) void {
        qtc.QFocusEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QFocusEvent {
        return qtc.QFocusEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#gotFocus)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn GotFocus(self: ?*anyopaque) bool {
        return qtc.QFocusEvent_GotFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#lostFocus)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn LostFocus(self: ?*anyopaque) bool {
        return qtc.QFocusEvent_LostFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#reason)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn Reason(self: ?*anyopaque) i64 {
        return qtc.QFocusEvent_Reason(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFocusEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QFocusEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFocusEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QFocusEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFocusEvent, slot: fn (self: QtC.QFocusEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QFocusEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#dtor.QFocusEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFocusEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFocusEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpaintevent.html
pub const qpaintevent = struct {
    /// New constructs a new QPaintEvent object.
    ///
    /// ``` paintRegion: QtC.QRegion ```
    pub fn New(paintRegion: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_new(@ptrCast(paintRegion));
    }

    /// New2 constructs a new QPaintEvent object.
    ///
    /// ``` paintRect: QtC.QRect ```
    pub fn New2(paintRect: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_new2(@ptrCast(paintRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEvent, slot: fn () callconv(.c) QtC.QPaintEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEvent) void {
        qtc.QPaintEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintevent.html#rect)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPaintEvent_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintevent.html#region)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn Region(self: ?*anyopaque) QtC.QRegion {
        return qtc.QPaintEvent_Region(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPaintEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPaintEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPaintEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPaintEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPaintEvent, slot: fn (self: QtC.QPaintEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPaintEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintevent.html#dtor.QPaintEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPaintEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmoveevent.html
pub const qmoveevent = struct {
    /// New constructs a new QMoveEvent object.
    ///
    /// ``` pos: QtC.QPoint, oldPos: QtC.QPoint ```
    pub fn New(pos: ?*anyopaque, oldPos: ?*anyopaque) QtC.QMoveEvent {
        return qtc.QMoveEvent_new(@ptrCast(pos), @ptrCast(oldPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QMoveEvent {
        return qtc.QMoveEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QMoveEvent, slot: fn () callconv(.c) QtC.QMoveEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMoveEvent) void {
        qtc.QMoveEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QMoveEvent {
        return qtc.QMoveEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmoveevent.html#pos)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QMoveEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmoveevent.html#oldPos)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn OldPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QMoveEvent_OldPos(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMoveEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QMoveEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMoveEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QMoveEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMoveEvent, slot: fn (self: QtC.QMoveEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMoveEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmoveevent.html#dtor.QMoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMoveEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMoveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qexposeevent.html
pub const qexposeevent = struct {
    /// New constructs a new QExposeEvent object.
    ///
    /// ``` m_region: QtC.QRegion ```
    pub fn New(m_region: ?*anyopaque) QtC.QExposeEvent {
        return qtc.QExposeEvent_new(@ptrCast(m_region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QExposeEvent {
        return qtc.QExposeEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QExposeEvent, slot: fn () callconv(.c) QtC.QExposeEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QExposeEvent) void {
        qtc.QExposeEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QExposeEvent {
        return qtc.QExposeEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qexposeevent.html#region)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn Region(self: ?*anyopaque) QtC.QRegion {
        return qtc.QExposeEvent_Region(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QExposeEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QExposeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QExposeEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QExposeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QExposeEvent, slot: fn (self: QtC.QExposeEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QExposeEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qexposeevent.html#dtor.QExposeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QExposeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QExposeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qplatformsurfaceevent.html
pub const qplatformsurfaceevent = struct {
    /// New constructs a new QPlatformSurfaceEvent object.
    ///
    /// ``` surfaceEventType: qevent_enums.SurfaceEventType ```
    pub fn New(surfaceEventType: i64) QtC.QPlatformSurfaceEvent {
        return qtc.QPlatformSurfaceEvent_new(@intCast(surfaceEventType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QPlatformSurfaceEvent {
        return qtc.QPlatformSurfaceEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent, slot: fn () callconv(.c) QtC.QPlatformSurfaceEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPlatformSurfaceEvent) void {
        qtc.QPlatformSurfaceEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QPlatformSurfaceEvent {
        return qtc.QPlatformSurfaceEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#surfaceEventType)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn SurfaceEventType(self: ?*anyopaque) i64 {
        return qtc.QPlatformSurfaceEvent_SurfaceEventType(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPlatformSurfaceEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPlatformSurfaceEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent, slot: fn (self: QtC.QPlatformSurfaceEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlatformSurfaceEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#dtor.QPlatformSurfaceEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPlatformSurfaceEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlatformSurfaceEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qresizeevent.html
pub const qresizeevent = struct {
    /// New constructs a new QResizeEvent object.
    ///
    /// ``` size: QtC.QSize, oldSize: QtC.QSize ```
    pub fn New(size: ?*anyopaque, oldSize: ?*anyopaque) QtC.QResizeEvent {
        return qtc.QResizeEvent_new(@ptrCast(size), @ptrCast(oldSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QResizeEvent {
        return qtc.QResizeEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QResizeEvent, slot: fn () callconv(.c) QtC.QResizeEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QResizeEvent) void {
        qtc.QResizeEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QResizeEvent {
        return qtc.QResizeEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresizeevent.html#size)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QResizeEvent_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresizeevent.html#oldSize)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn OldSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QResizeEvent_OldSize(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QResizeEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QResizeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QResizeEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QResizeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QResizeEvent, slot: fn (self: QtC.QResizeEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QResizeEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresizeevent.html#dtor.QResizeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QResizeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QResizeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcloseevent.html
pub const qcloseevent = struct {
    /// New constructs a new QCloseEvent object.
    ///
    ///
    pub fn New() QtC.QCloseEvent {
        return qtc.QCloseEvent_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QCloseEvent {
        return qtc.QCloseEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCloseEvent, slot: fn () callconv(.c) QtC.QCloseEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QCloseEvent) void {
        qtc.QCloseEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QCloseEvent {
        return qtc.QCloseEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCloseEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QCloseEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCloseEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QCloseEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCloseEvent, slot: fn (self: QtC.QCloseEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCloseEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcloseevent.html#dtor.QCloseEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCloseEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCloseEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qicondragevent.html
pub const qicondragevent = struct {
    /// New constructs a new QIconDragEvent object.
    ///
    ///
    pub fn New() QtC.QIconDragEvent {
        return qtc.QIconDragEvent_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QIconDragEvent {
        return qtc.QIconDragEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconDragEvent, slot: fn () callconv(.c) QtC.QIconDragEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QIconDragEvent) void {
        qtc.QIconDragEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QIconDragEvent {
        return qtc.QIconDragEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QIconDragEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QIconDragEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QIconDragEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QIconDragEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QIconDragEvent, slot: fn (self: QtC.QIconDragEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QIconDragEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qicondragevent.html#dtor.QIconDragEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QIconDragEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIconDragEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qshowevent.html
pub const qshowevent = struct {
    /// New constructs a new QShowEvent object.
    ///
    ///
    pub fn New() QtC.QShowEvent {
        return qtc.QShowEvent_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QShowEvent {
        return qtc.QShowEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QShowEvent, slot: fn () callconv(.c) QtC.QShowEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QShowEvent) void {
        qtc.QShowEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QShowEvent {
        return qtc.QShowEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QShowEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QShowEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QShowEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QShowEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QShowEvent, slot: fn (self: QtC.QShowEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QShowEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshowevent.html#dtor.QShowEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QShowEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QShowEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhideevent.html
pub const qhideevent = struct {
    /// New constructs a new QHideEvent object.
    ///
    ///
    pub fn New() QtC.QHideEvent {
        return qtc.QHideEvent_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QHideEvent {
        return qtc.QHideEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHideEvent, slot: fn () callconv(.c) QtC.QHideEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QHideEvent) void {
        qtc.QHideEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QHideEvent {
        return qtc.QHideEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHideEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHideEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHideEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHideEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHideEvent, slot: fn (self: QtC.QHideEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QHideEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhideevent.html#dtor.QHideEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHideEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHideEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcontextmenuevent.html
pub const qcontextmenuevent = struct {
    /// New constructs a new QContextMenuEvent object.
    ///
    /// ``` reason: qevent_enums.Reason, pos: QtC.QPoint, globalPos: QtC.QPoint ```
    pub fn New(reason: i64, pos: ?*anyopaque, globalPos: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_new(@intCast(reason), @ptrCast(pos), @ptrCast(globalPos));
    }

    /// New2 constructs a new QContextMenuEvent object.
    ///
    /// ``` reason: qevent_enums.Reason, pos: QtC.QPoint ```
    pub fn New2(reason: i64, pos: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_new2(@intCast(reason), @ptrCast(pos));
    }

    /// New3 constructs a new QContextMenuEvent object.
    ///
    /// ``` reason: qevent_enums.Reason, pos: QtC.QPoint, globalPos: QtC.QPoint, modifiers: i32 ```
    pub fn New3(reason: i64, pos: ?*anyopaque, globalPos: ?*anyopaque, modifiers: i64) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_new3(@intCast(reason), @ptrCast(pos), @ptrCast(globalPos), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QContextMenuEvent, slot: fn () callconv(.c) QtC.QContextMenuEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QContextMenuEvent) void {
        qtc.QContextMenuEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#x)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QContextMenuEvent_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#y)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QContextMenuEvent_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalX)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QContextMenuEvent_GlobalX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalY)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QContextMenuEvent_GlobalY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#pos)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QContextMenuEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalPos)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QContextMenuEvent_GlobalPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#reason)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Reason(self: ?*anyopaque) i64 {
        return qtc.QContextMenuEvent_Reason(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QContextMenuEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QContextMenuEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QContextMenuEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QContextMenuEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QContextMenuEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QContextMenuEvent, slot: fn (self: QtC.QContextMenuEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QContextMenuEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QContextMenuEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QContextMenuEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QContextMenuEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QContextMenuEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QContextMenuEvent, slot: fn (self: QtC.QContextMenuEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QContextMenuEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#dtor.QContextMenuEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QContextMenuEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QContextMenuEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qinputmethodevent.html
pub const qinputmethodevent = struct {
    /// New constructs a new QInputMethodEvent object.
    ///
    ///
    pub fn New() QtC.QInputMethodEvent {
        return qtc.QInputMethodEvent_new();
    }

    /// New2 constructs a new QInputMethodEvent object.
    ///
    /// ``` preeditText: []const u8, attributes: []QtC.QInputMethodEvent__Attribute ```
    pub fn New2(preeditText: []const u8, attributes: []QtC.QInputMethodEvent__Attribute) QtC.QInputMethodEvent {
        const preeditText_str = qtc.struct_libqt_string{
            .len = preeditText.len,
            .data = preeditText.ptr,
        };
        const attributes_list = qtc.struct_libqt_list{
            .len = attributes.len,
            .data = @ptrCast(attributes.ptr),
        };

        return qtc.QInputMethodEvent_new2(preeditText_str, attributes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QInputMethodEvent {
        return qtc.QInputMethodEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QInputMethodEvent, slot: fn () callconv(.c) QtC.QInputMethodEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QInputMethodEvent) void {
        qtc.QInputMethodEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QInputMethodEvent {
        return qtc.QInputMethodEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ``` self: QtC.QInputMethodEvent, commitString: []const u8 ```
    pub fn SetCommitString(self: ?*anyopaque, commitString: []const u8) void {
        const commitString_str = qtc.struct_libqt_string{
            .len = commitString.len,
            .data = commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString(@ptrCast(self), commitString_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#attributes)
    ///
    /// ``` self: QtC.QInputMethodEvent, allocator: std.mem.Allocator ```
    pub fn Attributes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QInputMethodEvent__Attribute {
        const _arr: qtc.struct_libqt_list = qtc.QInputMethodEvent_Attributes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QInputMethodEvent__Attribute, _arr.len) catch @panic("qinputmethodevent.Attributes: Memory allocation failed");
        const _data: [*]QtC.QInputMethodEvent__Attribute = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#preeditString)
    ///
    /// ``` self: QtC.QInputMethodEvent, allocator: std.mem.Allocator ```
    pub fn PreeditString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputMethodEvent_PreeditString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethodevent.PreeditString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#commitString)
    ///
    /// ``` self: QtC.QInputMethodEvent, allocator: std.mem.Allocator ```
    pub fn CommitString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputMethodEvent_CommitString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethodevent.CommitString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementStart)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn ReplacementStart(self: ?*anyopaque) i32 {
        return qtc.QInputMethodEvent_ReplacementStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementLength)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn ReplacementLength(self: ?*anyopaque) i32 {
        return qtc.QInputMethodEvent_ReplacementLength(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ``` self: QtC.QInputMethodEvent, commitString: []const u8, replaceFrom: i32 ```
    pub fn SetCommitString2(self: ?*anyopaque, commitString: []const u8, replaceFrom: i32) void {
        const commitString_str = qtc.struct_libqt_string{
            .len = commitString.len,
            .data = commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString2(@ptrCast(self), commitString_str, @intCast(replaceFrom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ``` self: QtC.QInputMethodEvent, commitString: []const u8, replaceFrom: i32, replaceLength: i32 ```
    pub fn SetCommitString3(self: ?*anyopaque, commitString: []const u8, replaceFrom: i32, replaceLength: i32) void {
        const commitString_str = qtc.struct_libqt_string{
            .len = commitString.len,
            .data = commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString3(@ptrCast(self), commitString_str, @intCast(replaceFrom), @intCast(replaceLength));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QInputMethodEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputMethodEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QInputMethodEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputMethodEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QInputMethodEvent, slot: fn (self: QtC.QInputMethodEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QInputMethodEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#dtor.QInputMethodEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QInputMethodEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputMethodEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qinputmethodqueryevent.html
pub const qinputmethodqueryevent = struct {
    /// New constructs a new QInputMethodQueryEvent object.
    ///
    /// ``` queries: i32 ```
    pub fn New(queries: i64) QtC.QInputMethodQueryEvent {
        return qtc.QInputMethodQueryEvent_new(@intCast(queries));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QInputMethodQueryEvent {
        return qtc.QInputMethodQueryEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QInputMethodQueryEvent, slot: fn () callconv(.c) QtC.QInputMethodQueryEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QInputMethodQueryEvent) void {
        qtc.QInputMethodQueryEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QInputMethodQueryEvent {
        return qtc.QInputMethodQueryEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#queries)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn Queries(self: ?*anyopaque) i64 {
        return qtc.QInputMethodQueryEvent_Queries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#setValue)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent, query: qnamespace_enums.InputMethodQuery, value: QtC.QVariant ```
    pub fn SetValue(self: ?*anyopaque, query: i64, value: ?*anyopaque) void {
        qtc.QInputMethodQueryEvent_SetValue(@ptrCast(self), @intCast(query), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#value)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent, query: qnamespace_enums.InputMethodQuery ```
    pub fn Value(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QInputMethodQueryEvent_Value(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QInputMethodQueryEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputMethodQueryEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QInputMethodQueryEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputMethodQueryEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QInputMethodQueryEvent, slot: fn (self: QtC.QInputMethodQueryEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QInputMethodQueryEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#dtor.QInputMethodQueryEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QInputMethodQueryEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputMethodQueryEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdropevent.html
pub const qdropevent = struct {
    /// New constructs a new QDropEvent object.
    ///
    /// ``` pos: QtC.QPointF, actions: i32, data: QtC.QMimeData, buttons: i32, modifiers: i32 ```
    pub fn New(pos: ?*anyopaque, actions: i64, data: ?*anyopaque, buttons: i64, modifiers: i64) QtC.QDropEvent {
        return qtc.QDropEvent_new(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers));
    }

    /// New2 constructs a new QDropEvent object.
    ///
    /// ``` pos: QtC.QPointF, actions: i32, data: QtC.QMimeData, buttons: i32, modifiers: i32, typeVal: qevent_enums.Type ```
    pub fn New2(pos: ?*anyopaque, actions: i64, data: ?*anyopaque, buttons: i64, modifiers: i64, typeVal: i64) QtC.QDropEvent {
        return qtc.QDropEvent_new2(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QDropEvent {
        return qtc.QDropEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QDropEvent, slot: fn () callconv(.c) QtC.QDropEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QDropEvent) void {
        qtc.QDropEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QDropEvent {
        return qtc.QDropEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QDropEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_PosF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn MouseButtons(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn KeyboardModifiers(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#buttons)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_Buttons(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn PossibleActions(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn ProposedAction(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn AcceptProposedAction(self: ?*anyopaque) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn DropAction(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_DropAction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ``` self: QtC.QDropEvent, action: qnamespace_enums.DropAction ```
    pub fn SetDropAction(self: ?*anyopaque, action: i64) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Source(self: ?*anyopaque) QtC.QObject {
        return qtc.QDropEvent_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn MimeData(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QDropEvent_MimeData(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDropEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDropEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDropEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDropEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDropEvent, slot: fn (self: QtC.QDropEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDropEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#dtor.QDropEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDropEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDropEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdragmoveevent.html
pub const qdragmoveevent = struct {
    /// New constructs a new QDragMoveEvent object.
    ///
    /// ``` pos: QtC.QPoint, actions: i32, data: QtC.QMimeData, buttons: i32, modifiers: i32 ```
    pub fn New(pos: ?*anyopaque, actions: i64, data: ?*anyopaque, buttons: i64, modifiers: i64) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_new(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers));
    }

    /// New2 constructs a new QDragMoveEvent object.
    ///
    /// ``` pos: QtC.QPoint, actions: i32, data: QtC.QMimeData, buttons: i32, modifiers: i32, typeVal: qevent_enums.Type ```
    pub fn New2(pos: ?*anyopaque, actions: i64, data: ?*anyopaque, buttons: i64, modifiers: i64, typeVal: i64) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_new2(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QDragMoveEvent, slot: fn () callconv(.c) QtC.QDragMoveEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QDragMoveEvent) void {
        qtc.QDragMoveEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn AnswerRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QDragMoveEvent_AnswerRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Accept(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Ignore(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ``` self: QtC.QDragMoveEvent, r: QtC.QRect ```
    pub fn Accept2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Accept2(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ``` self: QtC.QDragMoveEvent, r: QtC.QRect ```
    pub fn Ignore2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Ignore2(@ptrCast(self), @ptrCast(r));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QDropEvent_Pos(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_PosF(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn MouseButtons(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn KeyboardModifiers(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_Position(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#buttons)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn PossibleActions(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn ProposedAction(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn AcceptProposedAction(self: ?*anyopaque) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn DropAction(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_DropAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ``` self: QtC.QDragMoveEvent, action: qnamespace_enums.DropAction ```
    pub fn SetDropAction(self: ?*anyopaque, action: i64) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Source(self: ?*anyopaque) QtC.QObject {
        return qtc.QDropEvent_Source(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn MimeData(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QDropEvent_MimeData(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDragMoveEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragMoveEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDragMoveEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragMoveEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDragMoveEvent, slot: fn (self: QtC.QDragMoveEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDragMoveEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#dtor.QDragMoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDragMoveEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdragenterevent.html
pub const qdragenterevent = struct {
    /// New constructs a new QDragEnterEvent object.
    ///
    /// ``` pos: QtC.QPoint, actions: i32, data: QtC.QMimeData, buttons: i32, modifiers: i32 ```
    pub fn New(pos: ?*anyopaque, actions: i64, data: ?*anyopaque, buttons: i64, modifiers: i64) QtC.QDragEnterEvent {
        return qtc.QDragEnterEvent_new(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QDragEnterEvent {
        return qtc.QDragEnterEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QDragEnterEvent, slot: fn () callconv(.c) QtC.QDragEnterEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QDragEnterEvent) void {
        qtc.QDragEnterEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QDragEnterEvent {
        return qtc.QDragEnterEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn AnswerRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QDragMoveEvent_AnswerRect(@ptrCast(self));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ``` self: QtC.QDragEnterEvent, r: QtC.QRect ```
    pub fn Accept2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Accept2(@ptrCast(self), @ptrCast(r));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ``` self: QtC.QDragEnterEvent, r: QtC.QRect ```
    pub fn Ignore2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Ignore2(@ptrCast(self), @ptrCast(r));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QDropEvent_Pos(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_PosF(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn MouseButtons(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn KeyboardModifiers(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_Position(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#buttons)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn PossibleActions(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn ProposedAction(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn AcceptProposedAction(self: ?*anyopaque) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn DropAction(self: ?*anyopaque) i64 {
        return qtc.QDropEvent_DropAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ``` self: QtC.QDragEnterEvent, action: qnamespace_enums.DropAction ```
    pub fn SetDropAction(self: ?*anyopaque, action: i64) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Source(self: ?*anyopaque) QtC.QObject {
        return qtc.QDropEvent_Source(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn MimeData(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QDropEvent_MimeData(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDragEnterEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragEnterEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDragEnterEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragEnterEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDragEnterEvent, slot: fn (self: QtC.QDragEnterEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDragEnterEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragenterevent.html#dtor.QDragEnterEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDragEnterEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDragEnterEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdragleaveevent.html
pub const qdragleaveevent = struct {
    /// New constructs a new QDragLeaveEvent object.
    ///
    ///
    pub fn New() QtC.QDragLeaveEvent {
        return qtc.QDragLeaveEvent_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QDragLeaveEvent {
        return qtc.QDragLeaveEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QDragLeaveEvent, slot: fn () callconv(.c) QtC.QDragLeaveEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QDragLeaveEvent) void {
        qtc.QDragLeaveEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QDragLeaveEvent {
        return qtc.QDragLeaveEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDragLeaveEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragLeaveEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDragLeaveEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragLeaveEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDragLeaveEvent, slot: fn (self: QtC.QDragLeaveEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDragLeaveEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdragleaveevent.html#dtor.QDragLeaveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDragLeaveEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDragLeaveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhelpevent.html
pub const qhelpevent = struct {
    /// New constructs a new QHelpEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, pos: QtC.QPoint, globalPos: QtC.QPoint ```
    pub fn New(typeVal: i64, pos: ?*anyopaque, globalPos: ?*anyopaque) QtC.QHelpEvent {
        return qtc.QHelpEvent_new(@intCast(typeVal), @ptrCast(pos), @ptrCast(globalPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QHelpEvent {
        return qtc.QHelpEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHelpEvent, slot: fn () callconv(.c) QtC.QHelpEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QHelpEvent) void {
        qtc.QHelpEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QHelpEvent {
        return qtc.QHelpEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#x)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QHelpEvent_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#y)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QHelpEvent_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#globalX)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QHelpEvent_GlobalX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#globalY)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QHelpEvent_GlobalY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#pos)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QHelpEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#globalPos)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QHelpEvent_GlobalPos(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHelpEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHelpEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHelpEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHelpEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHelpEvent, slot: fn (self: QtC.QHelpEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QHelpEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#dtor.QHelpEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHelpEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHelpEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstatustipevent.html
pub const qstatustipevent = struct {
    /// New constructs a new QStatusTipEvent object.
    ///
    /// ``` tip: []const u8 ```
    pub fn New(tip: []const u8) QtC.QStatusTipEvent {
        const tip_str = qtc.struct_libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };

        return qtc.QStatusTipEvent_new(tip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QStatusTipEvent {
        return qtc.QStatusTipEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStatusTipEvent, slot: fn () callconv(.c) QtC.QStatusTipEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QStatusTipEvent) void {
        qtc.QStatusTipEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QStatusTipEvent {
        return qtc.QStatusTipEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatustipevent.html#tip)
    ///
    /// ``` self: QtC.QStatusTipEvent, allocator: std.mem.Allocator ```
    pub fn Tip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStatusTipEvent_Tip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatustipevent.Tip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStatusTipEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QStatusTipEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStatusTipEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QStatusTipEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStatusTipEvent, slot: fn (self: QtC.QStatusTipEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QStatusTipEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatustipevent.html#dtor.QStatusTipEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStatusTipEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStatusTipEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwhatsthisclickedevent.html
pub const qwhatsthisclickedevent = struct {
    /// New constructs a new QWhatsThisClickedEvent object.
    ///
    /// ``` href: []const u8 ```
    pub fn New(href: []const u8) QtC.QWhatsThisClickedEvent {
        const href_str = qtc.struct_libqt_string{
            .len = href.len,
            .data = href.ptr,
        };

        return qtc.QWhatsThisClickedEvent_new(href_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QWhatsThisClickedEvent {
        return qtc.QWhatsThisClickedEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent, slot: fn () callconv(.c) QtC.QWhatsThisClickedEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWhatsThisClickedEvent) void {
        qtc.QWhatsThisClickedEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QWhatsThisClickedEvent {
        return qtc.QWhatsThisClickedEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#href)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent, allocator: std.mem.Allocator ```
    pub fn Href(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWhatsThisClickedEvent_Href(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwhatsthisclickedevent.Href: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWhatsThisClickedEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWhatsThisClickedEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent, slot: fn (self: QtC.QWhatsThisClickedEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWhatsThisClickedEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#dtor.QWhatsThisClickedEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWhatsThisClickedEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWhatsThisClickedEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qactionevent.html
pub const qactionevent = struct {
    /// New constructs a new QActionEvent object.
    ///
    /// ``` typeVal: i32, action: QtC.QAction ```
    pub fn New(typeVal: i32, action: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_new(@intCast(typeVal), @ptrCast(action));
    }

    /// New2 constructs a new QActionEvent object.
    ///
    /// ``` typeVal: i32, action: QtC.QAction, before: QtC.QAction ```
    pub fn New2(typeVal: i32, action: ?*anyopaque, before: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_new2(@intCast(typeVal), @ptrCast(action), @ptrCast(before));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QActionEvent, slot: fn () callconv(.c) QtC.QActionEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QActionEvent) void {
        qtc.QActionEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qactionevent.html#action)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn Action(self: ?*anyopaque) QtC.QAction {
        return qtc.QActionEvent_Action(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qactionevent.html#before)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn Before(self: ?*anyopaque) QtC.QAction {
        return qtc.QActionEvent_Before(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QActionEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QActionEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QActionEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QActionEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QActionEvent, slot: fn (self: QtC.QActionEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QActionEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qactionevent.html#dtor.QActionEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QActionEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QActionEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfileopenevent.html
pub const qfileopenevent = struct {
    /// New constructs a new QFileOpenEvent object.
    ///
    /// ``` file: []const u8 ```
    pub fn New(file: []const u8) QtC.QFileOpenEvent {
        const file_str = qtc.struct_libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.QFileOpenEvent_new(file_str);
    }

    /// New2 constructs a new QFileOpenEvent object.
    ///
    /// ``` url: QtC.QUrl ```
    pub fn New2(url: ?*anyopaque) QtC.QFileOpenEvent {
        return qtc.QFileOpenEvent_new2(@ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QFileOpenEvent {
        return qtc.QFileOpenEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFileOpenEvent, slot: fn () callconv(.c) QtC.QFileOpenEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QFileOpenEvent) void {
        qtc.QFileOpenEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QFileOpenEvent {
        return qtc.QFileOpenEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#file)
    ///
    /// ``` self: QtC.QFileOpenEvent, allocator: std.mem.Allocator ```
    pub fn File(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileOpenEvent_File(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileopenevent.File: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#url)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QFileOpenEvent_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#openFile)
    ///
    /// ``` self: QtC.QFileOpenEvent, file: QtC.QFile, flags: i32 ```
    pub fn OpenFile(self: ?*anyopaque, file: ?*anyopaque, flags: i64) bool {
        return qtc.QFileOpenEvent_OpenFile(@ptrCast(self), @ptrCast(file), @intCast(flags));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFileOpenEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QFileOpenEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFileOpenEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QFileOpenEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFileOpenEvent, slot: fn (self: QtC.QFileOpenEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QFileOpenEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#dtor.QFileOpenEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFileOpenEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileOpenEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtoolbarchangeevent.html
pub const qtoolbarchangeevent = struct {
    /// New constructs a new QToolBarChangeEvent object.
    ///
    /// ``` t: bool ```
    pub fn New(t: bool) QtC.QToolBarChangeEvent {
        return qtc.QToolBarChangeEvent_new(t);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QToolBarChangeEvent {
        return qtc.QToolBarChangeEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QToolBarChangeEvent, slot: fn () callconv(.c) QtC.QToolBarChangeEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QToolBarChangeEvent) void {
        qtc.QToolBarChangeEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QToolBarChangeEvent {
        return qtc.QToolBarChangeEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#toggle)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn Toggle(self: ?*anyopaque) bool {
        return qtc.QToolBarChangeEvent_Toggle(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QToolBarChangeEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QToolBarChangeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QToolBarChangeEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QToolBarChangeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QToolBarChangeEvent, slot: fn (self: QtC.QToolBarChangeEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QToolBarChangeEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#dtor.QToolBarChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QToolBarChangeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QToolBarChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qshortcutevent.html
pub const qshortcutevent = struct {
    /// New constructs a new QShortcutEvent object.
    ///
    /// ``` key: QtC.QKeySequence, id: i32 ```
    pub fn New(key: ?*anyopaque, id: i32) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new(@ptrCast(key), @intCast(id));
    }

    /// New2 constructs a new QShortcutEvent object.
    ///
    /// ``` key: QtC.QKeySequence ```
    pub fn New2(key: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new2(@ptrCast(key));
    }

    /// New3 constructs a new QShortcutEvent object.
    ///
    /// ``` key: QtC.QKeySequence, id: i32, ambiguous: bool ```
    pub fn New3(key: ?*anyopaque, id: i32, ambiguous: bool) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new3(@ptrCast(key), @intCast(id), ambiguous);
    }

    /// New4 constructs a new QShortcutEvent object.
    ///
    /// ``` key: QtC.QKeySequence, shortcut: QtC.QShortcut ```
    pub fn New4(key: ?*anyopaque, shortcut: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new4(@ptrCast(key), @ptrCast(shortcut));
    }

    /// New5 constructs a new QShortcutEvent object.
    ///
    /// ``` key: QtC.QKeySequence, shortcut: QtC.QShortcut, ambiguous: bool ```
    pub fn New5(key: ?*anyopaque, shortcut: ?*anyopaque, ambiguous: bool) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new5(@ptrCast(key), @ptrCast(shortcut), ambiguous);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QShortcutEvent, slot: fn () callconv(.c) QtC.QShortcutEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QShortcutEvent) void {
        qtc.QShortcutEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#key)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn Key(self: ?*anyopaque) QtC.QKeySequence {
        return qtc.QShortcutEvent_Key(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#shortcutId)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn ShortcutId(self: ?*anyopaque) i32 {
        return qtc.QShortcutEvent_ShortcutId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#isAmbiguous)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn IsAmbiguous(self: ?*anyopaque) bool {
        return qtc.QShortcutEvent_IsAmbiguous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QShortcutEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QShortcutEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QShortcutEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QShortcutEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QShortcutEvent, slot: fn (self: QtC.QShortcutEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QShortcutEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#dtor.QShortcutEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QShortcutEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QShortcutEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwindowstatechangeevent.html
pub const qwindowstatechangeevent = struct {
    /// New constructs a new QWindowStateChangeEvent object.
    ///
    /// ``` oldState: i32 ```
    pub fn New(oldState: i64) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_new(@intCast(oldState));
    }

    /// New2 constructs a new QWindowStateChangeEvent object.
    ///
    /// ``` oldState: i32, isOverride: bool ```
    pub fn New2(oldState: i64, isOverride: bool) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_new2(@intCast(oldState), isOverride);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindowStateChangeEvent, slot: fn () callconv(.c) QtC.QWindowStateChangeEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWindowStateChangeEvent) void {
        qtc.QWindowStateChangeEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#oldState)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn OldState(self: ?*anyopaque) i64 {
        return qtc.QWindowStateChangeEvent_OldState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#isOverride)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn IsOverride(self: ?*anyopaque) bool {
        return qtc.QWindowStateChangeEvent_IsOverride(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindowStateChangeEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWindowStateChangeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindowStateChangeEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWindowStateChangeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindowStateChangeEvent, slot: fn (self: QtC.QWindowStateChangeEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWindowStateChangeEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#dtor.QWindowStateChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWindowStateChangeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWindowStateChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtouchevent.html
pub const qtouchevent = struct {
    /// New constructs a new QTouchEvent object.
    ///
    /// ``` eventType: qevent_enums.Type ```
    pub fn New(eventType: i64) QtC.QTouchEvent {
        return qtc.QTouchEvent_new(@intCast(eventType));
    }

    /// New2 constructs a new QTouchEvent object.
    ///
    /// ``` eventType: qevent_enums.Type, device: QtC.QPointingDevice, modifiers: i32, touchPointStates: u8 ```
    pub fn New2(eventType: i64, device: ?*anyopaque, modifiers: i64, touchPointStates: i64) QtC.QTouchEvent {
        return qtc.QTouchEvent_new2(@intCast(eventType), @ptrCast(device), @intCast(modifiers), @intCast(touchPointStates));
    }

    /// New3 constructs a new QTouchEvent object.
    ///
    /// ``` eventType: qevent_enums.Type, device: QtC.QPointingDevice ```
    pub fn New3(eventType: i64, device: ?*anyopaque) QtC.QTouchEvent {
        return qtc.QTouchEvent_new3(@intCast(eventType), @ptrCast(device));
    }

    /// New4 constructs a new QTouchEvent object.
    ///
    /// ``` eventType: qevent_enums.Type, device: QtC.QPointingDevice, modifiers: i32 ```
    pub fn New4(eventType: i64, device: ?*anyopaque, modifiers: i64) QtC.QTouchEvent {
        return qtc.QTouchEvent_new4(@intCast(eventType), @ptrCast(device), @intCast(modifiers));
    }

    /// New5 constructs a new QTouchEvent object.
    ///
    /// ``` eventType: qevent_enums.Type, device: QtC.QPointingDevice, modifiers: i32, touchPoints: []QtC.QEventPoint ```
    pub fn New5(eventType: i64, device: ?*anyopaque, modifiers: i64, touchPoints: []QtC.QEventPoint) QtC.QTouchEvent {
        const touchPoints_list = qtc.struct_libqt_list{
            .len = touchPoints.len,
            .data = @ptrCast(touchPoints.ptr),
        };

        return qtc.QTouchEvent_new5(@intCast(eventType), @ptrCast(device), @intCast(modifiers), touchPoints_list);
    }

    /// New6 constructs a new QTouchEvent object.
    ///
    /// ``` eventType: qevent_enums.Type, device: QtC.QPointingDevice, modifiers: i32, touchPointStates: u8, touchPoints: []QtC.QEventPoint ```
    pub fn New6(eventType: i64, device: ?*anyopaque, modifiers: i64, touchPointStates: i64, touchPoints: []QtC.QEventPoint) QtC.QTouchEvent {
        const touchPoints_list = qtc.struct_libqt_list{
            .len = touchPoints.len,
            .data = @ptrCast(touchPoints.ptr),
        };

        return qtc.QTouchEvent_new6(@intCast(eventType), @ptrCast(device), @intCast(modifiers), @intCast(touchPointStates), touchPoints_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QTouchEvent {
        return qtc.QTouchEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTouchEvent, slot: fn () callconv(.c) QtC.QTouchEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTouchEvent) void {
        qtc.QTouchEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QTouchEvent {
        return qtc.QTouchEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#target)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn Target(self: ?*anyopaque) QtC.QObject {
        return qtc.QTouchEvent_Target(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#touchPointStates)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn TouchPointStates(self: ?*anyopaque) i64 {
        return qtc.QTouchEvent_TouchPointStates(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#touchPoints)
    ///
    /// ``` self: QtC.QTouchEvent, allocator: std.mem.Allocator ```
    pub fn TouchPoints(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QTouchEvent_TouchPoints(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qtouchevent.TouchPoints: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_IsBeginEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTouchEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsBeginEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsBeginEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTouchEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsUpdateEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsUpdateEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_IsEndEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTouchEvent, slot: fn () callconv(.c) bool ```
    pub fn OnIsEndEvent(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsEndEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ``` self: QtC.QTouchEvent, i: i64 ```
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ``` self: QtC.QTouchEvent, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.struct_libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qtouchevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ``` self: QtC.QTouchEvent, id: i32 ```
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ``` self: QtC.QTouchEvent, point: QtC.QEventPoint ```
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ``` self: QtC.QTouchEvent, point: QtC.QEventPoint, exclusiveGrabber: QtC.QObject ```
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ``` self: QtC.QTouchEvent, point: QtC.QEventPoint ```
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ``` self: QtC.QTouchEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ``` self: QtC.QTouchEvent, point: QtC.QEventPoint, grabber: QtC.QObject ```
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn DeviceType(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ``` self: QtC.QTouchEvent, modifiers: i32 ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTouchEvent, timestamp: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QTouchEvent_SetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTouchEvent, timestamp: u64 ```
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QTouchEvent_QBaseSetTimestamp(@ptrCast(self), @intCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTouchEvent, slot: fn (self: QtC.QTouchEvent, timestamp: u64) callconv(.c) void ```
    pub fn OnSetTimestamp(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QTouchEvent_OnSetTimestamp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTouchEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTouchEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTouchEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTouchEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTouchEvent, slot: fn (self: QtC.QTouchEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTouchEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#dtor.QTouchEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTouchEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTouchEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qscrollprepareevent.html
pub const qscrollprepareevent = struct {
    /// New constructs a new QScrollPrepareEvent object.
    ///
    /// ``` startPos: QtC.QPointF ```
    pub fn New(startPos: ?*anyopaque) QtC.QScrollPrepareEvent {
        return qtc.QScrollPrepareEvent_new(@ptrCast(startPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QScrollPrepareEvent {
        return qtc.QScrollPrepareEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QScrollPrepareEvent, slot: fn () callconv(.c) QtC.QScrollPrepareEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QScrollPrepareEvent) void {
        qtc.QScrollPrepareEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QScrollPrepareEvent {
        return qtc.QScrollPrepareEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#startPos)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn StartPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScrollPrepareEvent_StartPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#viewportSize)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn ViewportSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QScrollPrepareEvent_ViewportSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPosRange)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn ContentPosRange(self: ?*anyopaque) QtC.QRectF {
        return qtc.QScrollPrepareEvent_ContentPosRange(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPos)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn ContentPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScrollPrepareEvent_ContentPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#setViewportSize)
    ///
    /// ``` self: QtC.QScrollPrepareEvent, size: QtC.QSizeF ```
    pub fn SetViewportSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_SetViewportSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPosRange)
    ///
    /// ``` self: QtC.QScrollPrepareEvent, rect: QtC.QRectF ```
    pub fn SetContentPosRange(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_SetContentPosRange(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPos)
    ///
    /// ``` self: QtC.QScrollPrepareEvent, pos: QtC.QPointF ```
    pub fn SetContentPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_SetContentPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QScrollPrepareEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScrollPrepareEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QScrollPrepareEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScrollPrepareEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QScrollPrepareEvent, slot: fn (self: QtC.QScrollPrepareEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QScrollPrepareEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#dtor.QScrollPrepareEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QScrollPrepareEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qscrollevent.html
pub const qscrollevent = struct {
    /// New constructs a new QScrollEvent object.
    ///
    /// ``` contentPos: QtC.QPointF, overshoot: QtC.QPointF, scrollState: qevent_enums.ScrollState ```
    pub fn New(contentPos: ?*anyopaque, overshoot: ?*anyopaque, scrollState: i64) QtC.QScrollEvent {
        return qtc.QScrollEvent_new(@ptrCast(contentPos), @ptrCast(overshoot), @intCast(scrollState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QScrollEvent {
        return qtc.QScrollEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QScrollEvent, slot: fn () callconv(.c) QtC.QScrollEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QScrollEvent) void {
        qtc.QScrollEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QScrollEvent {
        return qtc.QScrollEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#contentPos)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn ContentPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScrollEvent_ContentPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#overshootDistance)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn OvershootDistance(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScrollEvent_OvershootDistance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#scrollState)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn ScrollState(self: ?*anyopaque) i64 {
        return qtc.QScrollEvent_ScrollState(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QScrollEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScrollEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QScrollEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScrollEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QScrollEvent, slot: fn (self: QtC.QScrollEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QScrollEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#dtor.QScrollEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QScrollEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScrollEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qscreenorientationchangeevent.html
pub const qscreenorientationchangeevent = struct {
    /// New constructs a new QScreenOrientationChangeEvent object.
    ///
    /// ``` screen: QtC.QScreen, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn New(screen: ?*anyopaque, orientation: i64) QtC.QScreenOrientationChangeEvent {
        return qtc.QScreenOrientationChangeEvent_new(@ptrCast(screen), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QScreenOrientationChangeEvent {
        return qtc.QScreenOrientationChangeEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent, slot: fn () callconv(.c) QtC.QScreenOrientationChangeEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QScreenOrientationChangeEvent) void {
        qtc.QScreenOrientationChangeEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QScreenOrientationChangeEvent {
        return qtc.QScreenOrientationChangeEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#screen)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QScreenOrientationChangeEvent_Screen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#orientation)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QScreenOrientationChangeEvent_Orientation(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScreenOrientationChangeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScreenOrientationChangeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent, slot: fn (self: QtC.QScreenOrientationChangeEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QScreenOrientationChangeEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#dtor.QScreenOrientationChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QScreenOrientationChangeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScreenOrientationChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qapplicationstatechangeevent.html
pub const qapplicationstatechangeevent = struct {
    /// New constructs a new QApplicationStateChangeEvent object.
    ///
    /// ``` state: qnamespace_enums.ApplicationState ```
    pub fn New(state: i64) QtC.QApplicationStateChangeEvent {
        return qtc.QApplicationStateChangeEvent_new(@intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QApplicationStateChangeEvent {
        return qtc.QApplicationStateChangeEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent, slot: fn () callconv(.c) QtC.QApplicationStateChangeEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QApplicationStateChangeEvent) void {
        qtc.QApplicationStateChangeEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QApplicationStateChangeEvent {
        return qtc.QApplicationStateChangeEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#applicationState)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn ApplicationState(self: ?*anyopaque) i64 {
        return qtc.QApplicationStateChangeEvent_ApplicationState(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QApplicationStateChangeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QApplicationStateChangeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent, slot: fn (self: QtC.QApplicationStateChangeEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QApplicationStateChangeEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#dtor.QApplicationStateChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QApplicationStateChangeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QApplicationStateChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qchildwindowevent.html
pub const qchildwindowevent = struct {
    /// New constructs a new QChildWindowEvent object.
    ///
    /// ``` typeVal: qevent_enums.Type, childWindow: QtC.QWindow ```
    pub fn New(typeVal: i64, childWindow: ?*anyopaque) QtC.QChildWindowEvent {
        return qtc.QChildWindowEvent_new(@intCast(typeVal), @ptrCast(childWindow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QChildWindowEvent {
        return qtc.QChildWindowEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QChildWindowEvent, slot: fn () callconv(.c) QtC.QChildWindowEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QChildWindowEvent) void {
        qtc.QChildWindowEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QChildWindowEvent {
        return qtc.QChildWindowEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildwindowevent.html#child)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn Child(self: ?*anyopaque) QtC.QWindow {
        return qtc.QChildWindowEvent_Child(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QChildWindowEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QChildWindowEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QChildWindowEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QChildWindowEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QChildWindowEvent, slot: fn (self: QtC.QChildWindowEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QChildWindowEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildwindowevent.html#dtor.QChildWindowEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QChildWindowEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QChildWindowEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qinputmethodevent-attribute.html
pub const qinputmethodevent__attribute = struct {
    /// New constructs a new QInputMethodEvent::Attribute object.
    ///
    /// ``` typ: qevent_enums.AttributeType, s: i32, l: i32, val: QtC.QVariant ```
    pub fn New(typ: i64, s: i32, l: i32, val: QtC.QVariant) QtC.QInputMethodEvent__Attribute {
        return qtc.QInputMethodEvent__Attribute_new(@intCast(typ), @intCast(s), @intCast(l), @ptrCast(val));
    }

    /// New2 constructs a new QInputMethodEvent::Attribute object.
    ///
    /// ``` typ: qevent_enums.AttributeType, s: i32, l: i32 ```
    pub fn New2(typ: i64, s: i32, l: i32) QtC.QInputMethodEvent__Attribute {
        return qtc.QInputMethodEvent__Attribute_new2(@intCast(typ), @intCast(s), @intCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent__attribute.html#operator=)
    ///
    /// ``` self: QtC.QInputMethodEvent__Attribute, param1: QtC.QInputMethodEvent__Attribute ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QInputMethodEvent__Attribute_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QInputMethodEvent__Attribute ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputMethodEvent__Attribute_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qevent.html#types
pub const enums = struct {
    pub const QWheelEvent = enum {
        pub const DefaultDeltasPerStep: i32 = 120;
    };

    pub const SurfaceEventType = enum {
        pub const SurfaceCreated: i32 = 0;
        pub const SurfaceAboutToBeDestroyed: i32 = 1;
    };

    pub const Reason = enum {
        pub const Mouse: i32 = 0;
        pub const Keyboard: i32 = 1;
        pub const Other: i32 = 2;
    };

    pub const AttributeType = enum {
        pub const TextFormat: i32 = 0;
        pub const Cursor: i32 = 1;
        pub const Language: i32 = 2;
        pub const Ruby: i32 = 3;
        pub const Selection: i32 = 4;
    };

    pub const ScrollState = enum {
        pub const ScrollStarted: i32 = 0;
        pub const ScrollUpdated: i32 = 1;
        pub const ScrollFinished: i32 = 2;
    };
};
