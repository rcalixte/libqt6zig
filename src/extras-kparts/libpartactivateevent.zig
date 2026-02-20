const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html)
pub const kparts__partactivateevent = struct {
    /// New constructs a new KParts::PartActivateEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` activated: bool `
    ///
    /// ` part: QtC.KParts__Part `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn New(activated: bool, part: ?*anyopaque, widget: ?*anyopaque) QtC.KParts__PartActivateEvent {
        return qtc.KParts__PartActivateEvent_new(activated, @ptrCast(part), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__PartActivateEvent `
    ///
    pub fn Activated(self: ?*anyopaque) bool {
        return qtc.KParts__PartActivateEvent_Activated(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#part)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__PartActivateEvent `
    ///
    pub fn Part(self: ?*anyopaque) QtC.KParts__Part {
        return qtc.KParts__PartActivateEvent_Part(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__PartActivateEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KParts__PartActivateEvent_Widget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#test)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Test(event: ?*anyopaque) bool {
        return qtc.KParts__PartActivateEvent_Test(@ptrCast(event));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__PartActivateEvent `
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
    /// ` self: QtC.KParts__PartActivateEvent `
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
    /// ` self: QtC.KParts__PartActivateEvent `
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
    /// ` self: QtC.KParts__PartActivateEvent `
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
    /// ` self: QtC.KParts__PartActivateEvent `
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
    /// ` self: QtC.KParts__PartActivateEvent `
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
    /// ` self: QtC.KParts__PartActivateEvent `
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
    /// ` self: QtC.KParts__PartActivateEvent `
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
    /// ` self: QtC.KParts__PartActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__PartActivateEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__PartActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__PartActivateEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__PartActivateEvent`
    ///
    /// ` callback: *const fn (self: QtC.KParts__PartActivateEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__PartActivateEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__PartActivateEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__PartActivateEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__PartActivateEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__PartActivateEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__PartActivateEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.KParts__PartActivateEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KParts__PartActivateEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__PartActivateEvent_Delete(@ptrCast(self));
    }
};
