const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QEvent = @import("libqt6").QEvent;
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html)
pub const KParts__GUIActivateEvent = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__GUIActivateEvent,

    pub const _is_KParts__GUIActivateEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new KParts::GUIActivateEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` activated: bool `
    ///
    pub fn New(activated: bool) KParts__GUIActivateEvent {
        return .{ .ptr = qtc.KParts__GUIActivateEvent_new(activated) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn Activated(self: KParts__GUIActivateEvent) bool {
        return qtc.KParts__GUIActivateEvent_Activated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html#test)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QEvent `
    ///
    pub fn Test(event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__GUIActivateEvent_Test(@ptrCast(event.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: KParts__GUIActivateEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn Spontaneous(self: KParts__GUIActivateEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn IsAccepted(self: KParts__GUIActivateEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn Accept(self: KParts__GUIActivateEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn Ignore(self: KParts__GUIActivateEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn IsInputEvent(self: KParts__GUIActivateEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn IsPointerEvent(self: KParts__GUIActivateEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn IsSinglePointEvent(self: KParts__GUIActivateEvent) bool {
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: KParts__GUIActivateEvent, accepted: bool) void {
        qtc.KParts__GUIActivateEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: KParts__GUIActivateEvent, accepted: bool) void {
        qtc.KParts__GUIActivateEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__GUIActivateEvent`
    ///
    /// ` callback: *const fn (self: KParts__GUIActivateEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: KParts__GUIActivateEvent, callback: *const fn (KParts__GUIActivateEvent, bool) callconv(.c) void) void {
        qtc.KParts__GUIActivateEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn Clone(self: KParts__GUIActivateEvent) QEvent {
        return .{ .ptr = qtc.KParts__GUIActivateEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn SuperClone(self: KParts__GUIActivateEvent) QEvent {
        return .{ .ptr = qtc.KParts__GUIActivateEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__GUIActivateEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn OnClone(self: KParts__GUIActivateEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.KParts__GUIActivateEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn Delete(self: KParts__GUIActivateEvent) void {
        qtc.KParts__GUIActivateEvent_Delete(@ptrCast(self.ptr));
    }
};
