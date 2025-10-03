const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;

/// https://api.kde.org/kparts-partactivateevent.html
pub const kparts__partactivateevent = struct {
    /// New constructs a new KParts::PartActivateEvent object.
    ///
    /// ``` activated: bool, part: QtC.KParts__Part, widget: QtC.QWidget ```
    pub fn New(activated: bool, part: ?*anyopaque, widget: ?*anyopaque) QtC.KParts__PartActivateEvent {
        return qtc.KParts__PartActivateEvent_new(activated, @ptrCast(part), @ptrCast(widget));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partactivateevent.html#activated)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn Activated(self: ?*anyopaque) bool {
        return qtc.KParts__PartActivateEvent_Activated(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partactivateevent.html#part)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn Part(self: ?*anyopaque) QtC.KParts__Part {
        return qtc.KParts__PartActivateEvent_Part(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partactivateevent.html#widget)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KParts__PartActivateEvent_Widget(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partactivateevent.html#test)
    ///
    /// ``` event: QtC.QEvent ```
    pub fn Test(event: ?*anyopaque) bool {
        return qtc.KParts__PartActivateEvent_Test(@ptrCast(event));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
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
    /// ``` self: QtC.KParts__PartActivateEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__PartActivateEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartActivateEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__PartActivateEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartActivateEvent, callback: *const fn (self: QtC.KParts__PartActivateEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__PartActivateEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__PartActivateEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__PartActivateEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartActivateEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.KParts__PartActivateEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KParts__PartActivateEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__PartActivateEvent_Delete(@ptrCast(self));
    }
};
