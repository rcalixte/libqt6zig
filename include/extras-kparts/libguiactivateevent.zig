const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;

/// https://api.kde.org/kparts-guiactivateevent.html
pub const kparts__guiactivateevent = struct {
    /// New constructs a new KParts::GUIActivateEvent object.
    ///
    /// ``` activated: bool ```
    pub fn New(activated: bool) QtC.KParts__GUIActivateEvent {
        return qtc.KParts__GUIActivateEvent_new(activated);
    }

    /// [Qt documentation](https://api.kde.org/kparts-guiactivateevent.html#activated)
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn Activated(self: ?*anyopaque) bool {
        return qtc.KParts__GUIActivateEvent_Activated(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-guiactivateevent.html#test)
    ///
    /// ``` event: QtC.QEvent ```
    pub fn Test(event: ?*anyopaque) bool {
        return qtc.KParts__GUIActivateEvent_Test(@ptrCast(event));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
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
    /// ``` self: QtC.KParts__GUIActivateEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__GUIActivateEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__GUIActivateEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent, callback: *const fn (self: QtC.KParts__GUIActivateEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__GUIActivateEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__GUIActivateEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__GUIActivateEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.KParts__GUIActivateEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KParts__GUIActivateEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__GUIActivateEvent_Delete(@ptrCast(self));
    }
};
