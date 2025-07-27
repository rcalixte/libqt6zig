const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qevent.html
pub const qevent = struct {
    /// New constructs a new QEvent object.
    ///
    /// ``` typeVal: qcoreevent_enums.Type ```
    pub fn New(typeVal: i64) QtC.QEvent {
        return qtc.QEvent_new(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// ``` self: QtC.QEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QEvent, slot: fn (self: QtC.QEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// ``` self: QtC.QEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QEvent, slot: fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QEvent) void {
        qtc.QEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#dtor.QEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtimerevent.html
pub const qtimerevent = struct {
    /// New constructs a new QTimerEvent object.
    ///
    /// ``` timerId: i32 ```
    pub fn New(timerId: i32) QtC.QTimerEvent {
        return qtc.QTimerEvent_new(@intCast(timerId));
    }

    /// New2 constructs a new QTimerEvent object.
    ///
    /// ``` timerId: qnamespace_enums.TimerId ```
    pub fn New2(timerId: i64) QtC.QTimerEvent {
        return qtc.QTimerEvent_new2(@intCast(timerId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#clone)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QTimerEvent {
        return qtc.QTimerEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTimerEvent, slot: fn () callconv(.c) QtC.QTimerEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTimerEvent) void {
        qtc.QTimerEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QTimerEvent {
        return qtc.QTimerEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#timerId)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn TimerId(self: ?*anyopaque) i32 {
        return qtc.QTimerEvent_TimerId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#id)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn Id(self: ?*anyopaque) i64 {
        return qtc.QTimerEvent_Id(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QTimerEvent ```
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
    /// ``` self: QtC.QTimerEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTimerEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTimerEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QTimerEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTimerEvent, slot: fn (self: QtC.QTimerEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTimerEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#dtor.QTimerEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTimerEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTimerEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qchildevent.html
pub const qchildevent = struct {
    /// New constructs a new QChildEvent object.
    ///
    /// ``` typeVal: qcoreevent_enums.Type, child: QtC.QObject ```
    pub fn New(typeVal: i64, child: ?*anyopaque) QtC.QChildEvent {
        return qtc.QChildEvent_new(@intCast(typeVal), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#clone)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QChildEvent {
        return qtc.QChildEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QChildEvent, slot: fn () callconv(.c) QtC.QChildEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QChildEvent) void {
        qtc.QChildEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QChildEvent {
        return qtc.QChildEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#child)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn Child(self: ?*anyopaque) QtC.QObject {
        return qtc.QChildEvent_Child(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#added)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn Added(self: ?*anyopaque) bool {
        return qtc.QChildEvent_Added(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#polished)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn Polished(self: ?*anyopaque) bool {
        return qtc.QChildEvent_Polished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#removed)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn Removed(self: ?*anyopaque) bool {
        return qtc.QChildEvent_Removed(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QChildEvent ```
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
    /// ``` self: QtC.QChildEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QChildEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QChildEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QChildEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QChildEvent, slot: fn (self: QtC.QChildEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QChildEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#dtor.QChildEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QChildEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QChildEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html
pub const qdynamicpropertychangeevent = struct {
    /// New constructs a new QDynamicPropertyChangeEvent object.
    ///
    /// ``` name: []u8 ```
    pub fn New(name: []u8) QtC.QDynamicPropertyChangeEvent {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDynamicPropertyChangeEvent_new(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QDynamicPropertyChangeEvent {
        return qtc.QDynamicPropertyChangeEvent_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent, slot: fn () callconv(.c) QtC.QDynamicPropertyChangeEvent ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QDynamicPropertyChangeEvent) void {
        qtc.QDynamicPropertyChangeEvent_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QDynamicPropertyChangeEvent {
        return qtc.QDynamicPropertyChangeEvent_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#propertyName)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent, allocator: std.mem.Allocator ```
    pub fn PropertyName(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QDynamicPropertyChangeEvent_PropertyName(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdynamicpropertychangeevent.PropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
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
    /// ``` self: QtC.QDynamicPropertyChangeEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDynamicPropertyChangeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QDynamicPropertyChangeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent, slot: fn (self: QtC.QDynamicPropertyChangeEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDynamicPropertyChangeEvent_OnSetAccepted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#dtor.QDynamicPropertyChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDynamicPropertyChangeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDynamicPropertyChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcoreevent.html#types
pub const enums = struct {
    pub const Type = enum {
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
