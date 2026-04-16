const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const qcoreevent_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html)
pub const QEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QEvent,

    pub const _is_QEvent = {};

    /// New constructs a new QEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New(typeVal: i32) QEvent {
        return .{ .ptr = qtc.QEvent_new(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    pub fn Spontaneous(self: QEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QEvent, accepted: bool) void {
        qtc.QEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QEvent `
    ///
    /// ` callback: *const fn (self: QEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QEvent, callback: *const fn (QEvent, bool) callconv(.c) void) void {
        qtc.QEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QEvent, accepted: bool) void {
        qtc.QEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    pub fn IsAccepted(self: QEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    pub fn Accept(self: QEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    pub fn Ignore(self: QEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    pub fn IsInputEvent(self: QEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    pub fn IsPointerEvent(self: QEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    pub fn IsSinglePointEvent(self: QEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    pub fn Clone(self: QEvent) QEvent {
        return .{ .ptr = qtc.QEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn OnClone(self: QEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QEvent `
    ///
    pub fn SuperClone(self: QEvent) QEvent {
        return .{ .ptr = qtc.QEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#dtor.QEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QEvent `
    ///
    pub fn Delete(self: QEvent) void {
        qtc.QEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html)
pub const QTimerEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTimerEvent,

    pub const _is_QTimerEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QTimerEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` timerId: i32 `
    ///
    pub fn New(timerId: i32) QTimerEvent {
        return .{ .ptr = qtc.QTimerEvent_new(@bitCast(timerId)) };
    }

    /// New2 constructs a new QTimerEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` timerId: qnamespace_enums.TimerId `
    ///
    pub fn New2(timerId: i32) QTimerEvent {
        return .{ .ptr = qtc.QTimerEvent_new2(@bitCast(timerId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn Clone(self: QTimerEvent) QTimerEvent {
        return .{ .ptr = qtc.QTimerEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimerEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QTimerEvent `
    ///
    pub fn OnClone(self: QTimerEvent, callback: *const fn () callconv(.c) QTimerEvent) void {
        qtc.QTimerEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn SuperClone(self: QTimerEvent) QTimerEvent {
        return .{ .ptr = qtc.QTimerEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#timerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn TimerId(self: QTimerEvent) i32 {
        return qtc.QTimerEvent_TimerId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimerId `
    ///
    pub fn Id(self: QTimerEvent) i32 {
        return qtc.QTimerEvent_Id(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QTimerEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn Spontaneous(self: QTimerEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn IsAccepted(self: QTimerEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn Accept(self: QTimerEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn Ignore(self: QTimerEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn IsInputEvent(self: QTimerEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn IsPointerEvent(self: QTimerEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn IsSinglePointEvent(self: QTimerEvent) bool {
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
    /// ` self: QTimerEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QTimerEvent, accepted: bool) void {
        qtc.QTimerEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QTimerEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QTimerEvent, accepted: bool) void {
        qtc.QTimerEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimerEvent`
    ///
    /// ` callback: *const fn (self: QTimerEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QTimerEvent, callback: *const fn (QTimerEvent, bool) callconv(.c) void) void {
        qtc.QTimerEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#dtor.QTimerEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTimerEvent `
    ///
    pub fn Delete(self: QTimerEvent) void {
        qtc.QTimerEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html)
pub const QChildEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QChildEvent,

    pub const _is_QChildEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QChildEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` child: QObject `
    ///
    pub fn New(typeVal: i32, child: anytype) QChildEvent {
        comptime _ = @TypeOf(child)._is_QObject;
        return .{ .ptr = qtc.QChildEvent_new(@bitCast(typeVal), @ptrCast(child.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn Clone(self: QChildEvent) QChildEvent {
        return .{ .ptr = qtc.QChildEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChildEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QChildEvent `
    ///
    pub fn OnClone(self: QChildEvent, callback: *const fn () callconv(.c) QChildEvent) void {
        qtc.QChildEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn SuperClone(self: QChildEvent) QChildEvent {
        return .{ .ptr = qtc.QChildEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn Child(self: QChildEvent) QObject {
        return .{ .ptr = qtc.QChildEvent_Child(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#added)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn Added(self: QChildEvent) bool {
        return qtc.QChildEvent_Added(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#polished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn Polished(self: QChildEvent) bool {
        return qtc.QChildEvent_Polished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#removed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn Removed(self: QChildEvent) bool {
        return qtc.QChildEvent_Removed(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QChildEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn Spontaneous(self: QChildEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn IsAccepted(self: QChildEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn Accept(self: QChildEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn Ignore(self: QChildEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn IsInputEvent(self: QChildEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn IsPointerEvent(self: QChildEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChildEvent `
    ///
    pub fn IsSinglePointEvent(self: QChildEvent) bool {
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
    /// ` self: QChildEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QChildEvent, accepted: bool) void {
        qtc.QChildEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QChildEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QChildEvent, accepted: bool) void {
        qtc.QChildEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QChildEvent`
    ///
    /// ` callback: *const fn (self: QChildEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QChildEvent, callback: *const fn (QChildEvent, bool) callconv(.c) void) void {
        qtc.QChildEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#dtor.QChildEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QChildEvent `
    ///
    pub fn Delete(self: QChildEvent) void {
        qtc.QChildEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html)
pub const QDynamicPropertyChangeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDynamicPropertyChangeEvent,

    pub const _is_QDynamicPropertyChangeEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QDynamicPropertyChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    pub fn New(name: []u8) QDynamicPropertyChangeEvent {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDynamicPropertyChangeEvent_new(name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn Clone(self: QDynamicPropertyChangeEvent) QDynamicPropertyChangeEvent {
        return .{ .ptr = qtc.QDynamicPropertyChangeEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QDynamicPropertyChangeEvent `
    ///
    pub fn OnClone(self: QDynamicPropertyChangeEvent, callback: *const fn () callconv(.c) QDynamicPropertyChangeEvent) void {
        qtc.QDynamicPropertyChangeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn SuperClone(self: QDynamicPropertyChangeEvent) QDynamicPropertyChangeEvent {
        return .{ .ptr = qtc.QDynamicPropertyChangeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#propertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PropertyName(self: QDynamicPropertyChangeEvent, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDynamicPropertyChangeEvent_PropertyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdynamicpropertychangeevent.PropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QDynamicPropertyChangeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn Spontaneous(self: QDynamicPropertyChangeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn IsAccepted(self: QDynamicPropertyChangeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn Accept(self: QDynamicPropertyChangeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn Ignore(self: QDynamicPropertyChangeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn IsInputEvent(self: QDynamicPropertyChangeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn IsPointerEvent(self: QDynamicPropertyChangeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn IsSinglePointEvent(self: QDynamicPropertyChangeEvent) bool {
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
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QDynamicPropertyChangeEvent, accepted: bool) void {
        qtc.QDynamicPropertyChangeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QDynamicPropertyChangeEvent, accepted: bool) void {
        qtc.QDynamicPropertyChangeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDynamicPropertyChangeEvent`
    ///
    /// ` callback: *const fn (self: QDynamicPropertyChangeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QDynamicPropertyChangeEvent, callback: *const fn (QDynamicPropertyChangeEvent, bool) callconv(.c) void) void {
        qtc.QDynamicPropertyChangeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#dtor.QDynamicPropertyChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDynamicPropertyChangeEvent `
    ///
    pub fn Delete(self: QDynamicPropertyChangeEvent) void {
        qtc.QDynamicPropertyChangeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreevent.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const None: i32 = 0;
        pub const Timer: i32 = 1;
        pub const MouseButtonPress: i32 = 2;
        pub const MouseButtonRelease: i32 = 3;
        pub const MouseButtonDblClick: i32 = 4;
        pub const MouseMove: i32 = 5;
        pub const KeyPress: i32 = 6;
        pub const KeyRelease: i32 = 7;
        pub const FocusIn: i32 = 8;
        pub const FocusOut: i32 = 9;
        pub const FocusAboutToChange: i32 = 23;
        pub const Enter: i32 = 10;
        pub const Leave: i32 = 11;
        pub const Paint: i32 = 12;
        pub const Move: i32 = 13;
        pub const Resize: i32 = 14;
        pub const Create: i32 = 15;
        pub const Destroy: i32 = 16;
        pub const Show: i32 = 17;
        pub const Hide: i32 = 18;
        pub const Close: i32 = 19;
        pub const Quit: i32 = 20;
        pub const ParentChange: i32 = 21;
        pub const ParentAboutToChange: i32 = 131;
        pub const ThreadChange: i32 = 22;
        pub const WindowActivate: i32 = 24;
        pub const WindowDeactivate: i32 = 25;
        pub const ShowToParent: i32 = 26;
        pub const HideToParent: i32 = 27;
        pub const Wheel: i32 = 31;
        pub const WindowTitleChange: i32 = 33;
        pub const WindowIconChange: i32 = 34;
        pub const ApplicationWindowIconChange: i32 = 35;
        pub const ApplicationFontChange: i32 = 36;
        pub const ApplicationLayoutDirectionChange: i32 = 37;
        pub const ApplicationPaletteChange: i32 = 38;
        pub const PaletteChange: i32 = 39;
        pub const Clipboard: i32 = 40;
        pub const Speech: i32 = 42;
        pub const MetaCall: i32 = 43;
        pub const SockAct: i32 = 50;
        pub const WinEventAct: i32 = 132;
        pub const DeferredDelete: i32 = 52;
        pub const DragEnter: i32 = 60;
        pub const DragMove: i32 = 61;
        pub const DragLeave: i32 = 62;
        pub const Drop: i32 = 63;
        pub const DragResponse: i32 = 64;
        pub const ChildAdded: i32 = 68;
        pub const ChildPolished: i32 = 69;
        pub const ChildRemoved: i32 = 71;
        pub const ShowWindowRequest: i32 = 73;
        pub const PolishRequest: i32 = 74;
        pub const Polish: i32 = 75;
        pub const LayoutRequest: i32 = 76;
        pub const UpdateRequest: i32 = 77;
        pub const UpdateLater: i32 = 78;
        pub const EmbeddingControl: i32 = 79;
        pub const ActivateControl: i32 = 80;
        pub const DeactivateControl: i32 = 81;
        pub const ContextMenu: i32 = 82;
        pub const InputMethod: i32 = 83;
        pub const TabletMove: i32 = 87;
        pub const LocaleChange: i32 = 88;
        pub const LanguageChange: i32 = 89;
        pub const LayoutDirectionChange: i32 = 90;
        pub const Style: i32 = 91;
        pub const TabletPress: i32 = 92;
        pub const TabletRelease: i32 = 93;
        pub const OkRequest: i32 = 94;
        pub const HelpRequest: i32 = 95;
        pub const IconDrag: i32 = 96;
        pub const FontChange: i32 = 97;
        pub const EnabledChange: i32 = 98;
        pub const ActivationChange: i32 = 99;
        pub const StyleChange: i32 = 100;
        pub const IconTextChange: i32 = 101;
        pub const ModifiedChange: i32 = 102;
        pub const MouseTrackingChange: i32 = 109;
        pub const WindowBlocked: i32 = 103;
        pub const WindowUnblocked: i32 = 104;
        pub const WindowStateChange: i32 = 105;
        pub const ReadOnlyChange: i32 = 106;
        pub const ToolTip: i32 = 110;
        pub const WhatsThis: i32 = 111;
        pub const StatusTip: i32 = 112;
        pub const ActionChanged: i32 = 113;
        pub const ActionAdded: i32 = 114;
        pub const ActionRemoved: i32 = 115;
        pub const FileOpen: i32 = 116;
        pub const Shortcut: i32 = 117;
        pub const ShortcutOverride: i32 = 51;
        pub const WhatsThisClicked: i32 = 118;
        pub const ToolBarChange: i32 = 120;
        pub const ApplicationActivate: i32 = 121;
        pub const ApplicationActivated: i32 = 121;
        pub const ApplicationDeactivate: i32 = 122;
        pub const ApplicationDeactivated: i32 = 122;
        pub const QueryWhatsThis: i32 = 123;
        pub const EnterWhatsThisMode: i32 = 124;
        pub const LeaveWhatsThisMode: i32 = 125;
        pub const ZOrderChange: i32 = 126;
        pub const HoverEnter: i32 = 127;
        pub const HoverLeave: i32 = 128;
        pub const HoverMove: i32 = 129;
        pub const AcceptDropsChange: i32 = 152;
        pub const ZeroTimerEvent: i32 = 154;
        pub const GraphicsSceneMouseMove: i32 = 155;
        pub const GraphicsSceneMousePress: i32 = 156;
        pub const GraphicsSceneMouseRelease: i32 = 157;
        pub const GraphicsSceneMouseDoubleClick: i32 = 158;
        pub const GraphicsSceneContextMenu: i32 = 159;
        pub const GraphicsSceneHoverEnter: i32 = 160;
        pub const GraphicsSceneHoverMove: i32 = 161;
        pub const GraphicsSceneHoverLeave: i32 = 162;
        pub const GraphicsSceneHelp: i32 = 163;
        pub const GraphicsSceneDragEnter: i32 = 164;
        pub const GraphicsSceneDragMove: i32 = 165;
        pub const GraphicsSceneDragLeave: i32 = 166;
        pub const GraphicsSceneDrop: i32 = 167;
        pub const GraphicsSceneWheel: i32 = 168;
        pub const GraphicsSceneLeave: i32 = 220;
        pub const KeyboardLayoutChange: i32 = 169;
        pub const DynamicPropertyChange: i32 = 170;
        pub const TabletEnterProximity: i32 = 171;
        pub const TabletLeaveProximity: i32 = 172;
        pub const NonClientAreaMouseMove: i32 = 173;
        pub const NonClientAreaMouseButtonPress: i32 = 174;
        pub const NonClientAreaMouseButtonRelease: i32 = 175;
        pub const NonClientAreaMouseButtonDblClick: i32 = 176;
        pub const MacSizeChange: i32 = 177;
        pub const ContentsRectChange: i32 = 178;
        pub const MacGLWindowChange: i32 = 179;
        pub const FutureCallOut: i32 = 180;
        pub const GraphicsSceneResize: i32 = 181;
        pub const GraphicsSceneMove: i32 = 182;
        pub const CursorChange: i32 = 183;
        pub const ToolTipChange: i32 = 184;
        pub const NetworkReplyUpdated: i32 = 185;
        pub const GrabMouse: i32 = 186;
        pub const UngrabMouse: i32 = 187;
        pub const GrabKeyboard: i32 = 188;
        pub const UngrabKeyboard: i32 = 189;
        pub const StateMachineSignal: i32 = 192;
        pub const StateMachineWrapped: i32 = 193;
        pub const TouchBegin: i32 = 194;
        pub const TouchUpdate: i32 = 195;
        pub const TouchEnd: i32 = 196;
        pub const NativeGesture: i32 = 197;
        pub const RequestSoftwareInputPanel: i32 = 199;
        pub const CloseSoftwareInputPanel: i32 = 200;
        pub const WinIdChange: i32 = 203;
        pub const Gesture: i32 = 198;
        pub const GestureOverride: i32 = 202;
        pub const ScrollPrepare: i32 = 204;
        pub const Scroll: i32 = 205;
        pub const Expose: i32 = 206;
        pub const InputMethodQuery: i32 = 207;
        pub const OrientationChange: i32 = 208;
        pub const TouchCancel: i32 = 209;
        pub const ThemeChange: i32 = 210;
        pub const SockClose: i32 = 211;
        pub const PlatformPanel: i32 = 212;
        pub const StyleAnimationUpdate: i32 = 213;
        pub const ApplicationStateChange: i32 = 214;
        pub const WindowChangeInternal: i32 = 215;
        pub const ScreenChangeInternal: i32 = 216;
        pub const PlatformSurface: i32 = 217;
        pub const Pointer: i32 = 218;
        pub const TabletTrackingChange: i32 = 219;
        pub const WindowAboutToChangeInternal: i32 = 221;
        pub const DevicePixelRatioChange: i32 = 222;
        pub const ChildWindowAdded: i32 = 223;
        pub const ChildWindowRemoved: i32 = 224;
        pub const ParentWindowAboutToChange: i32 = 225;
        pub const ParentWindowChange: i32 = 226;
        pub const User: i32 = 1000;
        pub const MaxUser: i32 = 65535;
    };
};
