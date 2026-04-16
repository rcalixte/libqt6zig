const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QEventPoint = @import("libqt6").QEventPoint;
const QFile = @import("libqt6").QFile;
const QInputDevice = @import("libqt6").QInputDevice;
const QKeyCombination = @import("libqt6").QKeyCombination;
const QKeySequence = @import("libqt6").QKeySequence;
const QMimeData = @import("libqt6").QMimeData;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QPointingDevice = @import("libqt6").QPointingDevice;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QScreen = @import("libqt6").QScreen;
const QShortcut = @import("libqt6").QShortcut;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWindow = @import("libqt6").QWindow;
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
pub const QInputEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QInputEvent,

    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QInputEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` m_dev: QInputDevice `
    ///
    pub fn New(typeVal: i32, m_dev: anytype) QInputEvent {
        comptime _ = @TypeOf(m_dev)._is_QInputDevice;
        return .{ .ptr = qtc.QInputEvent_new(@bitCast(typeVal), @ptrCast(m_dev.ptr)) };
    }

    /// New2 constructs a new QInputEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` m_dev: QInputDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New2(typeVal: i32, m_dev: anytype, modifiers: i32) QInputEvent {
        comptime _ = @TypeOf(m_dev)._is_QInputDevice;
        return .{ .ptr = qtc.QInputEvent_new2(@bitCast(typeVal), @ptrCast(m_dev.ptr), @bitCast(modifiers)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn Clone(self: QInputEvent) QInputEvent {
        return .{ .ptr = qtc.QInputEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QInputEvent `
    ///
    pub fn OnClone(self: QInputEvent, callback: *const fn () callconv(.c) QInputEvent) void {
        qtc.QInputEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn SuperClone(self: QInputEvent) QInputEvent {
        return .{ .ptr = qtc.QInputEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn Device(self: QInputEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QInputEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QInputEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QInputEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn Timestamp(self: QInputEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QInputEvent, timestamp: u64) void {
        qtc.QInputEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputEvent `
    ///
    /// ` callback: *const fn (self: QInputEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QInputEvent, callback: *const fn (QInputEvent, u64) callconv(.c) void) void {
        qtc.QInputEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QInputEvent, timestamp: u64) void {
        qtc.QInputEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QInputEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn Spontaneous(self: QInputEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn IsAccepted(self: QInputEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn Accept(self: QInputEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn Ignore(self: QInputEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn IsInputEvent(self: QInputEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn IsPointerEvent(self: QInputEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn IsSinglePointEvent(self: QInputEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QInputEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QInputEvent, accepted: bool) void {
        qtc.QInputEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QInputEvent, accepted: bool) void {
        qtc.QInputEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputEvent`
    ///
    /// ` callback: *const fn (self: QInputEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QInputEvent, callback: *const fn (QInputEvent, bool) callconv(.c) void) void {
        qtc.QInputEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#dtor.QInputEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QInputEvent `
    ///
    pub fn Delete(self: QInputEvent) void {
        qtc.QInputEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html)
pub const QPointerEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPointerEvent,

    pub const _is_QPointerEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QPointerEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` dev: QPointingDevice `
    ///
    pub fn New(typeVal: i32, dev: anytype) QPointerEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        return .{ .ptr = qtc.QPointerEvent_new(@bitCast(typeVal), @ptrCast(dev.ptr)) };
    }

    /// New2 constructs a new QPointerEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New2(typeVal: i32, dev: anytype, modifiers: i32) QPointerEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        return .{ .ptr = qtc.QPointerEvent_new2(@bitCast(typeVal), @ptrCast(dev.ptr), @bitCast(modifiers)) };
    }

    /// New3 constructs a new QPointerEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` points: []QEventPoint `
    ///
    pub fn New3(typeVal: i32, dev: anytype, modifiers: i32, points: []QEventPoint) QPointerEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        return .{ .ptr = qtc.QPointerEvent_new3(@bitCast(typeVal), @ptrCast(dev.ptr), @bitCast(modifiers), points_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn Clone(self: QPointerEvent) QPointerEvent {
        return .{ .ptr = qtc.QPointerEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QPointerEvent `
    ///
    pub fn OnClone(self: QPointerEvent, callback: *const fn () callconv(.c) QPointerEvent) void {
        qtc.QPointerEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn SuperClone(self: QPointerEvent) QPointerEvent {
        return .{ .ptr = qtc.QPointerEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn PointingDevice(self: QPointerEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QPointerEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QPointerEvent, timestamp: u64) void {
        qtc.QPointerEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` callback: *const fn (self: QPointerEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QPointerEvent, callback: *const fn (QPointerEvent, u64) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QPointerEvent, timestamp: u64) void {
        qtc.QPointerEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn PointCount(self: QPointerEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` i: isize `
    ///
    pub fn Point(self: QPointerEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QPointerEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qpointerevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: QPointerEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn AllPointsGrabbed(self: QPointerEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn IsBeginEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: QPointerEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsBeginEvent` instead
    ///
    pub const QBaseIsBeginEvent = SuperIsBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn SuperIsBeginEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn IsUpdateEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: QPointerEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsUpdateEvent` instead
    ///
    pub const QBaseIsUpdateEvent = SuperIsUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn SuperIsUpdateEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn IsEndEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: QPointerEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEndEvent` instead
    ///
    pub const QBaseIsEndEvent = SuperIsEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn SuperIsEndEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn AllPointsAccepted(self: QPointerEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QPointerEvent, accepted: bool) void {
        qtc.QPointerEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` callback: *const fn (self: QPointerEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QPointerEvent, callback: *const fn (QPointerEvent, bool) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QPointerEvent, accepted: bool) void {
        qtc.QPointerEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: QPointerEvent, point: anytype) QObject {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusiveGrabber(self: QPointerEvent, point: anytype, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: QPointerEvent, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn AddPassiveGrabber(self: QPointerEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn RemovePassiveGrabber(self: QPointerEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn Device(self: QPointerEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QPointerEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QPointerEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QPointerEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn Timestamp(self: QPointerEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QPointerEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn Spontaneous(self: QPointerEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn IsAccepted(self: QPointerEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn Accept(self: QPointerEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn Ignore(self: QPointerEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn IsInputEvent(self: QPointerEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn IsPointerEvent(self: QPointerEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn IsSinglePointEvent(self: QPointerEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#dtor.QPointerEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn Delete(self: QPointerEvent) void {
        qtc.QPointerEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html)
pub const QSinglePointEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSinglePointEvent,

    pub const _is_QSinglePointEvent = {};
    pub const _is_QPointerEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn Clone(self: QSinglePointEvent) QSinglePointEvent {
        return .{ .ptr = qtc.QSinglePointEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: QSinglePointEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QSinglePointEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn Position(self: QSinglePointEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn ScenePosition(self: QSinglePointEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn GlobalPosition(self: QSinglePointEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn IsBeginEvent(self: QSinglePointEvent) bool {
        return qtc.QSinglePointEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn IsUpdateEvent(self: QSinglePointEvent) bool {
        return qtc.QSinglePointEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn IsEndEvent(self: QSinglePointEvent) bool {
        return qtc.QSinglePointEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn ExclusivePointGrabber(self: QSinglePointEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusivePointGrabber(self: QSinglePointEvent, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn PointingDevice(self: QSinglePointEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QSinglePointEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QSinglePointEvent, timestamp: u64) void {
        qtc.QPointerEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn PointCount(self: QSinglePointEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` i: isize `
    ///
    pub fn Point(self: QSinglePointEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QSinglePointEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qsinglepointevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: QSinglePointEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn AllPointsGrabbed(self: QSinglePointEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn AllPointsAccepted(self: QSinglePointEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QSinglePointEvent, accepted: bool) void {
        qtc.QPointerEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: QSinglePointEvent, point: anytype) QObject {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusiveGrabber(self: QSinglePointEvent, point: anytype, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: QSinglePointEvent, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn AddPassiveGrabber(self: QSinglePointEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn RemovePassiveGrabber(self: QSinglePointEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn Device(self: QSinglePointEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QSinglePointEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QSinglePointEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QSinglePointEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn Timestamp(self: QSinglePointEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QSinglePointEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn Spontaneous(self: QSinglePointEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn IsAccepted(self: QSinglePointEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn Accept(self: QSinglePointEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn Ignore(self: QSinglePointEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn IsInputEvent(self: QSinglePointEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn IsPointerEvent(self: QSinglePointEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn IsSinglePointEvent(self: QSinglePointEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#dtor.QSinglePointEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn Delete(self: QSinglePointEvent) void {
        qtc.QSinglePointEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html)
pub const QEnterEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QEnterEvent,

    pub const _is_QEnterEvent = {};
    pub const _is_QSinglePointEvent = {};
    pub const _is_QPointerEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QEnterEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    pub fn New(localPos: anytype, scenePos: anytype, globalPos: anytype) QEnterEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        return .{ .ptr = qtc.QEnterEvent_new(@ptrCast(localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// New2 constructs a new QEnterEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` device: QPointingDevice `
    ///
    pub fn New2(localPos: anytype, scenePos: anytype, globalPos: anytype, device: anytype) QEnterEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QEnterEvent_new2(@ptrCast(localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Clone(self: QEnterEvent) QEnterEvent {
        return .{ .ptr = qtc.QEnterEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QEnterEvent `
    ///
    pub fn OnClone(self: QEnterEvent, callback: *const fn () callconv(.c) QEnterEvent) void {
        qtc.QEnterEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn SuperClone(self: QEnterEvent) QEnterEvent {
        return .{ .ptr = qtc.QEnterEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Pos(self: QEnterEvent) QPoint {
        return .{ .ptr = qtc.QEnterEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn GlobalPos(self: QEnterEvent) QPoint {
        return .{ .ptr = qtc.QEnterEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn X(self: QEnterEvent) i32 {
        return qtc.QEnterEvent_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Y(self: QEnterEvent) i32 {
        return qtc.QEnterEvent_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn GlobalX(self: QEnterEvent) i32 {
        return qtc.QEnterEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn GlobalY(self: QEnterEvent) i32 {
        return qtc.QEnterEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#localPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn LocalPos(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QEnterEvent_LocalPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#windowPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn WindowPos(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QEnterEvent_WindowPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn ScreenPos(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QEnterEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: QEnterEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QEnterEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Position(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn ScenePosition(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn GlobalPosition(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn ExclusivePointGrabber(self: QEnterEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusivePointGrabber(self: QEnterEvent, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn PointingDevice(self: QEnterEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QEnterEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn PointCount(self: QEnterEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` i: isize `
    ///
    pub fn Point(self: QEnterEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QEnterEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qenterevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: QEnterEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn AllPointsGrabbed(self: QEnterEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn AllPointsAccepted(self: QEnterEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: QEnterEvent, point: anytype) QObject {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusiveGrabber(self: QEnterEvent, point: anytype, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: QEnterEvent, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn AddPassiveGrabber(self: QEnterEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn RemovePassiveGrabber(self: QEnterEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Device(self: QEnterEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QEnterEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QEnterEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QEnterEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Timestamp(self: QEnterEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QEnterEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Spontaneous(self: QEnterEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn IsAccepted(self: QEnterEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Accept(self: QEnterEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Ignore(self: QEnterEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn IsInputEvent(self: QEnterEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn IsPointerEvent(self: QEnterEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn IsSinglePointEvent(self: QEnterEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QEnterEvent `
    ///
    pub fn IsBeginEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsBeginEvent` instead
    ///
    pub const QBaseIsBeginEvent = SuperIsBeginEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn SuperIsBeginEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QEnterEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: QEnterEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn IsUpdateEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsUpdateEvent` instead
    ///
    pub const QBaseIsUpdateEvent = SuperIsUpdateEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn SuperIsUpdateEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QEnterEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: QEnterEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn IsEndEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEndEvent` instead
    ///
    pub const QBaseIsEndEvent = SuperIsEndEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn SuperIsEndEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QEnterEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: QEnterEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QEnterEvent, timestamp: u64) void {
        qtc.QEnterEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QEnterEvent, timestamp: u64) void {
        qtc.QEnterEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QEnterEvent`
    ///
    /// ` callback: *const fn (self: QEnterEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QEnterEvent, callback: *const fn (QEnterEvent, u64) callconv(.c) void) void {
        qtc.QEnterEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QEnterEvent, accepted: bool) void {
        qtc.QEnterEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QEnterEvent, accepted: bool) void {
        qtc.QEnterEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QEnterEvent`
    ///
    /// ` callback: *const fn (self: QEnterEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QEnterEvent, callback: *const fn (QEnterEvent, bool) callconv(.c) void) void {
        qtc.QEnterEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#dtor.QEnterEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn Delete(self: QEnterEvent) void {
        qtc.QEnterEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)
pub const QMouseEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMouseEvent,

    pub const _is_QMouseEvent = {};
    pub const _is_QSinglePointEvent = {};
    pub const _is_QPointerEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New(typeVal: i32, localPos: anytype, button: i32, buttons: i32, modifiers: i32) QMouseEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        return .{ .ptr = qtc.QMouseEvent_new(@bitCast(typeVal), @ptrCast(localPos.ptr), @bitCast(button), @bitCast(buttons), @bitCast(modifiers)) };
    }

    /// New2 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New2(typeVal: i32, localPos: anytype, globalPos: anytype, button: i32, buttons: i32, modifiers: i32) QMouseEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        return .{ .ptr = qtc.QMouseEvent_new2(@bitCast(typeVal), @ptrCast(localPos.ptr), @ptrCast(globalPos.ptr), @bitCast(button), @bitCast(buttons), @bitCast(modifiers)) };
    }

    /// New3 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New3(typeVal: i32, localPos: anytype, scenePos: anytype, globalPos: anytype, button: i32, buttons: i32, modifiers: i32) QMouseEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        return .{ .ptr = qtc.QMouseEvent_new3(@bitCast(typeVal), @ptrCast(localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @bitCast(button), @bitCast(buttons), @bitCast(modifiers)) };
    }

    /// New4 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` source: qnamespace_enums.MouseEventSource `
    ///
    pub fn New4(typeVal: i32, localPos: anytype, scenePos: anytype, globalPos: anytype, button: i32, buttons: i32, modifiers: i32, source: i32) QMouseEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        return .{ .ptr = qtc.QMouseEvent_new4(@bitCast(typeVal), @ptrCast(localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @bitCast(source)) };
    }

    /// New5 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QPointingDevice `
    ///
    pub fn New5(typeVal: i32, localPos: anytype, button: i32, buttons: i32, modifiers: i32, device: anytype) QMouseEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QMouseEvent_new5(@bitCast(typeVal), @ptrCast(localPos.ptr), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @ptrCast(device.ptr)) };
    }

    /// New6 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QPointingDevice `
    ///
    pub fn New6(typeVal: i32, localPos: anytype, globalPos: anytype, button: i32, buttons: i32, modifiers: i32, device: anytype) QMouseEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QMouseEvent_new6(@bitCast(typeVal), @ptrCast(localPos.ptr), @ptrCast(globalPos.ptr), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @ptrCast(device.ptr)) };
    }

    /// New7 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QPointingDevice `
    ///
    pub fn New7(typeVal: i32, localPos: anytype, scenePos: anytype, globalPos: anytype, button: i32, buttons: i32, modifiers: i32, device: anytype) QMouseEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QMouseEvent_new7(@bitCast(typeVal), @ptrCast(localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @ptrCast(device.ptr)) };
    }

    /// New8 constructs a new QMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` source: qnamespace_enums.MouseEventSource `
    ///
    /// ` device: QPointingDevice `
    ///
    pub fn New8(typeVal: i32, localPos: anytype, scenePos: anytype, globalPos: anytype, button: i32, buttons: i32, modifiers: i32, source: i32, device: anytype) QMouseEvent {
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QMouseEvent_new8(@bitCast(typeVal), @ptrCast(localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @bitCast(button), @bitCast(buttons), @bitCast(modifiers), @bitCast(source), @ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Clone(self: QMouseEvent) QMouseEvent {
        return .{ .ptr = qtc.QMouseEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QMouseEvent `
    ///
    pub fn OnClone(self: QMouseEvent, callback: *const fn () callconv(.c) QMouseEvent) void {
        qtc.QMouseEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn SuperClone(self: QMouseEvent) QMouseEvent {
        return .{ .ptr = qtc.QMouseEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Pos(self: QMouseEvent) QPoint {
        return .{ .ptr = qtc.QMouseEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn GlobalPos(self: QMouseEvent) QPoint {
        return .{ .ptr = qtc.QMouseEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn X(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Y(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn GlobalX(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn GlobalY(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#localPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn LocalPos(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QMouseEvent_LocalPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#windowPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn WindowPos(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QMouseEvent_WindowPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn ScreenPos(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QMouseEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseEventSource `
    ///
    pub fn Source(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_Source(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseEventFlag `
    ///
    pub fn Flags(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: QMouseEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QMouseEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Position(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn ScenePosition(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn GlobalPosition(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn ExclusivePointGrabber(self: QMouseEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusivePointGrabber(self: QMouseEvent, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn PointingDevice(self: QMouseEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QMouseEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn PointCount(self: QMouseEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` i: isize `
    ///
    pub fn Point(self: QMouseEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QMouseEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qmouseevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: QMouseEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn AllPointsGrabbed(self: QMouseEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn AllPointsAccepted(self: QMouseEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: QMouseEvent, point: anytype) QObject {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusiveGrabber(self: QMouseEvent, point: anytype, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: QMouseEvent, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn AddPassiveGrabber(self: QMouseEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn RemovePassiveGrabber(self: QMouseEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Device(self: QMouseEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QMouseEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QMouseEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QMouseEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Timestamp(self: QMouseEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QMouseEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Spontaneous(self: QMouseEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn IsAccepted(self: QMouseEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Accept(self: QMouseEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Ignore(self: QMouseEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn IsInputEvent(self: QMouseEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn IsPointerEvent(self: QMouseEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn IsSinglePointEvent(self: QMouseEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QMouseEvent `
    ///
    pub fn IsBeginEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsBeginEvent` instead
    ///
    pub const QBaseIsBeginEvent = SuperIsBeginEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn SuperIsBeginEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMouseEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: QMouseEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn IsUpdateEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsUpdateEvent` instead
    ///
    pub const QBaseIsUpdateEvent = SuperIsUpdateEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn SuperIsUpdateEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMouseEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: QMouseEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn IsEndEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEndEvent` instead
    ///
    pub const QBaseIsEndEvent = SuperIsEndEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn SuperIsEndEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMouseEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: QMouseEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QMouseEvent, timestamp: u64) void {
        qtc.QMouseEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QMouseEvent, timestamp: u64) void {
        qtc.QMouseEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMouseEvent`
    ///
    /// ` callback: *const fn (self: QMouseEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QMouseEvent, callback: *const fn (QMouseEvent, u64) callconv(.c) void) void {
        qtc.QMouseEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QMouseEvent, accepted: bool) void {
        qtc.QMouseEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QMouseEvent, accepted: bool) void {
        qtc.QMouseEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMouseEvent`
    ///
    /// ` callback: *const fn (self: QMouseEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QMouseEvent, callback: *const fn (QMouseEvent, bool) callconv(.c) void) void {
        qtc.QMouseEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#dtor.QMouseEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn Delete(self: QMouseEvent) void {
        qtc.QMouseEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)
pub const QHoverEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHoverEvent,

    pub const _is_QHoverEvent = {};
    pub const _is_QSinglePointEvent = {};
    pub const _is_QPointerEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` oldPos: QPointF `
    ///
    pub fn New(typeVal: i32, scenePos: anytype, globalPos: anytype, oldPos: anytype) QHoverEvent {
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(oldPos)._is_QPointF;
        return .{ .ptr = qtc.QHoverEvent_new(@bitCast(typeVal), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @ptrCast(oldPos.ptr)) };
    }

    /// New2 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` pos: QPointF `
    ///
    /// ` oldPos: QPointF `
    ///
    pub fn New2(typeVal: i32, pos: anytype, oldPos: anytype) QHoverEvent {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(oldPos)._is_QPointF;
        return .{ .ptr = qtc.QHoverEvent_new2(@bitCast(typeVal), @ptrCast(pos.ptr), @ptrCast(oldPos.ptr)) };
    }

    /// New3 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` oldPos: QPointF `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New3(typeVal: i32, scenePos: anytype, globalPos: anytype, oldPos: anytype, modifiers: i32) QHoverEvent {
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(oldPos)._is_QPointF;
        return .{ .ptr = qtc.QHoverEvent_new3(@bitCast(typeVal), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @ptrCast(oldPos.ptr), @bitCast(modifiers)) };
    }

    /// New4 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` oldPos: QPointF `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QPointingDevice `
    ///
    pub fn New4(typeVal: i32, scenePos: anytype, globalPos: anytype, oldPos: anytype, modifiers: i32, device: anytype) QHoverEvent {
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(oldPos)._is_QPointF;
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QHoverEvent_new4(@bitCast(typeVal), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @ptrCast(oldPos.ptr), @bitCast(modifiers), @ptrCast(device.ptr)) };
    }

    /// New5 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` pos: QPointF `
    ///
    /// ` oldPos: QPointF `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New5(typeVal: i32, pos: anytype, oldPos: anytype, modifiers: i32) QHoverEvent {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(oldPos)._is_QPointF;
        return .{ .ptr = qtc.QHoverEvent_new5(@bitCast(typeVal), @ptrCast(pos.ptr), @ptrCast(oldPos.ptr), @bitCast(modifiers)) };
    }

    /// New6 constructs a new QHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` pos: QPointF `
    ///
    /// ` oldPos: QPointF `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` device: QPointingDevice `
    ///
    pub fn New6(typeVal: i32, pos: anytype, oldPos: anytype, modifiers: i32, device: anytype) QHoverEvent {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(oldPos)._is_QPointF;
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QHoverEvent_new6(@bitCast(typeVal), @ptrCast(pos.ptr), @ptrCast(oldPos.ptr), @bitCast(modifiers), @ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn Clone(self: QHoverEvent) QHoverEvent {
        return .{ .ptr = qtc.QHoverEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QHoverEvent `
    ///
    pub fn OnClone(self: QHoverEvent, callback: *const fn () callconv(.c) QHoverEvent) void {
        qtc.QHoverEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn SuperClone(self: QHoverEvent) QHoverEvent {
        return .{ .ptr = qtc.QHoverEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn Pos(self: QHoverEvent) QPoint {
        return .{ .ptr = qtc.QHoverEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn PosF(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QHoverEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn IsUpdateEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: QHoverEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsUpdateEvent` instead
    ///
    pub const QBaseIsUpdateEvent = SuperIsUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn SuperIsUpdateEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn OldPos(self: QHoverEvent) QPoint {
        return .{ .ptr = qtc.QHoverEvent_OldPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPosF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn OldPosF(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QHoverEvent_OldPosF(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: QHoverEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QHoverEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn Position(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn ScenePosition(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn GlobalPosition(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn ExclusivePointGrabber(self: QHoverEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusivePointGrabber(self: QHoverEvent, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn PointingDevice(self: QHoverEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QHoverEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn PointCount(self: QHoverEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` i: isize `
    ///
    pub fn Point(self: QHoverEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QHoverEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qhoverevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: QHoverEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn AllPointsGrabbed(self: QHoverEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn AllPointsAccepted(self: QHoverEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: QHoverEvent, point: anytype) QObject {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusiveGrabber(self: QHoverEvent, point: anytype, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: QHoverEvent, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn AddPassiveGrabber(self: QHoverEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn RemovePassiveGrabber(self: QHoverEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn Device(self: QHoverEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QHoverEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QHoverEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QHoverEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn Timestamp(self: QHoverEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QHoverEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn Spontaneous(self: QHoverEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn IsAccepted(self: QHoverEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn Accept(self: QHoverEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn Ignore(self: QHoverEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn IsInputEvent(self: QHoverEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn IsPointerEvent(self: QHoverEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn IsSinglePointEvent(self: QHoverEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QHoverEvent `
    ///
    pub fn IsBeginEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsBeginEvent` instead
    ///
    pub const QBaseIsBeginEvent = SuperIsBeginEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn SuperIsBeginEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHoverEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: QHoverEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn IsEndEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEndEvent` instead
    ///
    pub const QBaseIsEndEvent = SuperIsEndEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn SuperIsEndEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHoverEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: QHoverEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QHoverEvent, timestamp: u64) void {
        qtc.QHoverEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QHoverEvent, timestamp: u64) void {
        qtc.QHoverEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHoverEvent`
    ///
    /// ` callback: *const fn (self: QHoverEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QHoverEvent, callback: *const fn (QHoverEvent, u64) callconv(.c) void) void {
        qtc.QHoverEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QHoverEvent, accepted: bool) void {
        qtc.QHoverEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QHoverEvent, accepted: bool) void {
        qtc.QHoverEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHoverEvent`
    ///
    /// ` callback: *const fn (self: QHoverEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QHoverEvent, callback: *const fn (QHoverEvent, bool) callconv(.c) void) void {
        qtc.QHoverEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#dtor.QHoverEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn Delete(self: QHoverEvent) void {
        qtc.QHoverEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html)
pub const QWheelEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWheelEvent,

    pub const _is_QWheelEvent = {};
    pub const _is_QSinglePointEvent = {};
    pub const _is_QPointerEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QWheelEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` pixelDelta: QPoint `
    ///
    /// ` angleDelta: QPoint `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` phase: qnamespace_enums.ScrollPhase `
    ///
    /// ` inverted: bool `
    ///
    pub fn New(pos: anytype, globalPos: anytype, pixelDelta: anytype, angleDelta: anytype, buttons: i32, modifiers: i32, phase: i32, inverted: bool) QWheelEvent {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(pixelDelta)._is_QPoint;
        comptime _ = @TypeOf(angleDelta)._is_QPoint;
        return .{ .ptr = qtc.QWheelEvent_new(@ptrCast(pos.ptr), @ptrCast(globalPos.ptr), @ptrCast(pixelDelta.ptr), @ptrCast(angleDelta.ptr), @bitCast(buttons), @bitCast(modifiers), @bitCast(phase), inverted) };
    }

    /// New2 constructs a new QWheelEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` pixelDelta: QPoint `
    ///
    /// ` angleDelta: QPoint `
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
    pub fn New2(pos: anytype, globalPos: anytype, pixelDelta: anytype, angleDelta: anytype, buttons: i32, modifiers: i32, phase: i32, inverted: bool, source: i32) QWheelEvent {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(pixelDelta)._is_QPoint;
        comptime _ = @TypeOf(angleDelta)._is_QPoint;
        return .{ .ptr = qtc.QWheelEvent_new2(@ptrCast(pos.ptr), @ptrCast(globalPos.ptr), @ptrCast(pixelDelta.ptr), @ptrCast(angleDelta.ptr), @bitCast(buttons), @bitCast(modifiers), @bitCast(phase), inverted, @bitCast(source)) };
    }

    /// New3 constructs a new QWheelEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` pixelDelta: QPoint `
    ///
    /// ` angleDelta: QPoint `
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
    /// ` device: QPointingDevice `
    ///
    pub fn New3(pos: anytype, globalPos: anytype, pixelDelta: anytype, angleDelta: anytype, buttons: i32, modifiers: i32, phase: i32, inverted: bool, source: i32, device: anytype) QWheelEvent {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(pixelDelta)._is_QPoint;
        comptime _ = @TypeOf(angleDelta)._is_QPoint;
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QWheelEvent_new3(@ptrCast(pos.ptr), @ptrCast(globalPos.ptr), @ptrCast(pixelDelta.ptr), @ptrCast(angleDelta.ptr), @bitCast(buttons), @bitCast(modifiers), @bitCast(phase), inverted, @bitCast(source), @ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn Clone(self: QWheelEvent) QWheelEvent {
        return .{ .ptr = qtc.QWheelEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QWheelEvent `
    ///
    pub fn OnClone(self: QWheelEvent, callback: *const fn () callconv(.c) QWheelEvent) void {
        qtc.QWheelEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn SuperClone(self: QWheelEvent) QWheelEvent {
        return .{ .ptr = qtc.QWheelEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#pixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn PixelDelta(self: QWheelEvent) QPoint {
        return .{ .ptr = qtc.QWheelEvent_PixelDelta(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#angleDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn AngleDelta(self: QWheelEvent) QPoint {
        return .{ .ptr = qtc.QWheelEvent_AngleDelta(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#phase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollPhase `
    ///
    pub fn Phase(self: QWheelEvent) i32 {
        return qtc.QWheelEvent_Phase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn Inverted(self: QWheelEvent) bool {
        return qtc.QWheelEvent_Inverted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isInverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn IsInverted(self: QWheelEvent) bool {
        return qtc.QWheelEvent_IsInverted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#hasPixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn HasPixelDelta(self: QWheelEvent) bool {
        return qtc.QWheelEvent_HasPixelDelta(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn IsBeginEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: QWheelEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsBeginEvent` instead
    ///
    pub const QBaseIsBeginEvent = SuperIsBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn SuperIsBeginEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn IsUpdateEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: QWheelEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsUpdateEvent` instead
    ///
    pub const QBaseIsUpdateEvent = SuperIsUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn SuperIsUpdateEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn IsEndEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: QWheelEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEndEvent` instead
    ///
    pub const QBaseIsEndEvent = SuperIsEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn SuperIsEndEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseEventSource `
    ///
    pub fn Source(self: QWheelEvent) i32 {
        return qtc.QWheelEvent_Source(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: QWheelEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QWheelEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn Position(self: QWheelEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn ScenePosition(self: QWheelEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn GlobalPosition(self: QWheelEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn ExclusivePointGrabber(self: QWheelEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusivePointGrabber(self: QWheelEvent, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn PointingDevice(self: QWheelEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QWheelEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn PointCount(self: QWheelEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` i: isize `
    ///
    pub fn Point(self: QWheelEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QWheelEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qwheelevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: QWheelEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn AllPointsGrabbed(self: QWheelEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn AllPointsAccepted(self: QWheelEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: QWheelEvent, point: anytype) QObject {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusiveGrabber(self: QWheelEvent, point: anytype, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: QWheelEvent, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn AddPassiveGrabber(self: QWheelEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn RemovePassiveGrabber(self: QWheelEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn Device(self: QWheelEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QWheelEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QWheelEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QWheelEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn Timestamp(self: QWheelEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QWheelEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn Spontaneous(self: QWheelEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn IsAccepted(self: QWheelEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn Accept(self: QWheelEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn Ignore(self: QWheelEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn IsInputEvent(self: QWheelEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn IsPointerEvent(self: QWheelEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn IsSinglePointEvent(self: QWheelEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QWheelEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QWheelEvent, timestamp: u64) void {
        qtc.QWheelEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QWheelEvent, timestamp: u64) void {
        qtc.QWheelEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWheelEvent`
    ///
    /// ` callback: *const fn (self: QWheelEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QWheelEvent, callback: *const fn (QWheelEvent, u64) callconv(.c) void) void {
        qtc.QWheelEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QWheelEvent, accepted: bool) void {
        qtc.QWheelEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QWheelEvent, accepted: bool) void {
        qtc.QWheelEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWheelEvent`
    ///
    /// ` callback: *const fn (self: QWheelEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QWheelEvent, callback: *const fn (QWheelEvent, bool) callconv(.c) void) void {
        qtc.QWheelEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#dtor.QWheelEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn Delete(self: QWheelEvent) void {
        qtc.QWheelEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html)
pub const QTabletEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTabletEvent,

    pub const _is_QTabletEvent = {};
    pub const _is_QSinglePointEvent = {};
    pub const _is_QPointerEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QTabletEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t: qcoreevent_enums.Type `
    ///
    /// ` device: QPointingDevice `
    ///
    /// ` pos: QPointF `
    ///
    /// ` globalPos: QPointF `
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
    pub fn New(t: i32, device: anytype, pos: anytype, globalPos: anytype, pressure: f64, xTilt: f32, yTilt: f32, tangentialPressure: f32, rotation: f64, z: f32, keyState: i32, button: i32, buttons: i32) QTabletEvent {
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        return .{ .ptr = qtc.QTabletEvent_new(@bitCast(t), @ptrCast(device.ptr), @ptrCast(pos.ptr), @ptrCast(globalPos.ptr), @bitCast(pressure), @bitCast(xTilt), @bitCast(yTilt), @bitCast(tangentialPressure), @bitCast(rotation), @bitCast(z), @bitCast(keyState), @bitCast(button), @bitCast(buttons)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Clone(self: QTabletEvent) QTabletEvent {
        return .{ .ptr = qtc.QTabletEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QTabletEvent `
    ///
    pub fn OnClone(self: QTabletEvent, callback: *const fn () callconv(.c) QTabletEvent) void {
        qtc.QTabletEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn SuperClone(self: QTabletEvent) QTabletEvent {
        return .{ .ptr = qtc.QTabletEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Pos(self: QTabletEvent) QPoint {
        return .{ .ptr = qtc.QTabletEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn GlobalPos(self: QTabletEvent) QPoint {
        return .{ .ptr = qtc.QTabletEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn PosF(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QTabletEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPosF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn GlobalPosF(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QTabletEvent_GlobalPosF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn X(self: QTabletEvent) i32 {
        return qtc.QTabletEvent_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Y(self: QTabletEvent) i32 {
        return qtc.QTabletEvent_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn GlobalX(self: QTabletEvent) i32 {
        return qtc.QTabletEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn GlobalY(self: QTabletEvent) i32 {
        return qtc.QTabletEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn HiResGlobalX(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_HiResGlobalX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn HiResGlobalY(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_HiResGlobalY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn UniqueId(self: QTabletEvent) i64 {
        return qtc.QTabletEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pressure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Pressure(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_Pressure(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Rotation(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_Rotation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Z(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_Z(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#tangentialPressure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn TangentialPressure(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_TangentialPressure(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#xTilt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn XTilt(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_XTilt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#yTilt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn YTilt(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_YTilt(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: QTabletEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QTabletEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Position(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn ScenePosition(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn GlobalPosition(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn ExclusivePointGrabber(self: QTabletEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusivePointGrabber(self: QTabletEvent, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn PointingDevice(self: QTabletEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QTabletEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn PointCount(self: QTabletEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` i: isize `
    ///
    pub fn Point(self: QTabletEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QTabletEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qtabletevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: QTabletEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn AllPointsGrabbed(self: QTabletEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn AllPointsAccepted(self: QTabletEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: QTabletEvent, point: anytype) QObject {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusiveGrabber(self: QTabletEvent, point: anytype, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: QTabletEvent, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn AddPassiveGrabber(self: QTabletEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn RemovePassiveGrabber(self: QTabletEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Device(self: QTabletEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QTabletEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QTabletEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QTabletEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Timestamp(self: QTabletEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QTabletEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Spontaneous(self: QTabletEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn IsAccepted(self: QTabletEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Accept(self: QTabletEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Ignore(self: QTabletEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn IsInputEvent(self: QTabletEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn IsPointerEvent(self: QTabletEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn IsSinglePointEvent(self: QTabletEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QTabletEvent `
    ///
    pub fn IsBeginEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsBeginEvent` instead
    ///
    pub const QBaseIsBeginEvent = SuperIsBeginEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn SuperIsBeginEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTabletEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: QTabletEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn IsUpdateEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsUpdateEvent` instead
    ///
    pub const QBaseIsUpdateEvent = SuperIsUpdateEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn SuperIsUpdateEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTabletEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: QTabletEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn IsEndEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEndEvent` instead
    ///
    pub const QBaseIsEndEvent = SuperIsEndEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn SuperIsEndEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTabletEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: QTabletEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QTabletEvent, timestamp: u64) void {
        qtc.QTabletEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QTabletEvent, timestamp: u64) void {
        qtc.QTabletEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTabletEvent`
    ///
    /// ` callback: *const fn (self: QTabletEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QTabletEvent, callback: *const fn (QTabletEvent, u64) callconv(.c) void) void {
        qtc.QTabletEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QTabletEvent, accepted: bool) void {
        qtc.QTabletEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QTabletEvent, accepted: bool) void {
        qtc.QTabletEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTabletEvent`
    ///
    /// ` callback: *const fn (self: QTabletEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QTabletEvent, callback: *const fn (QTabletEvent, bool) callconv(.c) void) void {
        qtc.QTabletEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#dtor.QTabletEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn Delete(self: QTabletEvent) void {
        qtc.QTabletEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html)
pub const QNativeGestureEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNativeGestureEvent,

    pub const _is_QNativeGestureEvent = {};
    pub const _is_QSinglePointEvent = {};
    pub const _is_QPointerEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QNativeGestureEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.NativeGestureType `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` value: f64 `
    ///
    /// ` sequenceId: u64 `
    ///
    /// ` intArgument: u64 `
    ///
    pub fn New(typeVal: i32, dev: anytype, localPos: anytype, scenePos: anytype, globalPos: anytype, value: f64, sequenceId: u64, intArgument: u64) QNativeGestureEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        return .{ .ptr = qtc.QNativeGestureEvent_new(@bitCast(typeVal), @ptrCast(dev.ptr), @ptrCast(localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @bitCast(value), @bitCast(sequenceId), @bitCast(intArgument)) };
    }

    /// New2 constructs a new QNativeGestureEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.NativeGestureType `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` fingerCount: i32 `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` value: f64 `
    ///
    /// ` delta: QPointF `
    ///
    pub fn New2(typeVal: i32, dev: anytype, fingerCount: i32, localPos: anytype, scenePos: anytype, globalPos: anytype, value: f64, delta: anytype) QNativeGestureEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(delta)._is_QPointF;
        return .{ .ptr = qtc.QNativeGestureEvent_new2(@bitCast(typeVal), @ptrCast(dev.ptr), @bitCast(fingerCount), @ptrCast(localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @bitCast(value), @ptrCast(delta.ptr)) };
    }

    /// New3 constructs a new QNativeGestureEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.NativeGestureType `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` fingerCount: i32 `
    ///
    /// ` localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` globalPos: QPointF `
    ///
    /// ` value: f64 `
    ///
    /// ` delta: QPointF `
    ///
    /// ` sequenceId: u64 `
    ///
    pub fn New3(typeVal: i32, dev: anytype, fingerCount: i32, localPos: anytype, scenePos: anytype, globalPos: anytype, value: f64, delta: anytype, sequenceId: u64) QNativeGestureEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        comptime _ = @TypeOf(localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(globalPos)._is_QPointF;
        comptime _ = @TypeOf(delta)._is_QPointF;
        return .{ .ptr = qtc.QNativeGestureEvent_new3(@bitCast(typeVal), @ptrCast(dev.ptr), @bitCast(fingerCount), @ptrCast(localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(globalPos.ptr), @bitCast(value), @ptrCast(delta.ptr), @bitCast(sequenceId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Clone(self: QNativeGestureEvent) QNativeGestureEvent {
        return .{ .ptr = qtc.QNativeGestureEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QNativeGestureEvent `
    ///
    pub fn OnClone(self: QNativeGestureEvent, callback: *const fn () callconv(.c) QNativeGestureEvent) void {
        qtc.QNativeGestureEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn SuperClone(self: QNativeGestureEvent) QNativeGestureEvent {
        return .{ .ptr = qtc.QNativeGestureEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#gestureType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.NativeGestureType `
    ///
    pub fn GestureType(self: QNativeGestureEvent) i32 {
        return qtc.QNativeGestureEvent_GestureType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#fingerCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn FingerCount(self: QNativeGestureEvent) i32 {
        return qtc.QNativeGestureEvent_FingerCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Value(self: QNativeGestureEvent) f64 {
        return qtc.QNativeGestureEvent_Value(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#delta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Delta(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QNativeGestureEvent_Delta(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Pos(self: QNativeGestureEvent) QPoint {
        return .{ .ptr = qtc.QNativeGestureEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn GlobalPos(self: QNativeGestureEvent) QPoint {
        return .{ .ptr = qtc.QNativeGestureEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#localPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn LocalPos(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QNativeGestureEvent_LocalPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#windowPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn WindowPos(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QNativeGestureEvent_WindowPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn ScreenPos(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QNativeGestureEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: QNativeGestureEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QNativeGestureEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Position(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn ScenePosition(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn GlobalPosition(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn ExclusivePointGrabber(self: QNativeGestureEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusivePointGrabber(self: QNativeGestureEvent, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn PointingDevice(self: QNativeGestureEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QNativeGestureEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn PointCount(self: QNativeGestureEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` i: isize `
    ///
    pub fn Point(self: QNativeGestureEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QNativeGestureEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qnativegestureevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: QNativeGestureEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn AllPointsGrabbed(self: QNativeGestureEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn AllPointsAccepted(self: QNativeGestureEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: QNativeGestureEvent, point: anytype) QObject {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusiveGrabber(self: QNativeGestureEvent, point: anytype, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: QNativeGestureEvent, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn AddPassiveGrabber(self: QNativeGestureEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn RemovePassiveGrabber(self: QNativeGestureEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Device(self: QNativeGestureEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QNativeGestureEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QNativeGestureEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QNativeGestureEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Timestamp(self: QNativeGestureEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QNativeGestureEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Spontaneous(self: QNativeGestureEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn IsAccepted(self: QNativeGestureEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Accept(self: QNativeGestureEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Ignore(self: QNativeGestureEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn IsInputEvent(self: QNativeGestureEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn IsPointerEvent(self: QNativeGestureEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn IsSinglePointEvent(self: QNativeGestureEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QNativeGestureEvent `
    ///
    pub fn IsBeginEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsBeginEvent` instead
    ///
    pub const QBaseIsBeginEvent = SuperIsBeginEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn SuperIsBeginEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeGestureEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: QNativeGestureEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn IsUpdateEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsUpdateEvent` instead
    ///
    pub const QBaseIsUpdateEvent = SuperIsUpdateEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn SuperIsUpdateEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeGestureEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: QNativeGestureEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn IsEndEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEndEvent` instead
    ///
    pub const QBaseIsEndEvent = SuperIsEndEvent;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn SuperIsEndEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeGestureEvent`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: QNativeGestureEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QNativeGestureEvent, timestamp: u64) void {
        qtc.QNativeGestureEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QNativeGestureEvent, timestamp: u64) void {
        qtc.QNativeGestureEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeGestureEvent`
    ///
    /// ` callback: *const fn (self: QNativeGestureEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QNativeGestureEvent, callback: *const fn (QNativeGestureEvent, u64) callconv(.c) void) void {
        qtc.QNativeGestureEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QNativeGestureEvent, accepted: bool) void {
        qtc.QNativeGestureEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QNativeGestureEvent, accepted: bool) void {
        qtc.QNativeGestureEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeGestureEvent`
    ///
    /// ` callback: *const fn (self: QNativeGestureEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QNativeGestureEvent, callback: *const fn (QNativeGestureEvent, bool) callconv(.c) void) void {
        qtc.QNativeGestureEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#dtor.QNativeGestureEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn Delete(self: QNativeGestureEvent) void {
        qtc.QNativeGestureEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)
pub const QKeyEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QKeyEvent,

    pub const _is_QKeyEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

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
    pub fn New(typeVal: i32, key: i32, modifiers: i32) QKeyEvent {
        return .{ .ptr = qtc.QKeyEvent_new(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers)) };
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
    pub fn New2(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32) QKeyEvent {
        return .{ .ptr = qtc.QKeyEvent_new2(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers)) };
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
    pub fn New3(typeVal: i32, key: i32, modifiers: i32, text: []const u8) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new3(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), text_str) };
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
    pub fn New4(typeVal: i32, key: i32, modifiers: i32, text: []const u8, autorep: bool) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new4(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), text_str, autorep) };
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
    pub fn New5(typeVal: i32, key: i32, modifiers: i32, text: []const u8, autorep: bool, count: u16) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new5(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), text_str, autorep, @bitCast(count)) };
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
    pub fn New6(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new6(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers), text_str) };
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
    pub fn New7(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new7(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers), text_str, autorep) };
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
    pub fn New8(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new8(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers), text_str, autorep, @bitCast(count)) };
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
    /// ` device: QInputDevice `
    ///
    pub fn New9(typeVal: i32, key: i32, modifiers: i32, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16, device: anytype) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(device)._is_QInputDevice;
        return .{ .ptr = qtc.QKeyEvent_new9(@bitCast(typeVal), @bitCast(key), @bitCast(modifiers), @bitCast(nativeScanCode), @bitCast(nativeVirtualKey), @bitCast(nativeModifiers), text_str, autorep, @bitCast(count), @ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn Clone(self: QKeyEvent) QKeyEvent {
        return .{ .ptr = qtc.QKeyEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QKeyEvent `
    ///
    pub fn OnClone(self: QKeyEvent, callback: *const fn () callconv(.c) QKeyEvent) void {
        qtc.QKeyEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn SuperClone(self: QKeyEvent) QKeyEvent {
        return .{ .ptr = qtc.QKeyEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn Key(self: QKeyEvent) i32 {
        return qtc.QKeyEvent_Key(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#matches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    pub fn Matches(self: QKeyEvent, key: i32) bool {
        return qtc.QKeyEvent_Matches(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QKeyEvent) i32 {
        return qtc.QKeyEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#keyCombination)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn KeyCombination(self: QKeyEvent) QKeyCombination {
        return .{ .ptr = qtc.QKeyEvent_KeyCombination(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QKeyEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeyEvent_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeyevent.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#isAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn IsAutoRepeat(self: QKeyEvent) bool {
        return qtc.QKeyEvent_IsAutoRepeat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn Count(self: QKeyEvent) i32 {
        return qtc.QKeyEvent_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeScanCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn NativeScanCode(self: QKeyEvent) u32 {
        return qtc.QKeyEvent_NativeScanCode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeVirtualKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn NativeVirtualKey(self: QKeyEvent) u32 {
        return qtc.QKeyEvent_NativeVirtualKey(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn NativeModifiers(self: QKeyEvent) u32 {
        return qtc.QKeyEvent_NativeModifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn Device(self: QKeyEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QKeyEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QKeyEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn Timestamp(self: QKeyEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QKeyEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn Spontaneous(self: QKeyEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn IsAccepted(self: QKeyEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn Accept(self: QKeyEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn Ignore(self: QKeyEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn IsInputEvent(self: QKeyEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn IsPointerEvent(self: QKeyEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn IsSinglePointEvent(self: QKeyEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QKeyEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QKeyEvent, timestamp: u64) void {
        qtc.QKeyEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QKeyEvent, timestamp: u64) void {
        qtc.QKeyEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEvent`
    ///
    /// ` callback: *const fn (self: QKeyEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QKeyEvent, callback: *const fn (QKeyEvent, u64) callconv(.c) void) void {
        qtc.QKeyEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QKeyEvent, accepted: bool) void {
        qtc.QKeyEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QKeyEvent, accepted: bool) void {
        qtc.QKeyEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEvent`
    ///
    /// ` callback: *const fn (self: QKeyEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QKeyEvent, callback: *const fn (QKeyEvent, bool) callconv(.c) void) void {
        qtc.QKeyEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#dtor.QKeyEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn Delete(self: QKeyEvent) void {
        qtc.QKeyEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html)
pub const QFocusEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFocusEvent,

    pub const _is_QFocusEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QFocusEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New(typeVal: i32) QFocusEvent {
        return .{ .ptr = qtc.QFocusEvent_new(@bitCast(typeVal)) };
    }

    /// New2 constructs a new QFocusEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn New2(typeVal: i32, reason: i32) QFocusEvent {
        return .{ .ptr = qtc.QFocusEvent_new2(@bitCast(typeVal), @bitCast(reason)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn Clone(self: QFocusEvent) QFocusEvent {
        return .{ .ptr = qtc.QFocusEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFocusEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QFocusEvent `
    ///
    pub fn OnClone(self: QFocusEvent, callback: *const fn () callconv(.c) QFocusEvent) void {
        qtc.QFocusEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn SuperClone(self: QFocusEvent) QFocusEvent {
        return .{ .ptr = qtc.QFocusEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#gotFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn GotFocus(self: QFocusEvent) bool {
        return qtc.QFocusEvent_GotFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#lostFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn LostFocus(self: QFocusEvent) bool {
        return qtc.QFocusEvent_LostFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#reason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusReason `
    ///
    pub fn Reason(self: QFocusEvent) i32 {
        return qtc.QFocusEvent_Reason(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QFocusEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn Spontaneous(self: QFocusEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn IsAccepted(self: QFocusEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn Accept(self: QFocusEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn Ignore(self: QFocusEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn IsInputEvent(self: QFocusEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn IsPointerEvent(self: QFocusEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn IsSinglePointEvent(self: QFocusEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QFocusEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QFocusEvent, accepted: bool) void {
        qtc.QFocusEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QFocusEvent, accepted: bool) void {
        qtc.QFocusEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFocusEvent`
    ///
    /// ` callback: *const fn (self: QFocusEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QFocusEvent, callback: *const fn (QFocusEvent, bool) callconv(.c) void) void {
        qtc.QFocusEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#dtor.QFocusEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn Delete(self: QFocusEvent) void {
        qtc.QFocusEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html)
pub const QPaintEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPaintEvent,

    pub const _is_QPaintEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QPaintEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` paintRegion: QRegion `
    ///
    pub fn New(paintRegion: anytype) QPaintEvent {
        comptime _ = @TypeOf(paintRegion)._is_QRegion;
        return .{ .ptr = qtc.QPaintEvent_new(@ptrCast(paintRegion.ptr)) };
    }

    /// New2 constructs a new QPaintEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` paintRect: QRect `
    ///
    pub fn New2(paintRect: anytype) QPaintEvent {
        comptime _ = @TypeOf(paintRect)._is_QRect;
        return .{ .ptr = qtc.QPaintEvent_new2(@ptrCast(paintRect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn Clone(self: QPaintEvent) QPaintEvent {
        return .{ .ptr = qtc.QPaintEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEvent `
    ///
    pub fn OnClone(self: QPaintEvent, callback: *const fn () callconv(.c) QPaintEvent) void {
        qtc.QPaintEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn SuperClone(self: QPaintEvent) QPaintEvent {
        return .{ .ptr = qtc.QPaintEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn Rect(self: QPaintEvent) QRect {
        return .{ .ptr = qtc.QPaintEvent_Rect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#region)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn Region(self: QPaintEvent) QRegion {
        return .{ .ptr = qtc.QPaintEvent_Region(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QPaintEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn Spontaneous(self: QPaintEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn IsAccepted(self: QPaintEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn Accept(self: QPaintEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn Ignore(self: QPaintEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn IsInputEvent(self: QPaintEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn IsPointerEvent(self: QPaintEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn IsSinglePointEvent(self: QPaintEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QPaintEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QPaintEvent, accepted: bool) void {
        qtc.QPaintEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QPaintEvent, accepted: bool) void {
        qtc.QPaintEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEvent`
    ///
    /// ` callback: *const fn (self: QPaintEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QPaintEvent, callback: *const fn (QPaintEvent, bool) callconv(.c) void) void {
        qtc.QPaintEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#dtor.QPaintEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn Delete(self: QPaintEvent) void {
        qtc.QPaintEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html)
pub const QMoveEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMoveEvent,

    pub const _is_QMoveEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QMoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` oldPos: QPoint `
    ///
    pub fn New(pos: anytype, oldPos: anytype) QMoveEvent {
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(oldPos)._is_QPoint;
        return .{ .ptr = qtc.QMoveEvent_new(@ptrCast(pos.ptr), @ptrCast(oldPos.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn Clone(self: QMoveEvent) QMoveEvent {
        return .{ .ptr = qtc.QMoveEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMoveEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QMoveEvent `
    ///
    pub fn OnClone(self: QMoveEvent, callback: *const fn () callconv(.c) QMoveEvent) void {
        qtc.QMoveEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn SuperClone(self: QMoveEvent) QMoveEvent {
        return .{ .ptr = qtc.QMoveEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn Pos(self: QMoveEvent) QPoint {
        return .{ .ptr = qtc.QMoveEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#oldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn OldPos(self: QMoveEvent) QPoint {
        return .{ .ptr = qtc.QMoveEvent_OldPos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QMoveEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn Spontaneous(self: QMoveEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn IsAccepted(self: QMoveEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn Accept(self: QMoveEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn Ignore(self: QMoveEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn IsInputEvent(self: QMoveEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn IsPointerEvent(self: QMoveEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn IsSinglePointEvent(self: QMoveEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QMoveEvent, accepted: bool) void {
        qtc.QMoveEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QMoveEvent, accepted: bool) void {
        qtc.QMoveEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMoveEvent`
    ///
    /// ` callback: *const fn (self: QMoveEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QMoveEvent, callback: *const fn (QMoveEvent, bool) callconv(.c) void) void {
        qtc.QMoveEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#dtor.QMoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn Delete(self: QMoveEvent) void {
        qtc.QMoveEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html)
pub const QExposeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QExposeEvent,

    pub const _is_QExposeEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QExposeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` m_region: QRegion `
    ///
    pub fn New(m_region: anytype) QExposeEvent {
        comptime _ = @TypeOf(m_region)._is_QRegion;
        return .{ .ptr = qtc.QExposeEvent_new(@ptrCast(m_region.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn Clone(self: QExposeEvent) QExposeEvent {
        return .{ .ptr = qtc.QExposeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QExposeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QExposeEvent `
    ///
    pub fn OnClone(self: QExposeEvent, callback: *const fn () callconv(.c) QExposeEvent) void {
        qtc.QExposeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn SuperClone(self: QExposeEvent) QExposeEvent {
        return .{ .ptr = qtc.QExposeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#region)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn Region(self: QExposeEvent) QRegion {
        return .{ .ptr = qtc.QExposeEvent_Region(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QExposeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn Spontaneous(self: QExposeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn IsAccepted(self: QExposeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn Accept(self: QExposeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn Ignore(self: QExposeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn IsInputEvent(self: QExposeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn IsPointerEvent(self: QExposeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn IsSinglePointEvent(self: QExposeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QExposeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QExposeEvent, accepted: bool) void {
        qtc.QExposeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QExposeEvent, accepted: bool) void {
        qtc.QExposeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QExposeEvent`
    ///
    /// ` callback: *const fn (self: QExposeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QExposeEvent, callback: *const fn (QExposeEvent, bool) callconv(.c) void) void {
        qtc.QExposeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#dtor.QExposeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn Delete(self: QExposeEvent) void {
        qtc.QExposeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html)
pub const QPlatformSurfaceEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlatformSurfaceEvent,

    pub const _is_QPlatformSurfaceEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QPlatformSurfaceEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` surfaceEventType: qevent_enums.SurfaceEventType `
    ///
    pub fn New(surfaceEventType: i32) QPlatformSurfaceEvent {
        return .{ .ptr = qtc.QPlatformSurfaceEvent_new(@bitCast(surfaceEventType)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn Clone(self: QPlatformSurfaceEvent) QPlatformSurfaceEvent {
        return .{ .ptr = qtc.QPlatformSurfaceEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QPlatformSurfaceEvent `
    ///
    pub fn OnClone(self: QPlatformSurfaceEvent, callback: *const fn () callconv(.c) QPlatformSurfaceEvent) void {
        qtc.QPlatformSurfaceEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn SuperClone(self: QPlatformSurfaceEvent) QPlatformSurfaceEvent {
        return .{ .ptr = qtc.QPlatformSurfaceEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#surfaceEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    /// ## Returns:
    ///
    /// ` qevent_enums.SurfaceEventType `
    ///
    pub fn SurfaceEventType(self: QPlatformSurfaceEvent) i32 {
        return qtc.QPlatformSurfaceEvent_SurfaceEventType(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QPlatformSurfaceEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn Spontaneous(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn IsAccepted(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn Accept(self: QPlatformSurfaceEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn Ignore(self: QPlatformSurfaceEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn IsInputEvent(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn IsPointerEvent(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn IsSinglePointEvent(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QPlatformSurfaceEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QPlatformSurfaceEvent, accepted: bool) void {
        qtc.QPlatformSurfaceEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QPlatformSurfaceEvent, accepted: bool) void {
        qtc.QPlatformSurfaceEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlatformSurfaceEvent`
    ///
    /// ` callback: *const fn (self: QPlatformSurfaceEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QPlatformSurfaceEvent, callback: *const fn (QPlatformSurfaceEvent, bool) callconv(.c) void) void {
        qtc.QPlatformSurfaceEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#dtor.QPlatformSurfaceEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn Delete(self: QPlatformSurfaceEvent) void {
        qtc.QPlatformSurfaceEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html)
pub const QResizeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QResizeEvent,

    pub const _is_QResizeEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QResizeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` oldSize: QSize `
    ///
    pub fn New(size: anytype, oldSize: anytype) QResizeEvent {
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(oldSize)._is_QSize;
        return .{ .ptr = qtc.QResizeEvent_new(@ptrCast(size.ptr), @ptrCast(oldSize.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn Clone(self: QResizeEvent) QResizeEvent {
        return .{ .ptr = qtc.QResizeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QResizeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QResizeEvent `
    ///
    pub fn OnClone(self: QResizeEvent, callback: *const fn () callconv(.c) QResizeEvent) void {
        qtc.QResizeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn SuperClone(self: QResizeEvent) QResizeEvent {
        return .{ .ptr = qtc.QResizeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn Size(self: QResizeEvent) QSize {
        return .{ .ptr = qtc.QResizeEvent_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#oldSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn OldSize(self: QResizeEvent) QSize {
        return .{ .ptr = qtc.QResizeEvent_OldSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QResizeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn Spontaneous(self: QResizeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn IsAccepted(self: QResizeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn Accept(self: QResizeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn Ignore(self: QResizeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn IsInputEvent(self: QResizeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn IsPointerEvent(self: QResizeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn IsSinglePointEvent(self: QResizeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QResizeEvent, accepted: bool) void {
        qtc.QResizeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QResizeEvent, accepted: bool) void {
        qtc.QResizeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QResizeEvent`
    ///
    /// ` callback: *const fn (self: QResizeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QResizeEvent, callback: *const fn (QResizeEvent, bool) callconv(.c) void) void {
        qtc.QResizeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#dtor.QResizeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn Delete(self: QResizeEvent) void {
        qtc.QResizeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html)
pub const QCloseEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCloseEvent,

    pub const _is_QCloseEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QCloseEvent object.
    ///
    pub fn New() QCloseEvent {
        return .{ .ptr = qtc.QCloseEvent_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn Clone(self: QCloseEvent) QCloseEvent {
        return .{ .ptr = qtc.QCloseEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCloseEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QCloseEvent `
    ///
    pub fn OnClone(self: QCloseEvent, callback: *const fn () callconv(.c) QCloseEvent) void {
        qtc.QCloseEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn SuperClone(self: QCloseEvent) QCloseEvent {
        return .{ .ptr = qtc.QCloseEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QCloseEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn Spontaneous(self: QCloseEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn IsAccepted(self: QCloseEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn Accept(self: QCloseEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn Ignore(self: QCloseEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn IsInputEvent(self: QCloseEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn IsPointerEvent(self: QCloseEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn IsSinglePointEvent(self: QCloseEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QCloseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QCloseEvent, accepted: bool) void {
        qtc.QCloseEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QCloseEvent, accepted: bool) void {
        qtc.QCloseEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCloseEvent`
    ///
    /// ` callback: *const fn (self: QCloseEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QCloseEvent, callback: *const fn (QCloseEvent, bool) callconv(.c) void) void {
        qtc.QCloseEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#dtor.QCloseEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn Delete(self: QCloseEvent) void {
        qtc.QCloseEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html)
pub const QIconDragEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QIconDragEvent,

    pub const _is_QIconDragEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QIconDragEvent object.
    ///
    pub fn New() QIconDragEvent {
        return .{ .ptr = qtc.QIconDragEvent_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn Clone(self: QIconDragEvent) QIconDragEvent {
        return .{ .ptr = qtc.QIconDragEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconDragEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QIconDragEvent `
    ///
    pub fn OnClone(self: QIconDragEvent, callback: *const fn () callconv(.c) QIconDragEvent) void {
        qtc.QIconDragEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn SuperClone(self: QIconDragEvent) QIconDragEvent {
        return .{ .ptr = qtc.QIconDragEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QIconDragEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn Spontaneous(self: QIconDragEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn IsAccepted(self: QIconDragEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn Accept(self: QIconDragEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn Ignore(self: QIconDragEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn IsInputEvent(self: QIconDragEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn IsPointerEvent(self: QIconDragEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn IsSinglePointEvent(self: QIconDragEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QIconDragEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QIconDragEvent, accepted: bool) void {
        qtc.QIconDragEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QIconDragEvent, accepted: bool) void {
        qtc.QIconDragEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconDragEvent`
    ///
    /// ` callback: *const fn (self: QIconDragEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QIconDragEvent, callback: *const fn (QIconDragEvent, bool) callconv(.c) void) void {
        qtc.QIconDragEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#dtor.QIconDragEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn Delete(self: QIconDragEvent) void {
        qtc.QIconDragEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html)
pub const QShowEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QShowEvent,

    pub const _is_QShowEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QShowEvent object.
    ///
    pub fn New() QShowEvent {
        return .{ .ptr = qtc.QShowEvent_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn Clone(self: QShowEvent) QShowEvent {
        return .{ .ptr = qtc.QShowEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShowEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QShowEvent `
    ///
    pub fn OnClone(self: QShowEvent, callback: *const fn () callconv(.c) QShowEvent) void {
        qtc.QShowEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn SuperClone(self: QShowEvent) QShowEvent {
        return .{ .ptr = qtc.QShowEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QShowEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn Spontaneous(self: QShowEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn IsAccepted(self: QShowEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn Accept(self: QShowEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn Ignore(self: QShowEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn IsInputEvent(self: QShowEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn IsPointerEvent(self: QShowEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn IsSinglePointEvent(self: QShowEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QShowEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QShowEvent, accepted: bool) void {
        qtc.QShowEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QShowEvent, accepted: bool) void {
        qtc.QShowEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShowEvent`
    ///
    /// ` callback: *const fn (self: QShowEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QShowEvent, callback: *const fn (QShowEvent, bool) callconv(.c) void) void {
        qtc.QShowEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#dtor.QShowEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QShowEvent `
    ///
    pub fn Delete(self: QShowEvent) void {
        qtc.QShowEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html)
pub const QHideEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHideEvent,

    pub const _is_QHideEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QHideEvent object.
    ///
    pub fn New() QHideEvent {
        return .{ .ptr = qtc.QHideEvent_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn Clone(self: QHideEvent) QHideEvent {
        return .{ .ptr = qtc.QHideEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHideEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QHideEvent `
    ///
    pub fn OnClone(self: QHideEvent, callback: *const fn () callconv(.c) QHideEvent) void {
        qtc.QHideEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn SuperClone(self: QHideEvent) QHideEvent {
        return .{ .ptr = qtc.QHideEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QHideEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn Spontaneous(self: QHideEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn IsAccepted(self: QHideEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn Accept(self: QHideEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn Ignore(self: QHideEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn IsInputEvent(self: QHideEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn IsPointerEvent(self: QHideEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn IsSinglePointEvent(self: QHideEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QHideEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QHideEvent, accepted: bool) void {
        qtc.QHideEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QHideEvent, accepted: bool) void {
        qtc.QHideEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHideEvent`
    ///
    /// ` callback: *const fn (self: QHideEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QHideEvent, callback: *const fn (QHideEvent, bool) callconv(.c) void) void {
        qtc.QHideEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#dtor.QHideEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHideEvent `
    ///
    pub fn Delete(self: QHideEvent) void {
        qtc.QHideEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html)
pub const QContextMenuEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QContextMenuEvent,

    pub const _is_QContextMenuEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QContextMenuEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` reason: qevent_enums.Reason `
    ///
    /// ` pos: QPoint `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn New(reason: i32, pos: anytype, globalPos: anytype) QContextMenuEvent {
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.QContextMenuEvent_new(@bitCast(reason), @ptrCast(pos.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// New2 constructs a new QContextMenuEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` reason: qevent_enums.Reason `
    ///
    /// ` pos: QPoint `
    ///
    pub fn New2(reason: i32, pos: anytype) QContextMenuEvent {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QContextMenuEvent_new2(@bitCast(reason), @ptrCast(pos.ptr)) };
    }

    /// New3 constructs a new QContextMenuEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` reason: qevent_enums.Reason `
    ///
    /// ` pos: QPoint `
    ///
    /// ` globalPos: QPoint `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New3(reason: i32, pos: anytype, globalPos: anytype, modifiers: i32) QContextMenuEvent {
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.QContextMenuEvent_new3(@bitCast(reason), @ptrCast(pos.ptr), @ptrCast(globalPos.ptr), @bitCast(modifiers)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn Clone(self: QContextMenuEvent) QContextMenuEvent {
        return .{ .ptr = qtc.QContextMenuEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QContextMenuEvent `
    ///
    pub fn OnClone(self: QContextMenuEvent, callback: *const fn () callconv(.c) QContextMenuEvent) void {
        qtc.QContextMenuEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn SuperClone(self: QContextMenuEvent) QContextMenuEvent {
        return .{ .ptr = qtc.QContextMenuEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn X(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn Y(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn GlobalX(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn GlobalY(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn Pos(self: QContextMenuEvent) QPoint {
        return .{ .ptr = qtc.QContextMenuEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn GlobalPos(self: QContextMenuEvent) QPoint {
        return .{ .ptr = qtc.QContextMenuEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#reason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` qevent_enums.Reason `
    ///
    pub fn Reason(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_Reason(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn Device(self: QContextMenuEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QContextMenuEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QContextMenuEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QContextMenuEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn Timestamp(self: QContextMenuEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QContextMenuEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn Spontaneous(self: QContextMenuEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn IsAccepted(self: QContextMenuEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn Accept(self: QContextMenuEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn Ignore(self: QContextMenuEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn IsInputEvent(self: QContextMenuEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn IsPointerEvent(self: QContextMenuEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn IsSinglePointEvent(self: QContextMenuEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QContextMenuEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QContextMenuEvent, timestamp: u64) void {
        qtc.QContextMenuEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QContextMenuEvent, timestamp: u64) void {
        qtc.QContextMenuEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QContextMenuEvent`
    ///
    /// ` callback: *const fn (self: QContextMenuEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QContextMenuEvent, callback: *const fn (QContextMenuEvent, u64) callconv(.c) void) void {
        qtc.QContextMenuEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QContextMenuEvent, accepted: bool) void {
        qtc.QContextMenuEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QContextMenuEvent, accepted: bool) void {
        qtc.QContextMenuEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QContextMenuEvent`
    ///
    /// ` callback: *const fn (self: QContextMenuEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QContextMenuEvent, callback: *const fn (QContextMenuEvent, bool) callconv(.c) void) void {
        qtc.QContextMenuEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#dtor.QContextMenuEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn Delete(self: QContextMenuEvent) void {
        qtc.QContextMenuEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html)
pub const QInputMethodEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QInputMethodEvent,

    pub const _is_QInputMethodEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QInputMethodEvent object.
    ///
    pub fn New() QInputMethodEvent {
        return .{ .ptr = qtc.QInputMethodEvent_new() };
    }

    /// New2 constructs a new QInputMethodEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` preeditText: []const u8 `
    ///
    /// ` attributes: []QInputMethodEvent__Attribute `
    ///
    pub fn New2(preeditText: []const u8, attributes: []QInputMethodEvent__Attribute) QInputMethodEvent {
        const preeditText_str = qtc.libqt_string{
            .len = preeditText.len,
            .data = preeditText.ptr,
        };
        const attributes_list = qtc.libqt_list{
            .len = attributes.len,
            .data = @ptrCast(attributes.ptr),
        };
        return .{ .ptr = qtc.QInputMethodEvent_new2(preeditText_str, attributes_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn Clone(self: QInputMethodEvent) QInputMethodEvent {
        return .{ .ptr = qtc.QInputMethodEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QInputMethodEvent `
    ///
    pub fn OnClone(self: QInputMethodEvent, callback: *const fn () callconv(.c) QInputMethodEvent) void {
        qtc.QInputMethodEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn SuperClone(self: QInputMethodEvent) QInputMethodEvent {
        return .{ .ptr = qtc.QInputMethodEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` commitString: []const u8 `
    ///
    pub fn SetCommitString(self: QInputMethodEvent, commitString: []const u8) void {
        const commitString_str = qtc.libqt_string{
            .len = commitString.len,
            .data = commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString(@ptrCast(self.ptr), commitString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attributes(self: QInputMethodEvent, allocator: std.mem.Allocator) []QInputMethodEvent__Attribute {
        const _arr: qtc.libqt_list = qtc.QInputMethodEvent_Attributes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QInputMethodEvent__Attribute, _arr.len) catch @panic("qinputmethodevent.Attributes: Memory allocation failed");
        const _data: [*]QtC.QInputMethodEvent__Attribute = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#preeditString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreeditString(self: QInputMethodEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QInputMethodEvent_PreeditString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethodevent.PreeditString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#commitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CommitString(self: QInputMethodEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QInputMethodEvent_CommitString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethodevent.CommitString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn ReplacementStart(self: QInputMethodEvent) i32 {
        return qtc.QInputMethodEvent_ReplacementStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn ReplacementLength(self: QInputMethodEvent) i32 {
        return qtc.QInputMethodEvent_ReplacementLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` commitString: []const u8 `
    ///
    /// ` replaceFrom: i32 `
    ///
    pub fn SetCommitString2(self: QInputMethodEvent, commitString: []const u8, replaceFrom: i32) void {
        const commitString_str = qtc.libqt_string{
            .len = commitString.len,
            .data = commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString2(@ptrCast(self.ptr), commitString_str, @bitCast(replaceFrom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` commitString: []const u8 `
    ///
    /// ` replaceFrom: i32 `
    ///
    /// ` replaceLength: i32 `
    ///
    pub fn SetCommitString3(self: QInputMethodEvent, commitString: []const u8, replaceFrom: i32, replaceLength: i32) void {
        const commitString_str = qtc.libqt_string{
            .len = commitString.len,
            .data = commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString3(@ptrCast(self.ptr), commitString_str, @bitCast(replaceFrom), @bitCast(replaceLength));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QInputMethodEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn Spontaneous(self: QInputMethodEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn IsAccepted(self: QInputMethodEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn Accept(self: QInputMethodEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn Ignore(self: QInputMethodEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn IsInputEvent(self: QInputMethodEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn IsPointerEvent(self: QInputMethodEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn IsSinglePointEvent(self: QInputMethodEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QInputMethodEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QInputMethodEvent, accepted: bool) void {
        qtc.QInputMethodEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QInputMethodEvent, accepted: bool) void {
        qtc.QInputMethodEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethodEvent`
    ///
    /// ` callback: *const fn (self: QInputMethodEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QInputMethodEvent, callback: *const fn (QInputMethodEvent, bool) callconv(.c) void) void {
        qtc.QInputMethodEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#dtor.QInputMethodEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn Delete(self: QInputMethodEvent) void {
        qtc.QInputMethodEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html)
pub const QInputMethodQueryEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QInputMethodQueryEvent,

    pub const _is_QInputMethodQueryEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QInputMethodQueryEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` queries: flag of qnamespace_enums.InputMethodQuery `
    ///
    pub fn New(queries: i32) QInputMethodQueryEvent {
        return .{ .ptr = qtc.QInputMethodQueryEvent_new(@bitCast(queries)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn Clone(self: QInputMethodQueryEvent) QInputMethodQueryEvent {
        return .{ .ptr = qtc.QInputMethodQueryEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QInputMethodQueryEvent `
    ///
    pub fn OnClone(self: QInputMethodQueryEvent, callback: *const fn () callconv(.c) QInputMethodQueryEvent) void {
        qtc.QInputMethodQueryEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn SuperClone(self: QInputMethodQueryEvent) QInputMethodQueryEvent {
        return .{ .ptr = qtc.QInputMethodQueryEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#queries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodQuery `
    ///
    pub fn Queries(self: QInputMethodQueryEvent) i32 {
        return qtc.QInputMethodQueryEvent_Queries(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetValue(self: QInputMethodQueryEvent, query: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QInputMethodQueryEvent_SetValue(@ptrCast(self.ptr), @bitCast(query), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn Value(self: QInputMethodQueryEvent, query: i32) QVariant {
        return .{ .ptr = qtc.QInputMethodQueryEvent_Value(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QInputMethodQueryEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn Spontaneous(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn IsAccepted(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn Accept(self: QInputMethodQueryEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn Ignore(self: QInputMethodQueryEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn IsInputEvent(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn IsPointerEvent(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn IsSinglePointEvent(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QInputMethodQueryEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QInputMethodQueryEvent, accepted: bool) void {
        qtc.QInputMethodQueryEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QInputMethodQueryEvent, accepted: bool) void {
        qtc.QInputMethodQueryEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethodQueryEvent`
    ///
    /// ` callback: *const fn (self: QInputMethodQueryEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QInputMethodQueryEvent, callback: *const fn (QInputMethodQueryEvent, bool) callconv(.c) void) void {
        qtc.QInputMethodQueryEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#dtor.QInputMethodQueryEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn Delete(self: QInputMethodQueryEvent) void {
        qtc.QInputMethodQueryEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html)
pub const QDropEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDropEvent,

    pub const _is_QDropEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QDropEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New(pos: anytype, actions: i32, data: anytype, buttons: i32, modifiers: i32) QDropEvent {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDropEvent_new(@ptrCast(pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(buttons), @bitCast(modifiers)) };
    }

    /// New2 constructs a new QDropEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(pos: anytype, actions: i32, data: anytype, buttons: i32, modifiers: i32, typeVal: i32) QDropEvent {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDropEvent_new2(@ptrCast(pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(buttons), @bitCast(modifiers), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn Clone(self: QDropEvent) QDropEvent {
        return .{ .ptr = qtc.QDropEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDropEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QDropEvent `
    ///
    pub fn OnClone(self: QDropEvent, callback: *const fn () callconv(.c) QDropEvent) void {
        qtc.QDropEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn SuperClone(self: QDropEvent) QDropEvent {
        return .{ .ptr = qtc.QDropEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn Pos(self: QDropEvent) QPoint {
        return .{ .ptr = qtc.QDropEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn PosF(self: QDropEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn MouseButtons(self: QDropEvent) i32 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn KeyboardModifiers(self: QDropEvent) i32 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn Position(self: QDropEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QDropEvent) i32 {
        return qtc.QDropEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QDropEvent) i32 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn PossibleActions(self: QDropEvent) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn ProposedAction(self: QDropEvent) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn AcceptProposedAction(self: QDropEvent) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DropAction(self: QDropEvent) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetDropAction(self: QDropEvent, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn Source(self: QDropEvent) QObject {
        return .{ .ptr = qtc.QDropEvent_Source(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn MimeData(self: QDropEvent) QMimeData {
        return .{ .ptr = qtc.QDropEvent_MimeData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QDropEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn Spontaneous(self: QDropEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn IsAccepted(self: QDropEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn Accept(self: QDropEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn Ignore(self: QDropEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn IsInputEvent(self: QDropEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn IsPointerEvent(self: QDropEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn IsSinglePointEvent(self: QDropEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QDropEvent, accepted: bool) void {
        qtc.QDropEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QDropEvent, accepted: bool) void {
        qtc.QDropEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDropEvent`
    ///
    /// ` callback: *const fn (self: QDropEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QDropEvent, callback: *const fn (QDropEvent, bool) callconv(.c) void) void {
        qtc.QDropEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dtor.QDropEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDropEvent `
    ///
    pub fn Delete(self: QDropEvent) void {
        qtc.QDropEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html)
pub const QDragMoveEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDragMoveEvent,

    pub const _is_QDragMoveEvent = {};
    pub const _is_QDropEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QDragMoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New(pos: anytype, actions: i32, data: anytype, buttons: i32, modifiers: i32) QDragMoveEvent {
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDragMoveEvent_new(@ptrCast(pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(buttons), @bitCast(modifiers)) };
    }

    /// New2 constructs a new QDragMoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(pos: anytype, actions: i32, data: anytype, buttons: i32, modifiers: i32, typeVal: i32) QDragMoveEvent {
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDragMoveEvent_new2(@ptrCast(pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(buttons), @bitCast(modifiers), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn Clone(self: QDragMoveEvent) QDragMoveEvent {
        return .{ .ptr = qtc.QDragMoveEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QDragMoveEvent `
    ///
    pub fn OnClone(self: QDragMoveEvent, callback: *const fn () callconv(.c) QDragMoveEvent) void {
        qtc.QDragMoveEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn SuperClone(self: QDragMoveEvent) QDragMoveEvent {
        return .{ .ptr = qtc.QDragMoveEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn AnswerRect(self: QDragMoveEvent) QRect {
        return .{ .ptr = qtc.QDragMoveEvent_AnswerRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn Accept(self: QDragMoveEvent) void {
        qtc.QDragMoveEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn Ignore(self: QDragMoveEvent) void {
        qtc.QDragMoveEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ` r: QRect `
    ///
    pub fn Accept2(self: QDragMoveEvent, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QDragMoveEvent_Accept2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ` r: QRect `
    ///
    pub fn Ignore2(self: QDragMoveEvent, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QDragMoveEvent_Ignore2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn Pos(self: QDragMoveEvent) QPoint {
        return .{ .ptr = qtc.QDropEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn PosF(self: QDragMoveEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn MouseButtons(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn KeyboardModifiers(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn Position(self: QDragMoveEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_Position(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_Buttons(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn PossibleActions(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn ProposedAction(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn AcceptProposedAction(self: QDragMoveEvent) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DropAction(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetDropAction(self: QDragMoveEvent, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn Source(self: QDragMoveEvent) QObject {
        return .{ .ptr = qtc.QDropEvent_Source(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn MimeData(self: QDragMoveEvent) QMimeData {
        return .{ .ptr = qtc.QDropEvent_MimeData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QDragMoveEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn Spontaneous(self: QDragMoveEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn IsAccepted(self: QDragMoveEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn IsInputEvent(self: QDragMoveEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn IsPointerEvent(self: QDragMoveEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn IsSinglePointEvent(self: QDragMoveEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QDragMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QDragMoveEvent, accepted: bool) void {
        qtc.QDragMoveEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QDragMoveEvent, accepted: bool) void {
        qtc.QDragMoveEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDragMoveEvent`
    ///
    /// ` callback: *const fn (self: QDragMoveEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QDragMoveEvent, callback: *const fn (QDragMoveEvent, bool) callconv(.c) void) void {
        qtc.QDragMoveEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#dtor.QDragMoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn Delete(self: QDragMoveEvent) void {
        qtc.QDragMoveEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html)
pub const QDragEnterEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDragEnterEvent,

    pub const _is_QDragEnterEvent = {};
    pub const _is_QDragMoveEvent = {};
    pub const _is_QDropEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QDragEnterEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New(pos: anytype, actions: i32, data: anytype, buttons: i32, modifiers: i32) QDragEnterEvent {
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDragEnterEvent_new(@ptrCast(pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(buttons), @bitCast(modifiers)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn Clone(self: QDragEnterEvent) QDragEnterEvent {
        return .{ .ptr = qtc.QDragEnterEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QDragEnterEvent `
    ///
    pub fn OnClone(self: QDragEnterEvent, callback: *const fn () callconv(.c) QDragEnterEvent) void {
        qtc.QDragEnterEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn SuperClone(self: QDragEnterEvent) QDragEnterEvent {
        return .{ .ptr = qtc.QDragEnterEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn AnswerRect(self: QDragEnterEvent) QRect {
        return .{ .ptr = qtc.QDragMoveEvent_AnswerRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn Accept(self: QDragEnterEvent) void {
        qtc.QDragMoveEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn Ignore(self: QDragEnterEvent) void {
        qtc.QDragMoveEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ` r: QRect `
    ///
    pub fn Accept2(self: QDragEnterEvent, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QDragMoveEvent_Accept2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ` r: QRect `
    ///
    pub fn Ignore2(self: QDragEnterEvent, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QDragMoveEvent_Ignore2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn Pos(self: QDragEnterEvent) QPoint {
        return .{ .ptr = qtc.QDropEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn PosF(self: QDragEnterEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn MouseButtons(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn KeyboardModifiers(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn Position(self: QDragEnterEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_Position(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_Buttons(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn PossibleActions(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn ProposedAction(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn AcceptProposedAction(self: QDragEnterEvent) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DropAction(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self.ptr));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetDropAction(self: QDragEnterEvent, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn Source(self: QDragEnterEvent) QObject {
        return .{ .ptr = qtc.QDropEvent_Source(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn MimeData(self: QDragEnterEvent) QMimeData {
        return .{ .ptr = qtc.QDropEvent_MimeData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QDragEnterEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn Spontaneous(self: QDragEnterEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn IsAccepted(self: QDragEnterEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn IsInputEvent(self: QDragEnterEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn IsPointerEvent(self: QDragEnterEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn IsSinglePointEvent(self: QDragEnterEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QDragEnterEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QDragEnterEvent, accepted: bool) void {
        qtc.QDragEnterEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QDragEnterEvent, accepted: bool) void {
        qtc.QDragEnterEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDragEnterEvent`
    ///
    /// ` callback: *const fn (self: QDragEnterEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QDragEnterEvent, callback: *const fn (QDragEnterEvent, bool) callconv(.c) void) void {
        qtc.QDragEnterEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#dtor.QDragEnterEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn Delete(self: QDragEnterEvent) void {
        qtc.QDragEnterEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html)
pub const QDragLeaveEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDragLeaveEvent,

    pub const _is_QDragLeaveEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QDragLeaveEvent object.
    ///
    pub fn New() QDragLeaveEvent {
        return .{ .ptr = qtc.QDragLeaveEvent_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn Clone(self: QDragLeaveEvent) QDragLeaveEvent {
        return .{ .ptr = qtc.QDragLeaveEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDragLeaveEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QDragLeaveEvent `
    ///
    pub fn OnClone(self: QDragLeaveEvent, callback: *const fn () callconv(.c) QDragLeaveEvent) void {
        qtc.QDragLeaveEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn SuperClone(self: QDragLeaveEvent) QDragLeaveEvent {
        return .{ .ptr = qtc.QDragLeaveEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QDragLeaveEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn Spontaneous(self: QDragLeaveEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn IsAccepted(self: QDragLeaveEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn Accept(self: QDragLeaveEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn Ignore(self: QDragLeaveEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn IsInputEvent(self: QDragLeaveEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn IsPointerEvent(self: QDragLeaveEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn IsSinglePointEvent(self: QDragLeaveEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QDragLeaveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QDragLeaveEvent, accepted: bool) void {
        qtc.QDragLeaveEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QDragLeaveEvent, accepted: bool) void {
        qtc.QDragLeaveEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDragLeaveEvent`
    ///
    /// ` callback: *const fn (self: QDragLeaveEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QDragLeaveEvent, callback: *const fn (QDragLeaveEvent, bool) callconv(.c) void) void {
        qtc.QDragLeaveEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#dtor.QDragLeaveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn Delete(self: QDragLeaveEvent) void {
        qtc.QDragLeaveEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html)
pub const QHelpEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHelpEvent,

    pub const _is_QHelpEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QHelpEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` pos: QPoint `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn New(typeVal: i32, pos: anytype, globalPos: anytype) QHelpEvent {
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.QHelpEvent_new(@bitCast(typeVal), @ptrCast(pos.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn Clone(self: QHelpEvent) QHelpEvent {
        return .{ .ptr = qtc.QHelpEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHelpEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QHelpEvent `
    ///
    pub fn OnClone(self: QHelpEvent, callback: *const fn () callconv(.c) QHelpEvent) void {
        qtc.QHelpEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn SuperClone(self: QHelpEvent) QHelpEvent {
        return .{ .ptr = qtc.QHelpEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn X(self: QHelpEvent) i32 {
        return qtc.QHelpEvent_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn Y(self: QHelpEvent) i32 {
        return qtc.QHelpEvent_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn GlobalX(self: QHelpEvent) i32 {
        return qtc.QHelpEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn GlobalY(self: QHelpEvent) i32 {
        return qtc.QHelpEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn Pos(self: QHelpEvent) QPoint {
        return .{ .ptr = qtc.QHelpEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn GlobalPos(self: QHelpEvent) QPoint {
        return .{ .ptr = qtc.QHelpEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QHelpEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn Spontaneous(self: QHelpEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn IsAccepted(self: QHelpEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn Accept(self: QHelpEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn Ignore(self: QHelpEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn IsInputEvent(self: QHelpEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn IsPointerEvent(self: QHelpEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn IsSinglePointEvent(self: QHelpEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QHelpEvent, accepted: bool) void {
        qtc.QHelpEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QHelpEvent, accepted: bool) void {
        qtc.QHelpEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHelpEvent`
    ///
    /// ` callback: *const fn (self: QHelpEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QHelpEvent, callback: *const fn (QHelpEvent, bool) callconv(.c) void) void {
        qtc.QHelpEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#dtor.QHelpEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn Delete(self: QHelpEvent) void {
        qtc.QHelpEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html)
pub const QStatusTipEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStatusTipEvent,

    pub const _is_QStatusTipEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QStatusTipEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` tip: []const u8 `
    ///
    pub fn New(tip: []const u8) QStatusTipEvent {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        return .{ .ptr = qtc.QStatusTipEvent_new(tip_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn Clone(self: QStatusTipEvent) QStatusTipEvent {
        return .{ .ptr = qtc.QStatusTipEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStatusTipEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QStatusTipEvent `
    ///
    pub fn OnClone(self: QStatusTipEvent, callback: *const fn () callconv(.c) QStatusTipEvent) void {
        qtc.QStatusTipEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn SuperClone(self: QStatusTipEvent) QStatusTipEvent {
        return .{ .ptr = qtc.QStatusTipEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#tip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tip(self: QStatusTipEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStatusTipEvent_Tip(@ptrCast(self.ptr));
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
    /// ` self: QStatusTipEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QStatusTipEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn Spontaneous(self: QStatusTipEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn IsAccepted(self: QStatusTipEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn Accept(self: QStatusTipEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn Ignore(self: QStatusTipEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn IsInputEvent(self: QStatusTipEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn IsPointerEvent(self: QStatusTipEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn IsSinglePointEvent(self: QStatusTipEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QStatusTipEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QStatusTipEvent, accepted: bool) void {
        qtc.QStatusTipEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QStatusTipEvent, accepted: bool) void {
        qtc.QStatusTipEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStatusTipEvent`
    ///
    /// ` callback: *const fn (self: QStatusTipEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QStatusTipEvent, callback: *const fn (QStatusTipEvent, bool) callconv(.c) void) void {
        qtc.QStatusTipEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#dtor.QStatusTipEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn Delete(self: QStatusTipEvent) void {
        qtc.QStatusTipEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html)
pub const QWhatsThisClickedEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWhatsThisClickedEvent,

    pub const _is_QWhatsThisClickedEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QWhatsThisClickedEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` href: []const u8 `
    ///
    pub fn New(href: []const u8) QWhatsThisClickedEvent {
        const href_str = qtc.libqt_string{
            .len = href.len,
            .data = href.ptr,
        };
        return .{ .ptr = qtc.QWhatsThisClickedEvent_new(href_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn Clone(self: QWhatsThisClickedEvent) QWhatsThisClickedEvent {
        return .{ .ptr = qtc.QWhatsThisClickedEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QWhatsThisClickedEvent `
    ///
    pub fn OnClone(self: QWhatsThisClickedEvent, callback: *const fn () callconv(.c) QWhatsThisClickedEvent) void {
        qtc.QWhatsThisClickedEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn SuperClone(self: QWhatsThisClickedEvent) QWhatsThisClickedEvent {
        return .{ .ptr = qtc.QWhatsThisClickedEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#href)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Href(self: QWhatsThisClickedEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWhatsThisClickedEvent_Href(@ptrCast(self.ptr));
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
    /// ` self: QWhatsThisClickedEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QWhatsThisClickedEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn Spontaneous(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn IsAccepted(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn Accept(self: QWhatsThisClickedEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn Ignore(self: QWhatsThisClickedEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn IsInputEvent(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn IsPointerEvent(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn IsSinglePointEvent(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QWhatsThisClickedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QWhatsThisClickedEvent, accepted: bool) void {
        qtc.QWhatsThisClickedEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QWhatsThisClickedEvent, accepted: bool) void {
        qtc.QWhatsThisClickedEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWhatsThisClickedEvent`
    ///
    /// ` callback: *const fn (self: QWhatsThisClickedEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QWhatsThisClickedEvent, callback: *const fn (QWhatsThisClickedEvent, bool) callconv(.c) void) void {
        qtc.QWhatsThisClickedEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#dtor.QWhatsThisClickedEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn Delete(self: QWhatsThisClickedEvent) void {
        qtc.QWhatsThisClickedEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html)
pub const QActionEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QActionEvent,

    pub const _is_QActionEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QActionEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` action: QAction `
    ///
    pub fn New(typeVal: i32, action: anytype) QActionEvent {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.QActionEvent_new(@bitCast(typeVal), @ptrCast(action.ptr)) };
    }

    /// New2 constructs a new QActionEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` action: QAction `
    ///
    /// ` before: QAction `
    ///
    pub fn New2(typeVal: i32, action: anytype, before: anytype) QActionEvent {
        comptime _ = @TypeOf(action)._is_QAction;
        comptime _ = @TypeOf(before)._is_QAction;
        return .{ .ptr = qtc.QActionEvent_new2(@bitCast(typeVal), @ptrCast(action.ptr), @ptrCast(before.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn Clone(self: QActionEvent) QActionEvent {
        return .{ .ptr = qtc.QActionEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QActionEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QActionEvent `
    ///
    pub fn OnClone(self: QActionEvent, callback: *const fn () callconv(.c) QActionEvent) void {
        qtc.QActionEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn SuperClone(self: QActionEvent) QActionEvent {
        return .{ .ptr = qtc.QActionEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn Action(self: QActionEvent) QAction {
        return .{ .ptr = qtc.QActionEvent_Action(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#before)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn Before(self: QActionEvent) QAction {
        return .{ .ptr = qtc.QActionEvent_Before(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QActionEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn Spontaneous(self: QActionEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn IsAccepted(self: QActionEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn Accept(self: QActionEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn Ignore(self: QActionEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn IsInputEvent(self: QActionEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn IsPointerEvent(self: QActionEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn IsSinglePointEvent(self: QActionEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QActionEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QActionEvent, accepted: bool) void {
        qtc.QActionEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QActionEvent, accepted: bool) void {
        qtc.QActionEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QActionEvent`
    ///
    /// ` callback: *const fn (self: QActionEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QActionEvent, callback: *const fn (QActionEvent, bool) callconv(.c) void) void {
        qtc.QActionEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#dtor.QActionEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QActionEvent `
    ///
    pub fn Delete(self: QActionEvent) void {
        qtc.QActionEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html)
pub const QFileOpenEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFileOpenEvent,

    pub const _is_QFileOpenEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QFileOpenEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn New(file: []const u8) QFileOpenEvent {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.QFileOpenEvent_new(file_str) };
    }

    /// New2 constructs a new QFileOpenEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn New2(url: anytype) QFileOpenEvent {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QFileOpenEvent_new2(@ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn Clone(self: QFileOpenEvent) QFileOpenEvent {
        return .{ .ptr = qtc.QFileOpenEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileOpenEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QFileOpenEvent `
    ///
    pub fn OnClone(self: QFileOpenEvent, callback: *const fn () callconv(.c) QFileOpenEvent) void {
        qtc.QFileOpenEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn SuperClone(self: QFileOpenEvent) QFileOpenEvent {
        return .{ .ptr = qtc.QFileOpenEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#file)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn File(self: QFileOpenEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileOpenEvent_File(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileopenevent.File: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn Url(self: QFileOpenEvent) QUrl {
        return .{ .ptr = qtc.QFileOpenEvent_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#openFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    /// ` file: QFile `
    ///
    /// ` flags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenFile(self: QFileOpenEvent, file: anytype, flags: i32) bool {
        comptime _ = @TypeOf(file)._is_QFile;
        return qtc.QFileOpenEvent_OpenFile(@ptrCast(self.ptr), @ptrCast(file.ptr), @bitCast(flags));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QFileOpenEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn Spontaneous(self: QFileOpenEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn IsAccepted(self: QFileOpenEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn Accept(self: QFileOpenEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn Ignore(self: QFileOpenEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn IsInputEvent(self: QFileOpenEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn IsPointerEvent(self: QFileOpenEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn IsSinglePointEvent(self: QFileOpenEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QFileOpenEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QFileOpenEvent, accepted: bool) void {
        qtc.QFileOpenEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QFileOpenEvent, accepted: bool) void {
        qtc.QFileOpenEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileOpenEvent`
    ///
    /// ` callback: *const fn (self: QFileOpenEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QFileOpenEvent, callback: *const fn (QFileOpenEvent, bool) callconv(.c) void) void {
        qtc.QFileOpenEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#dtor.QFileOpenEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn Delete(self: QFileOpenEvent) void {
        qtc.QFileOpenEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html)
pub const QToolBarChangeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QToolBarChangeEvent,

    pub const _is_QToolBarChangeEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QToolBarChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t: bool `
    ///
    pub fn New(t: bool) QToolBarChangeEvent {
        return .{ .ptr = qtc.QToolBarChangeEvent_new(t) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn Clone(self: QToolBarChangeEvent) QToolBarChangeEvent {
        return .{ .ptr = qtc.QToolBarChangeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QToolBarChangeEvent `
    ///
    pub fn OnClone(self: QToolBarChangeEvent, callback: *const fn () callconv(.c) QToolBarChangeEvent) void {
        qtc.QToolBarChangeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn SuperClone(self: QToolBarChangeEvent) QToolBarChangeEvent {
        return .{ .ptr = qtc.QToolBarChangeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn Toggle(self: QToolBarChangeEvent) bool {
        return qtc.QToolBarChangeEvent_Toggle(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QToolBarChangeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn Spontaneous(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn IsAccepted(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn Accept(self: QToolBarChangeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn Ignore(self: QToolBarChangeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn IsInputEvent(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn IsPointerEvent(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn IsSinglePointEvent(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QToolBarChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QToolBarChangeEvent, accepted: bool) void {
        qtc.QToolBarChangeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QToolBarChangeEvent, accepted: bool) void {
        qtc.QToolBarChangeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QToolBarChangeEvent`
    ///
    /// ` callback: *const fn (self: QToolBarChangeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QToolBarChangeEvent, callback: *const fn (QToolBarChangeEvent, bool) callconv(.c) void) void {
        qtc.QToolBarChangeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#dtor.QToolBarChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn Delete(self: QToolBarChangeEvent) void {
        qtc.QToolBarChangeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)
pub const QShortcutEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QShortcutEvent,

    pub const _is_QShortcutEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeySequence `
    ///
    /// ` id: i32 `
    ///
    pub fn New(key: anytype, id: i32) QShortcutEvent {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return .{ .ptr = qtc.QShortcutEvent_new(@ptrCast(key.ptr), @bitCast(id)) };
    }

    /// New2 constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeySequence `
    ///
    pub fn New2(key: anytype) QShortcutEvent {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return .{ .ptr = qtc.QShortcutEvent_new2(@ptrCast(key.ptr)) };
    }

    /// New3 constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeySequence `
    ///
    /// ` id: i32 `
    ///
    /// ` ambiguous: bool `
    ///
    pub fn New3(key: anytype, id: i32, ambiguous: bool) QShortcutEvent {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return .{ .ptr = qtc.QShortcutEvent_new3(@ptrCast(key.ptr), @bitCast(id), ambiguous) };
    }

    /// New4 constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeySequence `
    ///
    /// ` shortcut: QShortcut `
    ///
    pub fn New4(key: anytype, shortcut: anytype) QShortcutEvent {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        comptime _ = @TypeOf(shortcut)._is_QShortcut;
        return .{ .ptr = qtc.QShortcutEvent_new4(@ptrCast(key.ptr), @ptrCast(shortcut.ptr)) };
    }

    /// New5 constructs a new QShortcutEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeySequence `
    ///
    /// ` shortcut: QShortcut `
    ///
    /// ` ambiguous: bool `
    ///
    pub fn New5(key: anytype, shortcut: anytype, ambiguous: bool) QShortcutEvent {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        comptime _ = @TypeOf(shortcut)._is_QShortcut;
        return .{ .ptr = qtc.QShortcutEvent_new5(@ptrCast(key.ptr), @ptrCast(shortcut.ptr), ambiguous) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn Clone(self: QShortcutEvent) QShortcutEvent {
        return .{ .ptr = qtc.QShortcutEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcutEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QShortcutEvent `
    ///
    pub fn OnClone(self: QShortcutEvent, callback: *const fn () callconv(.c) QShortcutEvent) void {
        qtc.QShortcutEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn SuperClone(self: QShortcutEvent) QShortcutEvent {
        return .{ .ptr = qtc.QShortcutEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn Key(self: QShortcutEvent) QKeySequence {
        return .{ .ptr = qtc.QShortcutEvent_Key(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#shortcutId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn ShortcutId(self: QShortcutEvent) i32 {
        return qtc.QShortcutEvent_ShortcutId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#isAmbiguous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn IsAmbiguous(self: QShortcutEvent) bool {
        return qtc.QShortcutEvent_IsAmbiguous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QShortcutEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn Spontaneous(self: QShortcutEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn IsAccepted(self: QShortcutEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn Accept(self: QShortcutEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn Ignore(self: QShortcutEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn IsInputEvent(self: QShortcutEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn IsPointerEvent(self: QShortcutEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn IsSinglePointEvent(self: QShortcutEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QShortcutEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QShortcutEvent, accepted: bool) void {
        qtc.QShortcutEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QShortcutEvent, accepted: bool) void {
        qtc.QShortcutEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcutEvent`
    ///
    /// ` callback: *const fn (self: QShortcutEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QShortcutEvent, callback: *const fn (QShortcutEvent, bool) callconv(.c) void) void {
        qtc.QShortcutEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#dtor.QShortcutEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn Delete(self: QShortcutEvent) void {
        qtc.QShortcutEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html)
pub const QWindowStateChangeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWindowStateChangeEvent,

    pub const _is_QWindowStateChangeEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QWindowStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` oldState: flag of qnamespace_enums.WindowState `
    ///
    pub fn New(oldState: i32) QWindowStateChangeEvent {
        return .{ .ptr = qtc.QWindowStateChangeEvent_new(@bitCast(oldState)) };
    }

    /// New2 constructs a new QWindowStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` oldState: flag of qnamespace_enums.WindowState `
    ///
    /// ` isOverride: bool `
    ///
    pub fn New2(oldState: i32, isOverride: bool) QWindowStateChangeEvent {
        return .{ .ptr = qtc.QWindowStateChangeEvent_new2(@bitCast(oldState), isOverride) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn Clone(self: QWindowStateChangeEvent) QWindowStateChangeEvent {
        return .{ .ptr = qtc.QWindowStateChangeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QWindowStateChangeEvent `
    ///
    pub fn OnClone(self: QWindowStateChangeEvent, callback: *const fn () callconv(.c) QWindowStateChangeEvent) void {
        qtc.QWindowStateChangeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn SuperClone(self: QWindowStateChangeEvent) QWindowStateChangeEvent {
        return .{ .ptr = qtc.QWindowStateChangeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#oldState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn OldState(self: QWindowStateChangeEvent) i32 {
        return qtc.QWindowStateChangeEvent_OldState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#isOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn IsOverride(self: QWindowStateChangeEvent) bool {
        return qtc.QWindowStateChangeEvent_IsOverride(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QWindowStateChangeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn Spontaneous(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn IsAccepted(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn Accept(self: QWindowStateChangeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn Ignore(self: QWindowStateChangeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn IsInputEvent(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn IsPointerEvent(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn IsSinglePointEvent(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QWindowStateChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QWindowStateChangeEvent, accepted: bool) void {
        qtc.QWindowStateChangeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QWindowStateChangeEvent, accepted: bool) void {
        qtc.QWindowStateChangeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWindowStateChangeEvent`
    ///
    /// ` callback: *const fn (self: QWindowStateChangeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QWindowStateChangeEvent, callback: *const fn (QWindowStateChangeEvent, bool) callconv(.c) void) void {
        qtc.QWindowStateChangeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#dtor.QWindowStateChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn Delete(self: QWindowStateChangeEvent) void {
        qtc.QWindowStateChangeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)
pub const QTouchEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTouchEvent,

    pub const _is_QTouchEvent = {};
    pub const _is_QPointerEvent = {};
    pub const _is_QInputEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    pub fn New(eventType: i32) QTouchEvent {
        return .{ .ptr = qtc.QTouchEvent_new(@bitCast(eventType)) };
    }

    /// New2 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` touchPointStates: flag of qeventpoint_enums.State `
    ///
    pub fn New2(eventType: i32, device: anytype, modifiers: i32, touchPointStates: u8) QTouchEvent {
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QTouchEvent_new2(@bitCast(eventType), @ptrCast(device.ptr), @bitCast(modifiers), @bitCast(touchPointStates)) };
    }

    /// New3 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QPointingDevice `
    ///
    pub fn New3(eventType: i32, device: anytype) QTouchEvent {
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QTouchEvent_new3(@bitCast(eventType), @ptrCast(device.ptr)) };
    }

    /// New4 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn New4(eventType: i32, device: anytype, modifiers: i32) QTouchEvent {
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        return .{ .ptr = qtc.QTouchEvent_new4(@bitCast(eventType), @ptrCast(device.ptr), @bitCast(modifiers)) };
    }

    /// New5 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` touchPoints: []QEventPoint `
    ///
    pub fn New5(eventType: i32, device: anytype, modifiers: i32, touchPoints: []QEventPoint) QTouchEvent {
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        const touchPoints_list = qtc.libqt_list{
            .len = touchPoints.len,
            .data = @ptrCast(touchPoints.ptr),
        };
        return .{ .ptr = qtc.QTouchEvent_new5(@bitCast(eventType), @ptrCast(device.ptr), @bitCast(modifiers), touchPoints_list) };
    }

    /// New6 constructs a new QTouchEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` device: QPointingDevice `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` touchPointStates: flag of qeventpoint_enums.State `
    ///
    /// ` touchPoints: []QEventPoint `
    ///
    pub fn New6(eventType: i32, device: anytype, modifiers: i32, touchPointStates: u8, touchPoints: []QEventPoint) QTouchEvent {
        comptime _ = @TypeOf(device)._is_QPointingDevice;
        const touchPoints_list = qtc.libqt_list{
            .len = touchPoints.len,
            .data = @ptrCast(touchPoints.ptr),
        };
        return .{ .ptr = qtc.QTouchEvent_new6(@bitCast(eventType), @ptrCast(device.ptr), @bitCast(modifiers), @bitCast(touchPointStates), touchPoints_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn Clone(self: QTouchEvent) QTouchEvent {
        return .{ .ptr = qtc.QTouchEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QTouchEvent `
    ///
    pub fn OnClone(self: QTouchEvent, callback: *const fn () callconv(.c) QTouchEvent) void {
        qtc.QTouchEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn SuperClone(self: QTouchEvent) QTouchEvent {
        return .{ .ptr = qtc.QTouchEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn Target(self: QTouchEvent) QObject {
        return .{ .ptr = qtc.QTouchEvent_Target(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#touchPointStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qeventpoint_enums.State `
    ///
    pub fn TouchPointStates(self: QTouchEvent) u8 {
        return qtc.QTouchEvent_TouchPointStates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#touchPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TouchPoints(self: QTouchEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QTouchEvent_TouchPoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qtouchevent.TouchPoints: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn IsBeginEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsBeginEvent(self: QTouchEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsBeginEvent` instead
    ///
    pub const QBaseIsBeginEvent = SuperIsBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn SuperIsBeginEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn IsUpdateEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsUpdateEvent(self: QTouchEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsUpdateEvent` instead
    ///
    pub const QBaseIsUpdateEvent = SuperIsUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn SuperIsUpdateEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn IsEndEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEndEvent(self: QTouchEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEndEvent` instead
    ///
    pub const QBaseIsEndEvent = SuperIsEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn SuperIsEndEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn PointingDevice(self: QTouchEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QTouchEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn PointCount(self: QTouchEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` i: isize `
    ///
    pub fn Point(self: QTouchEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QTouchEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("qtouchevent.Points: Memory allocation failed");
        const _data: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn PointById(self: QTouchEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn AllPointsGrabbed(self: QTouchEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn AllPointsAccepted(self: QTouchEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ExclusiveGrabber(self: QTouchEvent, point: anytype) QObject {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` exclusiveGrabber: QObject `
    ///
    pub fn SetExclusiveGrabber(self: QTouchEvent, point: anytype, exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(exclusiveGrabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn ClearPassiveGrabbers(self: QTouchEvent, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn AddPassiveGrabber(self: QTouchEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn RemovePassiveGrabber(self: QTouchEvent, point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(grabber.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn Device(self: QTouchEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn DeviceType(self: QTouchEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: QTouchEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QTouchEvent, modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn Timestamp(self: QTouchEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QTouchEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn Spontaneous(self: QTouchEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn IsAccepted(self: QTouchEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn Accept(self: QTouchEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn Ignore(self: QTouchEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn IsInputEvent(self: QTouchEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn IsPointerEvent(self: QTouchEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn IsSinglePointEvent(self: QTouchEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QTouchEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SetTimestamp(self: QTouchEvent, timestamp: u64) void {
        qtc.QTouchEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `SuperSetTimestamp` instead
    ///
    pub const QBaseSetTimestamp = SuperSetTimestamp;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` timestamp: u64 `
    ///
    pub fn SuperSetTimestamp(self: QTouchEvent, timestamp: u64) void {
        qtc.QTouchEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(timestamp));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouchEvent`
    ///
    /// ` callback: *const fn (self: QTouchEvent, timestamp: u64) callconv(.c) void `
    ///
    pub fn OnSetTimestamp(self: QTouchEvent, callback: *const fn (QTouchEvent, u64) callconv(.c) void) void {
        qtc.QTouchEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QTouchEvent, accepted: bool) void {
        qtc.QTouchEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QTouchEvent, accepted: bool) void {
        qtc.QTouchEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouchEvent`
    ///
    /// ` callback: *const fn (self: QTouchEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QTouchEvent, callback: *const fn (QTouchEvent, bool) callconv(.c) void) void {
        qtc.QTouchEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#dtor.QTouchEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn Delete(self: QTouchEvent) void {
        qtc.QTouchEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html)
pub const QScrollPrepareEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScrollPrepareEvent,

    pub const _is_QScrollPrepareEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QScrollPrepareEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` startPos: QPointF `
    ///
    pub fn New(startPos: anytype) QScrollPrepareEvent {
        comptime _ = @TypeOf(startPos)._is_QPointF;
        return .{ .ptr = qtc.QScrollPrepareEvent_new(@ptrCast(startPos.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn Clone(self: QScrollPrepareEvent) QScrollPrepareEvent {
        return .{ .ptr = qtc.QScrollPrepareEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QScrollPrepareEvent `
    ///
    pub fn OnClone(self: QScrollPrepareEvent, callback: *const fn () callconv(.c) QScrollPrepareEvent) void {
        qtc.QScrollPrepareEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn SuperClone(self: QScrollPrepareEvent) QScrollPrepareEvent {
        return .{ .ptr = qtc.QScrollPrepareEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#startPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn StartPos(self: QScrollPrepareEvent) QPointF {
        return .{ .ptr = qtc.QScrollPrepareEvent_StartPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#viewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn ViewportSize(self: QScrollPrepareEvent) QSizeF {
        return .{ .ptr = qtc.QScrollPrepareEvent_ViewportSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPosRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn ContentPosRange(self: QScrollPrepareEvent) QRectF {
        return .{ .ptr = qtc.QScrollPrepareEvent_ContentPosRange(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn ContentPos(self: QScrollPrepareEvent) QPointF {
        return .{ .ptr = qtc.QScrollPrepareEvent_ContentPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetViewportSize(self: QScrollPrepareEvent, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QScrollPrepareEvent_SetViewportSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPosRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetContentPosRange(self: QScrollPrepareEvent, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QScrollPrepareEvent_SetContentPosRange(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetContentPos(self: QScrollPrepareEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QScrollPrepareEvent_SetContentPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QScrollPrepareEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn Spontaneous(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn IsAccepted(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn Accept(self: QScrollPrepareEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn Ignore(self: QScrollPrepareEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn IsInputEvent(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn IsPointerEvent(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn IsSinglePointEvent(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QScrollPrepareEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QScrollPrepareEvent, accepted: bool) void {
        qtc.QScrollPrepareEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QScrollPrepareEvent, accepted: bool) void {
        qtc.QScrollPrepareEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollPrepareEvent`
    ///
    /// ` callback: *const fn (self: QScrollPrepareEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QScrollPrepareEvent, callback: *const fn (QScrollPrepareEvent, bool) callconv(.c) void) void {
        qtc.QScrollPrepareEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#dtor.QScrollPrepareEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn Delete(self: QScrollPrepareEvent) void {
        qtc.QScrollPrepareEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html)
pub const QScrollEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScrollEvent,

    pub const _is_QScrollEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QScrollEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` contentPos: QPointF `
    ///
    /// ` overshoot: QPointF `
    ///
    /// ` scrollState: qevent_enums.ScrollState `
    ///
    pub fn New(contentPos: anytype, overshoot: anytype, scrollState: i32) QScrollEvent {
        comptime _ = @TypeOf(contentPos)._is_QPointF;
        comptime _ = @TypeOf(overshoot)._is_QPointF;
        return .{ .ptr = qtc.QScrollEvent_new(@ptrCast(contentPos.ptr), @ptrCast(overshoot.ptr), @bitCast(scrollState)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn Clone(self: QScrollEvent) QScrollEvent {
        return .{ .ptr = qtc.QScrollEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QScrollEvent `
    ///
    pub fn OnClone(self: QScrollEvent, callback: *const fn () callconv(.c) QScrollEvent) void {
        qtc.QScrollEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn SuperClone(self: QScrollEvent) QScrollEvent {
        return .{ .ptr = qtc.QScrollEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#contentPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn ContentPos(self: QScrollEvent) QPointF {
        return .{ .ptr = qtc.QScrollEvent_ContentPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#overshootDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn OvershootDistance(self: QScrollEvent) QPointF {
        return .{ .ptr = qtc.QScrollEvent_OvershootDistance(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#scrollState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    /// ## Returns:
    ///
    /// ` qevent_enums.ScrollState `
    ///
    pub fn ScrollState(self: QScrollEvent) i32 {
        return qtc.QScrollEvent_ScrollState(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QScrollEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn Spontaneous(self: QScrollEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn IsAccepted(self: QScrollEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn Accept(self: QScrollEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn Ignore(self: QScrollEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn IsInputEvent(self: QScrollEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn IsPointerEvent(self: QScrollEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn IsSinglePointEvent(self: QScrollEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QScrollEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QScrollEvent, accepted: bool) void {
        qtc.QScrollEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QScrollEvent, accepted: bool) void {
        qtc.QScrollEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollEvent`
    ///
    /// ` callback: *const fn (self: QScrollEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QScrollEvent, callback: *const fn (QScrollEvent, bool) callconv(.c) void) void {
        qtc.QScrollEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#dtor.QScrollEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn Delete(self: QScrollEvent) void {
        qtc.QScrollEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html)
pub const QScreenOrientationChangeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScreenOrientationChangeEvent,

    pub const _is_QScreenOrientationChangeEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QScreenOrientationChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: QScreen `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn New(screen: anytype, orientation: i32) QScreenOrientationChangeEvent {
        comptime _ = @TypeOf(screen)._is_QScreen;
        return .{ .ptr = qtc.QScreenOrientationChangeEvent_new(@ptrCast(screen.ptr), @bitCast(orientation)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn Clone(self: QScreenOrientationChangeEvent) QScreenOrientationChangeEvent {
        return .{ .ptr = qtc.QScreenOrientationChangeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QScreenOrientationChangeEvent `
    ///
    pub fn OnClone(self: QScreenOrientationChangeEvent, callback: *const fn () callconv(.c) QScreenOrientationChangeEvent) void {
        qtc.QScreenOrientationChangeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn SuperClone(self: QScreenOrientationChangeEvent) QScreenOrientationChangeEvent {
        return .{ .ptr = qtc.QScreenOrientationChangeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn Screen(self: QScreenOrientationChangeEvent) QScreen {
        return .{ .ptr = qtc.QScreenOrientationChangeEvent_Screen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn Orientation(self: QScreenOrientationChangeEvent) i32 {
        return qtc.QScreenOrientationChangeEvent_Orientation(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QScreenOrientationChangeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn Spontaneous(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn IsAccepted(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn Accept(self: QScreenOrientationChangeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn Ignore(self: QScreenOrientationChangeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn IsInputEvent(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn IsPointerEvent(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn IsSinglePointEvent(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QScreenOrientationChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QScreenOrientationChangeEvent, accepted: bool) void {
        qtc.QScreenOrientationChangeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QScreenOrientationChangeEvent, accepted: bool) void {
        qtc.QScreenOrientationChangeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreenOrientationChangeEvent`
    ///
    /// ` callback: *const fn (self: QScreenOrientationChangeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QScreenOrientationChangeEvent, callback: *const fn (QScreenOrientationChangeEvent, bool) callconv(.c) void) void {
        qtc.QScreenOrientationChangeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#dtor.QScreenOrientationChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn Delete(self: QScreenOrientationChangeEvent) void {
        qtc.QScreenOrientationChangeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html)
pub const QApplicationStateChangeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QApplicationStateChangeEvent,

    pub const _is_QApplicationStateChangeEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QApplicationStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` state: qnamespace_enums.ApplicationState `
    ///
    pub fn New(state: i32) QApplicationStateChangeEvent {
        return .{ .ptr = qtc.QApplicationStateChangeEvent_new(@bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn Clone(self: QApplicationStateChangeEvent) QApplicationStateChangeEvent {
        return .{ .ptr = qtc.QApplicationStateChangeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QApplicationStateChangeEvent `
    ///
    pub fn OnClone(self: QApplicationStateChangeEvent, callback: *const fn () callconv(.c) QApplicationStateChangeEvent) void {
        qtc.QApplicationStateChangeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn SuperClone(self: QApplicationStateChangeEvent) QApplicationStateChangeEvent {
        return .{ .ptr = qtc.QApplicationStateChangeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#applicationState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ApplicationState `
    ///
    pub fn ApplicationState(self: QApplicationStateChangeEvent) i32 {
        return qtc.QApplicationStateChangeEvent_ApplicationState(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QApplicationStateChangeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn Spontaneous(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn IsAccepted(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn Accept(self: QApplicationStateChangeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn Ignore(self: QApplicationStateChangeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn IsInputEvent(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn IsPointerEvent(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn IsSinglePointEvent(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QApplicationStateChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QApplicationStateChangeEvent, accepted: bool) void {
        qtc.QApplicationStateChangeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QApplicationStateChangeEvent, accepted: bool) void {
        qtc.QApplicationStateChangeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplicationStateChangeEvent`
    ///
    /// ` callback: *const fn (self: QApplicationStateChangeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QApplicationStateChangeEvent, callback: *const fn (QApplicationStateChangeEvent, bool) callconv(.c) void) void {
        qtc.QApplicationStateChangeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#dtor.QApplicationStateChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn Delete(self: QApplicationStateChangeEvent) void {
        qtc.QApplicationStateChangeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html)
pub const QChildWindowEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QChildWindowEvent,

    pub const _is_QChildWindowEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QChildWindowEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` childWindow: QWindow `
    ///
    pub fn New(typeVal: i32, childWindow: anytype) QChildWindowEvent {
        comptime _ = @TypeOf(childWindow)._is_QWindow;
        return .{ .ptr = qtc.QChildWindowEvent_new(@bitCast(typeVal), @ptrCast(childWindow.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn Clone(self: QChildWindowEvent) QChildWindowEvent {
        return .{ .ptr = qtc.QChildWindowEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChildWindowEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QChildWindowEvent `
    ///
    pub fn OnClone(self: QChildWindowEvent, callback: *const fn () callconv(.c) QChildWindowEvent) void {
        qtc.QChildWindowEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn SuperClone(self: QChildWindowEvent) QChildWindowEvent {
        return .{ .ptr = qtc.QChildWindowEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn Child(self: QChildWindowEvent) QWindow {
        return .{ .ptr = qtc.QChildWindowEvent_Child(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QChildWindowEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn Spontaneous(self: QChildWindowEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn IsAccepted(self: QChildWindowEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn Accept(self: QChildWindowEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn Ignore(self: QChildWindowEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn IsInputEvent(self: QChildWindowEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn IsPointerEvent(self: QChildWindowEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn IsSinglePointEvent(self: QChildWindowEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
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
    /// ` self: QChildWindowEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QChildWindowEvent, accepted: bool) void {
        qtc.QChildWindowEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QChildWindowEvent, accepted: bool) void {
        qtc.QChildWindowEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChildWindowEvent`
    ///
    /// ` callback: *const fn (self: QChildWindowEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QChildWindowEvent, callback: *const fn (QChildWindowEvent, bool) callconv(.c) void) void {
        qtc.QChildWindowEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#dtor.QChildWindowEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn Delete(self: QChildWindowEvent) void {
        qtc.QChildWindowEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html)
pub const QInputMethodEvent__Attribute = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QInputMethodEvent__Attribute,

    pub const _is_QInputMethodEvent__Attribute = {};

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
    /// ` val: QVariant `
    ///
    pub fn New(typ: i32, s: i32, l: i32, val: anytype) QInputMethodEvent__Attribute {
        comptime _ = @TypeOf(val)._is_QVariant;
        return .{ .ptr = qtc.QInputMethodEvent__Attribute_new(@bitCast(typ), @bitCast(s), @bitCast(l), @ptrCast(val.ptr)) };
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
    pub fn New2(typ: i32, s: i32, l: i32) QInputMethodEvent__Attribute {
        return .{ .ptr = qtc.QInputMethodEvent__Attribute_new2(@bitCast(typ), @bitCast(s), @bitCast(l)) };
    }

    /// New3 constructs a new QInputMethodEvent::Attribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QInputMethodEvent__Attribute `
    ///
    pub fn New3(param1: anytype) QInputMethodEvent__Attribute {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent__Attribute;
        return .{ .ptr = qtc.QInputMethodEvent__Attribute_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qevent_enums.AttributeType `
    ///
    pub fn Type(self: QInputMethodEvent__Attribute) i32 {
        return qtc.QInputMethodEvent__Attribute_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` type: qevent_enums.AttributeType `
    ///
    pub fn SetType(self: QInputMethodEvent__Attribute, _type: i32) void {
        qtc.QInputMethodEvent__Attribute_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    pub fn Start(self: QInputMethodEvent__Attribute) i32 {
        return qtc.QInputMethodEvent__Attribute_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: QInputMethodEvent__Attribute, start: i32) void {
        qtc.QInputMethodEvent__Attribute_SetStart(@ptrCast(self.ptr), @bitCast(start));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    pub fn Length(self: QInputMethodEvent__Attribute) i32 {
        return qtc.QInputMethodEvent__Attribute_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` length: i32 `
    ///
    pub fn SetLength(self: QInputMethodEvent__Attribute, length: i32) void {
        qtc.QInputMethodEvent__Attribute_SetLength(@ptrCast(self.ptr), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    pub fn Value(self: QInputMethodEvent__Attribute) QVariant {
        return .{ .ptr = qtc.QInputMethodEvent__Attribute_Value(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetValue(self: QInputMethodEvent__Attribute, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QInputMethodEvent__Attribute_SetValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` param1: QInputMethodEvent__Attribute `
    ///
    pub fn OperatorAssign(self: QInputMethodEvent__Attribute, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent__Attribute;
        qtc.QInputMethodEvent__Attribute_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    pub fn Delete(self: QInputMethodEvent__Attribute) void {
        qtc.QInputMethodEvent__Attribute_Delete(@ptrCast(self.ptr));
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
