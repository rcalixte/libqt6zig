const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAccessibleEvent = @import("libqt6").QAccessibleEvent;
const QAccessibleInterface = @import("libqt6").QAccessibleInterface;
const QObject = @import("libqt6").QObject;
const QTextCursor = @import("libqt6").QTextCursor;
const qaccessible_base_enums = enums;
const Struct_i32_i32 = @import("libqt6").types.Struct_i32_i32; // extern struct { first: i32, second: i32 }

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html)
pub const QAccessible = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessible,

    pub const _is_QAccessible = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessible object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAccessible `
    ///
    pub fn new(other: anytype) QAccessible {
        comptime _ = @TypeOf(other)._is_QAccessible;
        return .{ .ptr = qtc.QAccessible_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessible object and invalidate the source QAccessible object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAccessible `
    ///
    pub fn new2(other: anytype) QAccessible {
        comptime _ = @TypeOf(other)._is_QAccessible;
        return .{ .ptr = qtc.QAccessible_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessible `
    ///
    /// ` other: QAccessible `
    ///
    pub fn copyAssign(self: QAccessible, other: QAccessible) void {
        qtc.QAccessible_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessible `
    ///
    /// ` other: QAccessible `
    ///
    pub fn moveAssign(self: QAccessible, other: QAccessible) void {
        qtc.QAccessible_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `installUpdateHandler` instead
    ///
    pub const InstallUpdateHandler = installUpdateHandler;

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
    pub fn installUpdateHandler(param1: *const fn (QAccessibleEvent) callconv(.c) void) ?*const fn (QAccessibleEvent) callconv(.c) void {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QAccessible_InstallUpdateHandler(@bitCast(@intFromPtr(param1))))));
    }

    /// ### DEPRECATED: Use `installRootObjectHandler` instead
    ///
    pub const InstallRootObjectHandler = installRootObjectHandler;

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
    pub fn installRootObjectHandler(param1: *const fn (QObject) callconv(.c) void) ?*const fn (QObject) callconv(.c) void {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QAccessible_InstallRootObjectHandler(@bitCast(@intFromPtr(param1))))));
    }

    /// ### DEPRECATED: Use `installActivationObserver` instead
    ///
    pub const InstallActivationObserver = installActivationObserver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#installActivationObserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAccessible__ActivationObserver `
    ///
    pub fn installActivationObserver(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessible__ActivationObserver;
        qtc.QAccessible_InstallActivationObserver(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `removeActivationObserver` instead
    ///
    pub const RemoveActivationObserver = removeActivationObserver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#removeActivationObserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAccessible__ActivationObserver `
    ///
    pub fn removeActivationObserver(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessible__ActivationObserver;
        qtc.QAccessible_RemoveActivationObserver(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `queryAccessibleInterface` instead
    ///
    pub const QueryAccessibleInterface = queryAccessibleInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#queryAccessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn queryAccessibleInterface(param1: anytype) QAccessibleInterface {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.QAccessible_QueryAccessibleInterface(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    pub fn uniqueId(iface: anytype) u32 {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return qtc.QAccessible_UniqueId(@ptrCast(iface.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#accessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` _uniqueId: u32 `
    ///
    pub fn accessibleInterface(_uniqueId: u32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessible_AccessibleInterface(@bitCast(_uniqueId)) };
    }

    /// ### DEPRECATED: Use `registerAccessibleInterface` instead
    ///
    pub const RegisterAccessibleInterface = registerAccessibleInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#registerAccessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    pub fn registerAccessibleInterface(iface: anytype) u32 {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return qtc.QAccessible_RegisterAccessibleInterface(@ptrCast(iface.ptr));
    }

    /// ### DEPRECATED: Use `deleteAccessibleInterface` instead
    ///
    pub const DeleteAccessibleInterface = deleteAccessibleInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#deleteAccessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` _uniqueId: u32 `
    ///
    pub fn deleteAccessibleInterface(_uniqueId: u32) void {
        qtc.QAccessible_DeleteAccessibleInterface(@bitCast(_uniqueId));
    }

    /// ### DEPRECATED: Use `updateAccessibility` instead
    ///
    pub const UpdateAccessibility = updateAccessibility;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#updateAccessibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QAccessibleEvent `
    ///
    pub fn updateAccessibility(event: anytype) void {
        comptime _ = @TypeOf(event)._is_QAccessibleEvent;
        qtc.QAccessible_UpdateAccessibility(@ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#isActive)
    ///
    pub fn isActive() bool {
        return qtc.QAccessible_IsActive();
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` active: bool `
    ///
    pub fn setActive(active: bool) void {
        qtc.QAccessible_SetActive(active);
    }

    /// ### DEPRECATED: Use `setRootObject` instead
    ///
    pub const SetRootObject = setRootObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#setRootObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    pub fn setRootObject(object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QAccessible_SetRootObject(@ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `cleanup` instead
    ///
    pub const Cleanup = cleanup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#cleanup)
    ///
    pub fn cleanup() void {
        qtc.QAccessible_Cleanup();
    }

    /// ### DEPRECATED: Use `qAccessibleTextBoundaryHelper` instead
    ///
    pub const QAccessibleTextBoundaryHelper = qAccessibleTextBoundaryHelper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#qAccessibleTextBoundaryHelper)
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QTextCursor `
    ///
    /// ` boundaryType: qaccessible_base_enums.TextBoundaryType `
    ///
    pub fn qAccessibleTextBoundaryHelper(cursor: anytype, boundaryType: i32) Struct_i32_i32 {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        const _pair = qtc.QAccessible_QAccessibleTextBoundaryHelper(@ptrCast(cursor.ptr), @bitCast(boundaryType));
        return .{
            .first = @bitCast(_pair.first),
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#dtor.QAccessible)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessible `
    ///
    pub fn delete(self: QAccessible) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessible::State object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAccessible__State `
    ///
    pub fn new(other: anytype) QAccessible__State {
        comptime _ = @TypeOf(other)._is_QAccessible__State;
        return .{ .ptr = qtc.QAccessible__State_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessible::State object and invalidate the source QAccessible::State object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAccessible__State `
    ///
    pub fn new2(other: anytype) QAccessible__State {
        comptime _ = @TypeOf(other)._is_QAccessible__State;
        return .{ .ptr = qtc.QAccessible__State_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QAccessible::State object in C++ memory
    ///
    pub fn new3() QAccessible__State {
        return .{ .ptr = qtc.QAccessible__State_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` other: QAccessible__State `
    ///
    pub fn copyAssign(self: QAccessible__State, other: QAccessible__State) void {
        qtc.QAccessible__State_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` other: QAccessible__State `
    ///
    pub fn moveAssign(self: QAccessible__State, other: QAccessible__State) void {
        qtc.QAccessible__State_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `disabled` instead
    ///
    pub const Disabled = disabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#disabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn disabled(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Disabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#disabled-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _disabled: u64 `
    ///
    pub fn setDisabled(self: QAccessible__State, _disabled: u64) void {
        qtc.QAccessible__State_SetDisabled(@ptrCast(self.ptr), @bitCast(_disabled));
    }

    /// ### DEPRECATED: Use `selected` instead
    ///
    pub const Selected = selected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn selected(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Selected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelected` instead
    ///
    pub const SetSelected = setSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selected-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _selected: u64 `
    ///
    pub fn setSelected(self: QAccessible__State, _selected: u64) void {
        qtc.QAccessible__State_SetSelected(@ptrCast(self.ptr), @bitCast(_selected));
    }

    /// ### DEPRECATED: Use `focusable` instead
    ///
    pub const Focusable = focusable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focusable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn focusable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Focusable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusable` instead
    ///
    pub const SetFocusable = setFocusable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focusable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _focusable: u64 `
    ///
    pub fn setFocusable(self: QAccessible__State, _focusable: u64) void {
        qtc.QAccessible__State_SetFocusable(@ptrCast(self.ptr), @bitCast(_focusable));
    }

    /// ### DEPRECATED: Use `focused` instead
    ///
    pub const Focused = focused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn focused(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Focused(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocused` instead
    ///
    pub const SetFocused = setFocused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focused-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _focused: u64 `
    ///
    pub fn setFocused(self: QAccessible__State, _focused: u64) void {
        qtc.QAccessible__State_SetFocused(@ptrCast(self.ptr), @bitCast(_focused));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#pressed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn pressed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Pressed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPressed` instead
    ///
    pub const SetPressed = setPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#pressed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _pressed: u64 `
    ///
    pub fn setPressed(self: QAccessible__State, _pressed: u64) void {
        qtc.QAccessible__State_SetPressed(@ptrCast(self.ptr), @bitCast(_pressed));
    }

    /// ### DEPRECATED: Use `checkable` instead
    ///
    pub const Checkable = checkable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn checkable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Checkable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckable` instead
    ///
    pub const SetCheckable = setCheckable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _checkable: u64 `
    ///
    pub fn setCheckable(self: QAccessible__State, _checkable: u64) void {
        qtc.QAccessible__State_SetCheckable(@ptrCast(self.ptr), @bitCast(_checkable));
    }

    /// ### DEPRECATED: Use `checked` instead
    ///
    pub const Checked = checked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn checked(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Checked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChecked` instead
    ///
    pub const SetChecked = setChecked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _checked: u64 `
    ///
    pub fn setChecked(self: QAccessible__State, _checked: u64) void {
        qtc.QAccessible__State_SetChecked(@ptrCast(self.ptr), @bitCast(_checked));
    }

    /// ### DEPRECATED: Use `checkStateMixed` instead
    ///
    pub const CheckStateMixed = checkStateMixed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkStateMixed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn checkStateMixed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_CheckStateMixed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckStateMixed` instead
    ///
    pub const SetCheckStateMixed = setCheckStateMixed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkStateMixed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _checkStateMixed: u64 `
    ///
    pub fn setCheckStateMixed(self: QAccessible__State, _checkStateMixed: u64) void {
        qtc.QAccessible__State_SetCheckStateMixed(@ptrCast(self.ptr), @bitCast(_checkStateMixed));
    }

    /// ### DEPRECATED: Use `readOnly` instead
    ///
    pub const ReadOnly = readOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#readOnly-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn readOnly(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_ReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#readOnly-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _readOnly: u64 `
    ///
    pub fn setReadOnly(self: QAccessible__State, _readOnly: u64) void {
        qtc.QAccessible__State_SetReadOnly(@ptrCast(self.ptr), @bitCast(_readOnly));
    }

    /// ### DEPRECATED: Use `hotTracked` instead
    ///
    pub const HotTracked = hotTracked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hotTracked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn hotTracked(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_HotTracked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHotTracked` instead
    ///
    pub const SetHotTracked = setHotTracked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hotTracked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _hotTracked: u64 `
    ///
    pub fn setHotTracked(self: QAccessible__State, _hotTracked: u64) void {
        qtc.QAccessible__State_SetHotTracked(@ptrCast(self.ptr), @bitCast(_hotTracked));
    }

    /// ### DEPRECATED: Use `defaultButton` instead
    ///
    pub const DefaultButton = defaultButton;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#defaultButton-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn defaultButton(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_DefaultButton(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultButton` instead
    ///
    pub const SetDefaultButton = setDefaultButton;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#defaultButton-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _defaultButton: u64 `
    ///
    pub fn setDefaultButton(self: QAccessible__State, _defaultButton: u64) void {
        qtc.QAccessible__State_SetDefaultButton(@ptrCast(self.ptr), @bitCast(_defaultButton));
    }

    /// ### DEPRECATED: Use `expanded` instead
    ///
    pub const Expanded = expanded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expanded-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn expanded(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Expanded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setExpanded` instead
    ///
    pub const SetExpanded = setExpanded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expanded-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _expanded: u64 `
    ///
    pub fn setExpanded(self: QAccessible__State, _expanded: u64) void {
        qtc.QAccessible__State_SetExpanded(@ptrCast(self.ptr), @bitCast(_expanded));
    }

    /// ### DEPRECATED: Use `collapsed` instead
    ///
    pub const Collapsed = collapsed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#collapsed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn collapsed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Collapsed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCollapsed` instead
    ///
    pub const SetCollapsed = setCollapsed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#collapsed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _collapsed: u64 `
    ///
    pub fn setCollapsed(self: QAccessible__State, _collapsed: u64) void {
        qtc.QAccessible__State_SetCollapsed(@ptrCast(self.ptr), @bitCast(_collapsed));
    }

    /// ### DEPRECATED: Use `busy` instead
    ///
    pub const Busy = busy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#busy-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn busy(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Busy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBusy` instead
    ///
    pub const SetBusy = setBusy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#busy-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _busy: u64 `
    ///
    pub fn setBusy(self: QAccessible__State, _busy: u64) void {
        qtc.QAccessible__State_SetBusy(@ptrCast(self.ptr), @bitCast(_busy));
    }

    /// ### DEPRECATED: Use `expandable` instead
    ///
    pub const Expandable = expandable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expandable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn expandable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Expandable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setExpandable` instead
    ///
    pub const SetExpandable = setExpandable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expandable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _expandable: u64 `
    ///
    pub fn setExpandable(self: QAccessible__State, _expandable: u64) void {
        qtc.QAccessible__State_SetExpandable(@ptrCast(self.ptr), @bitCast(_expandable));
    }

    /// ### DEPRECATED: Use `marqueed` instead
    ///
    pub const Marqueed = marqueed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#marqueed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn marqueed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Marqueed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMarqueed` instead
    ///
    pub const SetMarqueed = setMarqueed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#marqueed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _marqueed: u64 `
    ///
    pub fn setMarqueed(self: QAccessible__State, _marqueed: u64) void {
        qtc.QAccessible__State_SetMarqueed(@ptrCast(self.ptr), @bitCast(_marqueed));
    }

    /// ### DEPRECATED: Use `animated` instead
    ///
    pub const Animated = animated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#animated-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn animated(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Animated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnimated` instead
    ///
    pub const SetAnimated = setAnimated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#animated-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _animated: u64 `
    ///
    pub fn setAnimated(self: QAccessible__State, _animated: u64) void {
        qtc.QAccessible__State_SetAnimated(@ptrCast(self.ptr), @bitCast(_animated));
    }

    /// ### DEPRECATED: Use `invisible` instead
    ///
    pub const Invisible = invisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn invisible(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Invisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInvisible` instead
    ///
    pub const SetInvisible = setInvisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invisible-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _invisible: u64 `
    ///
    pub fn setInvisible(self: QAccessible__State, _invisible: u64) void {
        qtc.QAccessible__State_SetInvisible(@ptrCast(self.ptr), @bitCast(_invisible));
    }

    /// ### DEPRECATED: Use `offscreen` instead
    ///
    pub const Offscreen = offscreen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#offscreen-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn offscreen(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Offscreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOffscreen` instead
    ///
    pub const SetOffscreen = setOffscreen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#offscreen-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _offscreen: u64 `
    ///
    pub fn setOffscreen(self: QAccessible__State, _offscreen: u64) void {
        qtc.QAccessible__State_SetOffscreen(@ptrCast(self.ptr), @bitCast(_offscreen));
    }

    /// ### DEPRECATED: Use `sizeable` instead
    ///
    pub const Sizeable = sizeable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#sizeable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn sizeable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Sizeable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizeable` instead
    ///
    pub const SetSizeable = setSizeable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#sizeable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _sizeable: u64 `
    ///
    pub fn setSizeable(self: QAccessible__State, _sizeable: u64) void {
        qtc.QAccessible__State_SetSizeable(@ptrCast(self.ptr), @bitCast(_sizeable));
    }

    /// ### DEPRECATED: Use `movable` instead
    ///
    pub const Movable = movable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn movable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Movable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMovable` instead
    ///
    pub const SetMovable = setMovable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#movable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _movable: u64 `
    ///
    pub fn setMovable(self: QAccessible__State, _movable: u64) void {
        qtc.QAccessible__State_SetMovable(@ptrCast(self.ptr), @bitCast(_movable));
    }

    /// ### DEPRECATED: Use `selfVoicing` instead
    ///
    pub const SelfVoicing = selfVoicing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selfVoicing-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn selfVoicing(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_SelfVoicing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelfVoicing` instead
    ///
    pub const SetSelfVoicing = setSelfVoicing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selfVoicing-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _selfVoicing: u64 `
    ///
    pub fn setSelfVoicing(self: QAccessible__State, _selfVoicing: u64) void {
        qtc.QAccessible__State_SetSelfVoicing(@ptrCast(self.ptr), @bitCast(_selfVoicing));
    }

    /// ### DEPRECATED: Use `selectable` instead
    ///
    pub const Selectable = selectable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn selectable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Selectable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectable` instead
    ///
    pub const SetSelectable = setSelectable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _selectable: u64 `
    ///
    pub fn setSelectable(self: QAccessible__State, _selectable: u64) void {
        qtc.QAccessible__State_SetSelectable(@ptrCast(self.ptr), @bitCast(_selectable));
    }

    /// ### DEPRECATED: Use `linked` instead
    ///
    pub const Linked = linked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#linked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn linked(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Linked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLinked` instead
    ///
    pub const SetLinked = setLinked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#linked-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _linked: u64 `
    ///
    pub fn setLinked(self: QAccessible__State, _linked: u64) void {
        qtc.QAccessible__State_SetLinked(@ptrCast(self.ptr), @bitCast(_linked));
    }

    /// ### DEPRECATED: Use `traversed` instead
    ///
    pub const Traversed = traversed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#traversed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn traversed(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Traversed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTraversed` instead
    ///
    pub const SetTraversed = setTraversed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#traversed-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _traversed: u64 `
    ///
    pub fn setTraversed(self: QAccessible__State, _traversed: u64) void {
        qtc.QAccessible__State_SetTraversed(@ptrCast(self.ptr), @bitCast(_traversed));
    }

    /// ### DEPRECATED: Use `multiSelectable` instead
    ///
    pub const MultiSelectable = multiSelectable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiSelectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn multiSelectable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_MultiSelectable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMultiSelectable` instead
    ///
    pub const SetMultiSelectable = setMultiSelectable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiSelectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _multiSelectable: u64 `
    ///
    pub fn setMultiSelectable(self: QAccessible__State, _multiSelectable: u64) void {
        qtc.QAccessible__State_SetMultiSelectable(@ptrCast(self.ptr), @bitCast(_multiSelectable));
    }

    /// ### DEPRECATED: Use `extSelectable` instead
    ///
    pub const ExtSelectable = extSelectable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#extSelectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn extSelectable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_ExtSelectable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setExtSelectable` instead
    ///
    pub const SetExtSelectable = setExtSelectable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#extSelectable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _extSelectable: u64 `
    ///
    pub fn setExtSelectable(self: QAccessible__State, _extSelectable: u64) void {
        qtc.QAccessible__State_SetExtSelectable(@ptrCast(self.ptr), @bitCast(_extSelectable));
    }

    /// ### DEPRECATED: Use `passwordEdit` instead
    ///
    pub const PasswordEdit = passwordEdit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#passwordEdit-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn passwordEdit(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_PasswordEdit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPasswordEdit` instead
    ///
    pub const SetPasswordEdit = setPasswordEdit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#passwordEdit-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _passwordEdit: u64 `
    ///
    pub fn setPasswordEdit(self: QAccessible__State, _passwordEdit: u64) void {
        qtc.QAccessible__State_SetPasswordEdit(@ptrCast(self.ptr), @bitCast(_passwordEdit));
    }

    /// ### DEPRECATED: Use `hasPopup` instead
    ///
    pub const HasPopup = hasPopup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hasPopup-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn hasPopup(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_HasPopup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHasPopup` instead
    ///
    pub const SetHasPopup = setHasPopup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hasPopup-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _hasPopup: u64 `
    ///
    pub fn setHasPopup(self: QAccessible__State, _hasPopup: u64) void {
        qtc.QAccessible__State_SetHasPopup(@ptrCast(self.ptr), @bitCast(_hasPopup));
    }

    /// ### DEPRECATED: Use `modal` instead
    ///
    pub const Modal = modal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#modal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn modal(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Modal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModal` instead
    ///
    pub const SetModal = setModal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#modal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _modal: u64 `
    ///
    pub fn setModal(self: QAccessible__State, _modal: u64) void {
        qtc.QAccessible__State_SetModal(@ptrCast(self.ptr), @bitCast(_modal));
    }

    /// ### DEPRECATED: Use `active` instead
    ///
    pub const Active = active;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#active-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn active(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Active(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#active-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _active: u64 `
    ///
    pub fn setActive(self: QAccessible__State, _active: u64) void {
        qtc.QAccessible__State_SetActive(@ptrCast(self.ptr), @bitCast(_active));
    }

    /// ### DEPRECATED: Use `invalid` instead
    ///
    pub const Invalid = invalid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invalid-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn invalid(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Invalid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInvalid` instead
    ///
    pub const SetInvalid = setInvalid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invalid-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _invalid: u64 `
    ///
    pub fn setInvalid(self: QAccessible__State, _invalid: u64) void {
        qtc.QAccessible__State_SetInvalid(@ptrCast(self.ptr), @bitCast(_invalid));
    }

    /// ### DEPRECATED: Use `editable` instead
    ///
    pub const Editable = editable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn editable(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_Editable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEditable` instead
    ///
    pub const SetEditable = setEditable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#editable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _editable: u64 `
    ///
    pub fn setEditable(self: QAccessible__State, _editable: u64) void {
        qtc.QAccessible__State_SetEditable(@ptrCast(self.ptr), @bitCast(_editable));
    }

    /// ### DEPRECATED: Use `multiLine` instead
    ///
    pub const MultiLine = multiLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn multiLine(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_MultiLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMultiLine` instead
    ///
    pub const SetMultiLine = setMultiLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _multiLine: u64 `
    ///
    pub fn setMultiLine(self: QAccessible__State, _multiLine: u64) void {
        qtc.QAccessible__State_SetMultiLine(@ptrCast(self.ptr), @bitCast(_multiLine));
    }

    /// ### DEPRECATED: Use `selectableText` instead
    ///
    pub const SelectableText = selectableText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectableText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn selectableText(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_SelectableText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectableText` instead
    ///
    pub const SetSelectableText = setSelectableText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectableText-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _selectableText: u64 `
    ///
    pub fn setSelectableText(self: QAccessible__State, _selectableText: u64) void {
        qtc.QAccessible__State_SetSelectableText(@ptrCast(self.ptr), @bitCast(_selectableText));
    }

    /// ### DEPRECATED: Use `supportsAutoCompletion` instead
    ///
    pub const SupportsAutoCompletion = supportsAutoCompletion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#supportsAutoCompletion-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn supportsAutoCompletion(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_SupportsAutoCompletion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSupportsAutoCompletion` instead
    ///
    pub const SetSupportsAutoCompletion = setSupportsAutoCompletion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#supportsAutoCompletion-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _supportsAutoCompletion: u64 `
    ///
    pub fn setSupportsAutoCompletion(self: QAccessible__State, _supportsAutoCompletion: u64) void {
        qtc.QAccessible__State_SetSupportsAutoCompletion(@ptrCast(self.ptr), @bitCast(_supportsAutoCompletion));
    }

    /// ### DEPRECATED: Use `searchEdit` instead
    ///
    pub const SearchEdit = searchEdit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#searchEdit-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn searchEdit(self: QAccessible__State) u64 {
        return qtc.QAccessible__State_SearchEdit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSearchEdit` instead
    ///
    pub const SetSearchEdit = setSearchEdit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#searchEdit-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__State `
    ///
    /// ` _searchEdit: u64 `
    ///
    pub fn setSearchEdit(self: QAccessible__State, _searchEdit: u64) void {
        qtc.QAccessible__State_SetSearchEdit(@ptrCast(self.ptr), @bitCast(_searchEdit));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessible__State `
    ///
    pub fn delete(self: QAccessible__State) void {
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

    /// ### DEPRECATED: Use `accessibilityActiveChanged` instead
    ///
    pub const AccessibilityActiveChanged = accessibilityActiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-activationobserver.html#accessibilityActiveChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__ActivationObserver `
    ///
    /// ` _active: bool `
    ///
    pub fn accessibilityActiveChanged(self: QAccessible__ActivationObserver, _active: bool) void {
        qtc.QAccessible__ActivationObserver_AccessibilityActiveChanged(@ptrCast(self.ptr), _active);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-activationobserver.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessible__ActivationObserver `
    ///
    /// ` param1: QAccessible__ActivationObserver `
    ///
    pub fn operatorAssign(self: QAccessible__ActivationObserver, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessible__ActivationObserver;
        qtc.QAccessible__ActivationObserver_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessible__ActivationObserver `
    ///
    pub fn delete(self: QAccessible__ActivationObserver) void {
        qtc.QAccessible__ActivationObserver_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)
pub const enums = struct {
    pub const Event = enum {
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

    pub const Role = enum {
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

    pub const Text = enum {
        pub const Name: i32 = 0;
        pub const Description: i32 = 1;
        pub const Value: i32 = 2;
        pub const Help: i32 = 3;
        pub const Accelerator: i32 = 4;
        pub const DebugDescription: i32 = 5;
        pub const Identifier: i32 = 6;
        pub const UserText: i32 = 65535;
    };

    pub const RelationFlag = enum {
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

    pub const InterfaceType = enum {
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

    pub const TextBoundaryType = enum {
        pub const CharBoundary: i32 = 0;
        pub const WordBoundary: i32 = 1;
        pub const SentenceBoundary: i32 = 2;
        pub const ParagraphBoundary: i32 = 3;
        pub const LineBoundary: i32 = 4;
        pub const NoBoundary: i32 = 5;
    };

    pub const Attribute = enum {
        pub const Custom: i32 = 0;
        pub const Level: i32 = 1;
    };

    pub const AnnouncementPoliteness = enum {
        pub const Polite: i32 = 0;
        pub const Assertive: i32 = 1;
    };
};
