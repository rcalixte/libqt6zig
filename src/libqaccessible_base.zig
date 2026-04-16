const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAccessibleEvent = @import("libqt6").QAccessibleEvent;
const QAccessibleInterface = @import("libqt6").QAccessibleInterface;
const QObject = @import("libqt6").QObject;
const QTextCursor = @import("libqt6").QTextCursor;
const qaccessible_base_enums = enums;
const Struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html)
pub const QAccessible = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessible,

    pub const _is_QAccessible = {};

    /// New constructs a new QAccessible object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAccessible `
    ///
    pub fn New(other: anytype) QAccessible {
        comptime _ = @TypeOf(other)._is_QAccessible;
        return .{ .ptr = qtc.QAccessible_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QAccessible object and invalidates the source QAccessible object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAccessible `
    ///
    pub fn New2(other: anytype) QAccessible {
        comptime _ = @TypeOf(other)._is_QAccessible;
        return .{ .ptr = qtc.QAccessible_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessible `
    ///
    /// ` other: QAccessible `
    ///
    pub fn CopyAssign(self: QAccessible, other: QAccessible) void {
        qtc.QAccessible_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessible `
    ///
    /// ` other: QAccessible `
    ///
    pub fn MoveAssign(self: QAccessible, other: QAccessible) void {
        qtc.QAccessible_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#installUpdateHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: *const fn (funcparam1: QAccessibleEvent) callconv(.c) void `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: QAccessibleEvent) callconv(.c) void `
    ///
    pub fn InstallUpdateHandler(param1: *const fn (QAccessibleEvent) callconv(.c) void) ?*const fn (QAccessibleEvent) callconv(.c) void {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QAccessible_InstallUpdateHandler(@bitCast(@intFromPtr(param1))))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#installRootObjectHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: *const fn (funcparam1: QObject) callconv(.c) void `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: QObject) callconv(.c) void `
    ///
    pub fn InstallRootObjectHandler(param1: *const fn (QObject) callconv(.c) void) ?*const fn (QObject) callconv(.c) void {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QAccessible_InstallRootObjectHandler(@bitCast(@intFromPtr(param1))))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#installActivationObserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAccessible__ActivationObserver `
    ///
    pub fn InstallActivationObserver(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessible__ActivationObserver;
        qtc.QAccessible_InstallActivationObserver(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#removeActivationObserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAccessible__ActivationObserver `
    ///
    pub fn RemoveActivationObserver(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessible__ActivationObserver;
        qtc.QAccessible_RemoveActivationObserver(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#queryAccessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn QueryAccessibleInterface(param1: anytype) QAccessibleInterface {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.QAccessible_QueryAccessibleInterface(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    pub fn UniqueId(iface: anytype) u32 {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return qtc.QAccessible_UniqueId(@ptrCast(iface.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#accessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` uniqueId: u32 `
    ///
    pub fn AccessibleInterface(uniqueId: u32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessible_AccessibleInterface(@bitCast(uniqueId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#registerAccessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    pub fn RegisterAccessibleInterface(iface: anytype) u32 {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return qtc.QAccessible_RegisterAccessibleInterface(@ptrCast(iface.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#deleteAccessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` uniqueId: u32 `
    ///
    pub fn DeleteAccessibleInterface(uniqueId: u32) void {
        qtc.QAccessible_DeleteAccessibleInterface(@bitCast(uniqueId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#updateAccessibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QAccessibleEvent `
    ///
    pub fn UpdateAccessibility(event: anytype) void {
        comptime _ = @TypeOf(event)._is_QAccessibleEvent;
        qtc.QAccessible_UpdateAccessibility(@ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#isActive)
    ///
    pub fn IsActive() bool {
        return qtc.QAccessible_IsActive();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(active: bool) void {
        qtc.QAccessible_SetActive(active);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#setRootObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    pub fn SetRootObject(object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QAccessible_SetRootObject(@ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#cleanup)
    ///
    pub fn Cleanup() void {
        qtc.QAccessible_Cleanup();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#qAccessibleTextBoundaryHelper)
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QTextCursor `
    ///
    /// ` boundaryType: qaccessible_base_enums.TextBoundaryType `
    ///
    pub fn QAccessibleTextBoundaryHelper(cursor: anytype, boundaryType: i32) Struct_i32_i32 {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        const _pair = qtc.QAccessible_QAccessibleTextBoundaryHelper(@ptrCast(cursor.ptr), @bitCast(boundaryType));
        return @bitCast(_pair);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#dtor.QAccessible)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessible `
    ///
    pub fn Delete(self: QAccessible) void {
        qtc.QAccessible_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html)
pub const QAccessible__State = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessible__State,

    pub const _is_QAccessible__State = {};

    /// New constructs a new QAccessible::State object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAccessible__State `
    ///
    pub fn New(other: anytype) QAccessible__State {
        comptime _ = @TypeOf(other)._is_QAccessible__State;
        return .{ .ptr = qtc.QAccessible__State_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QAccessible::State object and invalidates the source QAccessible::State object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAccessible__State `
    ///
    pub fn New2(other: anytype) QAccessible__State {
        comptime _ = @TypeOf(other)._is_QAccessible__State;
        return .{ .ptr = qtc.QAccessible__State_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QAccessible::State object.
    ///
    pub fn New3() QAccessible__State {
        return .{ .ptr = qtc.QAccessible__State_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` other: QAccessible__State `
    ///
    pub fn CopyAssign(self: QAccessible__State, other: QAccessible__State) void {
        qtc.QAccessible__State_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` other: QAccessible__State `
    ///
    pub fn MoveAssign(self: QAccessible__State, other: QAccessible__State) void {
        qtc.QAccessible__State_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#disabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Disabled(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Disabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#disabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` disabled: u64 `
    ///
    pub fn SetDisabled(self: QAccessible__State, disabled: u64) void {
        qtc.QAccessible__State_SetDisabled(@ptrCast(self.ptr), @bitCast(disabled));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Selected(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Selected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` selected: u64 `
    ///
    pub fn SetSelected(self: QAccessible__State, selected: u64) void {
        qtc.QAccessible__State_SetSelected(@ptrCast(self.ptr), @bitCast(selected));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focusable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Focusable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Focusable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focusable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` focusable: u64 `
    ///
    pub fn SetFocusable(self: QAccessible__State, focusable: u64) void {
        qtc.QAccessible__State_SetFocusable(@ptrCast(self.ptr), @bitCast(focusable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Focused(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Focused(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` focused: u64 `
    ///
    pub fn SetFocused(self: QAccessible__State, focused: u64) void {
        qtc.QAccessible__State_SetFocused(@ptrCast(self.ptr), @bitCast(focused));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#pressed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Pressed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Pressed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#pressed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` pressed: u64 `
    ///
    pub fn SetPressed(self: QAccessible__State, pressed: u64) void {
        qtc.QAccessible__State_SetPressed(@ptrCast(self.ptr), @bitCast(pressed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Checkable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Checkable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` checkable: u64 `
    ///
    pub fn SetCheckable(self: QAccessible__State, checkable: u64) void {
        qtc.QAccessible__State_SetCheckable(@ptrCast(self.ptr), @bitCast(checkable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Checked(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Checked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` checked: u64 `
    ///
    pub fn SetChecked(self: QAccessible__State, checked: u64) void {
        qtc.QAccessible__State_SetChecked(@ptrCast(self.ptr), @bitCast(checked));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkStateMixed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn CheckStateMixed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_CheckStateMixed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkStateMixed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` checkStateMixed: u64 `
    ///
    pub fn SetCheckStateMixed(self: QAccessible__State, checkStateMixed: u64) void {
        qtc.QAccessible__State_SetCheckStateMixed(@ptrCast(self.ptr), @bitCast(checkStateMixed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#readOnly-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn ReadOnly(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_ReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#readOnly-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` readOnly: u64 `
    ///
    pub fn SetReadOnly(self: QAccessible__State, readOnly: u64) void {
        qtc.QAccessible__State_SetReadOnly(@ptrCast(self.ptr), @bitCast(readOnly));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hotTracked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn HotTracked(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_HotTracked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hotTracked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` hotTracked: u64 `
    ///
    pub fn SetHotTracked(self: QAccessible__State, hotTracked: u64) void {
        qtc.QAccessible__State_SetHotTracked(@ptrCast(self.ptr), @bitCast(hotTracked));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#defaultButton-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn DefaultButton(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_DefaultButton(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#defaultButton-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` defaultButton: u64 `
    ///
    pub fn SetDefaultButton(self: QAccessible__State, defaultButton: u64) void {
        qtc.QAccessible__State_SetDefaultButton(@ptrCast(self.ptr), @bitCast(defaultButton));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expanded-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Expanded(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Expanded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expanded-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` expanded: u64 `
    ///
    pub fn SetExpanded(self: QAccessible__State, expanded: u64) void {
        qtc.QAccessible__State_SetExpanded(@ptrCast(self.ptr), @bitCast(expanded));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#collapsed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Collapsed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Collapsed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#collapsed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` collapsed: u64 `
    ///
    pub fn SetCollapsed(self: QAccessible__State, collapsed: u64) void {
        qtc.QAccessible__State_SetCollapsed(@ptrCast(self.ptr), @bitCast(collapsed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#busy-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Busy(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Busy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#busy-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` busy: u64 `
    ///
    pub fn SetBusy(self: QAccessible__State, busy: u64) void {
        qtc.QAccessible__State_SetBusy(@ptrCast(self.ptr), @bitCast(busy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expandable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Expandable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Expandable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expandable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` expandable: u64 `
    ///
    pub fn SetExpandable(self: QAccessible__State, expandable: u64) void {
        qtc.QAccessible__State_SetExpandable(@ptrCast(self.ptr), @bitCast(expandable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#marqueed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Marqueed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Marqueed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#marqueed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` marqueed: u64 `
    ///
    pub fn SetMarqueed(self: QAccessible__State, marqueed: u64) void {
        qtc.QAccessible__State_SetMarqueed(@ptrCast(self.ptr), @bitCast(marqueed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#animated-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Animated(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Animated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#animated-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` animated: u64 `
    ///
    pub fn SetAnimated(self: QAccessible__State, animated: u64) void {
        qtc.QAccessible__State_SetAnimated(@ptrCast(self.ptr), @bitCast(animated));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Invisible(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Invisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` invisible: u64 `
    ///
    pub fn SetInvisible(self: QAccessible__State, invisible: u64) void {
        qtc.QAccessible__State_SetInvisible(@ptrCast(self.ptr), @bitCast(invisible));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#offscreen-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Offscreen(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Offscreen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#offscreen-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` offscreen: u64 `
    ///
    pub fn SetOffscreen(self: QAccessible__State, offscreen: u64) void {
        qtc.QAccessible__State_SetOffscreen(@ptrCast(self.ptr), @bitCast(offscreen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#sizeable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Sizeable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Sizeable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#sizeable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` sizeable: u64 `
    ///
    pub fn SetSizeable(self: QAccessible__State, sizeable: u64) void {
        qtc.QAccessible__State_SetSizeable(@ptrCast(self.ptr), @bitCast(sizeable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Movable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Movable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` movable: u64 `
    ///
    pub fn SetMovable(self: QAccessible__State, movable: u64) void {
        qtc.QAccessible__State_SetMovable(@ptrCast(self.ptr), @bitCast(movable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selfVoicing-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn SelfVoicing(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_SelfVoicing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selfVoicing-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` selfVoicing: u64 `
    ///
    pub fn SetSelfVoicing(self: QAccessible__State, selfVoicing: u64) void {
        qtc.QAccessible__State_SetSelfVoicing(@ptrCast(self.ptr), @bitCast(selfVoicing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Selectable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Selectable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` selectable: u64 `
    ///
    pub fn SetSelectable(self: QAccessible__State, selectable: u64) void {
        qtc.QAccessible__State_SetSelectable(@ptrCast(self.ptr), @bitCast(selectable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#linked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Linked(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Linked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#linked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` linked: u64 `
    ///
    pub fn SetLinked(self: QAccessible__State, linked: u64) void {
        qtc.QAccessible__State_SetLinked(@ptrCast(self.ptr), @bitCast(linked));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#traversed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Traversed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Traversed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#traversed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` traversed: u64 `
    ///
    pub fn SetTraversed(self: QAccessible__State, traversed: u64) void {
        qtc.QAccessible__State_SetTraversed(@ptrCast(self.ptr), @bitCast(traversed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiSelectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn MultiSelectable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_MultiSelectable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiSelectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` multiSelectable: u64 `
    ///
    pub fn SetMultiSelectable(self: QAccessible__State, multiSelectable: u64) void {
        qtc.QAccessible__State_SetMultiSelectable(@ptrCast(self.ptr), @bitCast(multiSelectable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#extSelectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn ExtSelectable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_ExtSelectable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#extSelectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` extSelectable: u64 `
    ///
    pub fn SetExtSelectable(self: QAccessible__State, extSelectable: u64) void {
        qtc.QAccessible__State_SetExtSelectable(@ptrCast(self.ptr), @bitCast(extSelectable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#passwordEdit-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn PasswordEdit(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_PasswordEdit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#passwordEdit-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` passwordEdit: u64 `
    ///
    pub fn SetPasswordEdit(self: QAccessible__State, passwordEdit: u64) void {
        qtc.QAccessible__State_SetPasswordEdit(@ptrCast(self.ptr), @bitCast(passwordEdit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hasPopup-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn HasPopup(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_HasPopup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hasPopup-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` hasPopup: u64 `
    ///
    pub fn SetHasPopup(self: QAccessible__State, hasPopup: u64) void {
        qtc.QAccessible__State_SetHasPopup(@ptrCast(self.ptr), @bitCast(hasPopup));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#modal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Modal(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Modal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#modal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` modal: u64 `
    ///
    pub fn SetModal(self: QAccessible__State, modal: u64) void {
        qtc.QAccessible__State_SetModal(@ptrCast(self.ptr), @bitCast(modal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#active-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Active(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Active(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#active-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` active: u64 `
    ///
    pub fn SetActive(self: QAccessible__State, active: u64) void {
        qtc.QAccessible__State_SetActive(@ptrCast(self.ptr), @bitCast(active));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invalid-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Invalid(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Invalid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invalid-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` invalid: u64 `
    ///
    pub fn SetInvalid(self: QAccessible__State, invalid: u64) void {
        qtc.QAccessible__State_SetInvalid(@ptrCast(self.ptr), @bitCast(invalid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Editable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Editable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` editable: u64 `
    ///
    pub fn SetEditable(self: QAccessible__State, editable: u64) void {
        qtc.QAccessible__State_SetEditable(@ptrCast(self.ptr), @bitCast(editable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn MultiLine(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_MultiLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` multiLine: u64 `
    ///
    pub fn SetMultiLine(self: QAccessible__State, multiLine: u64) void {
        qtc.QAccessible__State_SetMultiLine(@ptrCast(self.ptr), @bitCast(multiLine));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectableText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn SelectableText(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_SelectableText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectableText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` selectableText: u64 `
    ///
    pub fn SetSelectableText(self: QAccessible__State, selectableText: u64) void {
        qtc.QAccessible__State_SetSelectableText(@ptrCast(self.ptr), @bitCast(selectableText));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#supportsAutoCompletion-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn SupportsAutoCompletion(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_SupportsAutoCompletion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#supportsAutoCompletion-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` supportsAutoCompletion: u64 `
    ///
    pub fn SetSupportsAutoCompletion(self: QAccessible__State, supportsAutoCompletion: u64) void {
        qtc.QAccessible__State_SetSupportsAutoCompletion(@ptrCast(self.ptr), @bitCast(supportsAutoCompletion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#searchEdit-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn SearchEdit(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_SearchEdit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#searchEdit-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` searchEdit: u64 `
    ///
    pub fn SetSearchEdit(self: QAccessible__State, searchEdit: u64) void {
        qtc.QAccessible__State_SetSearchEdit(@ptrCast(self.ptr), @bitCast(searchEdit));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn Delete(self: QAccessible__State) void {
        qtc.QAccessible__State_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-activationobserver.html)
pub const QAccessible__ActivationObserver = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-activationobserver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessible__ActivationObserver,

    pub const _is_QAccessible__ActivationObserver = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-activationobserver.html#accessibilityActiveChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__ActivationObserver `
    ///
    /// ` active: bool `
    ///
    pub fn AccessibilityActiveChanged(self: QAccessible__ActivationObserver, active: bool) void {
        qtc.QAccessible__ActivationObserver_AccessibilityActiveChanged(@ptrCast(self.ptr), active);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-activationobserver.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__ActivationObserver `
    ///
    /// ` param1: QAccessible__ActivationObserver `
    ///
    pub fn OperatorAssign(self: QAccessible__ActivationObserver, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessible__ActivationObserver;
        qtc.QAccessible__ActivationObserver_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessible__ActivationObserver `
    ///
    pub fn Delete(self: QAccessible__ActivationObserver) void {
        qtc.QAccessible__ActivationObserver_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)
pub const enums = struct {
    pub const Event = enum(i32) {
        pub const SoundPlayed: i32 = 1;
        pub const Alert: i32 = 2;
        pub const ForegroundChanged: i32 = 3;
        pub const MenuStart: i32 = 4;
        pub const MenuEnd: i32 = 5;
        pub const PopupMenuStart: i32 = 6;
        pub const PopupMenuEnd: i32 = 7;
        pub const ContextHelpStart: i32 = 12;
        pub const ContextHelpEnd: i32 = 13;
        pub const DragDropStart: i32 = 14;
        pub const DragDropEnd: i32 = 15;
        pub const DialogStart: i32 = 16;
        pub const DialogEnd: i32 = 17;
        pub const ScrollingStart: i32 = 18;
        pub const ScrollingEnd: i32 = 19;
        pub const MenuCommand: i32 = 24;
        pub const ActionChanged: i32 = 257;
        pub const ActiveDescendantChanged: i32 = 258;
        pub const AttributeChanged: i32 = 259;
        pub const DocumentContentChanged: i32 = 260;
        pub const DocumentLoadComplete: i32 = 261;
        pub const DocumentLoadStopped: i32 = 262;
        pub const DocumentReload: i32 = 263;
        pub const HyperlinkEndIndexChanged: i32 = 264;
        pub const HyperlinkNumberOfAnchorsChanged: i32 = 265;
        pub const HyperlinkSelectedLinkChanged: i32 = 266;
        pub const HypertextLinkActivated: i32 = 267;
        pub const HypertextLinkSelected: i32 = 268;
        pub const HyperlinkStartIndexChanged: i32 = 269;
        pub const HypertextChanged: i32 = 270;
        pub const HypertextNLinksChanged: i32 = 271;
        pub const ObjectAttributeChanged: i32 = 272;
        pub const PageChanged: i32 = 273;
        pub const SectionChanged: i32 = 274;
        pub const TableCaptionChanged: i32 = 275;
        pub const TableColumnDescriptionChanged: i32 = 276;
        pub const TableColumnHeaderChanged: i32 = 277;
        pub const TableModelChanged: i32 = 278;
        pub const TableRowDescriptionChanged: i32 = 279;
        pub const TableRowHeaderChanged: i32 = 280;
        pub const TableSummaryChanged: i32 = 281;
        pub const TextAttributeChanged: i32 = 282;
        pub const TextCaretMoved: i32 = 283;
        pub const TextColumnChanged: i32 = 285;
        pub const TextInserted: i32 = 286;
        pub const TextRemoved: i32 = 287;
        pub const TextUpdated: i32 = 288;
        pub const TextSelectionChanged: i32 = 289;
        pub const VisibleDataChanged: i32 = 290;
        pub const ObjectCreated: i32 = 32768;
        pub const ObjectDestroyed: i32 = 32769;
        pub const ObjectShow: i32 = 32770;
        pub const ObjectHide: i32 = 32771;
        pub const ObjectReorder: i32 = 32772;
        pub const Focus: i32 = 32773;
        pub const Selection: i32 = 32774;
        pub const SelectionAdd: i32 = 32775;
        pub const SelectionRemove: i32 = 32776;
        pub const SelectionWithin: i32 = 32777;
        pub const StateChanged: i32 = 32778;
        pub const LocationChanged: i32 = 32779;
        pub const NameChanged: i32 = 32780;
        pub const DescriptionChanged: i32 = 32781;
        pub const ValueChanged: i32 = 32782;
        pub const ParentChanged: i32 = 32783;
        pub const HelpChanged: i32 = 32928;
        pub const DefaultActionChanged: i32 = 32944;
        pub const AcceleratorChanged: i32 = 32960;
        pub const Announcement: i32 = 32976;
        pub const IdentifierChanged: i32 = 32992;
        pub const InvalidEvent: i32 = 32961;
    };

    pub const Role = enum(i32) {
        pub const NoRole: i32 = 0;
        pub const TitleBar: i32 = 1;
        pub const MenuBar: i32 = 2;
        pub const ScrollBar: i32 = 3;
        pub const Grip: i32 = 4;
        pub const Sound: i32 = 5;
        pub const Cursor: i32 = 6;
        pub const Caret: i32 = 7;
        pub const AlertMessage: i32 = 8;
        pub const Window: i32 = 9;
        pub const Client: i32 = 10;
        pub const PopupMenu: i32 = 11;
        pub const MenuItem: i32 = 12;
        pub const ToolTip: i32 = 13;
        pub const Application: i32 = 14;
        pub const Document: i32 = 15;
        pub const Pane: i32 = 16;
        pub const Chart: i32 = 17;
        pub const Dialog: i32 = 18;
        pub const Border: i32 = 19;
        pub const Grouping: i32 = 20;
        pub const Separator: i32 = 21;
        pub const ToolBar: i32 = 22;
        pub const StatusBar: i32 = 23;
        pub const Table: i32 = 24;
        pub const ColumnHeader: i32 = 25;
        pub const RowHeader: i32 = 26;
        pub const Column: i32 = 27;
        pub const Row: i32 = 28;
        pub const Cell: i32 = 29;
        pub const Link: i32 = 30;
        pub const HelpBalloon: i32 = 31;
        pub const Assistant: i32 = 32;
        pub const List: i32 = 33;
        pub const ListItem: i32 = 34;
        pub const Tree: i32 = 35;
        pub const TreeItem: i32 = 36;
        pub const PageTab: i32 = 37;
        pub const PropertyPage: i32 = 38;
        pub const Indicator: i32 = 39;
        pub const Graphic: i32 = 40;
        pub const StaticText: i32 = 41;
        pub const EditableText: i32 = 42;
        pub const Button: i32 = 43;
        pub const PushButton: i32 = 43;
        pub const CheckBox: i32 = 44;
        pub const RadioButton: i32 = 45;
        pub const ComboBox: i32 = 46;
        pub const ProgressBar: i32 = 48;
        pub const Dial: i32 = 49;
        pub const HotkeyField: i32 = 50;
        pub const Slider: i32 = 51;
        pub const SpinBox: i32 = 52;
        pub const Canvas: i32 = 53;
        pub const Animation: i32 = 54;
        pub const Equation: i32 = 55;
        pub const ButtonDropDown: i32 = 56;
        pub const ButtonMenu: i32 = 57;
        pub const ButtonDropGrid: i32 = 58;
        pub const Whitespace: i32 = 59;
        pub const PageTabList: i32 = 60;
        pub const Clock: i32 = 61;
        pub const Splitter: i32 = 62;
        pub const LayeredPane: i32 = 128;
        pub const Terminal: i32 = 129;
        pub const Desktop: i32 = 130;
        pub const Paragraph: i32 = 131;
        pub const WebDocument: i32 = 132;
        pub const Section: i32 = 133;
        pub const Notification: i32 = 134;
        pub const ColorChooser: i32 = 1028;
        pub const Footer: i32 = 1038;
        pub const Form: i32 = 1040;
        pub const Heading: i32 = 1044;
        pub const Note: i32 = 1051;
        pub const ComplementaryContent: i32 = 1068;
        pub const UserRole: i32 = 65535;
    };

    pub const Text = enum(i32) {
        pub const Name: i32 = 0;
        pub const Description: i32 = 1;
        pub const Value: i32 = 2;
        pub const Help: i32 = 3;
        pub const Accelerator: i32 = 4;
        pub const DebugDescription: i32 = 5;
        pub const Identifier: i32 = 6;
        pub const UserText: i32 = 65535;
    };

    pub const RelationFlag = enum(i32) {
        pub const Label: i32 = 1;
        pub const Labelled: i32 = 2;
        pub const Controller: i32 = 4;
        pub const Controlled: i32 = 8;
        pub const DescriptionFor: i32 = 16;
        pub const Described: i32 = 32;
        pub const FlowsFrom: i32 = 64;
        pub const FlowsTo: i32 = 128;
        pub const AllRelations: i32 = -1;
    };

    pub const InterfaceType = enum(i32) {
        pub const TextInterface: i32 = 0;
        pub const EditableTextInterface: i32 = 1;
        pub const ValueInterface: i32 = 2;
        pub const ActionInterface: i32 = 3;
        pub const ImageInterface: i32 = 4;
        pub const TableInterface: i32 = 5;
        pub const TableCellInterface: i32 = 6;
        pub const HyperlinkInterface: i32 = 7;
        pub const SelectionInterface: i32 = 8;
        pub const AttributesInterface: i32 = 9;
    };

    pub const TextBoundaryType = enum(i32) {
        pub const CharBoundary: i32 = 0;
        pub const WordBoundary: i32 = 1;
        pub const SentenceBoundary: i32 = 2;
        pub const ParagraphBoundary: i32 = 3;
        pub const LineBoundary: i32 = 4;
        pub const NoBoundary: i32 = 5;
    };

    pub const Attribute = enum(i32) {
        pub const Custom: i32 = 0;
        pub const Level: i32 = 1;
    };

    pub const AnnouncementPoliteness = enum(i32) {
        pub const Polite: i32 = 0;
        pub const Assertive: i32 = 1;
    };
};
