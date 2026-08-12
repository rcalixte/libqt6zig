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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KParts::PartActivateEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _activated: bool `
    ///
    /// ` _part: KParts__Part `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn new(_activated: bool, _part: anytype, _widget: anytype) KParts__PartActivateEvent {
        comptime _ = @TypeOf(_part)._is_KParts__Part;
        comptime _ = @TypeOf(_widget)._is_QWidget;
        return .{ .ptr = qtc.KParts__PartActivateEvent_new(_activated, @ptrCast(_part.ptr), @ptrCast(_widget.ptr)) };
    }

    /// ### DEPRECATED: Use `activated` instead
    ///
    pub const Activated = activated;

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn activated(self: KParts__PartActivateEvent) bool {
        return qtc.KParts__PartActivateEvent_Activated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `part` instead
    ///
    pub const Part = part;

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#part)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn part(self: KParts__PartActivateEvent) KParts__Part {
        return .{ .ptr = qtc.KParts__PartActivateEvent_Part(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn widget(self: KParts__PartActivateEvent) QWidget {
        return .{ .ptr = qtc.KParts__PartActivateEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `test0` instead
    ///
    pub const Test = test0;

    pub const @"test" = test0;

    /// ### [Upstream resources](https://api.kde.org/kparts-partactivateevent.html#test)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QEvent `
    ///
    pub fn test0(event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__PartActivateEvent_Test(@ptrCast(event.ptr));
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
    /// ` self: KParts__PartActivateEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: KParts__PartActivateEvent) i32 {
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn spontaneous(self: KParts__PartActivateEvent) bool {
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn isAccepted(self: KParts__PartActivateEvent) bool {
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn accept(self: KParts__PartActivateEvent) void {
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn ignore(self: KParts__PartActivateEvent) void {
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn isInputEvent(self: KParts__PartActivateEvent) bool {
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn isPointerEvent(self: KParts__PartActivateEvent) bool {
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn isSinglePointEvent(self: KParts__PartActivateEvent) bool {
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
    /// ` self: KParts__PartActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: KParts__PartActivateEvent, accepted: bool) void {
        qtc.KParts__PartActivateEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: KParts__PartActivateEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: KParts__PartActivateEvent, accepted: bool) void {
        qtc.KParts__PartActivateEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: KParts__PartActivateEvent`
    ///
    /// ` callback: *const fn (self: KParts__PartActivateEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: KParts__PartActivateEvent, callback: *const fn (KParts__PartActivateEvent, bool) callconv(.c) void) void {
        qtc.KParts__PartActivateEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn clone(self: KParts__PartActivateEvent) QEvent {
        return .{ .ptr = qtc.KParts__PartActivateEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn superClone(self: KParts__PartActivateEvent) QEvent {
        return .{ .ptr = qtc.KParts__PartActivateEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__PartActivateEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: KParts__PartActivateEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.KParts__PartActivateEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__PartActivateEvent `
    ///
    pub fn delete(self: KParts__PartActivateEvent) void {
        qtc.KParts__PartActivateEvent_Delete(@ptrCast(self.ptr));
    }
};
