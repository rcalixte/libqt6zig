const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KParts__Part = @import("libqt6").KParts__Part;
const QEvent = @import("libqt6").QEvent;
const QWidget = @import("libqt6").QWidget;
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html)
pub const KParts__PartActivateEvent = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__PartActivateEvent,

    pub const _is_KParts__PartActivateEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new KParts::PartActivateEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` activated: bool `
    ///
    /// ` part: KParts__Part `
    ///
    /// ` widget: QWidget `
    ///
    pub fn New(activated: bool, part: anytype, widget: anytype) KParts__PartActivateEvent {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.KParts__PartActivateEvent_new(activated, @ptrCast(part.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn Activated(self: KParts__PartActivateEvent) bool {
        return qtc.KParts__PartActivateEvent_Activated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#part)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn Part(self: KParts__PartActivateEvent) KParts__Part {
        return .{ .ptr = qtc.KParts__PartActivateEvent_Part(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn Widget(self: KParts__PartActivateEvent) QWidget {
        return .{ .ptr = qtc.KParts__PartActivateEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#test)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QEvent `
    ///
    pub fn Test(event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__PartActivateEvent_Test(@ptrCast(event.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: KParts__PartActivateEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn Spontaneous(self: KParts__PartActivateEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn IsAccepted(self: KParts__PartActivateEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn Accept(self: KParts__PartActivateEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn Ignore(self: KParts__PartActivateEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn IsInputEvent(self: KParts__PartActivateEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn IsPointerEvent(self: KParts__PartActivateEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn IsSinglePointEvent(self: KParts__PartActivateEvent) bool {
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
    /// ` self: KParts__PartActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: KParts__PartActivateEvent, accepted: bool) void {
        qtc.KParts__PartActivateEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: KParts__PartActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: KParts__PartActivateEvent, accepted: bool) void {
        qtc.KParts__PartActivateEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartActivateEvent`
    ///
    /// ` callback: *const fn (self: KParts__PartActivateEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: KParts__PartActivateEvent, callback: *const fn (KParts__PartActivateEvent, bool) callconv(.c) void) void {
        qtc.KParts__PartActivateEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn Clone(self: KParts__PartActivateEvent) QEvent {
        return .{ .ptr = qtc.KParts__PartActivateEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn SuperClone(self: KParts__PartActivateEvent) QEvent {
        return .{ .ptr = qtc.KParts__PartActivateEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartActivateEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn OnClone(self: KParts__PartActivateEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.KParts__PartActivateEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn Delete(self: KParts__PartActivateEvent) void {
        qtc.KParts__PartActivateEvent_Delete(@ptrCast(self.ptr));
    }
};
