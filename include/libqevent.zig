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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QInputEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` m_dev: QInputDevice `
    ///
    pub fn new(typeVal: i32, m_dev: anytype) QInputEvent {
        comptime _ = @TypeOf(m_dev)._is_QInputDevice;
        return .{ .ptr = qtc.QInputEvent_new(@bitCast(typeVal), @ptrCast(m_dev.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QInputEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` m_dev: QInputDevice `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new2(typeVal: i32, m_dev: anytype, _modifiers: i32) QInputEvent {
        comptime _ = @TypeOf(m_dev)._is_QInputDevice;
        return .{ .ptr = qtc.QInputEvent_new2(@bitCast(typeVal), @ptrCast(m_dev.ptr), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn clone(self: QInputEvent) QInputEvent {
        return .{ .ptr = qtc.QInputEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QInputEvent, callback: *const fn () callconv(.c) QInputEvent) void {
        qtc.QInputEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn superClone(self: QInputEvent) QInputEvent {
        return .{ .ptr = qtc.QInputEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn device(self: QInputEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QInputEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QInputEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QInputEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn timestamp(self: QInputEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QInputEvent, _timestamp: u64) void {
        qtc.QInputEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QInputEvent, callback: *const fn (QInputEvent, u64) callconv(.c) void) void {
        qtc.QInputEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QInputEvent, _timestamp: u64) void {
        qtc.QInputEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QInputEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn spontaneous(self: QInputEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn isAccepted(self: QInputEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn accept(self: QInputEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn ignore(self: QInputEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn isInputEvent(self: QInputEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn isPointerEvent(self: QInputEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputEvent `
    ///
    pub fn isSinglePointEvent(self: QInputEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QInputEvent, accepted: bool) void {
        qtc.QInputEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QInputEvent, accepted: bool) void {
        qtc.QInputEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QInputEvent, callback: *const fn (QInputEvent, bool) callconv(.c) void) void {
        qtc.QInputEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#dtor.QInputEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QInputEvent `
    ///
    pub fn delete(self: QInputEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPointerEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` dev: QPointingDevice `
    ///
    pub fn new(typeVal: i32, dev: anytype) QPointerEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        return .{ .ptr = qtc.QPointerEvent_new(@bitCast(typeVal), @ptrCast(dev.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPointerEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new2(typeVal: i32, dev: anytype, _modifiers: i32) QPointerEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        return .{ .ptr = qtc.QPointerEvent_new2(@bitCast(typeVal), @ptrCast(dev.ptr), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPointerEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _points: []QEventPoint `
    ///
    pub fn new3(typeVal: i32, dev: anytype, _modifiers: i32, _points: []QEventPoint) QPointerEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        const points_list = qtc.libqt_list{
            .len = _points.len,
            .data = @ptrCast(_points.ptr),
        };
        return .{ .ptr = qtc.QPointerEvent_new3(@bitCast(typeVal), @ptrCast(dev.ptr), @bitCast(_modifiers), points_list) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn clone(self: QPointerEvent) QPointerEvent {
        return .{ .ptr = qtc.QPointerEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QPointerEvent, callback: *const fn () callconv(.c) QPointerEvent) void {
        qtc.QPointerEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn superClone(self: QPointerEvent) QPointerEvent {
        return .{ .ptr = qtc.QPointerEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointingDevice` instead
    ///
    pub const PointingDevice = pointingDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn pointingDevice(self: QPointerEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointerType` instead
    ///
    pub const PointerType = pointerType;

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
    pub fn pointerType(self: QPointerEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QPointerEvent, _timestamp: u64) void {
        qtc.QPointerEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QPointerEvent, callback: *const fn (QPointerEvent, u64) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QPointerEvent, _timestamp: u64) void {
        qtc.QPointerEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `pointCount` instead
    ///
    pub const PointCount = pointCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn pointCount(self: QPointerEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` i: isize `
    ///
    pub fn point(self: QPointerEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn points(self: QPointerEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QPointerEvent.points: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointById` instead
    ///
    pub const PointById = pointById;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` id: i32 `
    ///
    pub fn pointById(self: QPointerEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `allPointsGrabbed` instead
    ///
    pub const AllPointsGrabbed = allPointsGrabbed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn allPointsGrabbed(self: QPointerEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBeginEvent` instead
    ///
    pub const IsBeginEvent = isBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn isBeginEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsBeginEvent` instead
    ///
    pub const OnIsBeginEvent = onIsBeginEvent;

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
    pub fn onIsBeginEvent(self: QPointerEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsBeginEvent` instead
    ///
    pub const SuperIsBeginEvent = superIsBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn superIsBeginEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUpdateEvent` instead
    ///
    pub const IsUpdateEvent = isUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn isUpdateEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsUpdateEvent` instead
    ///
    pub const OnIsUpdateEvent = onIsUpdateEvent;

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
    pub fn onIsUpdateEvent(self: QPointerEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsUpdateEvent` instead
    ///
    pub const SuperIsUpdateEvent = superIsUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn superIsUpdateEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEndEvent` instead
    ///
    pub const IsEndEvent = isEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn isEndEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEndEvent` instead
    ///
    pub const OnIsEndEvent = onIsEndEvent;

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
    pub fn onIsEndEvent(self: QPointerEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEndEvent` instead
    ///
    pub const SuperIsEndEvent = superIsEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn superIsEndEvent(self: QPointerEvent) bool {
        return qtc.QPointerEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allPointsAccepted` instead
    ///
    pub const AllPointsAccepted = allPointsAccepted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn allPointsAccepted(self: QPointerEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QPointerEvent, accepted: bool) void {
        qtc.QPointerEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QPointerEvent, callback: *const fn (QPointerEvent, bool) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QPointerEvent, accepted: bool) void {
        qtc.QPointerEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `exclusiveGrabber` instead
    ///
    pub const ExclusiveGrabber = exclusiveGrabber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn exclusiveGrabber(self: QPointerEvent, _point: anytype) QObject {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusiveGrabber` instead
    ///
    pub const SetExclusiveGrabber = setExclusiveGrabber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusiveGrabber(self: QPointerEvent, _point: anytype, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `clearPassiveGrabbers` instead
    ///
    pub const ClearPassiveGrabbers = clearPassiveGrabbers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn clearPassiveGrabbers(self: QPointerEvent, _point: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(_point.ptr));
    }

    /// ### DEPRECATED: Use `addPassiveGrabber` instead
    ///
    pub const AddPassiveGrabber = addPassiveGrabber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn addPassiveGrabber(self: QPointerEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `removePassiveGrabber` instead
    ///
    pub const RemovePassiveGrabber = removePassiveGrabber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn removePassiveGrabber(self: QPointerEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn device(self: QPointerEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QPointerEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QPointerEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QPointerEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn timestamp(self: QPointerEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QPointerEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn spontaneous(self: QPointerEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn isAccepted(self: QPointerEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn accept(self: QPointerEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn ignore(self: QPointerEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn isInputEvent(self: QPointerEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn isPointerEvent(self: QPointerEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn isSinglePointEvent(self: QPointerEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#dtor.QPointerEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPointerEvent `
    ///
    pub fn delete(self: QPointerEvent) void {
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

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn clone(self: QSinglePointEvent) QSinglePointEvent {
        return .{ .ptr = qtc.QSinglePointEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

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
    pub fn button(self: QSinglePointEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QSinglePointEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn position(self: QSinglePointEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePosition` instead
    ///
    pub const ScenePosition = scenePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn scenePosition(self: QSinglePointEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPosition` instead
    ///
    pub const GlobalPosition = globalPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn globalPosition(self: QSinglePointEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isBeginEvent` instead
    ///
    pub const IsBeginEvent = isBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn isBeginEvent(self: QSinglePointEvent) bool {
        return qtc.QSinglePointEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUpdateEvent` instead
    ///
    pub const IsUpdateEvent = isUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn isUpdateEvent(self: QSinglePointEvent) bool {
        return qtc.QSinglePointEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEndEvent` instead
    ///
    pub const IsEndEvent = isEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn isEndEvent(self: QSinglePointEvent) bool {
        return qtc.QSinglePointEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exclusivePointGrabber` instead
    ///
    pub const ExclusivePointGrabber = exclusivePointGrabber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn exclusivePointGrabber(self: QSinglePointEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusivePointGrabber` instead
    ///
    pub const SetExclusivePointGrabber = setExclusivePointGrabber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusivePointGrabber(self: QSinglePointEvent, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `pointingDevice` instead
    ///
    pub const PointingDevice = pointingDevice;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn pointingDevice(self: QSinglePointEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointerType` instead
    ///
    pub const PointerType = pointerType;

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
    pub fn pointerType(self: QSinglePointEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QSinglePointEvent, _timestamp: u64) void {
        qtc.QPointerEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `pointCount` instead
    ///
    pub const PointCount = pointCount;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn pointCount(self: QSinglePointEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

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
    pub fn point(self: QSinglePointEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

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
    pub fn points(self: QSinglePointEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QSinglePointEvent.points: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointById` instead
    ///
    pub const PointById = pointById;

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
    pub fn pointById(self: QSinglePointEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `allPointsGrabbed` instead
    ///
    pub const AllPointsGrabbed = allPointsGrabbed;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn allPointsGrabbed(self: QSinglePointEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allPointsAccepted` instead
    ///
    pub const AllPointsAccepted = allPointsAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn allPointsAccepted(self: QSinglePointEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QSinglePointEvent, accepted: bool) void {
        qtc.QPointerEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `exclusiveGrabber` instead
    ///
    pub const ExclusiveGrabber = exclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn exclusiveGrabber(self: QSinglePointEvent, _point: anytype) QObject {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusiveGrabber` instead
    ///
    pub const SetExclusiveGrabber = setExclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusiveGrabber(self: QSinglePointEvent, _point: anytype, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `clearPassiveGrabbers` instead
    ///
    pub const ClearPassiveGrabbers = clearPassiveGrabbers;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn clearPassiveGrabbers(self: QSinglePointEvent, _point: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(_point.ptr));
    }

    /// ### DEPRECATED: Use `addPassiveGrabber` instead
    ///
    pub const AddPassiveGrabber = addPassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn addPassiveGrabber(self: QSinglePointEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `removePassiveGrabber` instead
    ///
    pub const RemovePassiveGrabber = removePassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn removePassiveGrabber(self: QSinglePointEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn device(self: QSinglePointEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QSinglePointEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QSinglePointEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QSinglePointEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn timestamp(self: QSinglePointEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QSinglePointEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn spontaneous(self: QSinglePointEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn isAccepted(self: QSinglePointEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn accept(self: QSinglePointEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn ignore(self: QSinglePointEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn isInputEvent(self: QSinglePointEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn isPointerEvent(self: QSinglePointEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn isSinglePointEvent(self: QSinglePointEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#dtor.QSinglePointEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSinglePointEvent `
    ///
    pub fn delete(self: QSinglePointEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QEnterEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    pub fn new(_localPos: anytype, scenePos: anytype, _globalPos: anytype) QEnterEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        return .{ .ptr = qtc.QEnterEvent_new(@ptrCast(_localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QEnterEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new2(_localPos: anytype, scenePos: anytype, _globalPos: anytype, _device: anytype) QEnterEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QEnterEvent_new2(@ptrCast(_localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn clone(self: QEnterEvent) QEnterEvent {
        return .{ .ptr = qtc.QEnterEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QEnterEvent, callback: *const fn () callconv(.c) QEnterEvent) void {
        qtc.QEnterEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn superClone(self: QEnterEvent) QEnterEvent {
        return .{ .ptr = qtc.QEnterEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn pos(self: QEnterEvent) QPoint {
        return .{ .ptr = qtc.QEnterEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPos` instead
    ///
    pub const GlobalPos = globalPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn globalPos(self: QEnterEvent) QPoint {
        return .{ .ptr = qtc.QEnterEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn x(self: QEnterEvent) i32 {
        return qtc.QEnterEvent_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn y(self: QEnterEvent) i32 {
        return qtc.QEnterEvent_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalX` instead
    ///
    pub const GlobalX = globalX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn globalX(self: QEnterEvent) i32 {
        return qtc.QEnterEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalY` instead
    ///
    pub const GlobalY = globalY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn globalY(self: QEnterEvent) i32 {
        return qtc.QEnterEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `localPos` instead
    ///
    pub const LocalPos = localPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#localPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn localPos(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QEnterEvent_LocalPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowPos` instead
    ///
    pub const WindowPos = windowPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#windowPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn windowPos(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QEnterEvent_WindowPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn screenPos(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QEnterEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

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
    pub fn button(self: QEnterEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QEnterEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn position(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePosition` instead
    ///
    pub const ScenePosition = scenePosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn scenePosition(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPosition` instead
    ///
    pub const GlobalPosition = globalPosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn globalPosition(self: QEnterEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `exclusivePointGrabber` instead
    ///
    pub const ExclusivePointGrabber = exclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn exclusivePointGrabber(self: QEnterEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusivePointGrabber` instead
    ///
    pub const SetExclusivePointGrabber = setExclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusivePointGrabber(self: QEnterEvent, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `pointingDevice` instead
    ///
    pub const PointingDevice = pointingDevice;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn pointingDevice(self: QEnterEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointerType` instead
    ///
    pub const PointerType = pointerType;

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
    pub fn pointerType(self: QEnterEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointCount` instead
    ///
    pub const PointCount = pointCount;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn pointCount(self: QEnterEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

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
    pub fn point(self: QEnterEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

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
    pub fn points(self: QEnterEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QEnterEvent.points: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointById` instead
    ///
    pub const PointById = pointById;

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
    pub fn pointById(self: QEnterEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `allPointsGrabbed` instead
    ///
    pub const AllPointsGrabbed = allPointsGrabbed;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn allPointsGrabbed(self: QEnterEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allPointsAccepted` instead
    ///
    pub const AllPointsAccepted = allPointsAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn allPointsAccepted(self: QEnterEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exclusiveGrabber` instead
    ///
    pub const ExclusiveGrabber = exclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn exclusiveGrabber(self: QEnterEvent, _point: anytype) QObject {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusiveGrabber` instead
    ///
    pub const SetExclusiveGrabber = setExclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusiveGrabber(self: QEnterEvent, _point: anytype, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `clearPassiveGrabbers` instead
    ///
    pub const ClearPassiveGrabbers = clearPassiveGrabbers;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn clearPassiveGrabbers(self: QEnterEvent, _point: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(_point.ptr));
    }

    /// ### DEPRECATED: Use `addPassiveGrabber` instead
    ///
    pub const AddPassiveGrabber = addPassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn addPassiveGrabber(self: QEnterEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `removePassiveGrabber` instead
    ///
    pub const RemovePassiveGrabber = removePassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn removePassiveGrabber(self: QEnterEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn device(self: QEnterEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QEnterEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QEnterEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QEnterEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn timestamp(self: QEnterEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QEnterEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn spontaneous(self: QEnterEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn isAccepted(self: QEnterEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn accept(self: QEnterEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn ignore(self: QEnterEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn isInputEvent(self: QEnterEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn isPointerEvent(self: QEnterEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn isSinglePointEvent(self: QEnterEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `isBeginEvent` instead
    ///
    pub const IsBeginEvent = isBeginEvent;

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
    pub fn isBeginEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsBeginEvent` instead
    ///
    pub const SuperIsBeginEvent = superIsBeginEvent;

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
    pub fn superIsBeginEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsBeginEvent` instead
    ///
    pub const OnIsBeginEvent = onIsBeginEvent;

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
    pub fn onIsBeginEvent(self: QEnterEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isUpdateEvent` instead
    ///
    pub const IsUpdateEvent = isUpdateEvent;

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
    pub fn isUpdateEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsUpdateEvent` instead
    ///
    pub const SuperIsUpdateEvent = superIsUpdateEvent;

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
    pub fn superIsUpdateEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsUpdateEvent` instead
    ///
    pub const OnIsUpdateEvent = onIsUpdateEvent;

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
    pub fn onIsUpdateEvent(self: QEnterEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEndEvent` instead
    ///
    pub const IsEndEvent = isEndEvent;

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
    pub fn isEndEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEndEvent` instead
    ///
    pub const SuperIsEndEvent = superIsEndEvent;

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
    pub fn superIsEndEvent(self: QEnterEvent) bool {
        return qtc.QEnterEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEndEvent` instead
    ///
    pub const OnIsEndEvent = onIsEndEvent;

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
    pub fn onIsEndEvent(self: QEnterEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QEnterEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QEnterEvent, _timestamp: u64) void {
        qtc.QEnterEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QEnterEvent, _timestamp: u64) void {
        qtc.QEnterEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QEnterEvent, callback: *const fn (QEnterEvent, u64) callconv(.c) void) void {
        qtc.QEnterEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QEnterEvent, accepted: bool) void {
        qtc.QEnterEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QEnterEvent, accepted: bool) void {
        qtc.QEnterEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QEnterEvent, callback: *const fn (QEnterEvent, bool) callconv(.c) void) void {
        qtc.QEnterEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#dtor.QEnterEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QEnterEvent `
    ///
    pub fn delete(self: QEnterEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMouseEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new(typeVal: i32, _localPos: anytype, _button: i32, _buttons: i32, _modifiers: i32) QMouseEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        return .{ .ptr = qtc.QMouseEvent_new(@bitCast(typeVal), @ptrCast(_localPos.ptr), @bitCast(_button), @bitCast(_buttons), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMouseEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new2(typeVal: i32, _localPos: anytype, _globalPos: anytype, _button: i32, _buttons: i32, _modifiers: i32) QMouseEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        return .{ .ptr = qtc.QMouseEvent_new2(@bitCast(typeVal), @ptrCast(_localPos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_button), @bitCast(_buttons), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMouseEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new3(typeVal: i32, _localPos: anytype, scenePos: anytype, _globalPos: anytype, _button: i32, _buttons: i32, _modifiers: i32) QMouseEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        return .{ .ptr = qtc.QMouseEvent_new3(@bitCast(typeVal), @ptrCast(_localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_button), @bitCast(_buttons), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMouseEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _source: qnamespace_enums.MouseEventSource `
    ///
    pub fn new4(typeVal: i32, _localPos: anytype, scenePos: anytype, _globalPos: anytype, _button: i32, _buttons: i32, _modifiers: i32, _source: i32) QMouseEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        return .{ .ptr = qtc.QMouseEvent_new4(@bitCast(typeVal), @ptrCast(_localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_button), @bitCast(_buttons), @bitCast(_modifiers), @bitCast(_source)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QMouseEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new5(typeVal: i32, _localPos: anytype, _button: i32, _buttons: i32, _modifiers: i32, _device: anytype) QMouseEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QMouseEvent_new5(@bitCast(typeVal), @ptrCast(_localPos.ptr), @bitCast(_button), @bitCast(_buttons), @bitCast(_modifiers), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QMouseEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new6(typeVal: i32, _localPos: anytype, _globalPos: anytype, _button: i32, _buttons: i32, _modifiers: i32, _device: anytype) QMouseEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QMouseEvent_new6(@bitCast(typeVal), @ptrCast(_localPos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_button), @bitCast(_buttons), @bitCast(_modifiers), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QMouseEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new7(typeVal: i32, _localPos: anytype, scenePos: anytype, _globalPos: anytype, _button: i32, _buttons: i32, _modifiers: i32, _device: anytype) QMouseEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QMouseEvent_new7(@bitCast(typeVal), @ptrCast(_localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_button), @bitCast(_buttons), @bitCast(_modifiers), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QMouseEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _source: qnamespace_enums.MouseEventSource `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new8(typeVal: i32, _localPos: anytype, scenePos: anytype, _globalPos: anytype, _button: i32, _buttons: i32, _modifiers: i32, _source: i32, _device: anytype) QMouseEvent {
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QMouseEvent_new8(@bitCast(typeVal), @ptrCast(_localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_button), @bitCast(_buttons), @bitCast(_modifiers), @bitCast(_source), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn clone(self: QMouseEvent) QMouseEvent {
        return .{ .ptr = qtc.QMouseEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QMouseEvent, callback: *const fn () callconv(.c) QMouseEvent) void {
        qtc.QMouseEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn superClone(self: QMouseEvent) QMouseEvent {
        return .{ .ptr = qtc.QMouseEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn pos(self: QMouseEvent) QPoint {
        return .{ .ptr = qtc.QMouseEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPos` instead
    ///
    pub const GlobalPos = globalPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn globalPos(self: QMouseEvent) QPoint {
        return .{ .ptr = qtc.QMouseEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn x(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn y(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalX` instead
    ///
    pub const GlobalX = globalX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn globalX(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalY` instead
    ///
    pub const GlobalY = globalY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn globalY(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `localPos` instead
    ///
    pub const LocalPos = localPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#localPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn localPos(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QMouseEvent_LocalPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowPos` instead
    ///
    pub const WindowPos = windowPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#windowPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn windowPos(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QMouseEvent_WindowPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn screenPos(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QMouseEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

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
    pub fn source(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_Source(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QMouseEvent) i32 {
        return qtc.QMouseEvent_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

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
    pub fn button(self: QMouseEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QMouseEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn position(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePosition` instead
    ///
    pub const ScenePosition = scenePosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn scenePosition(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPosition` instead
    ///
    pub const GlobalPosition = globalPosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn globalPosition(self: QMouseEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `exclusivePointGrabber` instead
    ///
    pub const ExclusivePointGrabber = exclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn exclusivePointGrabber(self: QMouseEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusivePointGrabber` instead
    ///
    pub const SetExclusivePointGrabber = setExclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusivePointGrabber(self: QMouseEvent, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `pointingDevice` instead
    ///
    pub const PointingDevice = pointingDevice;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn pointingDevice(self: QMouseEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointerType` instead
    ///
    pub const PointerType = pointerType;

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
    pub fn pointerType(self: QMouseEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointCount` instead
    ///
    pub const PointCount = pointCount;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn pointCount(self: QMouseEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

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
    pub fn point(self: QMouseEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

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
    pub fn points(self: QMouseEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QMouseEvent.points: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointById` instead
    ///
    pub const PointById = pointById;

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
    pub fn pointById(self: QMouseEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `allPointsGrabbed` instead
    ///
    pub const AllPointsGrabbed = allPointsGrabbed;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn allPointsGrabbed(self: QMouseEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allPointsAccepted` instead
    ///
    pub const AllPointsAccepted = allPointsAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn allPointsAccepted(self: QMouseEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exclusiveGrabber` instead
    ///
    pub const ExclusiveGrabber = exclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn exclusiveGrabber(self: QMouseEvent, _point: anytype) QObject {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusiveGrabber` instead
    ///
    pub const SetExclusiveGrabber = setExclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusiveGrabber(self: QMouseEvent, _point: anytype, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `clearPassiveGrabbers` instead
    ///
    pub const ClearPassiveGrabbers = clearPassiveGrabbers;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn clearPassiveGrabbers(self: QMouseEvent, _point: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(_point.ptr));
    }

    /// ### DEPRECATED: Use `addPassiveGrabber` instead
    ///
    pub const AddPassiveGrabber = addPassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn addPassiveGrabber(self: QMouseEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `removePassiveGrabber` instead
    ///
    pub const RemovePassiveGrabber = removePassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn removePassiveGrabber(self: QMouseEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn device(self: QMouseEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QMouseEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QMouseEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QMouseEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn timestamp(self: QMouseEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QMouseEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn spontaneous(self: QMouseEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn isAccepted(self: QMouseEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn accept(self: QMouseEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn ignore(self: QMouseEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn isInputEvent(self: QMouseEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn isPointerEvent(self: QMouseEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn isSinglePointEvent(self: QMouseEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `isBeginEvent` instead
    ///
    pub const IsBeginEvent = isBeginEvent;

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
    pub fn isBeginEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsBeginEvent` instead
    ///
    pub const SuperIsBeginEvent = superIsBeginEvent;

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
    pub fn superIsBeginEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsBeginEvent` instead
    ///
    pub const OnIsBeginEvent = onIsBeginEvent;

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
    pub fn onIsBeginEvent(self: QMouseEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isUpdateEvent` instead
    ///
    pub const IsUpdateEvent = isUpdateEvent;

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
    pub fn isUpdateEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsUpdateEvent` instead
    ///
    pub const SuperIsUpdateEvent = superIsUpdateEvent;

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
    pub fn superIsUpdateEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsUpdateEvent` instead
    ///
    pub const OnIsUpdateEvent = onIsUpdateEvent;

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
    pub fn onIsUpdateEvent(self: QMouseEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEndEvent` instead
    ///
    pub const IsEndEvent = isEndEvent;

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
    pub fn isEndEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEndEvent` instead
    ///
    pub const SuperIsEndEvent = superIsEndEvent;

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
    pub fn superIsEndEvent(self: QMouseEvent) bool {
        return qtc.QMouseEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEndEvent` instead
    ///
    pub const OnIsEndEvent = onIsEndEvent;

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
    pub fn onIsEndEvent(self: QMouseEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QMouseEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QMouseEvent, _timestamp: u64) void {
        qtc.QMouseEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QMouseEvent, _timestamp: u64) void {
        qtc.QMouseEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QMouseEvent, callback: *const fn (QMouseEvent, u64) callconv(.c) void) void {
        qtc.QMouseEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QMouseEvent, accepted: bool) void {
        qtc.QMouseEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QMouseEvent, accepted: bool) void {
        qtc.QMouseEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QMouseEvent, callback: *const fn (QMouseEvent, bool) callconv(.c) void) void {
        qtc.QMouseEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#dtor.QMouseEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMouseEvent `
    ///
    pub fn delete(self: QMouseEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHoverEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _oldPos: QPointF `
    ///
    pub fn new(typeVal: i32, scenePos: anytype, _globalPos: anytype, _oldPos: anytype) QHoverEvent {
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_oldPos)._is_QPointF;
        return .{ .ptr = qtc.QHoverEvent_new(@bitCast(typeVal), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @ptrCast(_oldPos.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHoverEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _pos: QPointF `
    ///
    /// ` _oldPos: QPointF `
    ///
    pub fn new2(typeVal: i32, _pos: anytype, _oldPos: anytype) QHoverEvent {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        comptime _ = @TypeOf(_oldPos)._is_QPointF;
        return .{ .ptr = qtc.QHoverEvent_new2(@bitCast(typeVal), @ptrCast(_pos.ptr), @ptrCast(_oldPos.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QHoverEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _oldPos: QPointF `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new3(typeVal: i32, scenePos: anytype, _globalPos: anytype, _oldPos: anytype, _modifiers: i32) QHoverEvent {
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_oldPos)._is_QPointF;
        return .{ .ptr = qtc.QHoverEvent_new3(@bitCast(typeVal), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @ptrCast(_oldPos.ptr), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QHoverEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _oldPos: QPointF `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new4(typeVal: i32, scenePos: anytype, _globalPos: anytype, _oldPos: anytype, _modifiers: i32, _device: anytype) QHoverEvent {
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_oldPos)._is_QPointF;
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QHoverEvent_new4(@bitCast(typeVal), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @ptrCast(_oldPos.ptr), @bitCast(_modifiers), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QHoverEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _pos: QPointF `
    ///
    /// ` _oldPos: QPointF `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new5(typeVal: i32, _pos: anytype, _oldPos: anytype, _modifiers: i32) QHoverEvent {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        comptime _ = @TypeOf(_oldPos)._is_QPointF;
        return .{ .ptr = qtc.QHoverEvent_new5(@bitCast(typeVal), @ptrCast(_pos.ptr), @ptrCast(_oldPos.ptr), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QHoverEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _pos: QPointF `
    ///
    /// ` _oldPos: QPointF `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new6(typeVal: i32, _pos: anytype, _oldPos: anytype, _modifiers: i32, _device: anytype) QHoverEvent {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        comptime _ = @TypeOf(_oldPos)._is_QPointF;
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QHoverEvent_new6(@bitCast(typeVal), @ptrCast(_pos.ptr), @ptrCast(_oldPos.ptr), @bitCast(_modifiers), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn clone(self: QHoverEvent) QHoverEvent {
        return .{ .ptr = qtc.QHoverEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QHoverEvent, callback: *const fn () callconv(.c) QHoverEvent) void {
        qtc.QHoverEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn superClone(self: QHoverEvent) QHoverEvent {
        return .{ .ptr = qtc.QHoverEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn pos(self: QHoverEvent) QPoint {
        return .{ .ptr = qtc.QHoverEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `posF` instead
    ///
    pub const PosF = posF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn posF(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QHoverEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isUpdateEvent` instead
    ///
    pub const IsUpdateEvent = isUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn isUpdateEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsUpdateEvent` instead
    ///
    pub const OnIsUpdateEvent = onIsUpdateEvent;

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
    pub fn onIsUpdateEvent(self: QHoverEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsUpdateEvent` instead
    ///
    pub const SuperIsUpdateEvent = superIsUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn superIsUpdateEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `oldPos` instead
    ///
    pub const OldPos = oldPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn oldPos(self: QHoverEvent) QPoint {
        return .{ .ptr = qtc.QHoverEvent_OldPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `oldPosF` instead
    ///
    pub const OldPosF = oldPosF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPosF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn oldPosF(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QHoverEvent_OldPosF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

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
    pub fn button(self: QHoverEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QHoverEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn position(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePosition` instead
    ///
    pub const ScenePosition = scenePosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn scenePosition(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPosition` instead
    ///
    pub const GlobalPosition = globalPosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn globalPosition(self: QHoverEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `exclusivePointGrabber` instead
    ///
    pub const ExclusivePointGrabber = exclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn exclusivePointGrabber(self: QHoverEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusivePointGrabber` instead
    ///
    pub const SetExclusivePointGrabber = setExclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusivePointGrabber(self: QHoverEvent, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `pointingDevice` instead
    ///
    pub const PointingDevice = pointingDevice;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn pointingDevice(self: QHoverEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointerType` instead
    ///
    pub const PointerType = pointerType;

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
    pub fn pointerType(self: QHoverEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointCount` instead
    ///
    pub const PointCount = pointCount;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn pointCount(self: QHoverEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

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
    pub fn point(self: QHoverEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

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
    pub fn points(self: QHoverEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QHoverEvent.points: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointById` instead
    ///
    pub const PointById = pointById;

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
    pub fn pointById(self: QHoverEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `allPointsGrabbed` instead
    ///
    pub const AllPointsGrabbed = allPointsGrabbed;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn allPointsGrabbed(self: QHoverEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allPointsAccepted` instead
    ///
    pub const AllPointsAccepted = allPointsAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn allPointsAccepted(self: QHoverEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exclusiveGrabber` instead
    ///
    pub const ExclusiveGrabber = exclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn exclusiveGrabber(self: QHoverEvent, _point: anytype) QObject {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusiveGrabber` instead
    ///
    pub const SetExclusiveGrabber = setExclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusiveGrabber(self: QHoverEvent, _point: anytype, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `clearPassiveGrabbers` instead
    ///
    pub const ClearPassiveGrabbers = clearPassiveGrabbers;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn clearPassiveGrabbers(self: QHoverEvent, _point: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(_point.ptr));
    }

    /// ### DEPRECATED: Use `addPassiveGrabber` instead
    ///
    pub const AddPassiveGrabber = addPassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn addPassiveGrabber(self: QHoverEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `removePassiveGrabber` instead
    ///
    pub const RemovePassiveGrabber = removePassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn removePassiveGrabber(self: QHoverEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn device(self: QHoverEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QHoverEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QHoverEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QHoverEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn timestamp(self: QHoverEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QHoverEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn spontaneous(self: QHoverEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn isAccepted(self: QHoverEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn accept(self: QHoverEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn ignore(self: QHoverEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn isInputEvent(self: QHoverEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn isPointerEvent(self: QHoverEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn isSinglePointEvent(self: QHoverEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `isBeginEvent` instead
    ///
    pub const IsBeginEvent = isBeginEvent;

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
    pub fn isBeginEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsBeginEvent` instead
    ///
    pub const SuperIsBeginEvent = superIsBeginEvent;

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
    pub fn superIsBeginEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsBeginEvent` instead
    ///
    pub const OnIsBeginEvent = onIsBeginEvent;

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
    pub fn onIsBeginEvent(self: QHoverEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEndEvent` instead
    ///
    pub const IsEndEvent = isEndEvent;

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
    pub fn isEndEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEndEvent` instead
    ///
    pub const SuperIsEndEvent = superIsEndEvent;

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
    pub fn superIsEndEvent(self: QHoverEvent) bool {
        return qtc.QHoverEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEndEvent` instead
    ///
    pub const OnIsEndEvent = onIsEndEvent;

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
    pub fn onIsEndEvent(self: QHoverEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QHoverEvent, _timestamp: u64) void {
        qtc.QHoverEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QHoverEvent, _timestamp: u64) void {
        qtc.QHoverEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QHoverEvent, callback: *const fn (QHoverEvent, u64) callconv(.c) void) void {
        qtc.QHoverEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QHoverEvent, accepted: bool) void {
        qtc.QHoverEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QHoverEvent, accepted: bool) void {
        qtc.QHoverEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QHoverEvent, callback: *const fn (QHoverEvent, bool) callconv(.c) void) void {
        qtc.QHoverEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#dtor.QHoverEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHoverEvent `
    ///
    pub fn delete(self: QHoverEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWheelEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _pixelDelta: QPoint `
    ///
    /// ` _angleDelta: QPoint `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _phase: qnamespace_enums.ScrollPhase `
    ///
    /// ` _inverted: bool `
    ///
    pub fn new(_pos: anytype, _globalPos: anytype, _pixelDelta: anytype, _angleDelta: anytype, _buttons: i32, _modifiers: i32, _phase: i32, _inverted: bool) QWheelEvent {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_pixelDelta)._is_QPoint;
        comptime _ = @TypeOf(_angleDelta)._is_QPoint;
        return .{ .ptr = qtc.QWheelEvent_new(@ptrCast(_pos.ptr), @ptrCast(_globalPos.ptr), @ptrCast(_pixelDelta.ptr), @ptrCast(_angleDelta.ptr), @bitCast(_buttons), @bitCast(_modifiers), @bitCast(_phase), _inverted) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWheelEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _pixelDelta: QPoint `
    ///
    /// ` _angleDelta: QPoint `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _phase: qnamespace_enums.ScrollPhase `
    ///
    /// ` _inverted: bool `
    ///
    /// ` _source: qnamespace_enums.MouseEventSource `
    ///
    pub fn new2(_pos: anytype, _globalPos: anytype, _pixelDelta: anytype, _angleDelta: anytype, _buttons: i32, _modifiers: i32, _phase: i32, _inverted: bool, _source: i32) QWheelEvent {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_pixelDelta)._is_QPoint;
        comptime _ = @TypeOf(_angleDelta)._is_QPoint;
        return .{ .ptr = qtc.QWheelEvent_new2(@ptrCast(_pos.ptr), @ptrCast(_globalPos.ptr), @ptrCast(_pixelDelta.ptr), @ptrCast(_angleDelta.ptr), @bitCast(_buttons), @bitCast(_modifiers), @bitCast(_phase), _inverted, @bitCast(_source)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QWheelEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _pixelDelta: QPoint `
    ///
    /// ` _angleDelta: QPoint `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _phase: qnamespace_enums.ScrollPhase `
    ///
    /// ` _inverted: bool `
    ///
    /// ` _source: qnamespace_enums.MouseEventSource `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new3(_pos: anytype, _globalPos: anytype, _pixelDelta: anytype, _angleDelta: anytype, _buttons: i32, _modifiers: i32, _phase: i32, _inverted: bool, _source: i32, _device: anytype) QWheelEvent {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_pixelDelta)._is_QPoint;
        comptime _ = @TypeOf(_angleDelta)._is_QPoint;
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QWheelEvent_new3(@ptrCast(_pos.ptr), @ptrCast(_globalPos.ptr), @ptrCast(_pixelDelta.ptr), @ptrCast(_angleDelta.ptr), @bitCast(_buttons), @bitCast(_modifiers), @bitCast(_phase), _inverted, @bitCast(_source), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn clone(self: QWheelEvent) QWheelEvent {
        return .{ .ptr = qtc.QWheelEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QWheelEvent, callback: *const fn () callconv(.c) QWheelEvent) void {
        qtc.QWheelEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn superClone(self: QWheelEvent) QWheelEvent {
        return .{ .ptr = qtc.QWheelEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pixelDelta` instead
    ///
    pub const PixelDelta = pixelDelta;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#pixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn pixelDelta(self: QWheelEvent) QPoint {
        return .{ .ptr = qtc.QWheelEvent_PixelDelta(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `angleDelta` instead
    ///
    pub const AngleDelta = angleDelta;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#angleDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn angleDelta(self: QWheelEvent) QPoint {
        return .{ .ptr = qtc.QWheelEvent_AngleDelta(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `phase` instead
    ///
    pub const Phase = phase;

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
    pub fn phase(self: QWheelEvent) i32 {
        return qtc.QWheelEvent_Phase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inverted` instead
    ///
    pub const Inverted = inverted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn inverted(self: QWheelEvent) bool {
        return qtc.QWheelEvent_Inverted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInverted` instead
    ///
    pub const IsInverted = isInverted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isInverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn isInverted(self: QWheelEvent) bool {
        return qtc.QWheelEvent_IsInverted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasPixelDelta` instead
    ///
    pub const HasPixelDelta = hasPixelDelta;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#hasPixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn hasPixelDelta(self: QWheelEvent) bool {
        return qtc.QWheelEvent_HasPixelDelta(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBeginEvent` instead
    ///
    pub const IsBeginEvent = isBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn isBeginEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsBeginEvent` instead
    ///
    pub const OnIsBeginEvent = onIsBeginEvent;

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
    pub fn onIsBeginEvent(self: QWheelEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsBeginEvent` instead
    ///
    pub const SuperIsBeginEvent = superIsBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn superIsBeginEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUpdateEvent` instead
    ///
    pub const IsUpdateEvent = isUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn isUpdateEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsUpdateEvent` instead
    ///
    pub const OnIsUpdateEvent = onIsUpdateEvent;

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
    pub fn onIsUpdateEvent(self: QWheelEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsUpdateEvent` instead
    ///
    pub const SuperIsUpdateEvent = superIsUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn superIsUpdateEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEndEvent` instead
    ///
    pub const IsEndEvent = isEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn isEndEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEndEvent` instead
    ///
    pub const OnIsEndEvent = onIsEndEvent;

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
    pub fn onIsEndEvent(self: QWheelEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEndEvent` instead
    ///
    pub const SuperIsEndEvent = superIsEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn superIsEndEvent(self: QWheelEvent) bool {
        return qtc.QWheelEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

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
    pub fn source(self: QWheelEvent) i32 {
        return qtc.QWheelEvent_Source(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

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
    pub fn button(self: QWheelEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QWheelEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn position(self: QWheelEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePosition` instead
    ///
    pub const ScenePosition = scenePosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn scenePosition(self: QWheelEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPosition` instead
    ///
    pub const GlobalPosition = globalPosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn globalPosition(self: QWheelEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `exclusivePointGrabber` instead
    ///
    pub const ExclusivePointGrabber = exclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn exclusivePointGrabber(self: QWheelEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusivePointGrabber` instead
    ///
    pub const SetExclusivePointGrabber = setExclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusivePointGrabber(self: QWheelEvent, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `pointingDevice` instead
    ///
    pub const PointingDevice = pointingDevice;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn pointingDevice(self: QWheelEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointerType` instead
    ///
    pub const PointerType = pointerType;

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
    pub fn pointerType(self: QWheelEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointCount` instead
    ///
    pub const PointCount = pointCount;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn pointCount(self: QWheelEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

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
    pub fn point(self: QWheelEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

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
    pub fn points(self: QWheelEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QWheelEvent.points: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointById` instead
    ///
    pub const PointById = pointById;

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
    pub fn pointById(self: QWheelEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `allPointsGrabbed` instead
    ///
    pub const AllPointsGrabbed = allPointsGrabbed;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn allPointsGrabbed(self: QWheelEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allPointsAccepted` instead
    ///
    pub const AllPointsAccepted = allPointsAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn allPointsAccepted(self: QWheelEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exclusiveGrabber` instead
    ///
    pub const ExclusiveGrabber = exclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn exclusiveGrabber(self: QWheelEvent, _point: anytype) QObject {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusiveGrabber` instead
    ///
    pub const SetExclusiveGrabber = setExclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusiveGrabber(self: QWheelEvent, _point: anytype, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `clearPassiveGrabbers` instead
    ///
    pub const ClearPassiveGrabbers = clearPassiveGrabbers;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn clearPassiveGrabbers(self: QWheelEvent, _point: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(_point.ptr));
    }

    /// ### DEPRECATED: Use `addPassiveGrabber` instead
    ///
    pub const AddPassiveGrabber = addPassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn addPassiveGrabber(self: QWheelEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `removePassiveGrabber` instead
    ///
    pub const RemovePassiveGrabber = removePassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn removePassiveGrabber(self: QWheelEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn device(self: QWheelEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QWheelEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QWheelEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QWheelEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn timestamp(self: QWheelEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QWheelEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn spontaneous(self: QWheelEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn isAccepted(self: QWheelEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn accept(self: QWheelEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn ignore(self: QWheelEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn isInputEvent(self: QWheelEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn isPointerEvent(self: QWheelEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn isSinglePointEvent(self: QWheelEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QWheelEvent, _timestamp: u64) void {
        qtc.QWheelEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QWheelEvent, _timestamp: u64) void {
        qtc.QWheelEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QWheelEvent, callback: *const fn (QWheelEvent, u64) callconv(.c) void) void {
        qtc.QWheelEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QWheelEvent, accepted: bool) void {
        qtc.QWheelEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QWheelEvent, accepted: bool) void {
        qtc.QWheelEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QWheelEvent, callback: *const fn (QWheelEvent, bool) callconv(.c) void) void {
        qtc.QWheelEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#dtor.QWheelEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWheelEvent `
    ///
    pub fn delete(self: QWheelEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTabletEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` t: qcoreevent_enums.Type `
    ///
    /// ` _device: QPointingDevice `
    ///
    /// ` _pos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _pressure: f64 `
    ///
    /// ` _xTilt: f32 `
    ///
    /// ` _yTilt: f32 `
    ///
    /// ` _tangentialPressure: f32 `
    ///
    /// ` _rotation: f64 `
    ///
    /// ` _z: f32 `
    ///
    /// ` keyState: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn new(t: i32, _device: anytype, _pos: anytype, _globalPos: anytype, _pressure: f64, _xTilt: f32, _yTilt: f32, _tangentialPressure: f32, _rotation: f64, _z: f32, keyState: i32, _button: i32, _buttons: i32) QTabletEvent {
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        comptime _ = @TypeOf(_pos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        return .{ .ptr = qtc.QTabletEvent_new(@bitCast(t), @ptrCast(_device.ptr), @ptrCast(_pos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_pressure), @bitCast(_xTilt), @bitCast(_yTilt), @bitCast(_tangentialPressure), @bitCast(_rotation), @bitCast(_z), @bitCast(keyState), @bitCast(_button), @bitCast(_buttons)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn clone(self: QTabletEvent) QTabletEvent {
        return .{ .ptr = qtc.QTabletEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QTabletEvent, callback: *const fn () callconv(.c) QTabletEvent) void {
        qtc.QTabletEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn superClone(self: QTabletEvent) QTabletEvent {
        return .{ .ptr = qtc.QTabletEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn pos(self: QTabletEvent) QPoint {
        return .{ .ptr = qtc.QTabletEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPos` instead
    ///
    pub const GlobalPos = globalPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn globalPos(self: QTabletEvent) QPoint {
        return .{ .ptr = qtc.QTabletEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `posF` instead
    ///
    pub const PosF = posF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn posF(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QTabletEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPosF` instead
    ///
    pub const GlobalPosF = globalPosF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPosF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn globalPosF(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QTabletEvent_GlobalPosF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn x(self: QTabletEvent) i32 {
        return qtc.QTabletEvent_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn y(self: QTabletEvent) i32 {
        return qtc.QTabletEvent_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalX` instead
    ///
    pub const GlobalX = globalX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn globalX(self: QTabletEvent) i32 {
        return qtc.QTabletEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalY` instead
    ///
    pub const GlobalY = globalY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn globalY(self: QTabletEvent) i32 {
        return qtc.QTabletEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hiResGlobalX` instead
    ///
    pub const HiResGlobalX = hiResGlobalX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn hiResGlobalX(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_HiResGlobalX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hiResGlobalY` instead
    ///
    pub const HiResGlobalY = hiResGlobalY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn hiResGlobalY(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_HiResGlobalY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn uniqueId(self: QTabletEvent) i64 {
        return qtc.QTabletEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pressure` instead
    ///
    pub const Pressure = pressure;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pressure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn pressure(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_Pressure(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn rotation(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `z` instead
    ///
    pub const Z = z;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn z(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_Z(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tangentialPressure` instead
    ///
    pub const TangentialPressure = tangentialPressure;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#tangentialPressure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn tangentialPressure(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_TangentialPressure(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `xTilt` instead
    ///
    pub const XTilt = xTilt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#xTilt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn xTilt(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_XTilt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `yTilt` instead
    ///
    pub const YTilt = yTilt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#yTilt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn yTilt(self: QTabletEvent) f64 {
        return qtc.QTabletEvent_YTilt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

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
    pub fn button(self: QTabletEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QTabletEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn position(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePosition` instead
    ///
    pub const ScenePosition = scenePosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn scenePosition(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPosition` instead
    ///
    pub const GlobalPosition = globalPosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn globalPosition(self: QTabletEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `exclusivePointGrabber` instead
    ///
    pub const ExclusivePointGrabber = exclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn exclusivePointGrabber(self: QTabletEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusivePointGrabber` instead
    ///
    pub const SetExclusivePointGrabber = setExclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusivePointGrabber(self: QTabletEvent, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `pointingDevice` instead
    ///
    pub const PointingDevice = pointingDevice;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn pointingDevice(self: QTabletEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointerType` instead
    ///
    pub const PointerType = pointerType;

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
    pub fn pointerType(self: QTabletEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointCount` instead
    ///
    pub const PointCount = pointCount;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn pointCount(self: QTabletEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

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
    pub fn point(self: QTabletEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

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
    pub fn points(self: QTabletEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QTabletEvent.points: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointById` instead
    ///
    pub const PointById = pointById;

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
    pub fn pointById(self: QTabletEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `allPointsGrabbed` instead
    ///
    pub const AllPointsGrabbed = allPointsGrabbed;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn allPointsGrabbed(self: QTabletEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allPointsAccepted` instead
    ///
    pub const AllPointsAccepted = allPointsAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn allPointsAccepted(self: QTabletEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exclusiveGrabber` instead
    ///
    pub const ExclusiveGrabber = exclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn exclusiveGrabber(self: QTabletEvent, _point: anytype) QObject {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusiveGrabber` instead
    ///
    pub const SetExclusiveGrabber = setExclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusiveGrabber(self: QTabletEvent, _point: anytype, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `clearPassiveGrabbers` instead
    ///
    pub const ClearPassiveGrabbers = clearPassiveGrabbers;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn clearPassiveGrabbers(self: QTabletEvent, _point: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(_point.ptr));
    }

    /// ### DEPRECATED: Use `addPassiveGrabber` instead
    ///
    pub const AddPassiveGrabber = addPassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn addPassiveGrabber(self: QTabletEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `removePassiveGrabber` instead
    ///
    pub const RemovePassiveGrabber = removePassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn removePassiveGrabber(self: QTabletEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn device(self: QTabletEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QTabletEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QTabletEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QTabletEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn timestamp(self: QTabletEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QTabletEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn spontaneous(self: QTabletEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn isAccepted(self: QTabletEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn accept(self: QTabletEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn ignore(self: QTabletEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn isInputEvent(self: QTabletEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn isPointerEvent(self: QTabletEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn isSinglePointEvent(self: QTabletEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `isBeginEvent` instead
    ///
    pub const IsBeginEvent = isBeginEvent;

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
    pub fn isBeginEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsBeginEvent` instead
    ///
    pub const SuperIsBeginEvent = superIsBeginEvent;

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
    pub fn superIsBeginEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsBeginEvent` instead
    ///
    pub const OnIsBeginEvent = onIsBeginEvent;

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
    pub fn onIsBeginEvent(self: QTabletEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isUpdateEvent` instead
    ///
    pub const IsUpdateEvent = isUpdateEvent;

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
    pub fn isUpdateEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsUpdateEvent` instead
    ///
    pub const SuperIsUpdateEvent = superIsUpdateEvent;

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
    pub fn superIsUpdateEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsUpdateEvent` instead
    ///
    pub const OnIsUpdateEvent = onIsUpdateEvent;

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
    pub fn onIsUpdateEvent(self: QTabletEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEndEvent` instead
    ///
    pub const IsEndEvent = isEndEvent;

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
    pub fn isEndEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEndEvent` instead
    ///
    pub const SuperIsEndEvent = superIsEndEvent;

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
    pub fn superIsEndEvent(self: QTabletEvent) bool {
        return qtc.QTabletEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEndEvent` instead
    ///
    pub const OnIsEndEvent = onIsEndEvent;

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
    pub fn onIsEndEvent(self: QTabletEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTabletEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QTabletEvent, _timestamp: u64) void {
        qtc.QTabletEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QTabletEvent, _timestamp: u64) void {
        qtc.QTabletEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QTabletEvent, callback: *const fn (QTabletEvent, u64) callconv(.c) void) void {
        qtc.QTabletEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QTabletEvent, accepted: bool) void {
        qtc.QTabletEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QTabletEvent, accepted: bool) void {
        qtc.QTabletEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QTabletEvent, callback: *const fn (QTabletEvent, bool) callconv(.c) void) void {
        qtc.QTabletEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#dtor.QTabletEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTabletEvent `
    ///
    pub fn delete(self: QTabletEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNativeGestureEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.NativeGestureType `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _value: f64 `
    ///
    /// ` sequenceId: u64 `
    ///
    /// ` intArgument: u64 `
    ///
    pub fn new(typeVal: i32, dev: anytype, _localPos: anytype, scenePos: anytype, _globalPos: anytype, _value: f64, sequenceId: u64, intArgument: u64) QNativeGestureEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        return .{ .ptr = qtc.QNativeGestureEvent_new(@bitCast(typeVal), @ptrCast(dev.ptr), @ptrCast(_localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_value), @bitCast(sequenceId), @bitCast(intArgument)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNativeGestureEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.NativeGestureType `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` _fingerCount: i32 `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _value: f64 `
    ///
    /// ` _delta: QPointF `
    ///
    pub fn new2(typeVal: i32, dev: anytype, _fingerCount: i32, _localPos: anytype, scenePos: anytype, _globalPos: anytype, _value: f64, _delta: anytype) QNativeGestureEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_delta)._is_QPointF;
        return .{ .ptr = qtc.QNativeGestureEvent_new2(@bitCast(typeVal), @ptrCast(dev.ptr), @bitCast(_fingerCount), @ptrCast(_localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_value), @ptrCast(_delta.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QNativeGestureEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.NativeGestureType `
    ///
    /// ` dev: QPointingDevice `
    ///
    /// ` _fingerCount: i32 `
    ///
    /// ` _localPos: QPointF `
    ///
    /// ` scenePos: QPointF `
    ///
    /// ` _globalPos: QPointF `
    ///
    /// ` _value: f64 `
    ///
    /// ` _delta: QPointF `
    ///
    /// ` sequenceId: u64 `
    ///
    pub fn new3(typeVal: i32, dev: anytype, _fingerCount: i32, _localPos: anytype, scenePos: anytype, _globalPos: anytype, _value: f64, _delta: anytype, sequenceId: u64) QNativeGestureEvent {
        comptime _ = @TypeOf(dev)._is_QPointingDevice;
        comptime _ = @TypeOf(_localPos)._is_QPointF;
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        comptime _ = @TypeOf(_globalPos)._is_QPointF;
        comptime _ = @TypeOf(_delta)._is_QPointF;
        return .{ .ptr = qtc.QNativeGestureEvent_new3(@bitCast(typeVal), @ptrCast(dev.ptr), @bitCast(_fingerCount), @ptrCast(_localPos.ptr), @ptrCast(scenePos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_value), @ptrCast(_delta.ptr), @bitCast(sequenceId)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn clone(self: QNativeGestureEvent) QNativeGestureEvent {
        return .{ .ptr = qtc.QNativeGestureEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QNativeGestureEvent, callback: *const fn () callconv(.c) QNativeGestureEvent) void {
        qtc.QNativeGestureEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn superClone(self: QNativeGestureEvent) QNativeGestureEvent {
        return .{ .ptr = qtc.QNativeGestureEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `gestureType` instead
    ///
    pub const GestureType = gestureType;

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
    pub fn gestureType(self: QNativeGestureEvent) i32 {
        return qtc.QNativeGestureEvent_GestureType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fingerCount` instead
    ///
    pub const FingerCount = fingerCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#fingerCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn fingerCount(self: QNativeGestureEvent) i32 {
        return qtc.QNativeGestureEvent_FingerCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn value(self: QNativeGestureEvent) f64 {
        return qtc.QNativeGestureEvent_Value(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delta` instead
    ///
    pub const Delta = delta;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#delta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn delta(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QNativeGestureEvent_Delta(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn pos(self: QNativeGestureEvent) QPoint {
        return .{ .ptr = qtc.QNativeGestureEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPos` instead
    ///
    pub const GlobalPos = globalPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn globalPos(self: QNativeGestureEvent) QPoint {
        return .{ .ptr = qtc.QNativeGestureEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `localPos` instead
    ///
    pub const LocalPos = localPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#localPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn localPos(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QNativeGestureEvent_LocalPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowPos` instead
    ///
    pub const WindowPos = windowPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#windowPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn windowPos(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QNativeGestureEvent_WindowPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn screenPos(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QNativeGestureEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

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
    pub fn button(self: QNativeGestureEvent) i32 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QNativeGestureEvent) i32 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn position(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scenePosition` instead
    ///
    pub const ScenePosition = scenePosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn scenePosition(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_ScenePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPosition` instead
    ///
    pub const GlobalPosition = globalPosition;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn globalPosition(self: QNativeGestureEvent) QPointF {
        return .{ .ptr = qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `exclusivePointGrabber` instead
    ///
    pub const ExclusivePointGrabber = exclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn exclusivePointGrabber(self: QNativeGestureEvent) QObject {
        return .{ .ptr = qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusivePointGrabber` instead
    ///
    pub const SetExclusivePointGrabber = setExclusivePointGrabber;

    /// Inherited from QSinglePointEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusivePointGrabber(self: QNativeGestureEvent, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `pointingDevice` instead
    ///
    pub const PointingDevice = pointingDevice;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn pointingDevice(self: QNativeGestureEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointerType` instead
    ///
    pub const PointerType = pointerType;

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
    pub fn pointerType(self: QNativeGestureEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointCount` instead
    ///
    pub const PointCount = pointCount;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn pointCount(self: QNativeGestureEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

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
    pub fn point(self: QNativeGestureEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

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
    pub fn points(self: QNativeGestureEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QNativeGestureEvent.points: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointById` instead
    ///
    pub const PointById = pointById;

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
    pub fn pointById(self: QNativeGestureEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `allPointsGrabbed` instead
    ///
    pub const AllPointsGrabbed = allPointsGrabbed;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn allPointsGrabbed(self: QNativeGestureEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allPointsAccepted` instead
    ///
    pub const AllPointsAccepted = allPointsAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn allPointsAccepted(self: QNativeGestureEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exclusiveGrabber` instead
    ///
    pub const ExclusiveGrabber = exclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn exclusiveGrabber(self: QNativeGestureEvent, _point: anytype) QObject {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusiveGrabber` instead
    ///
    pub const SetExclusiveGrabber = setExclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusiveGrabber(self: QNativeGestureEvent, _point: anytype, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `clearPassiveGrabbers` instead
    ///
    pub const ClearPassiveGrabbers = clearPassiveGrabbers;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn clearPassiveGrabbers(self: QNativeGestureEvent, _point: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(_point.ptr));
    }

    /// ### DEPRECATED: Use `addPassiveGrabber` instead
    ///
    pub const AddPassiveGrabber = addPassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn addPassiveGrabber(self: QNativeGestureEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `removePassiveGrabber` instead
    ///
    pub const RemovePassiveGrabber = removePassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn removePassiveGrabber(self: QNativeGestureEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn device(self: QNativeGestureEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QNativeGestureEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QNativeGestureEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QNativeGestureEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn timestamp(self: QNativeGestureEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QNativeGestureEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn spontaneous(self: QNativeGestureEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn isAccepted(self: QNativeGestureEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn accept(self: QNativeGestureEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn ignore(self: QNativeGestureEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn isInputEvent(self: QNativeGestureEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn isPointerEvent(self: QNativeGestureEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn isSinglePointEvent(self: QNativeGestureEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `isBeginEvent` instead
    ///
    pub const IsBeginEvent = isBeginEvent;

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
    pub fn isBeginEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsBeginEvent` instead
    ///
    pub const SuperIsBeginEvent = superIsBeginEvent;

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
    pub fn superIsBeginEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsBeginEvent` instead
    ///
    pub const OnIsBeginEvent = onIsBeginEvent;

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
    pub fn onIsBeginEvent(self: QNativeGestureEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isUpdateEvent` instead
    ///
    pub const IsUpdateEvent = isUpdateEvent;

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
    pub fn isUpdateEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsUpdateEvent` instead
    ///
    pub const SuperIsUpdateEvent = superIsUpdateEvent;

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
    pub fn superIsUpdateEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsUpdateEvent` instead
    ///
    pub const OnIsUpdateEvent = onIsUpdateEvent;

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
    pub fn onIsUpdateEvent(self: QNativeGestureEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEndEvent` instead
    ///
    pub const IsEndEvent = isEndEvent;

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
    pub fn isEndEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEndEvent` instead
    ///
    pub const SuperIsEndEvent = superIsEndEvent;

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
    pub fn superIsEndEvent(self: QNativeGestureEvent) bool {
        return qtc.QNativeGestureEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEndEvent` instead
    ///
    pub const OnIsEndEvent = onIsEndEvent;

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
    pub fn onIsEndEvent(self: QNativeGestureEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QNativeGestureEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QNativeGestureEvent, _timestamp: u64) void {
        qtc.QNativeGestureEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QNativeGestureEvent, _timestamp: u64) void {
        qtc.QNativeGestureEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QNativeGestureEvent, callback: *const fn (QNativeGestureEvent, u64) callconv(.c) void) void {
        qtc.QNativeGestureEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QNativeGestureEvent, accepted: bool) void {
        qtc.QNativeGestureEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QNativeGestureEvent, accepted: bool) void {
        qtc.QNativeGestureEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QNativeGestureEvent, callback: *const fn (QNativeGestureEvent, bool) callconv(.c) void) void {
        qtc.QNativeGestureEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#dtor.QNativeGestureEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNativeGestureEvent `
    ///
    pub fn delete(self: QNativeGestureEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QKeyEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new(typeVal: i32, _key: i32, _modifiers: i32) QKeyEvent {
        return .{ .ptr = qtc.QKeyEvent_new(@bitCast(typeVal), @bitCast(_key), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QKeyEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _nativeScanCode: u32 `
    ///
    /// ` _nativeVirtualKey: u32 `
    ///
    /// ` _nativeModifiers: u32 `
    ///
    pub fn new2(typeVal: i32, _key: i32, _modifiers: i32, _nativeScanCode: u32, _nativeVirtualKey: u32, _nativeModifiers: u32) QKeyEvent {
        return .{ .ptr = qtc.QKeyEvent_new2(@bitCast(typeVal), @bitCast(_key), @bitCast(_modifiers), @bitCast(_nativeScanCode), @bitCast(_nativeVirtualKey), @bitCast(_nativeModifiers)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QKeyEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new3(typeVal: i32, _key: i32, _modifiers: i32, _text: []const u8) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new3(@bitCast(typeVal), @bitCast(_key), @bitCast(_modifiers), text_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QKeyEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    pub fn new4(typeVal: i32, _key: i32, _modifiers: i32, _text: []const u8, autorep: bool) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new4(@bitCast(typeVal), @bitCast(_key), @bitCast(_modifiers), text_str, autorep) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QKeyEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    /// ` _count: u16 `
    ///
    pub fn new5(typeVal: i32, _key: i32, _modifiers: i32, _text: []const u8, autorep: bool, _count: u16) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new5(@bitCast(typeVal), @bitCast(_key), @bitCast(_modifiers), text_str, autorep, @bitCast(_count)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QKeyEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _nativeScanCode: u32 `
    ///
    /// ` _nativeVirtualKey: u32 `
    ///
    /// ` _nativeModifiers: u32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new6(typeVal: i32, _key: i32, _modifiers: i32, _nativeScanCode: u32, _nativeVirtualKey: u32, _nativeModifiers: u32, _text: []const u8) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new6(@bitCast(typeVal), @bitCast(_key), @bitCast(_modifiers), @bitCast(_nativeScanCode), @bitCast(_nativeVirtualKey), @bitCast(_nativeModifiers), text_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QKeyEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _nativeScanCode: u32 `
    ///
    /// ` _nativeVirtualKey: u32 `
    ///
    /// ` _nativeModifiers: u32 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    pub fn new7(typeVal: i32, _key: i32, _modifiers: i32, _nativeScanCode: u32, _nativeVirtualKey: u32, _nativeModifiers: u32, _text: []const u8, autorep: bool) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new7(@bitCast(typeVal), @bitCast(_key), @bitCast(_modifiers), @bitCast(_nativeScanCode), @bitCast(_nativeVirtualKey), @bitCast(_nativeModifiers), text_str, autorep) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QKeyEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _nativeScanCode: u32 `
    ///
    /// ` _nativeVirtualKey: u32 `
    ///
    /// ` _nativeModifiers: u32 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    /// ` _count: u16 `
    ///
    pub fn new8(typeVal: i32, _key: i32, _modifiers: i32, _nativeScanCode: u32, _nativeVirtualKey: u32, _nativeModifiers: u32, _text: []const u8, autorep: bool, _count: u16) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QKeyEvent_new8(@bitCast(typeVal), @bitCast(_key), @bitCast(_modifiers), @bitCast(_nativeScanCode), @bitCast(_nativeVirtualKey), @bitCast(_nativeModifiers), text_str, autorep, @bitCast(_count)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QKeyEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _nativeScanCode: u32 `
    ///
    /// ` _nativeVirtualKey: u32 `
    ///
    /// ` _nativeModifiers: u32 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` autorep: bool `
    ///
    /// ` _count: u16 `
    ///
    /// ` _device: QInputDevice `
    ///
    pub fn new9(typeVal: i32, _key: i32, _modifiers: i32, _nativeScanCode: u32, _nativeVirtualKey: u32, _nativeModifiers: u32, _text: []const u8, autorep: bool, _count: u16, _device: anytype) QKeyEvent {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_device)._is_QInputDevice;
        return .{ .ptr = qtc.QKeyEvent_new9(@bitCast(typeVal), @bitCast(_key), @bitCast(_modifiers), @bitCast(_nativeScanCode), @bitCast(_nativeVirtualKey), @bitCast(_nativeModifiers), text_str, autorep, @bitCast(_count), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn clone(self: QKeyEvent) QKeyEvent {
        return .{ .ptr = qtc.QKeyEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QKeyEvent, callback: *const fn () callconv(.c) QKeyEvent) void {
        qtc.QKeyEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn superClone(self: QKeyEvent) QKeyEvent {
        return .{ .ptr = qtc.QKeyEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn key(self: QKeyEvent) i32 {
        return qtc.QKeyEvent_Key(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `matches` instead
    ///
    pub const Matches = matches;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#matches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` _key: qkeysequence_enums.StandardKey `
    ///
    pub fn matches(self: QKeyEvent, _key: i32) bool {
        return qtc.QKeyEvent_Matches(@ptrCast(self.ptr), @bitCast(_key));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QKeyEvent) i32 {
        return qtc.QKeyEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyCombination` instead
    ///
    pub const KeyCombination = keyCombination;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#keyCombination)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn keyCombination(self: QKeyEvent) QKeyCombination {
        return .{ .ptr = qtc.QKeyEvent_KeyCombination(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QKeyEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeyEvent_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QKeyEvent.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isAutoRepeat` instead
    ///
    pub const IsAutoRepeat = isAutoRepeat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#isAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn isAutoRepeat(self: QKeyEvent) bool {
        return qtc.QKeyEvent_IsAutoRepeat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn count(self: QKeyEvent) i32 {
        return qtc.QKeyEvent_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nativeScanCode` instead
    ///
    pub const NativeScanCode = nativeScanCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeScanCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn nativeScanCode(self: QKeyEvent) u32 {
        return qtc.QKeyEvent_NativeScanCode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nativeVirtualKey` instead
    ///
    pub const NativeVirtualKey = nativeVirtualKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeVirtualKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn nativeVirtualKey(self: QKeyEvent) u32 {
        return qtc.QKeyEvent_NativeVirtualKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nativeModifiers` instead
    ///
    pub const NativeModifiers = nativeModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn nativeModifiers(self: QKeyEvent) u32 {
        return qtc.QKeyEvent_NativeModifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn device(self: QKeyEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QKeyEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QKeyEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn timestamp(self: QKeyEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QKeyEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn spontaneous(self: QKeyEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn isAccepted(self: QKeyEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn accept(self: QKeyEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn ignore(self: QKeyEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn isInputEvent(self: QKeyEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn isPointerEvent(self: QKeyEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn isSinglePointEvent(self: QKeyEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QKeyEvent, _timestamp: u64) void {
        qtc.QKeyEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QKeyEvent, _timestamp: u64) void {
        qtc.QKeyEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QKeyEvent, callback: *const fn (QKeyEvent, u64) callconv(.c) void) void {
        qtc.QKeyEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QKeyEvent, accepted: bool) void {
        qtc.QKeyEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QKeyEvent, accepted: bool) void {
        qtc.QKeyEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QKeyEvent, callback: *const fn (QKeyEvent, bool) callconv(.c) void) void {
        qtc.QKeyEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#dtor.QKeyEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QKeyEvent `
    ///
    pub fn delete(self: QKeyEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFocusEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new(typeVal: i32) QFocusEvent {
        return .{ .ptr = qtc.QFocusEvent_new(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFocusEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _reason: qnamespace_enums.FocusReason `
    ///
    pub fn new2(typeVal: i32, _reason: i32) QFocusEvent {
        return .{ .ptr = qtc.QFocusEvent_new2(@bitCast(typeVal), @bitCast(_reason)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn clone(self: QFocusEvent) QFocusEvent {
        return .{ .ptr = qtc.QFocusEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QFocusEvent, callback: *const fn () callconv(.c) QFocusEvent) void {
        qtc.QFocusEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn superClone(self: QFocusEvent) QFocusEvent {
        return .{ .ptr = qtc.QFocusEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `gotFocus` instead
    ///
    pub const GotFocus = gotFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#gotFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn gotFocus(self: QFocusEvent) bool {
        return qtc.QFocusEvent_GotFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lostFocus` instead
    ///
    pub const LostFocus = lostFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#lostFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn lostFocus(self: QFocusEvent) bool {
        return qtc.QFocusEvent_LostFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reason` instead
    ///
    pub const Reason = reason;

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
    pub fn reason(self: QFocusEvent) i32 {
        return qtc.QFocusEvent_Reason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QFocusEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn spontaneous(self: QFocusEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn isAccepted(self: QFocusEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn accept(self: QFocusEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn ignore(self: QFocusEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn isInputEvent(self: QFocusEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn isPointerEvent(self: QFocusEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn isSinglePointEvent(self: QFocusEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QFocusEvent, accepted: bool) void {
        qtc.QFocusEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QFocusEvent, accepted: bool) void {
        qtc.QFocusEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QFocusEvent, callback: *const fn (QFocusEvent, bool) callconv(.c) void) void {
        qtc.QFocusEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#dtor.QFocusEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFocusEvent `
    ///
    pub fn delete(self: QFocusEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPaintEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` paintRegion: QRegion `
    ///
    pub fn new(paintRegion: anytype) QPaintEvent {
        comptime _ = @TypeOf(paintRegion)._is_QRegion;
        return .{ .ptr = qtc.QPaintEvent_new(@ptrCast(paintRegion.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPaintEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` paintRect: QRect `
    ///
    pub fn new2(paintRect: anytype) QPaintEvent {
        comptime _ = @TypeOf(paintRect)._is_QRect;
        return .{ .ptr = qtc.QPaintEvent_new2(@ptrCast(paintRect.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn clone(self: QPaintEvent) QPaintEvent {
        return .{ .ptr = qtc.QPaintEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QPaintEvent, callback: *const fn () callconv(.c) QPaintEvent) void {
        qtc.QPaintEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn superClone(self: QPaintEvent) QPaintEvent {
        return .{ .ptr = qtc.QPaintEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn rect(self: QPaintEvent) QRect {
        return .{ .ptr = qtc.QPaintEvent_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `region` instead
    ///
    pub const Region = region;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#region)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn region(self: QPaintEvent) QRegion {
        return .{ .ptr = qtc.QPaintEvent_Region(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QPaintEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn spontaneous(self: QPaintEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn isAccepted(self: QPaintEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn accept(self: QPaintEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn ignore(self: QPaintEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn isInputEvent(self: QPaintEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn isPointerEvent(self: QPaintEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn isSinglePointEvent(self: QPaintEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QPaintEvent, accepted: bool) void {
        qtc.QPaintEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QPaintEvent, accepted: bool) void {
        qtc.QPaintEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QPaintEvent, callback: *const fn (QPaintEvent, bool) callconv(.c) void) void {
        qtc.QPaintEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#dtor.QPaintEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPaintEvent `
    ///
    pub fn delete(self: QPaintEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMoveEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pos: QPoint `
    ///
    /// ` _oldPos: QPoint `
    ///
    pub fn new(_pos: anytype, _oldPos: anytype) QMoveEvent {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        comptime _ = @TypeOf(_oldPos)._is_QPoint;
        return .{ .ptr = qtc.QMoveEvent_new(@ptrCast(_pos.ptr), @ptrCast(_oldPos.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn clone(self: QMoveEvent) QMoveEvent {
        return .{ .ptr = qtc.QMoveEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QMoveEvent, callback: *const fn () callconv(.c) QMoveEvent) void {
        qtc.QMoveEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn superClone(self: QMoveEvent) QMoveEvent {
        return .{ .ptr = qtc.QMoveEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn pos(self: QMoveEvent) QPoint {
        return .{ .ptr = qtc.QMoveEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `oldPos` instead
    ///
    pub const OldPos = oldPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#oldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn oldPos(self: QMoveEvent) QPoint {
        return .{ .ptr = qtc.QMoveEvent_OldPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QMoveEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn spontaneous(self: QMoveEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn isAccepted(self: QMoveEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn accept(self: QMoveEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn ignore(self: QMoveEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn isInputEvent(self: QMoveEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn isPointerEvent(self: QMoveEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn isSinglePointEvent(self: QMoveEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QMoveEvent, accepted: bool) void {
        qtc.QMoveEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QMoveEvent, accepted: bool) void {
        qtc.QMoveEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QMoveEvent, callback: *const fn (QMoveEvent, bool) callconv(.c) void) void {
        qtc.QMoveEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#dtor.QMoveEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMoveEvent `
    ///
    pub fn delete(self: QMoveEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QExposeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` m_region: QRegion `
    ///
    pub fn new(m_region: anytype) QExposeEvent {
        comptime _ = @TypeOf(m_region)._is_QRegion;
        return .{ .ptr = qtc.QExposeEvent_new(@ptrCast(m_region.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn clone(self: QExposeEvent) QExposeEvent {
        return .{ .ptr = qtc.QExposeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QExposeEvent, callback: *const fn () callconv(.c) QExposeEvent) void {
        qtc.QExposeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn superClone(self: QExposeEvent) QExposeEvent {
        return .{ .ptr = qtc.QExposeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `region` instead
    ///
    pub const Region = region;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#region)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn region(self: QExposeEvent) QRegion {
        return .{ .ptr = qtc.QExposeEvent_Region(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QExposeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn spontaneous(self: QExposeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn isAccepted(self: QExposeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn accept(self: QExposeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn ignore(self: QExposeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn isInputEvent(self: QExposeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn isPointerEvent(self: QExposeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn isSinglePointEvent(self: QExposeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QExposeEvent, accepted: bool) void {
        qtc.QExposeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QExposeEvent, accepted: bool) void {
        qtc.QExposeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QExposeEvent, callback: *const fn (QExposeEvent, bool) callconv(.c) void) void {
        qtc.QExposeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#dtor.QExposeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QExposeEvent `
    ///
    pub fn delete(self: QExposeEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlatformSurfaceEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _surfaceEventType: qevent_enums.SurfaceEventType `
    ///
    pub fn new(_surfaceEventType: i32) QPlatformSurfaceEvent {
        return .{ .ptr = qtc.QPlatformSurfaceEvent_new(@bitCast(_surfaceEventType)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn clone(self: QPlatformSurfaceEvent) QPlatformSurfaceEvent {
        return .{ .ptr = qtc.QPlatformSurfaceEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QPlatformSurfaceEvent, callback: *const fn () callconv(.c) QPlatformSurfaceEvent) void {
        qtc.QPlatformSurfaceEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn superClone(self: QPlatformSurfaceEvent) QPlatformSurfaceEvent {
        return .{ .ptr = qtc.QPlatformSurfaceEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `surfaceEventType` instead
    ///
    pub const SurfaceEventType = surfaceEventType;

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
    pub fn surfaceEventType(self: QPlatformSurfaceEvent) i32 {
        return qtc.QPlatformSurfaceEvent_SurfaceEventType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QPlatformSurfaceEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn spontaneous(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn isAccepted(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn accept(self: QPlatformSurfaceEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn ignore(self: QPlatformSurfaceEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn isInputEvent(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn isPointerEvent(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn isSinglePointEvent(self: QPlatformSurfaceEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QPlatformSurfaceEvent, accepted: bool) void {
        qtc.QPlatformSurfaceEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QPlatformSurfaceEvent, accepted: bool) void {
        qtc.QPlatformSurfaceEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QPlatformSurfaceEvent, callback: *const fn (QPlatformSurfaceEvent, bool) callconv(.c) void) void {
        qtc.QPlatformSurfaceEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#dtor.QPlatformSurfaceEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlatformSurfaceEvent `
    ///
    pub fn delete(self: QPlatformSurfaceEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QResizeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    /// ` _oldSize: QSize `
    ///
    pub fn new(_size: anytype, _oldSize: anytype) QResizeEvent {
        comptime _ = @TypeOf(_size)._is_QSize;
        comptime _ = @TypeOf(_oldSize)._is_QSize;
        return .{ .ptr = qtc.QResizeEvent_new(@ptrCast(_size.ptr), @ptrCast(_oldSize.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn clone(self: QResizeEvent) QResizeEvent {
        return .{ .ptr = qtc.QResizeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QResizeEvent, callback: *const fn () callconv(.c) QResizeEvent) void {
        qtc.QResizeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn superClone(self: QResizeEvent) QResizeEvent {
        return .{ .ptr = qtc.QResizeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn size(self: QResizeEvent) QSize {
        return .{ .ptr = qtc.QResizeEvent_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `oldSize` instead
    ///
    pub const OldSize = oldSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#oldSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn oldSize(self: QResizeEvent) QSize {
        return .{ .ptr = qtc.QResizeEvent_OldSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QResizeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn spontaneous(self: QResizeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn isAccepted(self: QResizeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn accept(self: QResizeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn ignore(self: QResizeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn isInputEvent(self: QResizeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn isPointerEvent(self: QResizeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn isSinglePointEvent(self: QResizeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QResizeEvent, accepted: bool) void {
        qtc.QResizeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QResizeEvent, accepted: bool) void {
        qtc.QResizeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QResizeEvent, callback: *const fn (QResizeEvent, bool) callconv(.c) void) void {
        qtc.QResizeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#dtor.QResizeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QResizeEvent `
    ///
    pub fn delete(self: QResizeEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCloseEvent object in C++ memory
    ///
    pub fn new() QCloseEvent {
        return .{ .ptr = qtc.QCloseEvent_new() };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn clone(self: QCloseEvent) QCloseEvent {
        return .{ .ptr = qtc.QCloseEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QCloseEvent, callback: *const fn () callconv(.c) QCloseEvent) void {
        qtc.QCloseEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn superClone(self: QCloseEvent) QCloseEvent {
        return .{ .ptr = qtc.QCloseEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QCloseEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn spontaneous(self: QCloseEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn isAccepted(self: QCloseEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn accept(self: QCloseEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn ignore(self: QCloseEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn isInputEvent(self: QCloseEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn isPointerEvent(self: QCloseEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn isSinglePointEvent(self: QCloseEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QCloseEvent, accepted: bool) void {
        qtc.QCloseEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QCloseEvent, accepted: bool) void {
        qtc.QCloseEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QCloseEvent, callback: *const fn (QCloseEvent, bool) callconv(.c) void) void {
        qtc.QCloseEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#dtor.QCloseEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCloseEvent `
    ///
    pub fn delete(self: QCloseEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QIconDragEvent object in C++ memory
    ///
    pub fn new() QIconDragEvent {
        return .{ .ptr = qtc.QIconDragEvent_new() };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn clone(self: QIconDragEvent) QIconDragEvent {
        return .{ .ptr = qtc.QIconDragEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QIconDragEvent, callback: *const fn () callconv(.c) QIconDragEvent) void {
        qtc.QIconDragEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn superClone(self: QIconDragEvent) QIconDragEvent {
        return .{ .ptr = qtc.QIconDragEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QIconDragEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn spontaneous(self: QIconDragEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn isAccepted(self: QIconDragEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn accept(self: QIconDragEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn ignore(self: QIconDragEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn isInputEvent(self: QIconDragEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn isPointerEvent(self: QIconDragEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn isSinglePointEvent(self: QIconDragEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QIconDragEvent, accepted: bool) void {
        qtc.QIconDragEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QIconDragEvent, accepted: bool) void {
        qtc.QIconDragEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QIconDragEvent, callback: *const fn (QIconDragEvent, bool) callconv(.c) void) void {
        qtc.QIconDragEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#dtor.QIconDragEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QIconDragEvent `
    ///
    pub fn delete(self: QIconDragEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QShowEvent object in C++ memory
    ///
    pub fn new() QShowEvent {
        return .{ .ptr = qtc.QShowEvent_new() };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn clone(self: QShowEvent) QShowEvent {
        return .{ .ptr = qtc.QShowEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QShowEvent, callback: *const fn () callconv(.c) QShowEvent) void {
        qtc.QShowEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn superClone(self: QShowEvent) QShowEvent {
        return .{ .ptr = qtc.QShowEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QShowEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn spontaneous(self: QShowEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn isAccepted(self: QShowEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn accept(self: QShowEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn ignore(self: QShowEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn isInputEvent(self: QShowEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn isPointerEvent(self: QShowEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShowEvent `
    ///
    pub fn isSinglePointEvent(self: QShowEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QShowEvent, accepted: bool) void {
        qtc.QShowEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QShowEvent, accepted: bool) void {
        qtc.QShowEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QShowEvent, callback: *const fn (QShowEvent, bool) callconv(.c) void) void {
        qtc.QShowEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#dtor.QShowEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QShowEvent `
    ///
    pub fn delete(self: QShowEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHideEvent object in C++ memory
    ///
    pub fn new() QHideEvent {
        return .{ .ptr = qtc.QHideEvent_new() };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn clone(self: QHideEvent) QHideEvent {
        return .{ .ptr = qtc.QHideEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QHideEvent, callback: *const fn () callconv(.c) QHideEvent) void {
        qtc.QHideEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn superClone(self: QHideEvent) QHideEvent {
        return .{ .ptr = qtc.QHideEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QHideEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn spontaneous(self: QHideEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn isAccepted(self: QHideEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn accept(self: QHideEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn ignore(self: QHideEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn isInputEvent(self: QHideEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn isPointerEvent(self: QHideEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHideEvent `
    ///
    pub fn isSinglePointEvent(self: QHideEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QHideEvent, accepted: bool) void {
        qtc.QHideEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QHideEvent, accepted: bool) void {
        qtc.QHideEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QHideEvent, callback: *const fn (QHideEvent, bool) callconv(.c) void) void {
        qtc.QHideEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#dtor.QHideEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHideEvent `
    ///
    pub fn delete(self: QHideEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QContextMenuEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _reason: qevent_enums.Reason `
    ///
    /// ` _pos: QPoint `
    ///
    /// ` _globalPos: QPoint `
    ///
    pub fn new(_reason: i32, _pos: anytype, _globalPos: anytype) QContextMenuEvent {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        comptime _ = @TypeOf(_globalPos)._is_QPoint;
        return .{ .ptr = qtc.QContextMenuEvent_new(@bitCast(_reason), @ptrCast(_pos.ptr), @ptrCast(_globalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QContextMenuEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _reason: qevent_enums.Reason `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn new2(_reason: i32, _pos: anytype) QContextMenuEvent {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        return .{ .ptr = qtc.QContextMenuEvent_new2(@bitCast(_reason), @ptrCast(_pos.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QContextMenuEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _reason: qevent_enums.Reason `
    ///
    /// ` _pos: QPoint `
    ///
    /// ` _globalPos: QPoint `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new3(_reason: i32, _pos: anytype, _globalPos: anytype, _modifiers: i32) QContextMenuEvent {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        comptime _ = @TypeOf(_globalPos)._is_QPoint;
        return .{ .ptr = qtc.QContextMenuEvent_new3(@bitCast(_reason), @ptrCast(_pos.ptr), @ptrCast(_globalPos.ptr), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn clone(self: QContextMenuEvent) QContextMenuEvent {
        return .{ .ptr = qtc.QContextMenuEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QContextMenuEvent, callback: *const fn () callconv(.c) QContextMenuEvent) void {
        qtc.QContextMenuEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn superClone(self: QContextMenuEvent) QContextMenuEvent {
        return .{ .ptr = qtc.QContextMenuEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn x(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn y(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalX` instead
    ///
    pub const GlobalX = globalX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn globalX(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalY` instead
    ///
    pub const GlobalY = globalY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn globalY(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn pos(self: QContextMenuEvent) QPoint {
        return .{ .ptr = qtc.QContextMenuEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPos` instead
    ///
    pub const GlobalPos = globalPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn globalPos(self: QContextMenuEvent) QPoint {
        return .{ .ptr = qtc.QContextMenuEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reason` instead
    ///
    pub const Reason = reason;

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
    pub fn reason(self: QContextMenuEvent) i32 {
        return qtc.QContextMenuEvent_Reason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn device(self: QContextMenuEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QContextMenuEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QContextMenuEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QContextMenuEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn timestamp(self: QContextMenuEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QContextMenuEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn spontaneous(self: QContextMenuEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn isAccepted(self: QContextMenuEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn accept(self: QContextMenuEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn ignore(self: QContextMenuEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn isInputEvent(self: QContextMenuEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn isPointerEvent(self: QContextMenuEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn isSinglePointEvent(self: QContextMenuEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QContextMenuEvent, _timestamp: u64) void {
        qtc.QContextMenuEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QContextMenuEvent, _timestamp: u64) void {
        qtc.QContextMenuEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QContextMenuEvent, callback: *const fn (QContextMenuEvent, u64) callconv(.c) void) void {
        qtc.QContextMenuEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QContextMenuEvent, accepted: bool) void {
        qtc.QContextMenuEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QContextMenuEvent, accepted: bool) void {
        qtc.QContextMenuEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QContextMenuEvent, callback: *const fn (QContextMenuEvent, bool) callconv(.c) void) void {
        qtc.QContextMenuEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#dtor.QContextMenuEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QContextMenuEvent `
    ///
    pub fn delete(self: QContextMenuEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QInputMethodEvent object in C++ memory
    ///
    pub fn new() QInputMethodEvent {
        return .{ .ptr = qtc.QInputMethodEvent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QInputMethodEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` preeditText: []const u8 `
    ///
    /// ` _attributes: []QInputMethodEvent__Attribute `
    ///
    pub fn new2(preeditText: []const u8, _attributes: []QInputMethodEvent__Attribute) QInputMethodEvent {
        const preeditText_str = qtc.libqt_string{
            .len = preeditText.len,
            .data = preeditText.ptr,
        };
        const attributes_list = qtc.libqt_list{
            .len = _attributes.len,
            .data = @ptrCast(_attributes.ptr),
        };
        return .{ .ptr = qtc.QInputMethodEvent_new2(preeditText_str, attributes_list) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn clone(self: QInputMethodEvent) QInputMethodEvent {
        return .{ .ptr = qtc.QInputMethodEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QInputMethodEvent, callback: *const fn () callconv(.c) QInputMethodEvent) void {
        qtc.QInputMethodEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn superClone(self: QInputMethodEvent) QInputMethodEvent {
        return .{ .ptr = qtc.QInputMethodEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCommitString` instead
    ///
    pub const SetCommitString = setCommitString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` _commitString: []const u8 `
    ///
    pub fn setCommitString(self: QInputMethodEvent, _commitString: []const u8) void {
        const commitString_str = qtc.libqt_string{
            .len = _commitString.len,
            .data = _commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString(@ptrCast(self.ptr), commitString_str);
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attributes(self: QInputMethodEvent, allocator: std.mem.Allocator) []QInputMethodEvent__Attribute {
        const _arr: qtc.libqt_list = qtc.QInputMethodEvent_Attributes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QInputMethodEvent__Attribute, _arr.len) catch @panic("QInputMethodEvent.attributes: Memory allocation failed");
        const _data_val: [*]QtC.QInputMethodEvent__Attribute = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `preeditString` instead
    ///
    pub const PreeditString = preeditString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#preeditString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preeditString(self: QInputMethodEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QInputMethodEvent_PreeditString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QInputMethodEvent.preeditString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `commitString` instead
    ///
    pub const CommitString = commitString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#commitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn commitString(self: QInputMethodEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QInputMethodEvent_CommitString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QInputMethodEvent.commitString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `replacementStart` instead
    ///
    pub const ReplacementStart = replacementStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn replacementStart(self: QInputMethodEvent) i32 {
        return qtc.QInputMethodEvent_ReplacementStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `replacementLength` instead
    ///
    pub const ReplacementLength = replacementLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn replacementLength(self: QInputMethodEvent) i32 {
        return qtc.QInputMethodEvent_ReplacementLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCommitString2` instead
    ///
    pub const SetCommitString2 = setCommitString2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` _commitString: []const u8 `
    ///
    /// ` replaceFrom: i32 `
    ///
    pub fn setCommitString2(self: QInputMethodEvent, _commitString: []const u8, replaceFrom: i32) void {
        const commitString_str = qtc.libqt_string{
            .len = _commitString.len,
            .data = _commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString2(@ptrCast(self.ptr), commitString_str, @bitCast(replaceFrom));
    }

    /// ### DEPRECATED: Use `setCommitString3` instead
    ///
    pub const SetCommitString3 = setCommitString3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    /// ` _commitString: []const u8 `
    ///
    /// ` replaceFrom: i32 `
    ///
    /// ` replaceLength: i32 `
    ///
    pub fn setCommitString3(self: QInputMethodEvent, _commitString: []const u8, replaceFrom: i32, replaceLength: i32) void {
        const commitString_str = qtc.libqt_string{
            .len = _commitString.len,
            .data = _commitString.ptr,
        };
        qtc.QInputMethodEvent_SetCommitString3(@ptrCast(self.ptr), commitString_str, @bitCast(replaceFrom), @bitCast(replaceLength));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QInputMethodEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn spontaneous(self: QInputMethodEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn isAccepted(self: QInputMethodEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn accept(self: QInputMethodEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn ignore(self: QInputMethodEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn isInputEvent(self: QInputMethodEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn isPointerEvent(self: QInputMethodEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn isSinglePointEvent(self: QInputMethodEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QInputMethodEvent, accepted: bool) void {
        qtc.QInputMethodEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QInputMethodEvent, accepted: bool) void {
        qtc.QInputMethodEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QInputMethodEvent, callback: *const fn (QInputMethodEvent, bool) callconv(.c) void) void {
        qtc.QInputMethodEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#dtor.QInputMethodEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QInputMethodEvent `
    ///
    pub fn delete(self: QInputMethodEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QInputMethodQueryEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _queries: flag of qnamespace_enums.InputMethodQuery `
    ///
    pub fn new(_queries: i32) QInputMethodQueryEvent {
        return .{ .ptr = qtc.QInputMethodQueryEvent_new(@bitCast(_queries)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn clone(self: QInputMethodQueryEvent) QInputMethodQueryEvent {
        return .{ .ptr = qtc.QInputMethodQueryEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QInputMethodQueryEvent, callback: *const fn () callconv(.c) QInputMethodQueryEvent) void {
        qtc.QInputMethodQueryEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn superClone(self: QInputMethodQueryEvent) QInputMethodQueryEvent {
        return .{ .ptr = qtc.QInputMethodQueryEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `queries` instead
    ///
    pub const Queries = queries;

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
    pub fn queries(self: QInputMethodQueryEvent) i32 {
        return qtc.QInputMethodQueryEvent_Queries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setValue(self: QInputMethodQueryEvent, query: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QInputMethodQueryEvent_SetValue(@ptrCast(self.ptr), @bitCast(query), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn value(self: QInputMethodQueryEvent, query: i32) QVariant {
        return .{ .ptr = qtc.QInputMethodQueryEvent_Value(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QInputMethodQueryEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn spontaneous(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn isAccepted(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn accept(self: QInputMethodQueryEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn ignore(self: QInputMethodQueryEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn isInputEvent(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn isPointerEvent(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn isSinglePointEvent(self: QInputMethodQueryEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QInputMethodQueryEvent, accepted: bool) void {
        qtc.QInputMethodQueryEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QInputMethodQueryEvent, accepted: bool) void {
        qtc.QInputMethodQueryEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QInputMethodQueryEvent, callback: *const fn (QInputMethodQueryEvent, bool) callconv(.c) void) void {
        qtc.QInputMethodQueryEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#dtor.QInputMethodQueryEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QInputMethodQueryEvent `
    ///
    pub fn delete(self: QInputMethodQueryEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDropEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pos: QPointF `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new(_pos: anytype, actions: i32, data: anytype, _buttons: i32, _modifiers: i32) QDropEvent {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDropEvent_new(@ptrCast(_pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(_buttons), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDropEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pos: QPointF `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new2(_pos: anytype, actions: i32, data: anytype, _buttons: i32, _modifiers: i32, typeVal: i32) QDropEvent {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDropEvent_new2(@ptrCast(_pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(_buttons), @bitCast(_modifiers), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn clone(self: QDropEvent) QDropEvent {
        return .{ .ptr = qtc.QDropEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QDropEvent, callback: *const fn () callconv(.c) QDropEvent) void {
        qtc.QDropEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn superClone(self: QDropEvent) QDropEvent {
        return .{ .ptr = qtc.QDropEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn pos(self: QDropEvent) QPoint {
        return .{ .ptr = qtc.QDropEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `posF` instead
    ///
    pub const PosF = posF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn posF(self: QDropEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mouseButtons` instead
    ///
    pub const MouseButtons = mouseButtons;

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
    pub fn mouseButtons(self: QDropEvent) i32 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyboardModifiers` instead
    ///
    pub const KeyboardModifiers = keyboardModifiers;

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
    pub fn keyboardModifiers(self: QDropEvent) i32 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn position(self: QDropEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QDropEvent) i32 {
        return qtc.QDropEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QDropEvent) i32 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `possibleActions` instead
    ///
    pub const PossibleActions = possibleActions;

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
    pub fn possibleActions(self: QDropEvent) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `proposedAction` instead
    ///
    pub const ProposedAction = proposedAction;

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
    pub fn proposedAction(self: QDropEvent) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `acceptProposedAction` instead
    ///
    pub const AcceptProposedAction = acceptProposedAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn acceptProposedAction(self: QDropEvent) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dropAction` instead
    ///
    pub const DropAction = dropAction;

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
    pub fn dropAction(self: QDropEvent) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDropAction` instead
    ///
    pub const SetDropAction = setDropAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn setDropAction(self: QDropEvent, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn source(self: QDropEvent) QObject {
        return .{ .ptr = qtc.QDropEvent_Source(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn mimeData(self: QDropEvent) QMimeData {
        return .{ .ptr = qtc.QDropEvent_MimeData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QDropEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn spontaneous(self: QDropEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn isAccepted(self: QDropEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn accept(self: QDropEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn ignore(self: QDropEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn isInputEvent(self: QDropEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn isPointerEvent(self: QDropEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDropEvent `
    ///
    pub fn isSinglePointEvent(self: QDropEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QDropEvent, accepted: bool) void {
        qtc.QDropEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QDropEvent, accepted: bool) void {
        qtc.QDropEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QDropEvent, callback: *const fn (QDropEvent, bool) callconv(.c) void) void {
        qtc.QDropEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dtor.QDropEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDropEvent `
    ///
    pub fn delete(self: QDropEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDragMoveEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pos: QPoint `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new(_pos: anytype, actions: i32, data: anytype, _buttons: i32, _modifiers: i32) QDragMoveEvent {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDragMoveEvent_new(@ptrCast(_pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(_buttons), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDragMoveEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pos: QPoint `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new2(_pos: anytype, actions: i32, data: anytype, _buttons: i32, _modifiers: i32, typeVal: i32) QDragMoveEvent {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDragMoveEvent_new2(@ptrCast(_pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(_buttons), @bitCast(_modifiers), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn clone(self: QDragMoveEvent) QDragMoveEvent {
        return .{ .ptr = qtc.QDragMoveEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QDragMoveEvent, callback: *const fn () callconv(.c) QDragMoveEvent) void {
        qtc.QDragMoveEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn superClone(self: QDragMoveEvent) QDragMoveEvent {
        return .{ .ptr = qtc.QDragMoveEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `answerRect` instead
    ///
    pub const AnswerRect = answerRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn answerRect(self: QDragMoveEvent) QRect {
        return .{ .ptr = qtc.QDragMoveEvent_AnswerRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn accept(self: QDragMoveEvent) void {
        qtc.QDragMoveEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn ignore(self: QDragMoveEvent) void {
        qtc.QDragMoveEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept2` instead
    ///
    pub const Accept2 = accept2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ` r: QRect `
    ///
    pub fn accept2(self: QDragMoveEvent, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QDragMoveEvent_Accept2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `ignore2` instead
    ///
    pub const Ignore2 = ignore2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    /// ` r: QRect `
    ///
    pub fn ignore2(self: QDragMoveEvent, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QDragMoveEvent_Ignore2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn pos(self: QDragMoveEvent) QPoint {
        return .{ .ptr = qtc.QDropEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `posF` instead
    ///
    pub const PosF = posF;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn posF(self: QDragMoveEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mouseButtons` instead
    ///
    pub const MouseButtons = mouseButtons;

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
    pub fn mouseButtons(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyboardModifiers` instead
    ///
    pub const KeyboardModifiers = keyboardModifiers;

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
    pub fn keyboardModifiers(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn position(self: QDragMoveEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `possibleActions` instead
    ///
    pub const PossibleActions = possibleActions;

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
    pub fn possibleActions(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `proposedAction` instead
    ///
    pub const ProposedAction = proposedAction;

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
    pub fn proposedAction(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `acceptProposedAction` instead
    ///
    pub const AcceptProposedAction = acceptProposedAction;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn acceptProposedAction(self: QDragMoveEvent) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dropAction` instead
    ///
    pub const DropAction = dropAction;

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
    pub fn dropAction(self: QDragMoveEvent) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDropAction` instead
    ///
    pub const SetDropAction = setDropAction;

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
    pub fn setDropAction(self: QDragMoveEvent, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn source(self: QDragMoveEvent) QObject {
        return .{ .ptr = qtc.QDropEvent_Source(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn mimeData(self: QDragMoveEvent) QMimeData {
        return .{ .ptr = qtc.QDropEvent_MimeData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QDragMoveEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn spontaneous(self: QDragMoveEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn isAccepted(self: QDragMoveEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn isInputEvent(self: QDragMoveEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn isPointerEvent(self: QDragMoveEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn isSinglePointEvent(self: QDragMoveEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QDragMoveEvent, accepted: bool) void {
        qtc.QDragMoveEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QDragMoveEvent, accepted: bool) void {
        qtc.QDragMoveEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QDragMoveEvent, callback: *const fn (QDragMoveEvent, bool) callconv(.c) void) void {
        qtc.QDragMoveEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#dtor.QDragMoveEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDragMoveEvent `
    ///
    pub fn delete(self: QDragMoveEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDragEnterEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pos: QPoint `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    /// ` data: QMimeData `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new(_pos: anytype, actions: i32, data: anytype, _buttons: i32, _modifiers: i32) QDragEnterEvent {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return .{ .ptr = qtc.QDragEnterEvent_new(@ptrCast(_pos.ptr), @bitCast(actions), @ptrCast(data.ptr), @bitCast(_buttons), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn clone(self: QDragEnterEvent) QDragEnterEvent {
        return .{ .ptr = qtc.QDragEnterEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QDragEnterEvent, callback: *const fn () callconv(.c) QDragEnterEvent) void {
        qtc.QDragEnterEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn superClone(self: QDragEnterEvent) QDragEnterEvent {
        return .{ .ptr = qtc.QDragEnterEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `answerRect` instead
    ///
    pub const AnswerRect = answerRect;

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn answerRect(self: QDragEnterEvent) QRect {
        return .{ .ptr = qtc.QDragMoveEvent_AnswerRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn accept(self: QDragEnterEvent) void {
        qtc.QDragMoveEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QDragMoveEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn ignore(self: QDragEnterEvent) void {
        qtc.QDragMoveEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept2` instead
    ///
    pub const Accept2 = accept2;

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
    pub fn accept2(self: QDragEnterEvent, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QDragMoveEvent_Accept2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `ignore2` instead
    ///
    pub const Ignore2 = ignore2;

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
    pub fn ignore2(self: QDragEnterEvent, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QDragMoveEvent_Ignore2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn pos(self: QDragEnterEvent) QPoint {
        return .{ .ptr = qtc.QDropEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `posF` instead
    ///
    pub const PosF = posF;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn posF(self: QDragEnterEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_PosF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mouseButtons` instead
    ///
    pub const MouseButtons = mouseButtons;

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
    pub fn mouseButtons(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyboardModifiers` instead
    ///
    pub const KeyboardModifiers = keyboardModifiers;

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
    pub fn keyboardModifiers(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn position(self: QDragEnterEvent) QPointF {
        return .{ .ptr = qtc.QDropEvent_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

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
    pub fn buttons(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `possibleActions` instead
    ///
    pub const PossibleActions = possibleActions;

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
    pub fn possibleActions(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `proposedAction` instead
    ///
    pub const ProposedAction = proposedAction;

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
    pub fn proposedAction(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `acceptProposedAction` instead
    ///
    pub const AcceptProposedAction = acceptProposedAction;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn acceptProposedAction(self: QDragEnterEvent) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dropAction` instead
    ///
    pub const DropAction = dropAction;

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
    pub fn dropAction(self: QDragEnterEvent) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDropAction` instead
    ///
    pub const SetDropAction = setDropAction;

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
    pub fn setDropAction(self: QDragEnterEvent, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn source(self: QDragEnterEvent) QObject {
        return .{ .ptr = qtc.QDropEvent_Source(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// Inherited from QDropEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn mimeData(self: QDragEnterEvent) QMimeData {
        return .{ .ptr = qtc.QDropEvent_MimeData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QDragEnterEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn spontaneous(self: QDragEnterEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn isAccepted(self: QDragEnterEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn isInputEvent(self: QDragEnterEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn isPointerEvent(self: QDragEnterEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn isSinglePointEvent(self: QDragEnterEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QDragEnterEvent, accepted: bool) void {
        qtc.QDragEnterEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QDragEnterEvent, accepted: bool) void {
        qtc.QDragEnterEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QDragEnterEvent, callback: *const fn (QDragEnterEvent, bool) callconv(.c) void) void {
        qtc.QDragEnterEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#dtor.QDragEnterEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDragEnterEvent `
    ///
    pub fn delete(self: QDragEnterEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDragLeaveEvent object in C++ memory
    ///
    pub fn new() QDragLeaveEvent {
        return .{ .ptr = qtc.QDragLeaveEvent_new() };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn clone(self: QDragLeaveEvent) QDragLeaveEvent {
        return .{ .ptr = qtc.QDragLeaveEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QDragLeaveEvent, callback: *const fn () callconv(.c) QDragLeaveEvent) void {
        qtc.QDragLeaveEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn superClone(self: QDragLeaveEvent) QDragLeaveEvent {
        return .{ .ptr = qtc.QDragLeaveEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QDragLeaveEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn spontaneous(self: QDragLeaveEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn isAccepted(self: QDragLeaveEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn accept(self: QDragLeaveEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn ignore(self: QDragLeaveEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn isInputEvent(self: QDragLeaveEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn isPointerEvent(self: QDragLeaveEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn isSinglePointEvent(self: QDragLeaveEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QDragLeaveEvent, accepted: bool) void {
        qtc.QDragLeaveEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QDragLeaveEvent, accepted: bool) void {
        qtc.QDragLeaveEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QDragLeaveEvent, callback: *const fn (QDragLeaveEvent, bool) callconv(.c) void) void {
        qtc.QDragLeaveEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#dtor.QDragLeaveEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDragLeaveEvent `
    ///
    pub fn delete(self: QDragLeaveEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHelpEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _pos: QPoint `
    ///
    /// ` _globalPos: QPoint `
    ///
    pub fn new(typeVal: i32, _pos: anytype, _globalPos: anytype) QHelpEvent {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        comptime _ = @TypeOf(_globalPos)._is_QPoint;
        return .{ .ptr = qtc.QHelpEvent_new(@bitCast(typeVal), @ptrCast(_pos.ptr), @ptrCast(_globalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn clone(self: QHelpEvent) QHelpEvent {
        return .{ .ptr = qtc.QHelpEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QHelpEvent, callback: *const fn () callconv(.c) QHelpEvent) void {
        qtc.QHelpEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn superClone(self: QHelpEvent) QHelpEvent {
        return .{ .ptr = qtc.QHelpEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn x(self: QHelpEvent) i32 {
        return qtc.QHelpEvent_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn y(self: QHelpEvent) i32 {
        return qtc.QHelpEvent_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalX` instead
    ///
    pub const GlobalX = globalX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn globalX(self: QHelpEvent) i32 {
        return qtc.QHelpEvent_GlobalX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalY` instead
    ///
    pub const GlobalY = globalY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn globalY(self: QHelpEvent) i32 {
        return qtc.QHelpEvent_GlobalY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn pos(self: QHelpEvent) QPoint {
        return .{ .ptr = qtc.QHelpEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `globalPos` instead
    ///
    pub const GlobalPos = globalPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn globalPos(self: QHelpEvent) QPoint {
        return .{ .ptr = qtc.QHelpEvent_GlobalPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QHelpEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn spontaneous(self: QHelpEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn isAccepted(self: QHelpEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn accept(self: QHelpEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn ignore(self: QHelpEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn isInputEvent(self: QHelpEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn isPointerEvent(self: QHelpEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn isSinglePointEvent(self: QHelpEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QHelpEvent, accepted: bool) void {
        qtc.QHelpEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QHelpEvent, accepted: bool) void {
        qtc.QHelpEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QHelpEvent, callback: *const fn (QHelpEvent, bool) callconv(.c) void) void {
        qtc.QHelpEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#dtor.QHelpEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHelpEvent `
    ///
    pub fn delete(self: QHelpEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStatusTipEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _tip: []const u8 `
    ///
    pub fn new(_tip: []const u8) QStatusTipEvent {
        const tip_str = qtc.libqt_string{
            .len = _tip.len,
            .data = _tip.ptr,
        };
        return .{ .ptr = qtc.QStatusTipEvent_new(tip_str) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn clone(self: QStatusTipEvent) QStatusTipEvent {
        return .{ .ptr = qtc.QStatusTipEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QStatusTipEvent, callback: *const fn () callconv(.c) QStatusTipEvent) void {
        qtc.QStatusTipEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn superClone(self: QStatusTipEvent) QStatusTipEvent {
        return .{ .ptr = qtc.QStatusTipEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tip` instead
    ///
    pub const Tip = tip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#tip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tip(self: QStatusTipEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStatusTipEvent_Tip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStatusTipEvent.tip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QStatusTipEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn spontaneous(self: QStatusTipEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn isAccepted(self: QStatusTipEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn accept(self: QStatusTipEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn ignore(self: QStatusTipEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn isInputEvent(self: QStatusTipEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn isPointerEvent(self: QStatusTipEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn isSinglePointEvent(self: QStatusTipEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QStatusTipEvent, accepted: bool) void {
        qtc.QStatusTipEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QStatusTipEvent, accepted: bool) void {
        qtc.QStatusTipEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QStatusTipEvent, callback: *const fn (QStatusTipEvent, bool) callconv(.c) void) void {
        qtc.QStatusTipEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#dtor.QStatusTipEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStatusTipEvent `
    ///
    pub fn delete(self: QStatusTipEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWhatsThisClickedEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _href: []const u8 `
    ///
    pub fn new(_href: []const u8) QWhatsThisClickedEvent {
        const href_str = qtc.libqt_string{
            .len = _href.len,
            .data = _href.ptr,
        };
        return .{ .ptr = qtc.QWhatsThisClickedEvent_new(href_str) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn clone(self: QWhatsThisClickedEvent) QWhatsThisClickedEvent {
        return .{ .ptr = qtc.QWhatsThisClickedEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QWhatsThisClickedEvent, callback: *const fn () callconv(.c) QWhatsThisClickedEvent) void {
        qtc.QWhatsThisClickedEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn superClone(self: QWhatsThisClickedEvent) QWhatsThisClickedEvent {
        return .{ .ptr = qtc.QWhatsThisClickedEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `href` instead
    ///
    pub const Href = href;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#href)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn href(self: QWhatsThisClickedEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWhatsThisClickedEvent_Href(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWhatsThisClickedEvent.href: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QWhatsThisClickedEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn spontaneous(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn isAccepted(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn accept(self: QWhatsThisClickedEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn ignore(self: QWhatsThisClickedEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn isInputEvent(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn isPointerEvent(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn isSinglePointEvent(self: QWhatsThisClickedEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QWhatsThisClickedEvent, accepted: bool) void {
        qtc.QWhatsThisClickedEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QWhatsThisClickedEvent, accepted: bool) void {
        qtc.QWhatsThisClickedEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QWhatsThisClickedEvent, callback: *const fn (QWhatsThisClickedEvent, bool) callconv(.c) void) void {
        qtc.QWhatsThisClickedEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#dtor.QWhatsThisClickedEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWhatsThisClickedEvent `
    ///
    pub fn delete(self: QWhatsThisClickedEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QActionEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` _action: QAction `
    ///
    pub fn new(typeVal: i32, _action: anytype) QActionEvent {
        comptime _ = @TypeOf(_action)._is_QAction;
        return .{ .ptr = qtc.QActionEvent_new(@bitCast(typeVal), @ptrCast(_action.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QActionEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` _action: QAction `
    ///
    /// ` _before: QAction `
    ///
    pub fn new2(typeVal: i32, _action: anytype, _before: anytype) QActionEvent {
        comptime _ = @TypeOf(_action)._is_QAction;
        comptime _ = @TypeOf(_before)._is_QAction;
        return .{ .ptr = qtc.QActionEvent_new2(@bitCast(typeVal), @ptrCast(_action.ptr), @ptrCast(_before.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn clone(self: QActionEvent) QActionEvent {
        return .{ .ptr = qtc.QActionEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QActionEvent, callback: *const fn () callconv(.c) QActionEvent) void {
        qtc.QActionEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn superClone(self: QActionEvent) QActionEvent {
        return .{ .ptr = qtc.QActionEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn action(self: QActionEvent) QAction {
        return .{ .ptr = qtc.QActionEvent_Action(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `before` instead
    ///
    pub const Before = before;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#before)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn before(self: QActionEvent) QAction {
        return .{ .ptr = qtc.QActionEvent_Before(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QActionEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn spontaneous(self: QActionEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn isAccepted(self: QActionEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn accept(self: QActionEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn ignore(self: QActionEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn isInputEvent(self: QActionEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn isPointerEvent(self: QActionEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QActionEvent `
    ///
    pub fn isSinglePointEvent(self: QActionEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QActionEvent, accepted: bool) void {
        qtc.QActionEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QActionEvent, accepted: bool) void {
        qtc.QActionEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QActionEvent, callback: *const fn (QActionEvent, bool) callconv(.c) void) void {
        qtc.QActionEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#dtor.QActionEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QActionEvent `
    ///
    pub fn delete(self: QActionEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFileOpenEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _file: []const u8 `
    ///
    pub fn new(_file: []const u8) QFileOpenEvent {
        const file_str = qtc.libqt_string{
            .len = _file.len,
            .data = _file.ptr,
        };
        return .{ .ptr = qtc.QFileOpenEvent_new(file_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFileOpenEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    pub fn new2(_url: anytype) QFileOpenEvent {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.QFileOpenEvent_new2(@ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn clone(self: QFileOpenEvent) QFileOpenEvent {
        return .{ .ptr = qtc.QFileOpenEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QFileOpenEvent, callback: *const fn () callconv(.c) QFileOpenEvent) void {
        qtc.QFileOpenEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn superClone(self: QFileOpenEvent) QFileOpenEvent {
        return .{ .ptr = qtc.QFileOpenEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `file` instead
    ///
    pub const File = file;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#file)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn file(self: QFileOpenEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileOpenEvent_File(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileOpenEvent.file: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn url(self: QFileOpenEvent) QUrl {
        return .{ .ptr = qtc.QFileOpenEvent_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `openFile` instead
    ///
    pub const OpenFile = openFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#openFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    /// ` _file: QFile `
    ///
    /// ` _flags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn openFile(self: QFileOpenEvent, _file: anytype, _flags: i32) bool {
        comptime _ = @TypeOf(_file)._is_QFile;
        return qtc.QFileOpenEvent_OpenFile(@ptrCast(self.ptr), @ptrCast(_file.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QFileOpenEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn spontaneous(self: QFileOpenEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn isAccepted(self: QFileOpenEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn accept(self: QFileOpenEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn ignore(self: QFileOpenEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn isInputEvent(self: QFileOpenEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn isPointerEvent(self: QFileOpenEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn isSinglePointEvent(self: QFileOpenEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QFileOpenEvent, accepted: bool) void {
        qtc.QFileOpenEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QFileOpenEvent, accepted: bool) void {
        qtc.QFileOpenEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QFileOpenEvent, callback: *const fn (QFileOpenEvent, bool) callconv(.c) void) void {
        qtc.QFileOpenEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#dtor.QFileOpenEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFileOpenEvent `
    ///
    pub fn delete(self: QFileOpenEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QToolBarChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` t: bool `
    ///
    pub fn new(t: bool) QToolBarChangeEvent {
        return .{ .ptr = qtc.QToolBarChangeEvent_new(t) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn clone(self: QToolBarChangeEvent) QToolBarChangeEvent {
        return .{ .ptr = qtc.QToolBarChangeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QToolBarChangeEvent, callback: *const fn () callconv(.c) QToolBarChangeEvent) void {
        qtc.QToolBarChangeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn superClone(self: QToolBarChangeEvent) QToolBarChangeEvent {
        return .{ .ptr = qtc.QToolBarChangeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toggle` instead
    ///
    pub const Toggle = toggle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn toggle(self: QToolBarChangeEvent) bool {
        return qtc.QToolBarChangeEvent_Toggle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QToolBarChangeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn spontaneous(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn isAccepted(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn accept(self: QToolBarChangeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn ignore(self: QToolBarChangeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn isInputEvent(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn isPointerEvent(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn isSinglePointEvent(self: QToolBarChangeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QToolBarChangeEvent, accepted: bool) void {
        qtc.QToolBarChangeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QToolBarChangeEvent, accepted: bool) void {
        qtc.QToolBarChangeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QToolBarChangeEvent, callback: *const fn (QToolBarChangeEvent, bool) callconv(.c) void) void {
        qtc.QToolBarChangeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#dtor.QToolBarChangeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QToolBarChangeEvent `
    ///
    pub fn delete(self: QToolBarChangeEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QShortcutEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: QKeySequence `
    ///
    /// ` id: i32 `
    ///
    pub fn new(_key: anytype, id: i32) QShortcutEvent {
        comptime _ = @TypeOf(_key)._is_QKeySequence;
        return .{ .ptr = qtc.QShortcutEvent_new(@ptrCast(_key.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QShortcutEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: QKeySequence `
    ///
    pub fn new2(_key: anytype) QShortcutEvent {
        comptime _ = @TypeOf(_key)._is_QKeySequence;
        return .{ .ptr = qtc.QShortcutEvent_new2(@ptrCast(_key.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QShortcutEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: QKeySequence `
    ///
    /// ` id: i32 `
    ///
    /// ` ambiguous: bool `
    ///
    pub fn new3(_key: anytype, id: i32, ambiguous: bool) QShortcutEvent {
        comptime _ = @TypeOf(_key)._is_QKeySequence;
        return .{ .ptr = qtc.QShortcutEvent_new3(@ptrCast(_key.ptr), @bitCast(id), ambiguous) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QShortcutEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: QKeySequence `
    ///
    /// ` shortcut: QShortcut `
    ///
    pub fn new4(_key: anytype, shortcut: anytype) QShortcutEvent {
        comptime _ = @TypeOf(_key)._is_QKeySequence;
        comptime _ = @TypeOf(shortcut)._is_QShortcut;
        return .{ .ptr = qtc.QShortcutEvent_new4(@ptrCast(_key.ptr), @ptrCast(shortcut.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QShortcutEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: QKeySequence `
    ///
    /// ` shortcut: QShortcut `
    ///
    /// ` ambiguous: bool `
    ///
    pub fn new5(_key: anytype, shortcut: anytype, ambiguous: bool) QShortcutEvent {
        comptime _ = @TypeOf(_key)._is_QKeySequence;
        comptime _ = @TypeOf(shortcut)._is_QShortcut;
        return .{ .ptr = qtc.QShortcutEvent_new5(@ptrCast(_key.ptr), @ptrCast(shortcut.ptr), ambiguous) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn clone(self: QShortcutEvent) QShortcutEvent {
        return .{ .ptr = qtc.QShortcutEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QShortcutEvent, callback: *const fn () callconv(.c) QShortcutEvent) void {
        qtc.QShortcutEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn superClone(self: QShortcutEvent) QShortcutEvent {
        return .{ .ptr = qtc.QShortcutEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn key(self: QShortcutEvent) QKeySequence {
        return .{ .ptr = qtc.QShortcutEvent_Key(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `shortcutId` instead
    ///
    pub const ShortcutId = shortcutId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#shortcutId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn shortcutId(self: QShortcutEvent) i32 {
        return qtc.QShortcutEvent_ShortcutId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAmbiguous` instead
    ///
    pub const IsAmbiguous = isAmbiguous;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#isAmbiguous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn isAmbiguous(self: QShortcutEvent) bool {
        return qtc.QShortcutEvent_IsAmbiguous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QShortcutEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn spontaneous(self: QShortcutEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn isAccepted(self: QShortcutEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn accept(self: QShortcutEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn ignore(self: QShortcutEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn isInputEvent(self: QShortcutEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn isPointerEvent(self: QShortcutEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn isSinglePointEvent(self: QShortcutEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QShortcutEvent, accepted: bool) void {
        qtc.QShortcutEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QShortcutEvent, accepted: bool) void {
        qtc.QShortcutEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QShortcutEvent, callback: *const fn (QShortcutEvent, bool) callconv(.c) void) void {
        qtc.QShortcutEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#dtor.QShortcutEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QShortcutEvent `
    ///
    pub fn delete(self: QShortcutEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWindowStateChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _oldState: flag of qnamespace_enums.WindowState `
    ///
    pub fn new(_oldState: i32) QWindowStateChangeEvent {
        return .{ .ptr = qtc.QWindowStateChangeEvent_new(@bitCast(_oldState)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWindowStateChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _oldState: flag of qnamespace_enums.WindowState `
    ///
    /// ` _isOverride: bool `
    ///
    pub fn new2(_oldState: i32, _isOverride: bool) QWindowStateChangeEvent {
        return .{ .ptr = qtc.QWindowStateChangeEvent_new2(@bitCast(_oldState), _isOverride) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn clone(self: QWindowStateChangeEvent) QWindowStateChangeEvent {
        return .{ .ptr = qtc.QWindowStateChangeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QWindowStateChangeEvent, callback: *const fn () callconv(.c) QWindowStateChangeEvent) void {
        qtc.QWindowStateChangeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn superClone(self: QWindowStateChangeEvent) QWindowStateChangeEvent {
        return .{ .ptr = qtc.QWindowStateChangeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `oldState` instead
    ///
    pub const OldState = oldState;

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
    pub fn oldState(self: QWindowStateChangeEvent) i32 {
        return qtc.QWindowStateChangeEvent_OldState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOverride` instead
    ///
    pub const IsOverride = isOverride;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#isOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn isOverride(self: QWindowStateChangeEvent) bool {
        return qtc.QWindowStateChangeEvent_IsOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QWindowStateChangeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn spontaneous(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn isAccepted(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn accept(self: QWindowStateChangeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn ignore(self: QWindowStateChangeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn isInputEvent(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn isPointerEvent(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn isSinglePointEvent(self: QWindowStateChangeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QWindowStateChangeEvent, accepted: bool) void {
        qtc.QWindowStateChangeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QWindowStateChangeEvent, accepted: bool) void {
        qtc.QWindowStateChangeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QWindowStateChangeEvent, callback: *const fn (QWindowStateChangeEvent, bool) callconv(.c) void) void {
        qtc.QWindowStateChangeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#dtor.QWindowStateChangeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWindowStateChangeEvent `
    ///
    pub fn delete(self: QWindowStateChangeEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTouchEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    pub fn new(eventType: i32) QTouchEvent {
        return .{ .ptr = qtc.QTouchEvent_new(@bitCast(eventType)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTouchEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` _device: QPointingDevice `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _touchPointStates: flag of qeventpoint_enums.State `
    ///
    pub fn new2(eventType: i32, _device: anytype, _modifiers: i32, _touchPointStates: u8) QTouchEvent {
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QTouchEvent_new2(@bitCast(eventType), @ptrCast(_device.ptr), @bitCast(_modifiers), @bitCast(_touchPointStates)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTouchEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` _device: QPointingDevice `
    ///
    pub fn new3(eventType: i32, _device: anytype) QTouchEvent {
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QTouchEvent_new3(@bitCast(eventType), @ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTouchEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` _device: QPointingDevice `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn new4(eventType: i32, _device: anytype, _modifiers: i32) QTouchEvent {
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        return .{ .ptr = qtc.QTouchEvent_new4(@bitCast(eventType), @ptrCast(_device.ptr), @bitCast(_modifiers)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTouchEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` _device: QPointingDevice `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _touchPoints: []QEventPoint `
    ///
    pub fn new5(eventType: i32, _device: anytype, _modifiers: i32, _touchPoints: []QEventPoint) QTouchEvent {
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        const touchPoints_list = qtc.libqt_list{
            .len = _touchPoints.len,
            .data = @ptrCast(_touchPoints.ptr),
        };
        return .{ .ptr = qtc.QTouchEvent_new5(@bitCast(eventType), @ptrCast(_device.ptr), @bitCast(_modifiers), touchPoints_list) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTouchEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` eventType: qcoreevent_enums.Type `
    ///
    /// ` _device: QPointingDevice `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` _touchPointStates: flag of qeventpoint_enums.State `
    ///
    /// ` _touchPoints: []QEventPoint `
    ///
    pub fn new6(eventType: i32, _device: anytype, _modifiers: i32, _touchPointStates: u8, _touchPoints: []QEventPoint) QTouchEvent {
        comptime _ = @TypeOf(_device)._is_QPointingDevice;
        const touchPoints_list = qtc.libqt_list{
            .len = _touchPoints.len,
            .data = @ptrCast(_touchPoints.ptr),
        };
        return .{ .ptr = qtc.QTouchEvent_new6(@bitCast(eventType), @ptrCast(_device.ptr), @bitCast(_modifiers), @bitCast(_touchPointStates), touchPoints_list) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn clone(self: QTouchEvent) QTouchEvent {
        return .{ .ptr = qtc.QTouchEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QTouchEvent, callback: *const fn () callconv(.c) QTouchEvent) void {
        qtc.QTouchEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn superClone(self: QTouchEvent) QTouchEvent {
        return .{ .ptr = qtc.QTouchEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `target` instead
    ///
    pub const Target = target;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn target(self: QTouchEvent) QObject {
        return .{ .ptr = qtc.QTouchEvent_Target(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `touchPointStates` instead
    ///
    pub const TouchPointStates = touchPointStates;

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
    pub fn touchPointStates(self: QTouchEvent) u8 {
        return qtc.QTouchEvent_TouchPointStates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `touchPoints` instead
    ///
    pub const TouchPoints = touchPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#touchPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn touchPoints(self: QTouchEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QTouchEvent_TouchPoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QTouchEvent.touchPoints: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isBeginEvent` instead
    ///
    pub const IsBeginEvent = isBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn isBeginEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_IsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsBeginEvent` instead
    ///
    pub const OnIsBeginEvent = onIsBeginEvent;

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
    pub fn onIsBeginEvent(self: QTouchEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsBeginEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsBeginEvent` instead
    ///
    pub const SuperIsBeginEvent = superIsBeginEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn superIsBeginEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_SuperIsBeginEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUpdateEvent` instead
    ///
    pub const IsUpdateEvent = isUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn isUpdateEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_IsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsUpdateEvent` instead
    ///
    pub const OnIsUpdateEvent = onIsUpdateEvent;

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
    pub fn onIsUpdateEvent(self: QTouchEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsUpdateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsUpdateEvent` instead
    ///
    pub const SuperIsUpdateEvent = superIsUpdateEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn superIsUpdateEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_SuperIsUpdateEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEndEvent` instead
    ///
    pub const IsEndEvent = isEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn isEndEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_IsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEndEvent` instead
    ///
    pub const OnIsEndEvent = onIsEndEvent;

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
    pub fn onIsEndEvent(self: QTouchEvent, callback: *const fn () callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsEndEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEndEvent` instead
    ///
    pub const SuperIsEndEvent = superIsEndEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn superIsEndEvent(self: QTouchEvent) bool {
        return qtc.QTouchEvent_SuperIsEndEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointingDevice` instead
    ///
    pub const PointingDevice = pointingDevice;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn pointingDevice(self: QTouchEvent) QPointingDevice {
        return .{ .ptr = qtc.QPointerEvent_PointingDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pointerType` instead
    ///
    pub const PointerType = pointerType;

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
    pub fn pointerType(self: QTouchEvent) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointCount` instead
    ///
    pub const PointCount = pointCount;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn pointCount(self: QTouchEvent) isize {
        return qtc.QPointerEvent_PointCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

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
    pub fn point(self: QTouchEvent, i: isize) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_Point(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

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
    pub fn points(self: QTouchEvent, allocator: std.mem.Allocator) []QEventPoint {
        const _arr: qtc.libqt_list = qtc.QPointerEvent_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QEventPoint, _arr.len) catch @panic("QTouchEvent.points: Memory allocation failed");
        const _data_val: [*]QtC.QEventPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointById` instead
    ///
    pub const PointById = pointById;

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
    pub fn pointById(self: QTouchEvent, id: i32) QEventPoint {
        return .{ .ptr = qtc.QPointerEvent_PointById(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `allPointsGrabbed` instead
    ///
    pub const AllPointsGrabbed = allPointsGrabbed;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn allPointsGrabbed(self: QTouchEvent) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allPointsAccepted` instead
    ///
    pub const AllPointsAccepted = allPointsAccepted;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn allPointsAccepted(self: QTouchEvent) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exclusiveGrabber` instead
    ///
    pub const ExclusiveGrabber = exclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn exclusiveGrabber(self: QTouchEvent, _point: anytype) QObject {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        return .{ .ptr = qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr)) };
    }

    /// ### DEPRECATED: Use `setExclusiveGrabber` instead
    ///
    pub const SetExclusiveGrabber = setExclusiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` _exclusiveGrabber: QObject `
    ///
    pub fn setExclusiveGrabber(self: QTouchEvent, _point: anytype, _exclusiveGrabber: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(_exclusiveGrabber)._is_QObject;
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(_exclusiveGrabber.ptr));
    }

    /// ### DEPRECATED: Use `clearPassiveGrabbers` instead
    ///
    pub const ClearPassiveGrabbers = clearPassiveGrabbers;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    pub fn clearPassiveGrabbers(self: QTouchEvent, _point: anytype) void {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self.ptr), @ptrCast(_point.ptr));
    }

    /// ### DEPRECATED: Use `addPassiveGrabber` instead
    ///
    pub const AddPassiveGrabber = addPassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn addPassiveGrabber(self: QTouchEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `removePassiveGrabber` instead
    ///
    pub const RemovePassiveGrabber = removePassiveGrabber;

    /// Inherited from QPointerEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` _point: QEventPoint `
    ///
    /// ` grabber: QObject `
    ///
    pub fn removePassiveGrabber(self: QTouchEvent, _point: anytype, grabber: anytype) bool {
        comptime _ = @TypeOf(_point)._is_QEventPoint;
        comptime _ = @TypeOf(grabber)._is_QObject;
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self.ptr), @ptrCast(_point.ptr), @ptrCast(grabber.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn device(self: QTouchEvent) QInputDevice {
        return .{ .ptr = qtc.QInputEvent_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceType` instead
    ///
    pub const DeviceType = deviceType;

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
    pub fn deviceType(self: QTouchEvent) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: QTouchEvent) i32 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QTouchEvent, _modifiers: i32) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QInputEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn timestamp(self: QTouchEvent) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QTouchEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn spontaneous(self: QTouchEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn isAccepted(self: QTouchEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn accept(self: QTouchEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn ignore(self: QTouchEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn isInputEvent(self: QTouchEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn isPointerEvent(self: QTouchEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn isSinglePointEvent(self: QTouchEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn setTimestamp(self: QTouchEvent, _timestamp: u64) void {
        qtc.QTouchEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `superSetTimestamp` instead
    ///
    pub const SuperSetTimestamp = superSetTimestamp;

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
    /// ` _timestamp: u64 `
    ///
    pub fn superSetTimestamp(self: QTouchEvent, _timestamp: u64) void {
        qtc.QTouchEvent_SuperSetTimestamp(@ptrCast(self.ptr), @bitCast(_timestamp));
    }

    /// ### DEPRECATED: Use `onSetTimestamp` instead
    ///
    pub const OnSetTimestamp = onSetTimestamp;

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
    pub fn onSetTimestamp(self: QTouchEvent, callback: *const fn (QTouchEvent, u64) callconv(.c) void) void {
        qtc.QTouchEvent_OnSetTimestamp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QTouchEvent, accepted: bool) void {
        qtc.QTouchEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QTouchEvent, accepted: bool) void {
        qtc.QTouchEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QTouchEvent, callback: *const fn (QTouchEvent, bool) callconv(.c) void) void {
        qtc.QTouchEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#dtor.QTouchEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTouchEvent `
    ///
    pub fn delete(self: QTouchEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QScrollPrepareEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _startPos: QPointF `
    ///
    pub fn new(_startPos: anytype) QScrollPrepareEvent {
        comptime _ = @TypeOf(_startPos)._is_QPointF;
        return .{ .ptr = qtc.QScrollPrepareEvent_new(@ptrCast(_startPos.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn clone(self: QScrollPrepareEvent) QScrollPrepareEvent {
        return .{ .ptr = qtc.QScrollPrepareEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QScrollPrepareEvent, callback: *const fn () callconv(.c) QScrollPrepareEvent) void {
        qtc.QScrollPrepareEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn superClone(self: QScrollPrepareEvent) QScrollPrepareEvent {
        return .{ .ptr = qtc.QScrollPrepareEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `startPos` instead
    ///
    pub const StartPos = startPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#startPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn startPos(self: QScrollPrepareEvent) QPointF {
        return .{ .ptr = qtc.QScrollPrepareEvent_StartPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `viewportSize` instead
    ///
    pub const ViewportSize = viewportSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#viewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn viewportSize(self: QScrollPrepareEvent) QSizeF {
        return .{ .ptr = qtc.QScrollPrepareEvent_ViewportSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentPosRange` instead
    ///
    pub const ContentPosRange = contentPosRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPosRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn contentPosRange(self: QScrollPrepareEvent) QRectF {
        return .{ .ptr = qtc.QScrollPrepareEvent_ContentPosRange(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentPos` instead
    ///
    pub const ContentPos = contentPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn contentPos(self: QScrollPrepareEvent) QPointF {
        return .{ .ptr = qtc.QScrollPrepareEvent_ContentPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewportSize` instead
    ///
    pub const SetViewportSize = setViewportSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setViewportSize(self: QScrollPrepareEvent, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QScrollPrepareEvent_SetViewportSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setContentPosRange` instead
    ///
    pub const SetContentPosRange = setContentPosRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPosRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn setContentPosRange(self: QScrollPrepareEvent, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QScrollPrepareEvent_SetContentPosRange(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setContentPos` instead
    ///
    pub const SetContentPos = setContentPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setContentPos(self: QScrollPrepareEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QScrollPrepareEvent_SetContentPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QScrollPrepareEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn spontaneous(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn isAccepted(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn accept(self: QScrollPrepareEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn ignore(self: QScrollPrepareEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn isInputEvent(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn isPointerEvent(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn isSinglePointEvent(self: QScrollPrepareEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QScrollPrepareEvent, accepted: bool) void {
        qtc.QScrollPrepareEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QScrollPrepareEvent, accepted: bool) void {
        qtc.QScrollPrepareEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QScrollPrepareEvent, callback: *const fn (QScrollPrepareEvent, bool) callconv(.c) void) void {
        qtc.QScrollPrepareEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#dtor.QScrollPrepareEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QScrollPrepareEvent `
    ///
    pub fn delete(self: QScrollPrepareEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QScrollEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _contentPos: QPointF `
    ///
    /// ` overshoot: QPointF `
    ///
    /// ` _scrollState: qevent_enums.ScrollState `
    ///
    pub fn new(_contentPos: anytype, overshoot: anytype, _scrollState: i32) QScrollEvent {
        comptime _ = @TypeOf(_contentPos)._is_QPointF;
        comptime _ = @TypeOf(overshoot)._is_QPointF;
        return .{ .ptr = qtc.QScrollEvent_new(@ptrCast(_contentPos.ptr), @ptrCast(overshoot.ptr), @bitCast(_scrollState)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn clone(self: QScrollEvent) QScrollEvent {
        return .{ .ptr = qtc.QScrollEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QScrollEvent, callback: *const fn () callconv(.c) QScrollEvent) void {
        qtc.QScrollEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn superClone(self: QScrollEvent) QScrollEvent {
        return .{ .ptr = qtc.QScrollEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentPos` instead
    ///
    pub const ContentPos = contentPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#contentPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn contentPos(self: QScrollEvent) QPointF {
        return .{ .ptr = qtc.QScrollEvent_ContentPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `overshootDistance` instead
    ///
    pub const OvershootDistance = overshootDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#overshootDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn overshootDistance(self: QScrollEvent) QPointF {
        return .{ .ptr = qtc.QScrollEvent_OvershootDistance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scrollState` instead
    ///
    pub const ScrollState = scrollState;

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
    pub fn scrollState(self: QScrollEvent) i32 {
        return qtc.QScrollEvent_ScrollState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QScrollEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn spontaneous(self: QScrollEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn isAccepted(self: QScrollEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn accept(self: QScrollEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn ignore(self: QScrollEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn isInputEvent(self: QScrollEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn isPointerEvent(self: QScrollEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn isSinglePointEvent(self: QScrollEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QScrollEvent, accepted: bool) void {
        qtc.QScrollEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QScrollEvent, accepted: bool) void {
        qtc.QScrollEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QScrollEvent, callback: *const fn (QScrollEvent, bool) callconv(.c) void) void {
        qtc.QScrollEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#dtor.QScrollEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QScrollEvent `
    ///
    pub fn delete(self: QScrollEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QScreenOrientationChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _screen: QScreen `
    ///
    /// ` _orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn new(_screen: anytype, _orientation: i32) QScreenOrientationChangeEvent {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        return .{ .ptr = qtc.QScreenOrientationChangeEvent_new(@ptrCast(_screen.ptr), @bitCast(_orientation)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn clone(self: QScreenOrientationChangeEvent) QScreenOrientationChangeEvent {
        return .{ .ptr = qtc.QScreenOrientationChangeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QScreenOrientationChangeEvent, callback: *const fn () callconv(.c) QScreenOrientationChangeEvent) void {
        qtc.QScreenOrientationChangeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn superClone(self: QScreenOrientationChangeEvent) QScreenOrientationChangeEvent {
        return .{ .ptr = qtc.QScreenOrientationChangeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn screen(self: QScreenOrientationChangeEvent) QScreen {
        return .{ .ptr = qtc.QScreenOrientationChangeEvent_Screen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

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
    pub fn orientation(self: QScreenOrientationChangeEvent) i32 {
        return qtc.QScreenOrientationChangeEvent_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QScreenOrientationChangeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn spontaneous(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn isAccepted(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn accept(self: QScreenOrientationChangeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn ignore(self: QScreenOrientationChangeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn isInputEvent(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn isPointerEvent(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn isSinglePointEvent(self: QScreenOrientationChangeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QScreenOrientationChangeEvent, accepted: bool) void {
        qtc.QScreenOrientationChangeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QScreenOrientationChangeEvent, accepted: bool) void {
        qtc.QScreenOrientationChangeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QScreenOrientationChangeEvent, callback: *const fn (QScreenOrientationChangeEvent, bool) callconv(.c) void) void {
        qtc.QScreenOrientationChangeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#dtor.QScreenOrientationChangeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QScreenOrientationChangeEvent `
    ///
    pub fn delete(self: QScreenOrientationChangeEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QApplicationStateChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` state: qnamespace_enums.ApplicationState `
    ///
    pub fn new(state: i32) QApplicationStateChangeEvent {
        return .{ .ptr = qtc.QApplicationStateChangeEvent_new(@bitCast(state)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn clone(self: QApplicationStateChangeEvent) QApplicationStateChangeEvent {
        return .{ .ptr = qtc.QApplicationStateChangeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QApplicationStateChangeEvent, callback: *const fn () callconv(.c) QApplicationStateChangeEvent) void {
        qtc.QApplicationStateChangeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn superClone(self: QApplicationStateChangeEvent) QApplicationStateChangeEvent {
        return .{ .ptr = qtc.QApplicationStateChangeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `applicationState` instead
    ///
    pub const ApplicationState = applicationState;

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
    pub fn applicationState(self: QApplicationStateChangeEvent) i32 {
        return qtc.QApplicationStateChangeEvent_ApplicationState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QApplicationStateChangeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn spontaneous(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn isAccepted(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn accept(self: QApplicationStateChangeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn ignore(self: QApplicationStateChangeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn isInputEvent(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn isPointerEvent(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn isSinglePointEvent(self: QApplicationStateChangeEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QApplicationStateChangeEvent, accepted: bool) void {
        qtc.QApplicationStateChangeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QApplicationStateChangeEvent, accepted: bool) void {
        qtc.QApplicationStateChangeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QApplicationStateChangeEvent, callback: *const fn (QApplicationStateChangeEvent, bool) callconv(.c) void) void {
        qtc.QApplicationStateChangeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#dtor.QApplicationStateChangeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QApplicationStateChangeEvent `
    ///
    pub fn delete(self: QApplicationStateChangeEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QChildWindowEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` childWindow: QWindow `
    ///
    pub fn new(typeVal: i32, childWindow: anytype) QChildWindowEvent {
        comptime _ = @TypeOf(childWindow)._is_QWindow;
        return .{ .ptr = qtc.QChildWindowEvent_new(@bitCast(typeVal), @ptrCast(childWindow.ptr)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn clone(self: QChildWindowEvent) QChildWindowEvent {
        return .{ .ptr = qtc.QChildWindowEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QChildWindowEvent, callback: *const fn () callconv(.c) QChildWindowEvent) void {
        qtc.QChildWindowEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn superClone(self: QChildWindowEvent) QChildWindowEvent {
        return .{ .ptr = qtc.QChildWindowEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn child(self: QChildWindowEvent) QWindow {
        return .{ .ptr = qtc.QChildWindowEvent_Child(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QChildWindowEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn spontaneous(self: QChildWindowEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn isAccepted(self: QChildWindowEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn accept(self: QChildWindowEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn ignore(self: QChildWindowEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn isInputEvent(self: QChildWindowEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn isPointerEvent(self: QChildWindowEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn isSinglePointEvent(self: QChildWindowEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QChildWindowEvent, accepted: bool) void {
        qtc.QChildWindowEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QChildWindowEvent, accepted: bool) void {
        qtc.QChildWindowEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QChildWindowEvent, callback: *const fn (QChildWindowEvent, bool) callconv(.c) void) void {
        qtc.QChildWindowEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#dtor.QChildWindowEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QChildWindowEvent `
    ///
    pub fn delete(self: QChildWindowEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QInputMethodEvent::Attribute object in C++ memory
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
    pub fn new(typ: i32, s: i32, l: i32, val: anytype) QInputMethodEvent__Attribute {
        comptime _ = @TypeOf(val)._is_QVariant;
        return .{ .ptr = qtc.QInputMethodEvent__Attribute_new(@bitCast(typ), @bitCast(s), @bitCast(l), @ptrCast(val.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QInputMethodEvent::Attribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typ: qevent_enums.AttributeType `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    pub fn new2(typ: i32, s: i32, l: i32) QInputMethodEvent__Attribute {
        return .{ .ptr = qtc.QInputMethodEvent__Attribute_new2(@bitCast(typ), @bitCast(s), @bitCast(l)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QInputMethodEvent::Attribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QInputMethodEvent__Attribute `
    ///
    pub fn new3(param1: anytype) QInputMethodEvent__Attribute {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent__Attribute;
        return .{ .ptr = qtc.QInputMethodEvent__Attribute_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QInputMethodEvent__Attribute) i32 {
        return qtc.QInputMethodEvent__Attribute_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` _type: qevent_enums.AttributeType `
    ///
    pub fn setType(self: QInputMethodEvent__Attribute, _type: i32) void {
        qtc.QInputMethodEvent__Attribute_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    pub fn start(self: QInputMethodEvent__Attribute) i32 {
        return qtc.QInputMethodEvent__Attribute_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` _start: i32 `
    ///
    pub fn setStart(self: QInputMethodEvent__Attribute, _start: i32) void {
        qtc.QInputMethodEvent__Attribute_SetStart(@ptrCast(self.ptr), @bitCast(_start));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    pub fn length(self: QInputMethodEvent__Attribute) i32 {
        return qtc.QInputMethodEvent__Attribute_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLength` instead
    ///
    pub const SetLength = setLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` _length: i32 `
    ///
    pub fn setLength(self: QInputMethodEvent__Attribute, _length: i32) void {
        qtc.QInputMethodEvent__Attribute_SetLength(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    pub fn value(self: QInputMethodEvent__Attribute) QVariant {
        return .{ .ptr = qtc.QInputMethodEvent__Attribute_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#value-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setValue(self: QInputMethodEvent__Attribute, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QInputMethodEvent__Attribute_SetValue(@ptrCast(self.ptr), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    /// ` param1: QInputMethodEvent__Attribute `
    ///
    pub fn operatorAssign(self: QInputMethodEvent__Attribute, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent__Attribute;
        qtc.QInputMethodEvent__Attribute_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QInputMethodEvent__Attribute `
    ///
    pub fn delete(self: QInputMethodEvent__Attribute) void {
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
