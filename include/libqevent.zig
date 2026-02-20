const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = @import("libqcoreevent.zig").enums;
const qevent_enums = enums;
const qeventpoint_enums = @import("libqeventpoint.zig").enums;
const qinputdevice_enums = @import("libqinputdevice.zig").enums;
const qiodevicebase_enums = @import("libqiodevicebase.zig").enums;
const qkeysequence_enums = @import("libqkeysequence.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpointingdevice_enums = @import("libqpointingdevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html)
pub const qinputevent = struct {
    /// New constructs a new QInputEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` m_dev: QtC.QInputDevice `
    ///
    pub fn New(typeVal: i32, m_dev: ?*anyopaque) QtC.QInputEvent {
        return qtc.QInputEvent_new(@bitCast(typeVal), @ptrCast(m_dev));
    }

    /// New2 constructs a new QInputEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` m_dev: QtC.QInputDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New2(typeVal: i32, m_dev: ?*anyopaque, modifiers: i32) QtC.QInputEvent {
        return qtc.QInputEvent_new2(@bitCast(typeVal), @ptrCast(m_dev), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QInputEvent {
        return qtc.QInputEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QInputEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QInputEvent) void {
        qtc.QInputEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QInputEvent {
        return qtc.QInputEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QInputEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ` callback: *const fn (self: QtC.QInputEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QInputEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QInputEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QInputEvent`
    ///
    /// ` callback: *const fn (self: QtC.QInputEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QInputEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#dtor.QInputEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QInputEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html)
pub const qpointerevent = struct {
    /// New constructs a new QPointerEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` dev: QtC.QPointingDevice `
    ///
    pub fn New(typeVal: i32, dev: ?*anyopaque) QtC.QPointerEvent {
        return qtc.QPointerEvent_new(@bitCast(typeVal), @ptrCast(dev));
    }

    /// New2 constructs a new QPointerEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` dev: QtC.QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New2(typeVal: i32, dev: ?*anyopaque, modifiers: i32) QtC.QPointerEvent {
        return qtc.QPointerEvent_new2(@bitCast(typeVal), @ptrCast(dev), @bitCast(modifiers));
    }

    /// New3 constructs a new QPointerEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` dev: QtC.QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` points: []QtC.QEventPoint `
    ///
    pub fn New3(typeVal: i32, dev: ?*anyopaque, modifiers: i32, points: []QtC.QEventPoint) QtC.QPointerEvent {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };

        return qtc.QPointerEvent_new3(@bitCast(typeVal), @ptrCast(dev), @bitCast(modifiers), points_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QPointerEvent {
        return qtc.QPointerEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPointerEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPointerEvent) void {
        qtc.QPointerEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QPointerEvent {
        return qtc.QPointerEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QPointerEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` callback: *const fn (self: QtC.QPointerEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QPointerEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` i: i64 `
    ///
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qpointerevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_IsBeginEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsBeginEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsUpdateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_IsEndEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsEndEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPointerEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` callback: *const fn (self: QtC.QPointerEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPointerEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#dtor.QPointerEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPointerEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPointerEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html)
pub const qsinglepointevent = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QSinglePointEvent {
        return qtc.QSinglePointEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QSinglePointEvent_IsBeginEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QSinglePointEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QSinglePointEvent_IsEndEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QPointerEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` i: i64 `
    ///
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qsinglepointevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPointerEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#dtor.QSinglePointEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSinglePointEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSinglePointEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html)
pub const qenterevent = struct {
    /// New constructs a new QEnterEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    pub fn New(localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_new(@ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos));
    }

    /// New2 constructs a new QEnterEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New2(localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, device: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_new2(@ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEnterEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEnterEvent) void {
        qtc.QEnterEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QEnterEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QEnterEvent_GlobalPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QEnterEvent_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QEnterEvent_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QEnterEvent_GlobalX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QEnterEvent_GlobalY(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#localPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn LocalPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEnterEvent_LocalPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#windowPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn WindowPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEnterEvent_WindowPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QEnterEvent_ScreenPos(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` i: i64 `
    ///
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qenterevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QEnterEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsBeginEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QEnterEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsUpdateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QEnterEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QEnterEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsEndEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QEnterEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QEnterEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QEnterEvent`
    ///
    /// ` callback: *const fn (self: QtC.QEnterEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QEnterEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QEnterEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QEnterEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QEnterEvent`
    ///
    /// ` callback: *const fn (self: QtC.QEnterEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QEnterEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#dtor.QEnterEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QEnterEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QEnterEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)
pub const qmouseevent = struct {
    /// New constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New(typeVal: i32, localPos: ?*anyopaque, button: i32, buttons: i32, modifiers: i32) QtC.QMouseEvent {
        return qtc.QMouseEvent_new(@bitCast(typeVal), @ptrCast(localPos), @bitCast(button), @bitCast(buttons), @bitCast(modifiers));
    }

    /// New2 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New2(typeVal: i32, localPos: ?*anyopaque, globalPos: ?*anyopaque, button: i32, buttons: i32, modifiers: i32) QtC.QMouseEvent {
        return qtc.QMouseEvent_new2(@bitCast(typeVal), @ptrCast(localPos), @ptrCast(globalPos), @bitCast(button), @bitCast(buttons), @bitCast(modifiers));
    }

    /// New3 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New3(typeVal: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i32, buttons: i32, modifiers: i32) QtC.QMouseEvent {
        return qtc.QMouseEvent_new3(@bitCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @bitCast(button), @bitCast(buttons), @bitCast(modifiers));
    }

    /// New4 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` source: qnamespace_enums.MouseEventSource `
    ///
    pub fn New4(typeVal: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i32, buttons: i32, modifiers: i32, source: i32) QtC.QMouseEvent {
        return qtc.QMouseEvent_new4(@bitCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @bitCast(source));
    }

    /// New5 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New5(typeVal: i32, localPos: ?*anyopaque, button: i32, buttons: i32, modifiers: i32, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new5(@bitCast(typeVal), @ptrCast(localPos), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @ptrCast(device));
    }

    /// New6 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New6(typeVal: i32, localPos: ?*anyopaque, globalPos: ?*anyopaque, button: i32, buttons: i32, modifiers: i32, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new6(@bitCast(typeVal), @ptrCast(localPos), @ptrCast(globalPos), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @ptrCast(device));
    }

    /// New7 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New7(typeVal: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i32, buttons: i32, modifiers: i32, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new7(@bitCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @ptrCast(device));
    }

    /// New8 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` source: qnamespace_enums.MouseEventSource `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New8(typeVal: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i32, buttons: i32, modifiers: i32, source: i32, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new8(@bitCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @bitCast(source), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMouseEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMouseEvent) void {
        qtc.QMouseEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QMouseEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QMouseEvent_GlobalPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_GlobalX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_GlobalY(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#localPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn LocalPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QMouseEvent_LocalPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#windowPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn WindowPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QMouseEvent_WindowPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QMouseEvent_ScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseEventSource `
    ///
    pub fn Source(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_Source(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseEventFlag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QMouseEvent_Flags(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` i: i64 `
    ///
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qmouseevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMouseEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsBeginEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMouseEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsUpdateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QMouseEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMouseEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsEndEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QMouseEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QMouseEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMouseEvent`
    ///
    /// ` callback: *const fn (self: QtC.QMouseEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QMouseEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QMouseEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QMouseEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMouseEvent`
    ///
    /// ` callback: *const fn (self: QtC.QMouseEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMouseEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#dtor.QMouseEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMouseEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMouseEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)
pub const qhoverevent = struct {
    /// New constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` oldPos: QtC.QPointF `
    ///
    pub fn New(typeVal: i32, scenePos: ?*anyopaque, globalPos: ?*anyopaque, oldPos: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new(@bitCast(typeVal), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(oldPos));
    }

    /// New2 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` oldPos: QtC.QPointF `
    ///
    pub fn New2(typeVal: i32, pos: ?*anyopaque, oldPos: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new2(@bitCast(typeVal), @ptrCast(pos), @ptrCast(oldPos));
    }

    /// New3 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` oldPos: QtC.QPointF `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New3(typeVal: i32, scenePos: ?*anyopaque, globalPos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i32) QtC.QHoverEvent {
        return qtc.QHoverEvent_new3(@bitCast(typeVal), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(oldPos), @bitCast(modifiers));
    }

    /// New4 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` oldPos: QtC.QPointF `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New4(typeVal: i32, scenePos: ?*anyopaque, globalPos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i32, device: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new4(@bitCast(typeVal), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(oldPos), @bitCast(modifiers), @ptrCast(device));
    }

    /// New5 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` oldPos: QtC.QPointF `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New5(typeVal: i32, pos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i32) QtC.QHoverEvent {
        return qtc.QHoverEvent_new5(@bitCast(typeVal), @ptrCast(pos), @ptrCast(oldPos), @bitCast(modifiers));
    }

    /// New6 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` oldPos: QtC.QPointF `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New6(typeVal: i32, pos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i32, device: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new6(@bitCast(typeVal), @ptrCast(pos), @ptrCast(oldPos), @bitCast(modifiers), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QHoverEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QHoverEvent) void {
        qtc.QHoverEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QHoverEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QHoverEvent_PosF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsUpdateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn OldPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QHoverEvent_OldPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPosF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn OldPosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QHoverEvent_OldPosF(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` i: i64 `
    ///
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qhoverevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHoverEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsBeginEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QHoverEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHoverEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsEndEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QHoverEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QHoverEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHoverEvent`
    ///
    /// ` callback: *const fn (self: QtC.QHoverEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QHoverEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHoverEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHoverEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHoverEvent`
    ///
    /// ` callback: *const fn (self: QtC.QHoverEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QHoverEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#dtor.QHoverEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QHoverEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHoverEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html)
pub const qwheelevent = struct {
    /// New constructs a new QWheelEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` pixelDelta: QtC.QPoint `
    ///
    /// ` angleDelta: QtC.QPoint `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` phase: qnamespace_enums.ScrollPhase `
    ///
    /// ` inverted: bool `
    ///
    pub fn New(pos: ?*anyopaque, globalPos: ?*anyopaque, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i32, modifiers: i32, phase: i32, inverted: bool) QtC.QWheelEvent {
        return qtc.QWheelEvent_new(@ptrCast(pos), @ptrCast(globalPos), @ptrCast(pixelDelta), @ptrCast(angleDelta), @bitCast(buttons), @bitCast(modifiers), @bitCast(phase), inverted);
    }

    /// New2 constructs a new QWheelEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` pixelDelta: QtC.QPoint `
    ///
    /// ` angleDelta: QtC.QPoint `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` phase: qnamespace_enums.ScrollPhase `
    ///
    /// ` inverted: bool `
    ///
    /// ` source: qnamespace_enums.MouseEventSource `
    ///
    pub fn New2(pos: ?*anyopaque, globalPos: ?*anyopaque, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i32, modifiers: i32, phase: i32, inverted: bool, source: i32) QtC.QWheelEvent {
        return qtc.QWheelEvent_new2(@ptrCast(pos), @ptrCast(globalPos), @ptrCast(pixelDelta), @ptrCast(angleDelta), @bitCast(buttons), @bitCast(modifiers), @bitCast(phase), inverted, @bitCast(source));
    }

    /// New3 constructs a new QWheelEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` pixelDelta: QtC.QPoint `
    ///
    /// ` angleDelta: QtC.QPoint `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` phase: qnamespace_enums.ScrollPhase `
    ///
    /// ` inverted: bool `
    ///
    /// ` source: qnamespace_enums.MouseEventSource `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New3(pos: ?*anyopaque, globalPos: ?*anyopaque, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i32, modifiers: i32, phase: i32, inverted: bool, source: i32, device: ?*anyopaque) QtC.QWheelEvent {
        return qtc.QWheelEvent_new3(@ptrCast(pos), @ptrCast(globalPos), @ptrCast(pixelDelta), @ptrCast(angleDelta), @bitCast(buttons), @bitCast(modifiers), @bitCast(phase), inverted, @bitCast(source), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QWheelEvent {
        return qtc.QWheelEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWheelEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWheelEvent) void {
        qtc.QWheelEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QWheelEvent {
        return qtc.QWheelEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#pixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn PixelDelta(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWheelEvent_PixelDelta(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#angleDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn AngleDelta(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWheelEvent_AngleDelta(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#phase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollPhase `
    ///
    pub fn Phase(self: ?*anyopaque) i32 {
        return qtc.QWheelEvent_Phase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn Inverted(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_Inverted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isInverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn IsInverted(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_IsInverted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#hasPixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn HasPixelDelta(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_HasPixelDelta(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_IsBeginEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsBeginEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsUpdateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_IsEndEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsEndEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QWheelEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseEventSource `
    ///
    pub fn Source(self: ?*anyopaque) i32 {
        return qtc.QWheelEvent_Source(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` i: i64 `
    ///
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qwheelevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QWheelEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QWheelEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWheelEvent`
    ///
    /// ` callback: *const fn (self: QtC.QWheelEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QWheelEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWheelEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWheelEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWheelEvent`
    ///
    /// ` callback: *const fn (self: QtC.QWheelEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWheelEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#dtor.QWheelEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWheelEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWheelEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html)
pub const qtabletevent = struct {
    /// New constructs a new QTabletEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t: qcoreevent_enums.Type `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` pressure: f64 `
    ///
    /// ` xTilt: f32 `
    ///
    /// ` yTilt: f32 `
    ///
    /// ` tangentialPressure: f32 `
    ///
    /// ` rotation: f64 `
    ///
    /// ` z: f32 `
    ///
    /// ` keyState: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn New(t: i32, device: ?*anyopaque, pos: ?*anyopaque, globalPos: ?*anyopaque, pressure: f64, xTilt: f32, yTilt: f32, tangentialPressure: f32, rotation: f64, z: f32, keyState: i32, button: i32, buttons: i32) QtC.QTabletEvent {
        return qtc.QTabletEvent_new(@bitCast(t), @ptrCast(device), @ptrCast(pos), @ptrCast(globalPos), @bitCast(pressure), @bitCast(xTilt), @bitCast(yTilt), @bitCast(tangentialPressure), @bitCast(rotation), @bitCast(z), @bitCast(keyState), @bitCast(button), @bitCast(buttons));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QTabletEvent {
        return qtc.QTabletEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QTabletEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QTabletEvent) void {
        qtc.QTabletEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QTabletEvent {
        return qtc.QTabletEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QTabletEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QTabletEvent_GlobalPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QTabletEvent_PosF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPosF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn GlobalPosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QTabletEvent_GlobalPosF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QTabletEvent_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QTabletEvent_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QTabletEvent_GlobalX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QTabletEvent_GlobalY(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn HiResGlobalX(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_HiResGlobalX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn HiResGlobalY(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_HiResGlobalY(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) i64 {
        return qtc.QTabletEvent_UniqueId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pressure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Pressure(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_Pressure(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Rotation(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_Rotation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Z(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_Z(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#tangentialPressure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn TangentialPressure(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_TangentialPressure(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#xTilt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn XTilt(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_XTilt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#yTilt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn YTilt(self: ?*anyopaque) f64 {
        return qtc.QTabletEvent_YTilt(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` i: i64 `
    ///
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qtabletevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTabletEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsBeginEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTabletEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsUpdateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QTabletEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTabletEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsEndEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QTabletEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QTabletEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTabletEvent`
    ///
    /// ` callback: *const fn (self: QtC.QTabletEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QTabletEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTabletEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTabletEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTabletEvent`
    ///
    /// ` callback: *const fn (self: QtC.QTabletEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTabletEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#dtor.QTabletEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTabletEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTabletEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html)
pub const qnativegestureevent = struct {
    /// New constructs a new QNativeGestureEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.NativeGestureType `
    ///
    /// ` dev: QtC.QPointingDevice `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` value: f64 `
    ///
    /// ` sequenceId: u64 `
    ///
    /// ` intArgument: u64 `
    ///
    pub fn New(typeVal: i32, dev: ?*anyopaque, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, value: f64, sequenceId: u64, intArgument: u64) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_new(@bitCast(typeVal), @ptrCast(dev), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @bitCast(value), @bitCast(sequenceId), @bitCast(intArgument));
    }

    /// New2 constructs a new QNativeGestureEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.NativeGestureType `
    ///
    /// ` dev: QtC.QPointingDevice `
    ///
    /// ` fingerCount: i32 `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` value: f64 `
    ///
    /// ` delta: QtC.QPointF `
    ///
    pub fn New2(typeVal: i32, dev: ?*anyopaque, fingerCount: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, value: f64, delta: ?*anyopaque) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_new2(@bitCast(typeVal), @ptrCast(dev), @bitCast(fingerCount), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @bitCast(value), @ptrCast(delta));
    }

    /// New3 constructs a new QNativeGestureEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.NativeGestureType `
    ///
    /// ` dev: QtC.QPointingDevice `
    ///
    /// ` fingerCount: i32 `
    ///
    /// ` localPos: QtC.QPointF `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    /// ` globalPos: QtC.QPointF `
    ///
    /// ` value: f64 `
    ///
    /// ` delta: QtC.QPointF `
    ///
    /// ` sequenceId: u64 `
    ///
    pub fn New3(typeVal: i32, dev: ?*anyopaque, fingerCount: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, value: f64, delta: ?*anyopaque, sequenceId: u64) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_new3(@bitCast(typeVal), @ptrCast(dev), @bitCast(fingerCount), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @bitCast(value), @ptrCast(delta), @bitCast(sequenceId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QNativeGestureEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QNativeGestureEvent) void {
        qtc.QNativeGestureEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#gestureType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.NativeGestureType `
    ///
    pub fn GestureType(self: ?*anyopaque) i32 {
        return qtc.QNativeGestureEvent_GestureType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#fingerCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn FingerCount(self: ?*anyopaque) i32 {
        return qtc.QNativeGestureEvent_FingerCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Value(self: ?*anyopaque) f64 {
        return qtc.QNativeGestureEvent_Value(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#delta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Delta(self: ?*anyopaque) QtC.QPointF {
        return qtc.QNativeGestureEvent_Delta(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QNativeGestureEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QNativeGestureEvent_GlobalPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#localPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn LocalPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QNativeGestureEvent_LocalPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#windowPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn WindowPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QNativeGestureEvent_WindowPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QNativeGestureEvent_ScreenPos(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn ScenePosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn GlobalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn ExclusivePointGrabber(self: ?*anyopaque) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` i: i64 `
    ///
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qnativegestureevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNativeGestureEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsBeginEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNativeGestureEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsUpdateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_IsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QNativeGestureEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNativeGestureEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsEndEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QNativeGestureEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QNativeGestureEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNativeGestureEvent`
    ///
    /// ` callback: *const fn (self: QtC.QNativeGestureEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QNativeGestureEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QNativeGestureEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QNativeGestureEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNativeGestureEvent`
    ///
    /// ` callback: *const fn (self: QtC.QNativeGestureEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QNativeGestureEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#dtor.QNativeGestureEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QNativeGestureEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNativeGestureEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)
pub const qkeyevent = struct {
    /// New constructs a new QKeyEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` key: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New(typeVal: i32, key: i32, modifiers: i32) QtC.QKeyEvent {
        return qtc.QKeyEvent_new(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers));
    }

    /// New2 constructs a new QKeyEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` key: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` nativeScanCode: u32 `
    ///
    /// ` nativeVirtualKey: u32 `
    ///
    /// ` nativeModifiers: u32 `
    ///
    pub fn New2(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32) QtC.QKeyEvent {
        return qtc.QKeyEvent_new2(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers));
    }

    /// New3 constructs a new QKeyEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` key: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New3(typeVal: i32, key: i32, modifiers: i32, text: []const u8) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new3(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), text_str);
    }

    /// New4 constructs a new QKeyEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` key: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    pub fn New4(typeVal: i32, key: i32, modifiers: i32, text: []const u8, autorep: bool) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new4(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), text_str, autorep);
    }

    /// New5 constructs a new QKeyEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` key: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    /// ` count: u16 `
    ///
    pub fn New5(typeVal: i32, key: i32, modifiers: i32, text: []const u8, autorep: bool, count: u16) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new5(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), text_str, autorep, @bitCast(count));
    }

    /// New6 constructs a new QKeyEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` key: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` nativeScanCode: u32 `
    ///
    /// ` nativeVirtualKey: u32 `
    ///
    /// ` nativeModifiers: u32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New6(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new6(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers), text_str);
    }

    /// New7 constructs a new QKeyEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` key: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` nativeScanCode: u32 `
    ///
    /// ` nativeVirtualKey: u32 `
    ///
    /// ` nativeModifiers: u32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    pub fn New7(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new7(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers), text_str, autorep);
    }

    /// New8 constructs a new QKeyEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` key: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` nativeScanCode: u32 `
    ///
    /// ` nativeVirtualKey: u32 `
    ///
    /// ` nativeModifiers: u32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    /// ` count: u16 `
    ///
    pub fn New8(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new8(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers), text_str, autorep, @bitCast(count));
    }

    /// New9 constructs a new QKeyEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` key: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` nativeScanCode: u32 `
    ///
    /// ` nativeVirtualKey: u32 `
    ///
    /// ` nativeModifiers: u32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    /// ` count: u16 `
    ///
    /// ` device: QtC.QInputDevice `
    ///
    pub fn New9(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16, device: ?*anyopaque) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QKeyEvent_new9(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers), text_str, autorep, @bitCast(count), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QKeyEvent {
        return qtc.QKeyEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QKeyEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QKeyEvent) void {
        qtc.QKeyEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QKeyEvent {
        return qtc.QKeyEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn Key(self: ?*anyopaque) i32 {
        return qtc.QKeyEvent_Key(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#matches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    pub fn Matches(self: ?*anyopaque, key: i32) bool {
        return qtc.QKeyEvent_Matches(@ptrCast(self), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QKeyEvent_Modifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#keyCombination)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn KeyCombination(self: ?*anyopaque) QtC.QKeyCombination {
        return qtc.QKeyEvent_KeyCombination(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeyEvent_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeyevent.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#isAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn IsAutoRepeat(self: ?*anyopaque) bool {
        return qtc.QKeyEvent_IsAutoRepeat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QKeyEvent_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeScanCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn NativeScanCode(self: ?*anyopaque) u32 {
        return qtc.QKeyEvent_NativeScanCode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeVirtualKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn NativeVirtualKey(self: ?*anyopaque) u32 {
        return qtc.QKeyEvent_NativeVirtualKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn NativeModifiers(self: ?*anyopaque) u32 {
        return qtc.QKeyEvent_NativeModifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QKeyEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QKeyEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QKeyEvent`
    ///
    /// ` callback: *const fn (self: QtC.QKeyEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QKeyEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QKeyEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QKeyEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QKeyEvent`
    ///
    /// ` callback: *const fn (self: QtC.QKeyEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QKeyEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#dtor.QKeyEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QKeyEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QKeyEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html)
pub const qfocusevent = struct {
    /// New constructs a new QFocusEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New(typeVal: i32) QtC.QFocusEvent {
        return qtc.QFocusEvent_new(@bitCast(typeVal));
    }

    /// New2 constructs a new QFocusEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn New2(typeVal: i32, reason: i32) QtC.QFocusEvent {
        return qtc.QFocusEvent_new2(@bitCast(typeVal), @bitCast(reason));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QFocusEvent {
        return qtc.QFocusEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QFocusEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QFocusEvent) void {
        qtc.QFocusEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QFocusEvent {
        return qtc.QFocusEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#gotFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn GotFocus(self: ?*anyopaque) bool {
        return qtc.QFocusEvent_GotFocus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#lostFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn LostFocus(self: ?*anyopaque) bool {
        return qtc.QFocusEvent_LostFocus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#reason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusReason `
    ///
    pub fn Reason(self: ?*anyopaque) i32 {
        return qtc.QFocusEvent_Reason(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QFocusEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QFocusEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFocusEvent`
    ///
    /// ` callback: *const fn (self: QtC.QFocusEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QFocusEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#dtor.QFocusEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFocusEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFocusEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html)
pub const qpaintevent = struct {
    /// New constructs a new QPaintEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` paintRegion: QtC.QRegion `
    ///
    pub fn New(paintRegion: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_new(@ptrCast(paintRegion));
    }

    /// New2 constructs a new QPaintEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` paintRect: QtC.QRect `
    ///
    pub fn New2(paintRect: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_new2(@ptrCast(paintRect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEvent) void {
        qtc.QPaintEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPaintEvent_Rect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#region)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn Region(self: ?*anyopaque) QtC.QRegion {
        return qtc.QPaintEvent_Region(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPaintEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPaintEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPaintEvent`
    ///
    /// ` callback: *const fn (self: QtC.QPaintEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPaintEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#dtor.QPaintEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPaintEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html)
pub const qmoveevent = struct {
    /// New constructs a new QMoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` oldPos: QtC.QPoint `
    ///
    pub fn New(pos: ?*anyopaque, oldPos: ?*anyopaque) QtC.QMoveEvent {
        return qtc.QMoveEvent_new(@ptrCast(pos), @ptrCast(oldPos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QMoveEvent {
        return qtc.QMoveEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMoveEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMoveEvent) void {
        qtc.QMoveEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QMoveEvent {
        return qtc.QMoveEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QMoveEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#oldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn OldPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QMoveEvent_OldPos(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QMoveEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QMoveEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMoveEvent`
    ///
    /// ` callback: *const fn (self: QtC.QMoveEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMoveEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#dtor.QMoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMoveEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMoveEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html)
pub const qexposeevent = struct {
    /// New constructs a new QExposeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` m_region: QtC.QRegion `
    ///
    pub fn New(m_region: ?*anyopaque) QtC.QExposeEvent {
        return qtc.QExposeEvent_new(@ptrCast(m_region));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QExposeEvent {
        return qtc.QExposeEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QExposeEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QExposeEvent) void {
        qtc.QExposeEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QExposeEvent {
        return qtc.QExposeEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#region)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn Region(self: ?*anyopaque) QtC.QRegion {
        return qtc.QExposeEvent_Region(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QExposeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QExposeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QExposeEvent`
    ///
    /// ` callback: *const fn (self: QtC.QExposeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QExposeEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#dtor.QExposeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QExposeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QExposeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html)
pub const qplatformsurfaceevent = struct {
    /// New constructs a new QPlatformSurfaceEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` surfaceEventType: qevent_enums.SurfaceEventType `
    ///
    pub fn New(surfaceEventType: i32) QtC.QPlatformSurfaceEvent {
        return qtc.QPlatformSurfaceEvent_new(@bitCast(surfaceEventType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QPlatformSurfaceEvent {
        return qtc.QPlatformSurfaceEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPlatformSurfaceEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPlatformSurfaceEvent) void {
        qtc.QPlatformSurfaceEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QPlatformSurfaceEvent {
        return qtc.QPlatformSurfaceEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#surfaceEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    /// ## Returns:
    ///
    /// ` qevent_enums.SurfaceEventType `
    ///
    pub fn SurfaceEventType(self: ?*anyopaque) i32 {
        return qtc.QPlatformSurfaceEvent_SurfaceEventType(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPlatformSurfaceEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPlatformSurfaceEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlatformSurfaceEvent`
    ///
    /// ` callback: *const fn (self: QtC.QPlatformSurfaceEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlatformSurfaceEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#dtor.QPlatformSurfaceEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlatformSurfaceEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlatformSurfaceEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html)
pub const qresizeevent = struct {
    /// New constructs a new QResizeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` oldSize: QtC.QSize `
    ///
    pub fn New(size: ?*anyopaque, oldSize: ?*anyopaque) QtC.QResizeEvent {
        return qtc.QResizeEvent_new(@ptrCast(size), @ptrCast(oldSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QResizeEvent {
        return qtc.QResizeEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QResizeEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QResizeEvent) void {
        qtc.QResizeEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QResizeEvent {
        return qtc.QResizeEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QResizeEvent_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#oldSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn OldSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QResizeEvent_OldSize(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QResizeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QResizeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QResizeEvent`
    ///
    /// ` callback: *const fn (self: QtC.QResizeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QResizeEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#dtor.QResizeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QResizeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QResizeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html)
pub const qcloseevent = struct {
    /// New constructs a new QCloseEvent object.
    ///
    pub fn New() QtC.QCloseEvent {
        return qtc.QCloseEvent_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QCloseEvent {
        return qtc.QCloseEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QCloseEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QCloseEvent) void {
        qtc.QCloseEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QCloseEvent {
        return qtc.QCloseEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QCloseEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QCloseEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCloseEvent`
    ///
    /// ` callback: *const fn (self: QtC.QCloseEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCloseEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#dtor.QCloseEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCloseEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCloseEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html)
pub const qicondragevent = struct {
    /// New constructs a new QIconDragEvent object.
    ///
    pub fn New() QtC.QIconDragEvent {
        return qtc.QIconDragEvent_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QIconDragEvent {
        return qtc.QIconDragEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QIconDragEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QIconDragEvent) void {
        qtc.QIconDragEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QIconDragEvent {
        return qtc.QIconDragEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QIconDragEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QIconDragEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconDragEvent`
    ///
    /// ` callback: *const fn (self: QtC.QIconDragEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QIconDragEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#dtor.QIconDragEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QIconDragEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIconDragEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html)
pub const qshowevent = struct {
    /// New constructs a new QShowEvent object.
    ///
    pub fn New() QtC.QShowEvent {
        return qtc.QShowEvent_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QShowEvent {
        return qtc.QShowEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QShowEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QShowEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QShowEvent) void {
        qtc.QShowEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QShowEvent {
        return qtc.QShowEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QShowEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShowEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QShowEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QShowEvent`
    ///
    /// ` callback: *const fn (self: QtC.QShowEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QShowEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#dtor.QShowEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QShowEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QShowEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html)
pub const qhideevent = struct {
    /// New constructs a new QHideEvent object.
    ///
    pub fn New() QtC.QHideEvent {
        return qtc.QHideEvent_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QHideEvent {
        return qtc.QHideEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHideEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QHideEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QHideEvent) void {
        qtc.QHideEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QHideEvent {
        return qtc.QHideEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHideEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHideEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHideEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHideEvent`
    ///
    /// ` callback: *const fn (self: QtC.QHideEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QHideEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#dtor.QHideEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QHideEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHideEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html)
pub const qcontextmenuevent = struct {
    /// New constructs a new QContextMenuEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` reason: qevent_enums.Reason `
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` globalPos: QtC.QPoint `
    ///
    pub fn New(reason: i32, pos: ?*anyopaque, globalPos: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_new(@bitCast(reason), @ptrCast(pos), @ptrCast(globalPos));
    }

    /// New2 constructs a new QContextMenuEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` reason: qevent_enums.Reason `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn New2(reason: i32, pos: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_new2(@bitCast(reason), @ptrCast(pos));
    }

    /// New3 constructs a new QContextMenuEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` reason: qevent_enums.Reason `
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` globalPos: QtC.QPoint `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New3(reason: i32, pos: ?*anyopaque, globalPos: ?*anyopaque, modifiers: i32) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_new3(@bitCast(reason), @ptrCast(pos), @ptrCast(globalPos), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QContextMenuEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QContextMenuEvent) void {
        qtc.QContextMenuEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QContextMenuEvent_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QContextMenuEvent_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QContextMenuEvent_GlobalX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QContextMenuEvent_GlobalY(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QContextMenuEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QContextMenuEvent_GlobalPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#reason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` qevent_enums.Reason `
    ///
    pub fn Reason(self: ?*anyopaque) i32 {
        return qtc.QContextMenuEvent_Reason(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QContextMenuEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QContextMenuEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QContextMenuEvent`
    ///
    /// ` callback: *const fn (self: QtC.QContextMenuEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QContextMenuEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QContextMenuEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QContextMenuEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QContextMenuEvent`
    ///
    /// ` callback: *const fn (self: QtC.QContextMenuEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QContextMenuEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#dtor.QContextMenuEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QContextMenuEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QContextMenuEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html)
pub const qinputmethodevent = struct {
    /// New constructs a new QInputMethodEvent object.
    ///
    pub fn New() QtC.QInputMethodEvent {
        return qtc.QInputMethodEvent_new();
    }

    /// New2 constructs a new QInputMethodEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` preeditText: []const u8 `
    ///
    /// ` attributes: []QtC.QInputMethodEvent__Attribute `
    ///
    pub fn New2(preeditText: []const u8, attributes: []QtC.QInputMethodEvent__Attribute) QtC.QInputMethodEvent {
        const preeditText_str = qtc.libqt_string{
            .len = preeditText.len,
            .data = preeditText.ptr,
        };
        const attributes_list = qtc.libqt_list{
            .len = attributes.len,
            .data = @ptrCast(attributes.ptr),
        };

        return qtc.QInputMethodEvent_new2(preeditText_str, attributes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QInputMethodEvent {
        return qtc.QInputMethodEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QInputMethodEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QInputMethodEvent) void {
        qtc.QInputMethodEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QInputMethodEvent {
        return qtc.QInputMethodEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ` commitString: []const u8 `
    ///
    pub fn SetCommitString(self: ?*anyopaque, commitString: []const u8) void {
        const commitString_str = qtc.libqt_string{
            .len = commitString.len,
            .data = commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString(@ptrCast(self), commitString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attributes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QInputMethodEvent__Attribute {
        const _arr: qtc.libqt_list = qtc.QInputMethodEvent_Attributes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QInputMethodEvent__Attribute, _arr.len) catch @panic("qinputmethodevent.Attributes: Memory allocation failed");
        const _data: [*]QtC.QInputMethodEvent__Attribute = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#preeditString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreeditString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QInputMethodEvent_PreeditString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethodevent.PreeditString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#commitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CommitString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QInputMethodEvent_CommitString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethodevent.CommitString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn ReplacementStart(self: ?*anyopaque) i32 {
        return qtc.QInputMethodEvent_ReplacementStart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn ReplacementLength(self: ?*anyopaque) i32 {
        return qtc.QInputMethodEvent_ReplacementLength(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ` commitString: []const u8 `
    ///
    /// ` replaceFrom: i32 `
    ///
    pub fn SetCommitString2(self: ?*anyopaque, commitString: []const u8, replaceFrom: i32) void {
        const commitString_str = qtc.libqt_string{
            .len = commitString.len,
            .data = commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString2(@ptrCast(self), commitString_str, @bitCast(replaceFrom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ` commitString: []const u8 `
    ///
    /// ` replaceFrom: i32 `
    ///
    /// ` replaceLength: i32 `
    ///
    pub fn SetCommitString3(self: ?*anyopaque, commitString: []const u8, replaceFrom: i32, replaceLength: i32) void {
        const commitString_str = qtc.libqt_string{
            .len = commitString.len,
            .data = commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString3(@ptrCast(self), commitString_str, @bitCast(replaceFrom), @bitCast(replaceLength));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputMethodEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputMethodEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QInputMethodEvent`
    ///
    /// ` callback: *const fn (self: QtC.QInputMethodEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QInputMethodEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#dtor.QInputMethodEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QInputMethodEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputMethodEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html)
pub const qinputmethodqueryevent = struct {
    /// New constructs a new QInputMethodQueryEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` queries: flag of qnamespace_enums.InputMethodQuery `
    ///
    pub fn New(queries: i32) QtC.QInputMethodQueryEvent {
        return qtc.QInputMethodQueryEvent_new(@bitCast(queries));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QInputMethodQueryEvent {
        return qtc.QInputMethodQueryEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QInputMethodQueryEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QInputMethodQueryEvent) void {
        qtc.QInputMethodQueryEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QInputMethodQueryEvent {
        return qtc.QInputMethodQueryEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#queries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodQuery `
    ///
    pub fn Queries(self: ?*anyopaque) i32 {
        return qtc.QInputMethodQueryEvent_Queries(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetValue(self: ?*anyopaque, query: i32, value: ?*anyopaque) void {
        qtc.QInputMethodQueryEvent_SetValue(@ptrCast(self), @bitCast(query), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn Value(self: ?*anyopaque, query: i32) QtC.QVariant {
        return qtc.QInputMethodQueryEvent_Value(@ptrCast(self), @bitCast(query));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputMethodQueryEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QInputMethodQueryEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QInputMethodQueryEvent`
    ///
    /// ` callback: *const fn (self: QtC.QInputMethodQueryEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QInputMethodQueryEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#dtor.QInputMethodQueryEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QInputMethodQueryEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputMethodQueryEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html)
pub const qdropevent = struct {
    /// New constructs a new QDropEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i32, modifiers: i32) QtC.QDropEvent {
        return qtc.QDropEvent_new(@ptrCast(pos), @bitCast(actions), @ptrCast(data), @bitCast(buttons), @bitCast(modifiers));
    }

    /// New2 constructs a new QDropEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i32, modifiers: i32, typeVal: i32) QtC.QDropEvent {
        return qtc.QDropEvent_new2(@ptrCast(pos), @bitCast(actions), @ptrCast(data), @bitCast(buttons), @bitCast(modifiers), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QDropEvent {
        return qtc.QDropEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDropEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDropEvent) void {
        qtc.QDropEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QDropEvent {
        return qtc.QDropEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QDropEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_PosF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn MouseButtons(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn KeyboardModifiers(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_Buttons(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn PossibleActions(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn ProposedAction(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn AcceptProposedAction(self: ?*anyopaque) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DropAction(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetDropAction(self: ?*anyopaque, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self), @bitCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn Source(self: ?*anyopaque) QtC.QObject {
        return qtc.QDropEvent_Source(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn MimeData(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QDropEvent_MimeData(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDropEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDropEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDropEvent`
    ///
    /// ` callback: *const fn (self: QtC.QDropEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDropEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dtor.QDropEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDropEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDropEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html)
pub const qdragmoveevent = struct {
    /// New constructs a new QDragMoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i32, modifiers: i32) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_new(@ptrCast(pos), @bitCast(actions), @ptrCast(data), @bitCast(buttons), @bitCast(modifiers));
    }

    /// New2 constructs a new QDragMoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i32, modifiers: i32, typeVal: i32) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_new2(@ptrCast(pos), @bitCast(actions), @ptrCast(data), @bitCast(buttons), @bitCast(modifiers), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDragMoveEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDragMoveEvent) void {
        qtc.QDragMoveEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn AnswerRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QDragMoveEvent_AnswerRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Accept(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Ignore(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn Accept2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Accept2(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn Ignore2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Ignore2(@ptrCast(self), @ptrCast(r));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QDropEvent_Pos(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_PosF(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn MouseButtons(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn KeyboardModifiers(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_Position(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn PossibleActions(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn ProposedAction(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn AcceptProposedAction(self: ?*anyopaque) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DropAction(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetDropAction(self: ?*anyopaque, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self), @bitCast(action));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn Source(self: ?*anyopaque) QtC.QObject {
        return qtc.QDropEvent_Source(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn MimeData(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QDropEvent_MimeData(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragMoveEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragMoveEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDragMoveEvent`
    ///
    /// ` callback: *const fn (self: QtC.QDragMoveEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDragMoveEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#dtor.QDragMoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDragMoveEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html)
pub const qdragenterevent = struct {
    /// New constructs a new QDragEnterEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i32, modifiers: i32) QtC.QDragEnterEvent {
        return qtc.QDragEnterEvent_new(@ptrCast(pos), @bitCast(actions), @ptrCast(data), @bitCast(buttons), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QDragEnterEvent {
        return qtc.QDragEnterEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDragEnterEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDragEnterEvent) void {
        qtc.QDragEnterEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QDragEnterEvent {
        return qtc.QDragEnterEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn AnswerRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QDragMoveEvent_AnswerRect(@ptrCast(self));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn Accept2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Accept2(@ptrCast(self), @ptrCast(r));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn Ignore2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Ignore2(@ptrCast(self), @ptrCast(r));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QDropEvent_Pos(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn PosF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_PosF(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn MouseButtons(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn KeyboardModifiers(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QDropEvent_Position(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_Buttons(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn PossibleActions(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn ProposedAction(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn AcceptProposedAction(self: ?*anyopaque) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DropAction(self: ?*anyopaque) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetDropAction(self: ?*anyopaque, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self), @bitCast(action));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn Source(self: ?*anyopaque) QtC.QObject {
        return qtc.QDropEvent_Source(@ptrCast(self));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn MimeData(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QDropEvent_MimeData(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragEnterEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragEnterEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDragEnterEvent`
    ///
    /// ` callback: *const fn (self: QtC.QDragEnterEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDragEnterEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#dtor.QDragEnterEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDragEnterEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDragEnterEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html)
pub const qdragleaveevent = struct {
    /// New constructs a new QDragLeaveEvent object.
    ///
    pub fn New() QtC.QDragLeaveEvent {
        return qtc.QDragLeaveEvent_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QDragLeaveEvent {
        return qtc.QDragLeaveEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDragLeaveEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDragLeaveEvent) void {
        qtc.QDragLeaveEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QDragLeaveEvent {
        return qtc.QDragLeaveEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragLeaveEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDragLeaveEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDragLeaveEvent`
    ///
    /// ` callback: *const fn (self: QtC.QDragLeaveEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDragLeaveEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#dtor.QDragLeaveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDragLeaveEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDragLeaveEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html)
pub const qhelpevent = struct {
    /// New constructs a new QHelpEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` globalPos: QtC.QPoint `
    ///
    pub fn New(typeVal: i32, pos: ?*anyopaque, globalPos: ?*anyopaque) QtC.QHelpEvent {
        return qtc.QHelpEvent_new(@bitCast(typeVal), @ptrCast(pos), @ptrCast(globalPos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QHelpEvent {
        return qtc.QHelpEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QHelpEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QHelpEvent) void {
        qtc.QHelpEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QHelpEvent {
        return qtc.QHelpEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QHelpEvent_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QHelpEvent_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn GlobalX(self: ?*anyopaque) i32 {
        return qtc.QHelpEvent_GlobalX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn GlobalY(self: ?*anyopaque) i32 {
        return qtc.QHelpEvent_GlobalY(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QHelpEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn GlobalPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QHelpEvent_GlobalPos(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHelpEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QHelpEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QHelpEvent`
    ///
    /// ` callback: *const fn (self: QtC.QHelpEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QHelpEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#dtor.QHelpEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QHelpEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHelpEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html)
pub const qstatustipevent = struct {
    /// New constructs a new QStatusTipEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` tip: []const u8 `
    ///
    pub fn New(tip: []const u8) QtC.QStatusTipEvent {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };

        return qtc.QStatusTipEvent_new(tip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QStatusTipEvent {
        return qtc.QStatusTipEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QStatusTipEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QStatusTipEvent) void {
        qtc.QStatusTipEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QStatusTipEvent {
        return qtc.QStatusTipEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#tip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStatusTipEvent_Tip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatustipevent.Tip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QStatusTipEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QStatusTipEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStatusTipEvent`
    ///
    /// ` callback: *const fn (self: QtC.QStatusTipEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QStatusTipEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#dtor.QStatusTipEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStatusTipEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStatusTipEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html)
pub const qwhatsthisclickedevent = struct {
    /// New constructs a new QWhatsThisClickedEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` href: []const u8 `
    ///
    pub fn New(href: []const u8) QtC.QWhatsThisClickedEvent {
        const href_str = qtc.libqt_string{
            .len = href.len,
            .data = href.ptr,
        };

        return qtc.QWhatsThisClickedEvent_new(href_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QWhatsThisClickedEvent {
        return qtc.QWhatsThisClickedEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWhatsThisClickedEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWhatsThisClickedEvent) void {
        qtc.QWhatsThisClickedEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QWhatsThisClickedEvent {
        return qtc.QWhatsThisClickedEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#href)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Href(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWhatsThisClickedEvent_Href(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwhatsthisclickedevent.Href: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWhatsThisClickedEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWhatsThisClickedEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWhatsThisClickedEvent`
    ///
    /// ` callback: *const fn (self: QtC.QWhatsThisClickedEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWhatsThisClickedEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#dtor.QWhatsThisClickedEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWhatsThisClickedEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWhatsThisClickedEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html)
pub const qactionevent = struct {
    /// New constructs a new QActionEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn New(typeVal: i32, action: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_new(@bitCast(typeVal), @ptrCast(action));
    }

    /// New2 constructs a new QActionEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` action: QtC.QAction `
    ///
    /// ` before: QtC.QAction `
    ///
    pub fn New2(typeVal: i32, action: ?*anyopaque, before: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_new2(@bitCast(typeVal), @ptrCast(action), @ptrCast(before));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QActionEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QActionEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QActionEvent) void {
        qtc.QActionEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn Action(self: ?*anyopaque) QtC.QAction {
        return qtc.QActionEvent_Action(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#before)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn Before(self: ?*anyopaque) QtC.QAction {
        return qtc.QActionEvent_Before(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QActionEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QActionEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QActionEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QActionEvent`
    ///
    /// ` callback: *const fn (self: QtC.QActionEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QActionEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#dtor.QActionEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QActionEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QActionEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html)
pub const qfileopenevent = struct {
    /// New constructs a new QFileOpenEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn New(file: []const u8) QtC.QFileOpenEvent {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.QFileOpenEvent_new(file_str);
    }

    /// New2 constructs a new QFileOpenEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn New2(url: ?*anyopaque) QtC.QFileOpenEvent {
        return qtc.QFileOpenEvent_new2(@ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QFileOpenEvent {
        return qtc.QFileOpenEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QFileOpenEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QFileOpenEvent) void {
        qtc.QFileOpenEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QFileOpenEvent {
        return qtc.QFileOpenEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#file)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn File(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileOpenEvent_File(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileopenevent.File: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QFileOpenEvent_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#openFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    /// ` file: QtC.QFile `
    ///
    /// ` flags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenFile(self: ?*anyopaque, file: ?*anyopaque, flags: i32) bool {
        return qtc.QFileOpenEvent_OpenFile(@ptrCast(self), @ptrCast(file), @bitCast(flags));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QFileOpenEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QFileOpenEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFileOpenEvent`
    ///
    /// ` callback: *const fn (self: QtC.QFileOpenEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QFileOpenEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#dtor.QFileOpenEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFileOpenEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileOpenEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html)
pub const qtoolbarchangeevent = struct {
    /// New constructs a new QToolBarChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t: bool `
    ///
    pub fn New(t: bool) QtC.QToolBarChangeEvent {
        return qtc.QToolBarChangeEvent_new(t);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QToolBarChangeEvent {
        return qtc.QToolBarChangeEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QToolBarChangeEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QToolBarChangeEvent) void {
        qtc.QToolBarChangeEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QToolBarChangeEvent {
        return qtc.QToolBarChangeEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn Toggle(self: ?*anyopaque) bool {
        return qtc.QToolBarChangeEvent_Toggle(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QToolBarChangeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QToolBarChangeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QToolBarChangeEvent`
    ///
    /// ` callback: *const fn (self: QtC.QToolBarChangeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QToolBarChangeEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#dtor.QToolBarChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QToolBarChangeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QToolBarChangeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)
pub const qshortcutevent = struct {
    /// New constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QtC.QKeySequence `
    ///
    /// ` id: i32 `
    ///
    pub fn New(key: ?*anyopaque, id: i32) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new(@ptrCast(key), @bitCast(id));
    }

    /// New2 constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QtC.QKeySequence `
    ///
    pub fn New2(key: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new2(@ptrCast(key));
    }

    /// New3 constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QtC.QKeySequence `
    ///
    /// ` id: i32 `
    ///
    /// ` ambiguous: bool `
    ///
    pub fn New3(key: ?*anyopaque, id: i32, ambiguous: bool) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new3(@ptrCast(key), @bitCast(id), ambiguous);
    }

    /// New4 constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QtC.QKeySequence `
    ///
    /// ` shortcut: QtC.QShortcut `
    ///
    pub fn New4(key: ?*anyopaque, shortcut: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new4(@ptrCast(key), @ptrCast(shortcut));
    }

    /// New5 constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QtC.QKeySequence `
    ///
    /// ` shortcut: QtC.QShortcut `
    ///
    /// ` ambiguous: bool `
    ///
    pub fn New5(key: ?*anyopaque, shortcut: ?*anyopaque, ambiguous: bool) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new5(@ptrCast(key), @ptrCast(shortcut), ambiguous);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QShortcutEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QShortcutEvent) void {
        qtc.QShortcutEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn Key(self: ?*anyopaque) QtC.QKeySequence {
        return qtc.QShortcutEvent_Key(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#shortcutId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn ShortcutId(self: ?*anyopaque) i32 {
        return qtc.QShortcutEvent_ShortcutId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#isAmbiguous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn IsAmbiguous(self: ?*anyopaque) bool {
        return qtc.QShortcutEvent_IsAmbiguous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QShortcutEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QShortcutEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QShortcutEvent`
    ///
    /// ` callback: *const fn (self: QtC.QShortcutEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QShortcutEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#dtor.QShortcutEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QShortcutEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QShortcutEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html)
pub const qwindowstatechangeevent = struct {
    /// New constructs a new QWindowStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` oldState: flag of qnamespace_enums.WindowState `
    ///
    pub fn New(oldState: i32) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_new(@bitCast(oldState));
    }

    /// New2 constructs a new QWindowStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` oldState: flag of qnamespace_enums.WindowState `
    ///
    /// ` isOverride: bool `
    ///
    pub fn New2(oldState: i32, isOverride: bool) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_new2(@bitCast(oldState), isOverride);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWindowStateChangeEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWindowStateChangeEvent) void {
        qtc.QWindowStateChangeEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#oldState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn OldState(self: ?*anyopaque) i32 {
        return qtc.QWindowStateChangeEvent_OldState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#isOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn IsOverride(self: ?*anyopaque) bool {
        return qtc.QWindowStateChangeEvent_IsOverride(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWindowStateChangeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QWindowStateChangeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindowStateChangeEvent`
    ///
    /// ` callback: *const fn (self: QtC.QWindowStateChangeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWindowStateChangeEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#dtor.QWindowStateChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWindowStateChangeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWindowStateChangeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)
pub const qtouchevent = struct {
    /// New constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    pub fn New(eventType: i32) QtC.QTouchEvent {
        return qtc.QTouchEvent_new(@bitCast(eventType));
    }

    /// New2 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` touchPointStates: flag of qeventpoint_enums.State `
    ///
    pub fn New2(eventType: i32, device: ?*anyopaque, modifiers: i32, touchPointStates: u8) QtC.QTouchEvent {
        return qtc.QTouchEvent_new2(@bitCast(eventType), @ptrCast(device), @bitCast(modifiers), @bitCast(touchPointStates));
    }

    /// New3 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    pub fn New3(eventType: i32, device: ?*anyopaque) QtC.QTouchEvent {
        return qtc.QTouchEvent_new3(@bitCast(eventType), @ptrCast(device));
    }

    /// New4 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New4(eventType: i32, device: ?*anyopaque, modifiers: i32) QtC.QTouchEvent {
        return qtc.QTouchEvent_new4(@bitCast(eventType), @ptrCast(device), @bitCast(modifiers));
    }

    /// New5 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` touchPoints: []QtC.QEventPoint `
    ///
    pub fn New5(eventType: i32, device: ?*anyopaque, modifiers: i32, touchPoints: []QtC.QEventPoint) QtC.QTouchEvent {
        const touchPoints_list = qtc.libqt_list{
            .len = touchPoints.len,
            .data = @ptrCast(touchPoints.ptr),
        };

        return qtc.QTouchEvent_new5(@bitCast(eventType), @ptrCast(device), @bitCast(modifiers), touchPoints_list);
    }

    /// New6 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QtC.QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` touchPointStates: flag of qeventpoint_enums.State `
    ///
    /// ` touchPoints: []QtC.QEventPoint `
    ///
    pub fn New6(eventType: i32, device: ?*anyopaque, modifiers: i32, touchPointStates: u8, touchPoints: []QtC.QEventPoint) QtC.QTouchEvent {
        const touchPoints_list = qtc.libqt_list{
            .len = touchPoints.len,
            .data = @ptrCast(touchPoints.ptr),
        };

        return qtc.QTouchEvent_new6(@bitCast(eventType), @ptrCast(device), @bitCast(modifiers), @bitCast(touchPointStates), touchPoints_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QTouchEvent {
        return qtc.QTouchEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QTouchEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QTouchEvent) void {
        qtc.QTouchEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QTouchEvent {
        return qtc.QTouchEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn Target(self: ?*anyopaque) QtC.QObject {
        return qtc.QTouchEvent_Target(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#touchPointStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qeventpoint_enums.State `
    ///
    pub fn TouchPointStates(self: ?*anyopaque) u8 {
        return qtc.QTouchEvent_TouchPointStates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#touchPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TouchPoints(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QTouchEvent_TouchPoints(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qtouchevent.TouchPoints: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn IsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_IsBeginEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsBeginEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn QBaseIsBeginEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn IsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsUpdateEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn IsEndEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_IsEndEvent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsEndEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn QBaseIsEndEvent(self: ?*anyopaque) bool {
        return qtc.QTouchEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn PointingDevice(self: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn PointCount(self: ?*anyopaque) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` i: i64 `
    ///
    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QEventPoint, _arr.len) catch @panic("qtouchevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn AllPointsGrabbed(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn AllPointsAccepted(self: ?*anyopaque) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` exclusiveGrabber: QtC.QObject `
    ///
    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` point: QtC.QEventPoint `
    ///
    /// ` grabber: QtC.QObject `
    ///
    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QTouchEvent_SetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QTouchEvent_QBaseSetTimestamp(@ptrCast(self), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTouchEvent`
    ///
    /// ` callback: *const fn (self: QtC.QTouchEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QTouchEvent_OnSetTimestamp(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTouchEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTouchEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTouchEvent`
    ///
    /// ` callback: *const fn (self: QtC.QTouchEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTouchEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#dtor.QTouchEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTouchEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTouchEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html)
pub const qscrollprepareevent = struct {
    /// New constructs a new QScrollPrepareEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` startPos: QtC.QPointF `
    ///
    pub fn New(startPos: ?*anyopaque) QtC.QScrollPrepareEvent {
        return qtc.QScrollPrepareEvent_new(@ptrCast(startPos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QScrollPrepareEvent {
        return qtc.QScrollPrepareEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QScrollPrepareEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QScrollPrepareEvent) void {
        qtc.QScrollPrepareEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QScrollPrepareEvent {
        return qtc.QScrollPrepareEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#startPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn StartPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScrollPrepareEvent_StartPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#viewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn ViewportSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QScrollPrepareEvent_ViewportSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPosRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn ContentPosRange(self: ?*anyopaque) QtC.QRectF {
        return qtc.QScrollPrepareEvent_ContentPosRange(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn ContentPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScrollPrepareEvent_ContentPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetViewportSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_SetViewportSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPosRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SetContentPosRange(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_SetContentPosRange(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetContentPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_SetContentPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScrollPrepareEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScrollPrepareEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScrollPrepareEvent`
    ///
    /// ` callback: *const fn (self: QtC.QScrollPrepareEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QScrollPrepareEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#dtor.QScrollPrepareEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QScrollPrepareEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html)
pub const qscrollevent = struct {
    /// New constructs a new QScrollEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` contentPos: QtC.QPointF `
    ///
    /// ` overshoot: QtC.QPointF `
    ///
    /// ` scrollState: qevent_enums.ScrollState `
    ///
    pub fn New(contentPos: ?*anyopaque, overshoot: ?*anyopaque, scrollState: i32) QtC.QScrollEvent {
        return qtc.QScrollEvent_new(@ptrCast(contentPos), @ptrCast(overshoot), @bitCast(scrollState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QScrollEvent {
        return qtc.QScrollEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QScrollEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QScrollEvent) void {
        qtc.QScrollEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QScrollEvent {
        return qtc.QScrollEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#contentPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn ContentPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScrollEvent_ContentPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#overshootDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn OvershootDistance(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScrollEvent_OvershootDistance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#scrollState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    /// ## Returns:
    ///
    /// ` qevent_enums.ScrollState `
    ///
    pub fn ScrollState(self: ?*anyopaque) i32 {
        return qtc.QScrollEvent_ScrollState(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScrollEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScrollEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScrollEvent`
    ///
    /// ` callback: *const fn (self: QtC.QScrollEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QScrollEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#dtor.QScrollEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QScrollEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScrollEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html)
pub const qscreenorientationchangeevent = struct {
    /// New constructs a new QScreenOrientationChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: QtC.QScreen `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn New(screen: ?*anyopaque, orientation: i32) QtC.QScreenOrientationChangeEvent {
        return qtc.QScreenOrientationChangeEvent_new(@ptrCast(screen), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QScreenOrientationChangeEvent {
        return qtc.QScreenOrientationChangeEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QScreenOrientationChangeEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QScreenOrientationChangeEvent) void {
        qtc.QScreenOrientationChangeEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QScreenOrientationChangeEvent {
        return qtc.QScreenOrientationChangeEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QScreenOrientationChangeEvent_Screen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QScreenOrientationChangeEvent_Orientation(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScreenOrientationChangeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QScreenOrientationChangeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent`
    ///
    /// ` callback: *const fn (self: QtC.QScreenOrientationChangeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QScreenOrientationChangeEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#dtor.QScreenOrientationChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QScreenOrientationChangeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScreenOrientationChangeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html)
pub const qapplicationstatechangeevent = struct {
    /// New constructs a new QApplicationStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` state: qnamespace_enums.ApplicationState `
    ///
    pub fn New(state: i32) QtC.QApplicationStateChangeEvent {
        return qtc.QApplicationStateChangeEvent_new(@bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QApplicationStateChangeEvent {
        return qtc.QApplicationStateChangeEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QApplicationStateChangeEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QApplicationStateChangeEvent) void {
        qtc.QApplicationStateChangeEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QApplicationStateChangeEvent {
        return qtc.QApplicationStateChangeEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#applicationState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ApplicationState `
    ///
    pub fn ApplicationState(self: ?*anyopaque) i32 {
        return qtc.QApplicationStateChangeEvent_ApplicationState(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QApplicationStateChangeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QApplicationStateChangeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QApplicationStateChangeEvent`
    ///
    /// ` callback: *const fn (self: QtC.QApplicationStateChangeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QApplicationStateChangeEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#dtor.QApplicationStateChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QApplicationStateChangeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QApplicationStateChangeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html)
pub const qchildwindowevent = struct {
    /// New constructs a new QChildWindowEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` childWindow: QtC.QWindow `
    ///
    pub fn New(typeVal: i32, childWindow: ?*anyopaque) QtC.QChildWindowEvent {
        return qtc.QChildWindowEvent_new(@bitCast(typeVal), @ptrCast(childWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QChildWindowEvent {
        return qtc.QChildWindowEvent_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QChildWindowEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QChildWindowEvent) void {
        qtc.QChildWindowEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QChildWindowEvent {
        return qtc.QChildWindowEvent_QBaseClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn Child(self: ?*anyopaque) QtC.QWindow {
        return qtc.QChildWindowEvent_Child(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QChildWindowEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QChildWindowEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QChildWindowEvent`
    ///
    /// ` callback: *const fn (self: QtC.QChildWindowEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QChildWindowEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#dtor.QChildWindowEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QChildWindowEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QChildWindowEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html)
pub const qinputmethodevent__attribute = struct {
    /// New constructs a new QInputMethodEvent::Attribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typ: qevent_enums.AttributeType `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    /// ` val: QtC.QVariant `
    ///
    pub fn New(typ: i32, s: i32, l: i32, val: QtC.QVariant) QtC.QInputMethodEvent__Attribute {
        return qtc.QInputMethodEvent__Attribute_new(@bitCast(typ), @bitCast(s), @bitCast(l), @ptrCast(val));
    }

    /// New2 constructs a new QInputMethodEvent::Attribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typ: qevent_enums.AttributeType `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    pub fn New2(typ: i32, s: i32, l: i32) QtC.QInputMethodEvent__Attribute {
        return qtc.QInputMethodEvent__Attribute_new2(@bitCast(typ), @bitCast(s), @bitCast(l));
    }

    /// New3 constructs a new QInputMethodEvent::Attribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QInputMethodEvent__Attribute `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QInputMethodEvent__Attribute {
        return qtc.QInputMethodEvent__Attribute_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qevent_enums.AttributeType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QInputMethodEvent__Attribute_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    /// ` type: qevent_enums.AttributeType `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QInputMethodEvent__Attribute_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    pub fn Start(self: ?*anyopaque) i32 {
        return qtc.QInputMethodEvent__Attribute_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: ?*anyopaque, start: i32) void {
        qtc.QInputMethodEvent__Attribute_SetStart(@ptrCast(self), @bitCast(start));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QInputMethodEvent__Attribute_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    /// ` length: i32 `
    ///
    pub fn SetLength(self: ?*anyopaque, length: i32) void {
        qtc.QInputMethodEvent__Attribute_SetLength(@ptrCast(self), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    pub fn Value(self: ?*anyopaque) QtC.QVariant {
        return qtc.QInputMethodEvent__Attribute_Value(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetValue(self: ?*anyopaque, value: QtC.QVariant) void {
        qtc.QInputMethodEvent__Attribute_SetValue(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    /// ` param1: QtC.QInputMethodEvent__Attribute `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QInputMethodEvent__Attribute_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QInputMethodEvent__Attribute `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputMethodEvent__Attribute_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#public-types)
pub const enums = struct {
    pub const QWheelEvent = enum(i32) {
        pub const DefaultDeltasPerStep: i32 = 120;
    };

    pub const SurfaceEventType = enum(i32) {
        pub const SurfaceCreated: i32 = 0;
        pub const SurfaceAboutToBeDestroyed: i32 = 1;
    };

    pub const Reason = enum(i32) {
        pub const Mouse: i32 = 0;
        pub const Keyboard: i32 = 1;
        pub const Other: i32 = 2;
    };

    pub const AttributeType = enum(i32) {
        pub const TextFormat: i32 = 0;
        pub const Cursor: i32 = 1;
        pub const Language: i32 = 2;
        pub const Ruby: i32 = 3;
        pub const Selection: i32 = 4;
    };

    pub const ScrollState = enum(i32) {
        pub const ScrollStarted: i32 = 0;
        pub const ScrollUpdated: i32 = 1;
        pub const ScrollFinished: i32 = 2;
    };
};
