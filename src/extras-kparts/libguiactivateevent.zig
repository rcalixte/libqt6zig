const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html)
pub const kparts__guiactivateevent = struct {
    /// New constructs a new KParts::GUIActivateEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` activated: bool `
    ///
    pub fn New(activated: bool) QtC.KParts__GUIActivateEvent {
        return qtc.KParts__GUIActivateEvent_new(activated);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__GUIActivateEvent `
    ///
    pub fn Activated(self: ?*anyopaque) bool {
        return qtc.KParts__GUIActivateEvent_Activated(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html#test)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Test(event: ?*anyopaque) bool {
        return qtc.KParts__GUIActivateEvent_Test(@ptrCast(event));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__GUIActivateEvent `
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
    /// ` self: QtC.KParts__GUIActivateEvent `
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
    /// ` self: QtC.KParts__GUIActivateEvent `
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
    /// ` self: QtC.KParts__GUIActivateEvent `
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
    /// ` self: QtC.KParts__GUIActivateEvent `
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
    /// ` self: QtC.KParts__GUIActivateEvent `
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
    /// ` self: QtC.KParts__GUIActivateEvent `
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
    /// ` self: QtC.KParts__GUIActivateEvent `
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
    /// ` self: QtC.KParts__GUIActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__GUIActivateEvent_SetAccepted(@ptrCast(self), accepted);
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
    /// ` self: QtC.KParts__GUIActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__GUIActivateEvent_SuperSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__GUIActivateEvent`
    ///
    /// ` callback: *const fn (self: QtC.KParts__GUIActivateEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__GUIActivateEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__GUIActivateEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__GUIActivateEvent_Clone(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KParts__GUIActivateEvent `
    ///
    pub fn SuperClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__GUIActivateEvent_SuperClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KParts__GUIActivateEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.KParts__GUIActivateEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KParts__GUIActivateEvent `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KParts__GUIActivateEvent_Delete(@ptrCast(self));
    }
};
