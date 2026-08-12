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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KParts::GUIActivateEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _activated: bool `
    ///
    pub fn new(_activated: bool) KParts__GUIActivateEvent {
        return .{ .ptr = qtc.KParts__GUIActivateEvent_new(_activated) };
    }

    /// ### DEPRECATED: Use `activated` instead
    ///
    pub const Activated = activated;

    /// ### [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn activated(self: KParts__GUIActivateEvent) bool {
        return qtc.KParts__GUIActivateEvent_Activated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `test0` instead
    ///
    pub const Test = test0;

    pub const @"test" = test0;

    /// ### [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html#test)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QEvent `
    ///
    pub fn test0(event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__GUIActivateEvent_Test(@ptrCast(event.ptr));
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: KParts__GUIActivateEvent) i32 {
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn spontaneous(self: KParts__GUIActivateEvent) bool {
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn isAccepted(self: KParts__GUIActivateEvent) bool {
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn accept(self: KParts__GUIActivateEvent) void {
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn ignore(self: KParts__GUIActivateEvent) void {
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn isInputEvent(self: KParts__GUIActivateEvent) bool {
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn isPointerEvent(self: KParts__GUIActivateEvent) bool {
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn isSinglePointEvent(self: KParts__GUIActivateEvent) bool {
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: KParts__GUIActivateEvent, accepted: bool) void {
        qtc.KParts__GUIActivateEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: KParts__GUIActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: KParts__GUIActivateEvent, accepted: bool) void {
        qtc.KParts__GUIActivateEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: KParts__GUIActivateEvent`
    ///
    /// ` callback: *const fn (self: KParts__GUIActivateEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: KParts__GUIActivateEvent, callback: *const fn (KParts__GUIActivateEvent, bool) callconv(.c) void) void {
        qtc.KParts__GUIActivateEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

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
    pub fn clone(self: KParts__GUIActivateEvent) QEvent {
        return .{ .ptr = qtc.KParts__GUIActivateEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

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
    pub fn superClone(self: KParts__GUIActivateEvent) QEvent {
        return .{ .ptr = qtc.KParts__GUIActivateEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: KParts__GUIActivateEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.KParts__GUIActivateEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__GUIActivateEvent `
    ///
    pub fn delete(self: KParts__GUIActivateEvent) void {
        qtc.KParts__GUIActivateEvent_Delete(@ptrCast(self.ptr));
    }
};
